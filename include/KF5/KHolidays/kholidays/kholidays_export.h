
#ifndef KHOLIDAYS_EXPORT_H
#define KHOLIDAYS_EXPORT_H

#ifdef KHOLIDAYS_STATIC_DEFINE
#  define KHOLIDAYS_EXPORT
#  define KHOLIDAYS_NO_EXPORT
#else
#  ifndef KHOLIDAYS_EXPORT
#    ifdef KF5Holidays_EXPORTS
        /* We are building this library */
#      define KHOLIDAYS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KHOLIDAYS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KHOLIDAYS_NO_EXPORT
#    define KHOLIDAYS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KHOLIDAYS_DEPRECATED
#  define KHOLIDAYS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KHOLIDAYS_DEPRECATED_EXPORT
#  define KHOLIDAYS_DEPRECATED_EXPORT KHOLIDAYS_EXPORT KHOLIDAYS_DEPRECATED
#endif

#ifndef KHOLIDAYS_DEPRECATED_NO_EXPORT
#  define KHOLIDAYS_DEPRECATED_NO_EXPORT KHOLIDAYS_NO_EXPORT KHOLIDAYS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KHOLIDAYS_NO_DEPRECATED
#    define KHOLIDAYS_NO_DEPRECATED
#  endif
#endif

#endif /* KHOLIDAYS_EXPORT_H */
