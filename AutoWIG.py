import os
import autowig
import sys
import pickle
import itertools
import subprocess

%pdb

asg = autowig.AbstractSemanticGraph()

asg = autowig.parser(asg, [os.path.join(sys.prefix, 'include', 'statiskit', 'linalg', 'Eigen.h')],
                     ['-x', 'c++', '-std=c++11', '-ferror-limit=0', '-I' + os.path.join(sys.prefix, 'include')],
                     bootstrap=1)
with open('parsed.pkl', 'w') as filehandler:
    pickle.dump(asg, filehandler)

with open('parsed.pkl', 'r') as filehandler:
    asg = pickle.load(filehandler)
if os.path.exists('controller.py'):
    from controller_Xd import ieigen_controller
    autowig.controller['linalg'] = ieigen_controller
    autowig.controller.plugin = 'linalg'
asg = autowig.controller(asg)

with open('controlled.pkl', 'w') as filehandler:
    pickle.dump(asg, filehandler)
    
with open('controlled.pkl', 'r') as filehandler:
    asg = pickle.load(filehandler)
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

autowig.feedback.plugin = 'comment'
for i in range(11):
    curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
    s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
    out, err = s.communicate()

#