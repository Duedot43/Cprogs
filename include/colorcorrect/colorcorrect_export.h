
#ifndef COLORCORRECT_EXPORT_H
#define COLORCORRECT_EXPORT_H

#ifdef COLORCORRECT_STATIC_DEFINE
#  define COLORCORRECT_EXPORT
#  define COLORCORRECT_NO_EXPORT
#else
#  ifndef COLORCORRECT_EXPORT
#    ifdef colorcorrect_EXPORTS
        /* We are building this library */
#      define COLORCORRECT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define COLORCORRECT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef COLORCORRECT_NO_EXPORT
#    define COLORCORRECT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef COLORCORRECT_DEPRECATED
#  define COLORCORRECT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef COLORCORRECT_DEPRECATED_EXPORT
#  define COLORCORRECT_DEPRECATED_EXPORT COLORCORRECT_EXPORT COLORCORRECT_DEPRECATED
#endif

#ifndef COLORCORRECT_DEPRECATED_NO_EXPORT
#  define COLORCORRECT_DEPRECATED_NO_EXPORT COLORCORRECT_NO_EXPORT COLORCORRECT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef COLORCORRECT_NO_DEPRECATED
#    define COLORCORRECT_NO_DEPRECATED
#  endif
#endif

#endif /* COLORCORRECT_EXPORT_H */
