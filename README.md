# alsa-lib
only for termux android
## Advanced Linux Sound Architecture (ALSA) project

![Build alsa-lib](https://github.com/alsa-project/alsa-lib/workflows/Build%20alsa-lib/badge.svg?branch=master)

The alsa-lib is a library to interface with ALSA in the Linux kernel and
virtual devices using a plugin system.

The up-to-date reference generated from sources can be accessed here:

http://www.alsa-project.org/alsa-doc/alsa-lib/

You may give a look for more information about the ALSA project to URL
http://www.alsa-project.org.

### Submitting patches

The preferred way to submit patches is by sending them by email to the
alsa-devel mailing list. Sending mail to the list requires subscription,
subscribe here: https://mailman.alsa-project.org/mailman/listinfo/alsa-devel

Add Takashi Iwai `<tiwai@suse.de>` and/or Jaroslav Kysela `<perex@perex.cz>` to
Cc so that your patch won't be missed.

Patches are also accepted as GitHub pull requests.

## BUILD IN TERMUX ANDROID
dependets:
  1. libandroid-shmem
  2. make
  3. automake
  4. autoconf
  5. libllvm
  6. build-essential
  7. python2


### useg:
```chmod +x setup-termux.py```

```bash
$ ./setup-termux.py -h
useg: setup-termux.py [-h] [--prefix PREFIX]
                       [--target TARGET] [--host HOST] [--with-python2] [--build BUILD]

setup with python3
options:
  -h, --help       show this help message and exit
  --prefix PREFIX  your prefix path default is /data/data/com.termux/files/usr
  --target TARGET  arch your machine
  --host HOST      host llvm compile ex: arm-linux-androideabi
  --with-python2   with python2
  --build BUILD    configure for building on BUILD
```
