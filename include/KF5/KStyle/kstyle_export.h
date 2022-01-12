
#ifndef KSTYLE_EXPORT_H
#define KSTYLE_EXPORT_H

#ifdef KSTYLE_STATIC_DEFINE
#  define KSTYLE_EXPORT
#  define KSTYLE_NO_EXPORT
#else
#  ifndef KSTYLE_EXPORT
#    ifdef KF5Style_EXPORTS
        /* We are building this library */
#      define KSTYLE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KSTYLE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KSTYLE_NO_EXPORT
#    define KSTYLE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KSTYLE_DEPRECATED
#  define KSTYLE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KSTYLE_DEPRECATED_EXPORT
#  define KSTYLE_DEPRECATED_EXPORT KSTYLE_EXPORT KSTYLE_DEPRECATED
#endif

#ifndef KSTYLE_DEPRECATED_NO_EXPORT
#  define KSTYLE_DEPRECATED_NO_EXPORT KSTYLE_NO_EXPORT KSTYLE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KSTYLE_NO_DEPRECATED
#    define KSTYLE_NO_DEPRECATED
#  endif
#endif

#endif /* KSTYLE_EXPORT_H */
