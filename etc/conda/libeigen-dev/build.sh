set -ve

if [[ ! -d ${PREFIX}/include ]]
then
    mkdir ${PREFIX}/include
fi

rm Eigen/CMakeLists.txt
mv Eigen ${PREFIX}/include/Eigen
rm unsupported/Eigen/CMakeLists.txt
mv unsupported/Eigen ${PREFIX}/include/Eigen/Unsupported

set +ve