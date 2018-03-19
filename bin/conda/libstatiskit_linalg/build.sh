set -ve

scons cpp-lib --prefix=$PREFIX -j$CPU_COUNT

set +ve