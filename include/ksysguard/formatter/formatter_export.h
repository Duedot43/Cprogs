
#ifndef FORMATTER_EXPORT_H
#define FORMATTER_EXPORT_H

#ifdef FORMATTER_STATIC_DEFINE
#  define FORMATTER_EXPORT
#  define FORMATTER_NO_EXPORT
#else
#  ifndef FORMATTER_EXPORT
#    ifdef Formatter_EXPORTS
        /* We are building this library */
#      define FORMATTER_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define FORMATTER_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef FORMATTER_NO_EXPORT
#    define FORMATTER_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef FORMATTER_DEPRECATED
#  define FORMATTER_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef FORMATTER_DEPRECATED_EXPORT
#  define FORMATTER_DEPRECATED_EXPORT FORMATTER_EXPORT FORMATTER_DEPRECATED
#endif

#ifndef FORMATTER_DEPRECATED_NO_EXPORT
#  define FORMATTER_DEPRECATED_NO_EXPORT FORMATTER_NO_EXPORT FORMATTER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef FORMATTER_NO_DEPRECATED
#    define FORMATTER_NO_DEPRECATED
#  endif
#endif

#endif /* FORMATTER_EXPORT_H */
