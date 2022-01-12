
#ifndef MODEMMANAGERQT_EXPORT_H
#define MODEMMANAGERQT_EXPORT_H

#ifdef MODEMMANAGERQT_STATIC_DEFINE
#  define MODEMMANAGERQT_EXPORT
#  define MODEMMANAGERQT_NO_EXPORT
#else
#  ifndef MODEMMANAGERQT_EXPORT
#    ifdef KF5ModemManagerQt_EXPORTS
        /* We are building this library */
#      define MODEMMANAGERQT_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define MODEMMANAGERQT_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef MODEMMANAGERQT_NO_EXPORT
#    define MODEMMANAGERQT_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef MODEMMANAGERQT_DEPRECATED
#  define MODEMMANAGERQT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef MODEMMANAGERQT_DEPRECATED_EXPORT
#  define MODEMMANAGERQT_DEPRECATED_EXPORT MODEMMANAGERQT_EXPORT MODEMMANAGERQT_DEPRECATED
#endif

#ifndef MODEMMANAGERQT_DEPRECATED_NO_EXPORT
#  define MODEMMANAGERQT_DEPRECATED_NO_EXPORT MODEMMANAGERQT_NO_EXPORT MODEMMANAGERQT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MODEMMANAGERQT_NO_DEPRECATED
#    define MODEMMANAGERQT_NO_DEPRECATED
#  endif
#endif

#endif /* MODEMMANAGERQT_EXPORT_H */
