
#ifndef PLASMA_POTD_EXPORT_H
#define PLASMA_POTD_EXPORT_H

#ifdef PLASMA_POTD_STATIC_DEFINE
#  define PLASMA_POTD_EXPORT
#  define PLASMA_POTD_NO_EXPORT
#else
#  ifndef PLASMA_POTD_EXPORT
#    ifdef plasmapotdprovidercore_EXPORTS
        /* We are building this library */
#      define PLASMA_POTD_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PLASMA_POTD_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PLASMA_POTD_NO_EXPORT
#    define PLASMA_POTD_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PLASMA_POTD_DEPRECATED
#  define PLASMA_POTD_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PLASMA_POTD_DEPRECATED_EXPORT
#  define PLASMA_POTD_DEPRECATED_EXPORT PLASMA_POTD_EXPORT PLASMA_POTD_DEPRECATED
#endif

#ifndef PLASMA_POTD_DEPRECATED_NO_EXPORT
#  define PLASMA_POTD_DEPRECATED_NO_EXPORT PLASMA_POTD_NO_EXPORT PLASMA_POTD_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PLASMA_POTD_NO_DEPRECATED
#    define PLASMA_POTD_NO_DEPRECATED
#  endif
#endif

#endif /* PLASMA_POTD_EXPORT_H */
