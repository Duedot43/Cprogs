
#ifndef KUNITCONVERSION_EXPORT_H
#define KUNITCONVERSION_EXPORT_H

#ifdef KUNITCONVERSION_STATIC_DEFINE
#  define KUNITCONVERSION_EXPORT
#  define KUNITCONVERSION_NO_EXPORT
#else
#  ifndef KUNITCONVERSION_EXPORT
#    ifdef KF5UnitConversion_EXPORTS
        /* We are building this library */
#      define KUNITCONVERSION_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KUNITCONVERSION_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KUNITCONVERSION_NO_EXPORT
#    define KUNITCONVERSION_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KUNITCONVERSION_DEPRECATED
#  define KUNITCONVERSION_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KUNITCONVERSION_DEPRECATED_EXPORT
#  define KUNITCONVERSION_DEPRECATED_EXPORT KUNITCONVERSION_EXPORT KUNITCONVERSION_DEPRECATED
#endif

#ifndef KUNITCONVERSION_DEPRECATED_NO_EXPORT
#  define KUNITCONVERSION_DEPRECATED_NO_EXPORT KUNITCONVERSION_NO_EXPORT KUNITCONVERSION_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KUNITCONVERSION_NO_DEPRECATED
#    define KUNITCONVERSION_NO_DEPRECATED
#  endif
#endif

#endif /* KUNITCONVERSION_EXPORT_H */
