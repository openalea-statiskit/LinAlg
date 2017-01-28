# -*-python-*-

import os
from SCons.Errors import EnvironmentError


AddOption('--eigen-static-assert',
          dest='eigen-static-assert',
          type='choice',
          choices=['no', 'yes'],
          nargs=1,
          action='store',
          help='installation prefix',
          default='no')

env = Environment(tools = ['toolchain'])
env['EIGEN_STATIC_ASSERT'] = GetOption('eigen-static-assert')
if env['EIGEN_STATIC_ASSERT'] == 'no':
    env.AppendUnique(CPPDEFINES=['EIGEN_NO_STATIC_ASSERT'])

SOLVER = ['partialPivLu',
          'fullPivLu',
          'householderQr',
          'colPivHouseholderQr',
          'fullPivHouseholderQr',
          'llt',
          'ldlt',
          'jacobiSvd']

OBJ = ['Matrix', 'Vector', 'RowVector']

header = """\
#ifndef STATISKIT_LINALG_EIGEN_H
#define STATISKIT_LINALG_EIGEN_H

#include <stdexcept>
#undef eigen_assert
#define eigen_assert(x) \
  if (!(x)) { throw (std::runtime_error("Eigen")); }

#include <eigen3/Eigen/Dense>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
    #ifdef LIBSTATISKIT_LINALG
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllexport))
            #define STATISKIT_LINALG_IMP
        #else
            #define STATISKIT_LINALG_API __declspec(dllexport)
            #define STATISKIT_LINALG_IMP
        #endif
    #else
        #ifdef __GNUC__
            #define STATISKIT_LINALG_API __attribute__ ((dllimport))
            #define STATISKIT_LINALG_IMP extern
        #else
            #define STATISKIT_LINALG_API __declspec(dllimport)
            #define STATISKIT_LINALG_IMP extern
        #endif
    #endif
#else
    #if __GNUC__ >= 4
        #define STATISKIT_LINALG_API __attribute__ ((visibility ("default")))
    #else
        #define STATISKIT_LINALG_API
    #endif
    #ifdef LIBSTATISKIT_LINALG
        #define STATISKIT_LINALG_IMP
    #else
        #define STATISKIT_LINALG_IMP extern
    #endif
#endif

namespace statiskit
{
    namespace linalg
    {
"""

with open('src/cpp/Eigen.h', 'w') as filehandler:
    filehandler.write(header)
    filehandler.write('\t\tenum solver_type {\n')
    for solver in SOLVER:
        filehandler.write('\t\t\t' + solver + ',\n')
    filehandler.write('\t\t};\n\n')
    for obj in OBJ:
        typedef = ['double']
        coef = 2 if obj == 'Matrix' else 1
        if obj == 'RowVector':
            typedef.extend(['1'])
        typedef.extend(['Eigen::Dynamic'] * coef)
        if obj == 'Vector':
            typedef.extend(['1'])
        filehandler.write('\t\ttypedef Eigen::Matrix< ' + ', '.join(typedef) + ' > ' + obj + 'Xd;\n')
        if obj == 'Matrix':
            for solver in SOLVER:
                if solver in ['llt', 'ldlt']:
                    solver = solver.upper()
                else:
                    solver = solver[0].upper() + solver[1:]
                    if solver.endswith('Svd'):
                        solver = solver[:-3] + 'SVD'
                    else:
                        solver = solver[:-1] + solver[-1].upper()
                #filehandler.write('\tSTATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::' + solver + '< Eigen::Matrix< ' + ', '.join(typedef) + ' > >;\n')
                filehandler.write('\t\ttypedef Eigen::' + solver + '< Eigen::Matrix< ' + ', '.join(typedef) + ' > > ' + solver + obj + 'Xd;\n')
        filehandler.write('\n')
    filehandler.write('\t\tSTATISKIT_LINALG_API VectorXd solve(const MatrixXd& A, const VectorXd& b, const solver_type& solver);\n')
    filehandler.write('\t\tSTATISKIT_LINALG_API MatrixXd solve(const MatrixXd& A, const MatrixXd& b, const solver_type& solver);\n')
    filehandler.write('\t}\n}\n\n#ifdef EIGEN_NO_STATIC_ASSERT\n\n')
    for obj in OBJ:
        typedef = ['double']
        coef = 2 if obj == 'Matrix' else 1
        if obj == 'RowVector':
            typedef.extend(['1'])
        typedef.extend(['Eigen::Dynamic'] * coef)
        if obj == 'Vector':
            typedef.extend(['1'])
        filehandler.write('STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::Matrix< ' + ', '.join(typedef) + ' >;\n')
        if obj == 'Matrix':
            for solver in SOLVER:
                if solver in ['llt', 'ldlt']:
                    solver = solver.upper()
                else:
                    solver = solver[0].upper() + solver[1:]
                    if solver.endswith('Svd'):
                        solver = solver[:-3] + 'SVD'
                    else:
                        solver = solver[:-1] + solver[-1].upper()        
                filehandler.write('STATISKIT_LINALG_IMP template class STATISKIT_LINALG_API Eigen::' + solver + '< Eigen::Matrix< ' + ', '.join(typedef) + ' > >;\n')
    filehandler.write('\n\n#endif\n#endif')

with open('src/cpp/Eigen.cpp', 'w') as filehandler:
    filehandler.write('#include "Eigen.h"\n\n')
    filehandler.write('namespace statiskit \n{')
    filehandler.write('\tnamespace linalg \n{\n')
    for obj in ['Matrix', 'Vector']:
        filehandler.write('\n\t\t' + obj + 'Xd solve(const MatrixXd& A, const ' + obj + 'Xd& b, const solver_type& solver)\n')
        filehandler.write('\t\t{\n')
        filehandler.write('\t\t\t' + obj + 'Xd x;\n')
        filehandler.write('\t\t\tswitch(solver)\n\t\t{\n')
        for solver in SOLVER:
            filehandler.write('\t\t\t\tcase ' + solver + ':\n')
            filehandler.write('\t\t\t\t\tx = A.' + solver + '().solve(b);\n')
            filehandler.write('\t\t\t\t\tbreak;\n')
        filehandler.write('\t\t\t}\n\t\t\treturn x;\n')
        filehandler.write('\t\t}\n')
    filehandler.write('\t}\n}')

VariantDir('build', 'src')
try:
  SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
except EnvironmentError:
  pass
except Exception:
    raise
try:
  SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")
except EnvironmentError:
  pass
except Exception:
    raise

Default("install")
