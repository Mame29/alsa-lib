/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.ac by autoheader.  */

/* Directory with aload* device files */
#define ALOAD_DEVICE_DIRECTORY "/dev/"

/* directory containing ALSA configuration database */
#define ALSA_CONFIG_DIR "/data/data/com.termux/files/usr/share/alsa"

/* Enable assert at error message handler */
/* #undef ALSA_DEBUG_ASSERT */

/* Directory with ALSA device files */
#define ALSA_DEVICE_DIRECTORY "/dev/snd/"

/* directory containing pkgconfig files */
#define ALSA_PKGCONF_DIR "/data/data/com.termux/files/usr/lib/pkgconfig"

/* directory containing ALSA add-on modules */
#define ALSA_PLUGIN_DIR "/data/data/com.termux/files/usr/lib/alsa-lib"

/* Build hwdep component */
#define BUILD_HWDEP "1"

/* Build mixer component */
#define BUILD_MIXER "1"

/* Build PCM component */
#define BUILD_PCM "1"

/* Build PCM adpcm plugin */
#define BUILD_PCM_PLUGIN_ADPCM "1"

/* Build PCM alaw plugin */
#define BUILD_PCM_PLUGIN_ALAW "1"

/* Build PCM lfloat plugin */
#define BUILD_PCM_PLUGIN_LFLOAT "1"

/* Build PCM mmap-emul plugin */
#define BUILD_PCM_PLUGIN_MMAP_EMUL "1"

/* Build PCM mulaw plugin */
#define BUILD_PCM_PLUGIN_MULAW "1"

/* Build PCM rate plugin */
#define BUILD_PCM_PLUGIN_RATE "1"

/* Build PCM route plugin */
#define BUILD_PCM_PLUGIN_ROUTE "1"

/* Build raw MIDI component */
#define BUILD_RAWMIDI "1"

/* Build sequencer component */
#define BUILD_SEQ "1"

/* Build DSP Topology component */
#define BUILD_TOPOLOGY "1"

/* Build UCM component */
#define BUILD_UCM "1"

/* Have clock gettime */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Have libdl */
#define HAVE_LIBDL 1

/* Have libpthread */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `resmgr' library (-lresmgr). */
/* #undef HAVE_LIBRESMGR */

/* Have librt */
#define HAVE_LIBRT 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* MMX technology is enabled */
/* #undef HAVE_MMX */

/* Define if your pthreads implementation have PTHREAD_MUTEX_RECURSIVE */
#define HAVE_PTHREAD_MUTEX_RECURSIVE /**/

/* Avoid calculation in float */
/* #undef HAVE_SOFT_FLOAT */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/endian.h> header file. */
#define HAVE_SYS_ENDIAN_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
/* #undef HAVE_SYS_SHM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `uselocale' function. */
#define HAVE_USELOCALE 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Enable use of wordexp */
/* #undef HAVE_WORDEXP */

/* Define to 1 if compiler supports __thread */
#define HAVE___THREAD 1

/* Lockless dmix as default */
/* #undef LOCKLESS_DMIX_DEFAULT */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* No assert debug */
/* #undef NDEBUG */

/* Name of package */
#define PACKAGE "alsa-lib"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "alsa-lib"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "alsa-lib 1.2.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "alsa-lib"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.2.5"

/* Max number of cards */
#define SND_MAX_CARDS 32

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Support /dev/aload* access for auto-loading */
#define SUPPORT_ALOAD "1"

/* Support resmgr with alsa-lib */
/* #undef SUPPORT_RESMGR */

/* Disable thread-safe API functions */
#define THREAD_SAFE_API "1"

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. This
   macro is obsolete. */
#define TIME_WITH_SYS_TIME 1

/* directory to put tmp socket files */
#define TMPDIR "/tmp"

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* sound library version string */
#define VERSION "1.2.5"

/* compiled with versioned symbols */
#define VERSIONED_SYMBOLS /**/

/* Toolchain Symbol Prefix */
#define __SYMBOL_PREFIX ""

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif
