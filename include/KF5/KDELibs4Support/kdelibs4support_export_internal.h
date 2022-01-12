
#ifndef KDELIBS4SUPPORT_EXPORT_H
#define KDELIBS4SUPPORT_EXPORT_H

#ifdef KDELIBS4SUPPORT_STATIC_DEFINE
#  define KDELIBS4SUPPORT_EXPORT
#  define KDELIBS4SUPPORT_NO_EXPORT
#else
#  ifndef KDELIBS4SUPPORT_EXPORT
#    ifdef KF5KDELibs4Support_EXPORTS
        /* We are building this library */
#      define KDELIBS4SUPPORT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KDELIBS4SUPPORT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KDELIBS4SUPPORT_NO_EXPORT
#    define KDELIBS4SUPPORT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KDELIBS4SUPPORT_DEPRECATED
#  define KDELIBS4SUPPORT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KDELIBS4SUPPORT_DEPRECATED_EXPORT
#  define KDELIBS4SUPPORT_DEPRECATED_EXPORT KDELIBS4SUPPORT_EXPORT KDELIBS4SUPPORT_DEPRECATED
#endif

#ifndef KDELIBS4SUPPORT_DEPRECATED_NO_EXPORT
#  define KDELIBS4SUPPORT_DEPRECATED_NO_EXPORT KDELIBS4SUPPORT_NO_EXPORT KDELIBS4SUPPORT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KDELIBS4SUPPORT_NO_DEPRECATED
#    define KDELIBS4SUPPORT_NO_DEPRECATED
#  endif
#endif

#endif /* KDELIBS4SUPPORT_EXPORT_H */
