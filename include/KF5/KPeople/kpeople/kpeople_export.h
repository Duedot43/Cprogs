
#ifndef KPEOPLE_EXPORT_H
#define KPEOPLE_EXPORT_H

#ifdef KPEOPLE_STATIC_DEFINE
#  define KPEOPLE_EXPORT
#  define KPEOPLE_NO_EXPORT
#else
#  ifndef KPEOPLE_EXPORT
#    ifdef KF5People_EXPORTS
        /* We are building this library */
#      define KPEOPLE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KPEOPLE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KPEOPLE_NO_EXPORT
#    define KPEOPLE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KPEOPLE_DEPRECATED
#  define KPEOPLE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KPEOPLE_DEPRECATED_EXPORT
#  define KPEOPLE_DEPRECATED_EXPORT KPEOPLE_EXPORT KPEOPLE_DEPRECATED
#endif

#ifndef KPEOPLE_DEPRECATED_NO_EXPORT
#  define KPEOPLE_DEPRECATED_NO_EXPORT KPEOPLE_NO_EXPORT KPEOPLE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KPEOPLE_NO_DEPRECATED
#    define KPEOPLE_NO_DEPRECATED
#  endif
#endif

#endif /* KPEOPLE_EXPORT_H */
