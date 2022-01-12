
#ifndef KPEOPLEWIDGETS_EXPORT_H
#define KPEOPLEWIDGETS_EXPORT_H

#ifdef KPEOPLEWIDGETS_STATIC_DEFINE
#  define KPEOPLEWIDGETS_EXPORT
#  define KPEOPLEWIDGETS_NO_EXPORT
#else
#  ifndef KPEOPLEWIDGETS_EXPORT
#    ifdef KF5PeopleWidgets_EXPORTS
        /* We are building this library */
#      define KPEOPLEWIDGETS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KPEOPLEWIDGETS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KPEOPLEWIDGETS_NO_EXPORT
#    define KPEOPLEWIDGETS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KPEOPLEWIDGETS_DEPRECATED
#  define KPEOPLEWIDGETS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KPEOPLEWIDGETS_DEPRECATED_EXPORT
#  define KPEOPLEWIDGETS_DEPRECATED_EXPORT KPEOPLEWIDGETS_EXPORT KPEOPLEWIDGETS_DEPRECATED
#endif

#ifndef KPEOPLEWIDGETS_DEPRECATED_NO_EXPORT
#  define KPEOPLEWIDGETS_DEPRECATED_NO_EXPORT KPEOPLEWIDGETS_NO_EXPORT KPEOPLEWIDGETS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KPEOPLEWIDGETS_NO_DEPRECATED
#    define KPEOPLEWIDGETS_NO_DEPRECATED
#  endif
#endif

#endif /* KPEOPLEWIDGETS_EXPORT_H */
