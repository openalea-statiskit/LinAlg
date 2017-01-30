set -ve

scons py --prefix=$PREFIX -j$CPU_COUNT
python setup.py install

set +ve