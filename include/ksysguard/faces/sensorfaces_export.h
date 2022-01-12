
#ifndef SENSORFACES_EXPORT_H
#define SENSORFACES_EXPORT_H

#ifdef SENSORFACES_STATIC_DEFINE
#  define SENSORFACES_EXPORT
#  define SENSORFACES_NO_EXPORT
#else
#  ifndef SENSORFACES_EXPORT
#    ifdef SensorFaces_EXPORTS
        /* We are building this library */
#      define SENSORFACES_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SENSORFACES_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SENSORFACES_NO_EXPORT
#    define SENSORFACES_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SENSORFACES_DEPRECATED
#  define SENSORFACES_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SENSORFACES_DEPRECATED_EXPORT
#  define SENSORFACES_DEPRECATED_EXPORT SENSORFACES_EXPORT SENSORFACES_DEPRECATED
#endif

#ifndef SENSORFACES_DEPRECATED_NO_EXPORT
#  define SENSORFACES_DEPRECATED_NO_EXPORT SENSORFACES_NO_EXPORT SENSORFACES_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SENSORFACES_NO_DEPRECATED
#    define SENSORFACES_NO_DEPRECATED
#  endif
#endif

#endif /* SENSORFACES_EXPORT_H */
