
#ifndef KSCREEN_EXPORT_H
#define KSCREEN_EXPORT_H

#ifdef KSCREEN_STATIC_DEFINE
#  define KSCREEN_EXPORT
#  define KSCREEN_NO_EXPORT
#else
#  ifndef KSCREEN_EXPORT
#    ifdef KF5Screen_EXPORTS
        /* We are building this library */
#      define KSCREEN_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KSCREEN_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KSCREEN_NO_EXPORT
#    define KSCREEN_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KSCREEN_DEPRECATED
#  define KSCREEN_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KSCREEN_DEPRECATED_EXPORT
#  define KSCREEN_DEPRECATED_EXPORT KSCREEN_EXPORT KSCREEN_DEPRECATED
#endif

#ifndef KSCREEN_DEPRECATED_NO_EXPORT
#  define KSCREEN_DEPRECATED_NO_EXPORT KSCREEN_NO_EXPORT KSCREEN_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KSCREEN_NO_DEPRECATED
#    define KSCREEN_NO_DEPRECATED
#  endif
#endif

#endif /* KSCREEN_EXPORT_H */
