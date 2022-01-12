
#ifndef SYNDICATION_EXPORT_H
#define SYNDICATION_EXPORT_H

#ifdef SYNDICATION_STATIC_DEFINE
#  define SYNDICATION_EXPORT
#  define SYNDICATION_NO_EXPORT
#else
#  ifndef SYNDICATION_EXPORT
#    ifdef KF5Syndication_EXPORTS
        /* We are building this library */
#      define SYNDICATION_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SYNDICATION_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SYNDICATION_NO_EXPORT
#    define SYNDICATION_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SYNDICATION_DEPRECATED
#  define SYNDICATION_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SYNDICATION_DEPRECATED_EXPORT
#  define SYNDICATION_DEPRECATED_EXPORT SYNDICATION_EXPORT SYNDICATION_DEPRECATED
#endif

#ifndef SYNDICATION_DEPRECATED_NO_EXPORT
#  define SYNDICATION_DEPRECATED_NO_EXPORT SYNDICATION_NO_EXPORT SYNDICATION_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SYNDICATION_NO_DEPRECATED
#    define SYNDICATION_NO_DEPRECATED
#  endif
#endif

#endif /* SYNDICATION_EXPORT_H */
