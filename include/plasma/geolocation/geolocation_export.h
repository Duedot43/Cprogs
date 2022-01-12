
#ifndef GEOLOCATION_EXPORT_H
#define GEOLOCATION_EXPORT_H

#ifdef GEOLOCATION_STATIC_DEFINE
#  define GEOLOCATION_EXPORT
#  define GEOLOCATION_NO_EXPORT
#else
#  ifndef GEOLOCATION_EXPORT
#    ifdef plasma_engine_geolocation_EXPORTS
        /* We are building this library */
#      define GEOLOCATION_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define GEOLOCATION_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef GEOLOCATION_NO_EXPORT
#    define GEOLOCATION_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef GEOLOCATION_DEPRECATED
#  define GEOLOCATION_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef GEOLOCATION_DEPRECATED_EXPORT
#  define GEOLOCATION_DEPRECATED_EXPORT GEOLOCATION_EXPORT GEOLOCATION_DEPRECATED
#endif

#ifndef GEOLOCATION_DEPRECATED_NO_EXPORT
#  define GEOLOCATION_DEPRECATED_NO_EXPORT GEOLOCATION_NO_EXPORT GEOLOCATION_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GEOLOCATION_NO_DEPRECATED
#    define GEOLOCATION_NO_DEPRECATED
#  endif
#endif

#endif /* GEOLOCATION_EXPORT_H */
