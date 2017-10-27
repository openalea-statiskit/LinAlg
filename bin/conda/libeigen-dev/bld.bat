echo ON

del Eigen\CMakeLists.txt
if errorlevel 1 exit 1
move Eigen %LIBRARY_PREFIX%\include\Eigen
if errorlevel 1 exit 1
del unsupported\Eigen\CMakeLists.txt
if errorlevel 1 exit 1
move unsupported\Eigen %LIBRARY_PREFIX%\include\Eigen\Unsupported
if errorlevel 1 exit 1

echo OFF