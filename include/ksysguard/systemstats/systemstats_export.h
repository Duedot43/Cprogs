
#ifndef SYSTEMSTATS_EXPORT_H
#define SYSTEMSTATS_EXPORT_H

#ifdef SYSTEMSTATS_STATIC_DEFINE
#  define SYSTEMSTATS_EXPORT
#  define SYSTEMSTATS_NO_EXPORT
#else
#  ifndef SYSTEMSTATS_EXPORT
#    ifdef SystemStats_EXPORTS
        /* We are building this library */
#      define SYSTEMSTATS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define SYSTEMSTATS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef SYSTEMSTATS_NO_EXPORT
#    define SYSTEMSTATS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef SYSTEMSTATS_DEPRECATED
#  define SYSTEMSTATS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef SYSTEMSTATS_DEPRECATED_EXPORT
#  define SYSTEMSTATS_DEPRECATED_EXPORT SYSTEMSTATS_EXPORT SYSTEMSTATS_DEPRECATED
#endif

#ifndef SYSTEMSTATS_DEPRECATED_NO_EXPORT
#  define SYSTEMSTATS_DEPRECATED_NO_EXPORT SYSTEMSTATS_NO_EXPORT SYSTEMSTATS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SYSTEMSTATS_NO_DEPRECATED
#    define SYSTEMSTATS_NO_DEPRECATED
#  endif
#endif

#endif /* SYSTEMSTATS_EXPORT_H */
