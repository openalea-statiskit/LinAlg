import os
import autowig
import sys

asg = autowig.AbstractSemanticGraph()

asg = autowig.parser(asg, [os.path.join(sys.prefix, 'include', 'ieigen', 'base.h')],
                     ['-x', 'c++', '-std=c++11', '-ferror-limit=0', '-I' + os.path.join(sys.prefix, 'include')],
                     bootstrap=1)

asg = autowig.controller(asg)

autowig.generator.plugin = 'boost_python_internal'
wrappers = autowig.generator(asg, module='src/py/_ieigen.cpp',
	                              decorator='src/py/ieigen/_ieigen.py',
	                              closure=True)
wrappers.write()

s = subprocess.Popen(['scons', 'py', '-k'],
                             stdout=subprocess.PIPE, stderr=subprocess.PIPE)
prev, curr = s.communicate()

while not prev == curr:
	prev = curr
	code = autowig.feedback(curr, '.', asg)
	if code:
		exec(code, locals())