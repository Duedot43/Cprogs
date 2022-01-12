
#ifndef KNOTIFYCONFIG_EXPORT_H
#define KNOTIFYCONFIG_EXPORT_H

#ifdef KNOTIFYCONFIG_STATIC_DEFINE
#  define KNOTIFYCONFIG_EXPORT
#  define KNOTIFYCONFIG_NO_EXPORT
#else
#  ifndef KNOTIFYCONFIG_EXPORT
#    ifdef KF5NotifyConfig_EXPORTS
        /* We are building this library */
#      define KNOTIFYCONFIG_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KNOTIFYCONFIG_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KNOTIFYCONFIG_NO_EXPORT
#    define KNOTIFYCONFIG_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KNOTIFYCONFIG_DEPRECATED
#  define KNOTIFYCONFIG_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KNOTIFYCONFIG_DEPRECATED_EXPORT
#  define KNOTIFYCONFIG_DEPRECATED_EXPORT KNOTIFYCONFIG_EXPORT KNOTIFYCONFIG_DEPRECATED
#endif

#ifndef KNOTIFYCONFIG_DEPRECATED_NO_EXPORT
#  define KNOTIFYCONFIG_DEPRECATED_NO_EXPORT KNOTIFYCONFIG_NO_EXPORT KNOTIFYCONFIG_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KNOTIFYCONFIG_NO_DEPRECATED
#    define KNOTIFYCONFIG_NO_DEPRECATED
#  endif
#endif

#endif /* KNOTIFYCONFIG_EXPORT_H */
