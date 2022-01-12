
#ifndef PURPOSE_EXPORT_H
#define PURPOSE_EXPORT_H

#ifdef PURPOSE_STATIC_DEFINE
#  define PURPOSE_EXPORT
#  define PURPOSE_NO_EXPORT
#else
#  ifndef PURPOSE_EXPORT
#    ifdef KF5Purpose_EXPORTS
        /* We are building this library */
#      define PURPOSE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PURPOSE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PURPOSE_NO_EXPORT
#    define PURPOSE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PURPOSE_DEPRECATED
#  define PURPOSE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PURPOSE_DEPRECATED_EXPORT
#  define PURPOSE_DEPRECATED_EXPORT PURPOSE_EXPORT PURPOSE_DEPRECATED
#endif

#ifndef PURPOSE_DEPRECATED_NO_EXPORT
#  define PURPOSE_DEPRECATED_NO_EXPORT PURPOSE_NO_EXPORT PURPOSE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PURPOSE_NO_DEPRECATED
#    define PURPOSE_NO_DEPRECATED
#  endif
#endif

#endif /* PURPOSE_EXPORT_H */
