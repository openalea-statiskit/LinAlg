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
with open('parsed.pkl', 'w') as filehandler:
	pickle.dump(asg, filehandler)

asg = autowig.controller(asg)
with open('controlled.pkl', 'w') as filehandler:
	pickle.dump(asg, filehandler)

with open('controlled.pkl', 'r') as filehandler:
	asg = pickle.load(filehandler)
# autowig.generator.plugin = 'boost_python_internal'
# wrappers = autowig.generator(asg, module='src/py/_ieigen.cpp',
# 	                              decorator='src/py/ieigen/_ieigen.py',
# 	                              closure=False)
autowig.generator.plugin = 'boost_python'
typedefs = asg['::ieigen'].typedefs()
nodes = [typedef.qualified_type.unqualified_type for typedef in typedefs]
nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + typedefs
wrappers = autowig.generator(asg, nodes, module='src/py/_ieigen.cpp',
                                         decorator='src/py/ieigen/_ieigen.py',
                                         closure=False)
with open('generated.pkl', 'w') as filehandler:
	pickle.dump(asg, filehandler)

wrappers.write()
with open('writed.pkl', 'w') as filehandler:
	pickle.dump(asg, filehandler)

s = subprocess.Popen(['scons', 'py', '-j7', '-k'],
                     stdout=subprocess.PIPE, stderr=subprocess.PIPE)
prev, curr = s.communicate()

codes = []
while not prev == curr:
	prev = curr
 	codes.append(autowig.feedback(curr, '.', asg, variantdir='build'))
 	if code:
 		exec(codes[-1], locals())
 	s = subprocess.Popen(['scons', 'py', '-j7', '-k'],
                     stdout=subprocess.PIPE, stderr=subprocess.PIPE)
	temp, curr = s.communicate()