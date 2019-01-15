set -ve

ls 

rm Eigen/CMakeLists.txt
mv Eigen $PREFIX/include/Eigen
rm unsupported/Eigen/CMakeLists.txt
mv unsupported/Eigen $PREFIX/include/Eigen/Unsupported

set +ve