import os
import autowig
import sys
import pickle
import itertools
import subprocess

asg = autowig.AbstractSemanticGraph()

asg = autowig.parser(asg, [os.path.join(sys.prefix, 'include', 'ieigen', 'base.h')],
                     ['-x', 'c++', '-std=c++11', '-ferror-limit=0', '-I' + os.path.join(sys.prefix, 'include')],
                     bootstrap=1)

# with open('parsed.pkl', 'w') as filehandler:
#     pickle.dump(asg, filehandler)

if os.path.exists('controller.py'):
    from controller import ieigen_controller
    autowig.controller['ieigen'] = ieigen_controller
    autowig.controller.plugin = 'ieigen'
asg = autowig.controller(asg)

autowig.generator.plugin = 'boost_python'
nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::ieigen'].typedefs()]
nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::ieigen'].declarations()
wrappers = autowig.generator(asg, nodes, module='src/py/_ieigen.cpp',
                                         decorator='src/py/ieigen/_ieigen.py',
                                         closure=False)
wrappers.write()

s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()

autowig.feedback.plugin = 'edit'
codes = []
while not codes or codes[-1].strip():
    codes.append(autowig.feedback(err, '.', asg, variant_dir='build',
                                                  src_dir='src'))
    if codes[-1]:
        exec(codes[-1], locals())
        wrappers.write()
        s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
        out, err = s.communicate()

autowig.feedback.plugin = 'comment'
prev = False
curr = True
while not prev == curr:
    prev = curr
    curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
    if not curr == prev:
        s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
        out, err = s.communicate()

# import pdb
pdb.run("autowig.feedback(curr, '.', asg, variant_dir='build', src_dir='src')")

from autowig._feedback import parse_errors

def comment_feedback(err, directory, asg, **kwargs):
    wrappers = parse_errors(err, directory, asg, **kwargs)
    for wrapper, rows in wrappers.iteritems():
        with open(wrapper, 'r') as filehandler:
            content = filehandler.readlines()
        for row in rows:
            if row < len(content):
                content[row - 1] = '// TODO ' + content[row - 1]
            with open(wrapper, 'w') as filehandler:
                filehandler.writelines(content)
    return hash(frozenset(wrappers))

comment_feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()
comment_feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()
comment_feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()
comment_feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()
comment_feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()

curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                       src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()
prev = curr
curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                       src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()
prev = curr
curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                       src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()
curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                       src_dir='src')
s = subprocess.Popen(['scons', 'py', '-j7', '-k'], stderr=subprocess.PIPE)
out, err = s.communicate()