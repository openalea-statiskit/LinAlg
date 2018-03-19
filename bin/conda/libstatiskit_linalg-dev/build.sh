set -ve

scons cpp-dev --prefix=$PREFIX -j$CPU_COUNT --autowig-no-wrappers

set +ve