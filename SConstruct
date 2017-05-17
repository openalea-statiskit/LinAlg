# -*-python-*-

import os

AddOption('--eigen-static-assert',
          dest='eigen-static-assert',
          type='choice',
          choices=['no', 'yes'],
          nargs=1,
          action='store',
          help='installation prefix',
          default='yes' if os.environ.get('AutWIG', 'false') == 'true' else 'no')

env = Environment(tools = ['toolchain'])
env['EIGEN_STATIC_ASSERT'] = GetOption('eigen-static-assert')
if env['EIGEN_STATIC_ASSERT'] == 'no':
    env.AppendUnique(CPPDEFINES=['EIGEN_NO_STATIC_ASSERT'])

VariantDir(os.path.join('build', 'src'), 'src')
VariantDir(os.path.join('build', 'test'), 'test')

SConscript(os.path.join('build', 'src', 'cpp', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'src', 'py', 'wrapper', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'test', 'SConscript'), exports="env")
SConscript(os.path.join('conda', 'SConscript'), exports="env")

Default("install")