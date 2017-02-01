import os
import autowig
import sys
import pickle
import itertools
import subprocess

asg = autowig.AbstractSemanticGraph()

asg = autowig.parser(asg, [os.path.join(sys.prefix, 'include', 'statiskit', 'linalg', 'Eigen.h')],
                     ['-x', 'c++', '-std=c++11', '-ferror-limit=0', '-I' + os.path.join(sys.prefix, 'include')],
                     bootstrap=1)

asg = autowig.controller(asg)
for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >',
            'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >',
            'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >']:
    for mtd in asg[cls].methods(access='public'):
        if mtd.localname == 'trace':
            mtd.boost_python_export = False
for fct in asg.functions():
    if fct.localname in ['_check_template_params', 'operator()', 'operator[]']:
        fct.boost_python_export = False
        
autowig.generator.plugin = 'boost_python'
nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::linalg'].typedefs()]
nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::linalg'].declarations()
wrappers = autowig.generator(asg, nodes, module='src/py/_linalg.cpp',
                                         decorator='src/py/statiskit/linalg/_linalg.py',
                                         closure=False)
wrappers.write()

s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
out, err = s.communicate()

autowig.feedback.plugin = 'edit'
codes = []
while not codes or codes[-1].strip():
    codes.append(autowig.feedback(err, '.', asg, variant_dir='build',
                                                  src_dir='src'))
    if codes[-1]:
        exec(codes[-1], locals())
        wrappers.write()
        s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
        out, err = s.communicate()
    if len(codes) > 2:
        if codes[-1] == codes[-2]:
            break

autowig.feedback.plugin = 'comment'
for i in range(11):
    curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
    s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
    out, err = s.communicate()

with open('ASG.pkl', 'w') as filehandler:
    pickle.dump(asg, filehandler)