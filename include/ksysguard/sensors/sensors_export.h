
#ifndef SENSORS_EXPORT_H
#define SENSORS_EXPORT_H

#ifdef SENSORS_STATIC_DEFINE
#  define SENSORS_EXPORT
#  define SENSORS_NO_EXPORT
#else
#  ifndef SENSORS_EXPORT
#    ifdef Sensors_EXPORTS
        /* We are building this library */
#      define SENSORS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SENSORS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SENSORS_NO_EXPORT
#    define SENSORS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SENSORS_DEPRECATED
#  define SENSORS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SENSORS_DEPRECATED_EXPORT
#  define SENSORS_DEPRECATED_EXPORT SENSORS_EXPORT SENSORS_DEPRECATED
#endif

#ifndef SENSORS_DEPRECATED_NO_EXPORT
#  define SENSORS_DEPRECATED_NO_EXPORT SENSORS_NO_EXPORT SENSORS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SENSORS_NO_DEPRECATED
#    define SENSORS_NO_DEPRECATED
#  endif
#endif

#endif /* SENSORS_EXPORT_H */
