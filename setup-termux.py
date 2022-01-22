#!/data/data/com.termux/files/usr/bin/python3
import os, sys
from os.path import join
import subprocess as sp
import argparse
import platform

parser = argparse.ArgumentParser(description='setup with python3')
parser.add_argument('--prefix', dest='prefix', default=sys.prefix, help=f'your prefix path default is {sys.prefix}')
parser.add_argument('--target', dest='target', help='arch your machine')
parser.add_argument('--host', dest='host', help='host llvm compile ex: arm-linux-androideabi')
parser.add_argument('--with-python2', dest='python2', help='with python2', action='store_true')
parser.add_argument('--build', dest='build', help='configure for building on BUILD')

args = parser.parse_args()


home = os.environ.get('HOME')
build = args.build
prefix = args.prefix
target = args.target
host = args.host
arch = platform.machine()
ar = ''
status, res = sp.getstatusoutput('uname -o')

if status == 0:
  oprasi = res
else:
  oprasi = sys.platform

if build:
  ar += '--build='+build

cflags = os.environ.get('CFLAGS', '')
ldflags = os.environ.get('LDFLAGS', '')

def cfl(ab):
  global cflags
  if cflags:
      cflags += ' '
  cflags += ab

def ldf(ab):
  global ldflags
  if ldflags:
    ldflags += ' '
  ldflags += ab

def conf(anu, pref=None, targ=None, ht=None, *argst):
  jk = []
  bh = ''
  jk.append(anu)
  if pref:
    jk.append(f'--prefix={pref}')

  if targ:
    jk.append(f'--target={targ}')

  if ht:
    jk.append(f'--host={ht}')

  for i in jk:
    if len(bh) > 0:
      bh += ' '
    bh += i

  if argst:
    for i in argst:
      if len(bh) > 0:
        bh += ' '
      bh += i

  try:
    #os.system(bh)
    sp.check_call(bh.split())
  except KeyboardInterrupt:
    sys.exit('\nexit')
  except Exception as e:
    print('\n')
    sys.exit(e)

cfl('-O3 -Wall -W -fPIC -DPIC -Wsign-compare -Wunreachable-code -Wno-unused-result')
ldf('-shared')

if args.python2:
  if ar:
    ar += ' '
  ar += '--enable-python2'
  try:
    ar += ' --with-pythonlibs='+sp.check_output(['pkg-config', '--libs', 'python2']).decode('utf-8').split()[1]
    ar += ' --with-pythonincludes='+sp.check_output(['pkg-config', '--cflags', 'python2']).decode('utf-8').removesuffix('\n')
  except Exception as e:
    sys.exit(e)

if oprasi == 'Android':
  ndk_lib = []
  if os.path.exists(join(home, '.termux')) or prefix.find('termux') != -1:

    if not os.path.exists(join(prefix, 'lib/libandroid-shmem.so')):
      os.system('pkg install libandroid-shmem')

    os.environ['ac_cv_header_sys_shm_h'] = 'no'
    cfl('-Deaccess=access')
    cfl('-I'+join(prefix, 'include'))
    cfl('-D_REENTRANT -DTERMUX_SHMEM_STUBS -DTERMUX_SEMOPS_STUBS')
    ldf('-L'+join(prefix, 'lib'))
    ldf('-lpulse')
    ldf('-landroid-shmem')
    print('termux detected')
    print('checking ndk-multilib')
    type_arch = ['arm-linux-androideabi', 'aarch64-linux-android']
    for anu in type_arch:
      if os.path.isdir(join(prefix, anu)):
        ndk_lib.append(join(prefix, anu))

    if ndk_lib:
      print('ndk-multilib detected')
    else:
      os.system('pkg install ndk-multilib -y')
      for anu in type_arch:
        if os.path.isdir(join(prefix, anu)):
          ndk_lib.append(join(prefix, anu))

    if arch.startswith('arm'):
      cfl('-mfpu=neon')
      ldf('-L'+ndk_lib[0]+'/lib')
      host = type_arch[0]
    else:
      ldf('-L'+ndk_lib[1]+'/lib')
      host = type_arch[1]

    os.environ['CFLAGS'] = cflags
    os.environ['LDFLAGS'] = ldflags

    if os.path.exists('src/.libs'):
      conf('make clean')

    if os.path.exists('configure'):
      conf('./configure', prefix, target, host, ar)
      conf('make')
    else:
      conf('touch ltconfig')
      conf('libtoolize --force --copy --automake')
      conf('aclocal $ACLOCAL_FLAGS')
      conf('autoheader')
      conf('automake --foreign --copy --add-missing')
      conf('touch depcomp')
      conf('autoconf')
      conf('./configure', prefix, target, host, ar)
      conf('make')
else:
  sys.exit('build in termux only')
