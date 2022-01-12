
#ifndef KACCOUNTS_EXPORT_H
#define KACCOUNTS_EXPORT_H

#ifdef KACCOUNTS_STATIC_DEFINE
#  define KACCOUNTS_EXPORT
#  define KACCOUNTS_NO_EXPORT
#else
#  ifndef KACCOUNTS_EXPORT
#    ifdef kaccounts_EXPORTS
        /* We are building this library */
#      define KACCOUNTS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KACCOUNTS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KACCOUNTS_NO_EXPORT
#    define KACCOUNTS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KACCOUNTS_DEPRECATED
#  define KACCOUNTS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KACCOUNTS_DEPRECATED_EXPORT
#  define KACCOUNTS_DEPRECATED_EXPORT KACCOUNTS_EXPORT KACCOUNTS_DEPRECATED
#endif

#ifndef KACCOUNTS_DEPRECATED_NO_EXPORT
#  define KACCOUNTS_DEPRECATED_NO_EXPORT KACCOUNTS_NO_EXPORT KACCOUNTS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KACCOUNTS_NO_DEPRECATED
#    define KACCOUNTS_NO_DEPRECATED
#  endif
#endif

#endif /* KACCOUNTS_EXPORT_H */
