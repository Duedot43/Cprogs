
#ifndef ION_EXPORT_H
#define ION_EXPORT_H

#ifdef ION_STATIC_DEFINE
#  define ION_EXPORT
#  define ION_NO_EXPORT
#else
#  ifndef ION_EXPORT
#    ifdef weather_ion_EXPORTS
        /* We are building this library */
#      define ION_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define ION_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef ION_NO_EXPORT
#    define ION_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef ION_DEPRECATED
#  define ION_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ION_DEPRECATED_EXPORT
#  define ION_DEPRECATED_EXPORT ION_EXPORT ION_DEPRECATED
#endif

#ifndef ION_DEPRECATED_NO_EXPORT
#  define ION_DEPRECATED_NO_EXPORT ION_NO_EXPORT ION_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef ION_NO_DEPRECATED
#    define ION_NO_DEPRECATED
#  endif
#endif

#endif /* ION_EXPORT_H */
