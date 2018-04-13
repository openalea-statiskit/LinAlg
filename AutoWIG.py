import os
import autowig
import pickle
import subprocess
import multiprocessing
import shutil

jobs = str(max(multiprocessing.cpu_count()-1, 1))

asgs = dict()
try:
    for filepath in os.listdir(os.path.join(autowig.__path__[0], '..', 'scons_tools', 'site_autowig', 'ASG')):
        with open(os.path.join(autowig.__path__[0], '..', 'scons_tools', 'site_autowig', 'ASG', filepath), 'rb') as filehandler:
            asgs[filepath] = pickle.load(filehandler)
except:
    pass

subprocess.call(['scons', 'autowig', '-j' + jobs, '-c'])
subprocess.call(['scons', '-j' + jobs, '-c'])

variant_dir = 'build/src'
src_dir = 'src'

asgs = [asg for filepath, asg in asgs.items() if not os.path.exists(filepath)]
for asg in asgs:
    for bpm in asg.boost_python_modules():
        if bpm.globalname.startswith(os.path.abspath('.')):
            bpm.remove()
            bpd = bpm.decorator
            if bpd:
                bpd.remove()
            bpm.header.remove()
            for bpe in bpm.exports:
                bpe.remove()

subprocess.call(['scons', '-j' + jobs, '-k', '--diagnostics-color=never'])

s = subprocess.Popen(['scons', 'autowig', '-j' + jobs, '-k', '--diagnostics-color=never'], stderr=subprocess.PIPE)
out, err = s.communicate()

with open(os.path.join(autowig.__path__[0], '..', 'scons_tools', 'site_autowig', 'ASG', 'statiskit_linalg.pkl'), 'rb') as filehandler:
    asg = pickle.load(filehandler)

os.environ['AutoWIG'] = 'true'

autowig.feedback.plugin = 'edit'
changed = True
s = subprocess.Popen(['scons', '-j' + jobs, '-k', '--diagnostics-color=never'], stderr=subprocess.PIPE)
out, curr = s.communicate()
s = subprocess.Popen(['scons', '-j1', '-k', '--diagnostics-color=never'], stderr=subprocess.PIPE)
prev = ''
out, curr = s.communicate()
curr = curr.decode()
with open('controller.py', 'w') as filehandler:
    while changed and not prev == curr:
        prev = curr
        changed = False
        code = autowig.feedback(curr, '.', asg, variant_dir=variant_dir,
                                                src_dir=src_dir)
        if code.strip():
            changed = True
            filehandler.write(code)
            print(code)
            input("Press Enter to continue...")
            exec(code, locals())
            for bpm in asg.boost_python_modules():
                if bpm.globalname.startswith(os.path.abspath('.')):
                    bpm.write()
        s = subprocess.Popen(['scons', '-j' + jobs, '-k', '--diagnostics-color=never'], stderr=subprocess.PIPE)
        out, curr = s.communicate()
        s = subprocess.Popen(['scons', '-j1', '-k', '--diagnostics-color=never'], stderr=subprocess.PIPE)
        out, curr = s.communicate()
        curr = curr.decode()
    


# autowig.feedback.plugin = 'comment'
# prev = ''
# while not prev == curr:
# if not prev == curr:
#     prev = curr
#     autowig.feedback(curr, '.', asg, variant_dir=variant_dir,
#                                      src_dir=src_dir)
#     s = subprocess.Popen(['scons', '-j1', '-k', '--diagnostics-color=never'], stderr=subprocess.PIPE)
#     out, curr = s.communicate()
# else:
#     print("done")
# os.environ['AutoWIG'] = 'false'

# subprocess.call(['scons', '-j' + jobs])
