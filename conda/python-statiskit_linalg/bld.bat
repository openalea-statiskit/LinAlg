echo ON

scons py --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT% --arch=%ARCH% --test-level=none
if errorlevel 1 exit 1

echo OFF