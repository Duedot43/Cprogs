
#ifndef KPEOPLEBACKEND_EXPORT_H
#define KPEOPLEBACKEND_EXPORT_H

#ifdef KPEOPLEBACKEND_STATIC_DEFINE
#  define KPEOPLEBACKEND_EXPORT
#  define KPEOPLEBACKEND_NO_EXPORT
#else
#  ifndef KPEOPLEBACKEND_EXPORT
#    ifdef KF5PeopleBackend_EXPORTS
        /* We are building this library */
#      define KPEOPLEBACKEND_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KPEOPLEBACKEND_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KPEOPLEBACKEND_NO_EXPORT
#    define KPEOPLEBACKEND_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KPEOPLEBACKEND_DEPRECATED
#  define KPEOPLEBACKEND_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KPEOPLEBACKEND_DEPRECATED_EXPORT
#  define KPEOPLEBACKEND_DEPRECATED_EXPORT KPEOPLEBACKEND_EXPORT KPEOPLEBACKEND_DEPRECATED
#endif

#ifndef KPEOPLEBACKEND_DEPRECATED_NO_EXPORT
#  define KPEOPLEBACKEND_DEPRECATED_NO_EXPORT KPEOPLEBACKEND_NO_EXPORT KPEOPLEBACKEND_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KPEOPLEBACKEND_NO_DEPRECATED
#    define KPEOPLEBACKEND_NO_DEPRECATED
#  endif
#endif

#endif /* KPEOPLEBACKEND_EXPORT_H */
