
#ifndef KDECORATIONS_PRIVATE_EXPORT_H
#define KDECORATIONS_PRIVATE_EXPORT_H

#ifdef KDECORATIONS_PRIVATE_STATIC_DEFINE
#  define KDECORATIONS_PRIVATE_EXPORT
#  define KDECORATIONS_PRIVATE_NO_EXPORT
#else
#  ifndef KDECORATIONS_PRIVATE_EXPORT
#    ifdef kdecorations2private_EXPORTS
        /* We are building this library */
#      define KDECORATIONS_PRIVATE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KDECORATIONS_PRIVATE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KDECORATIONS_PRIVATE_NO_EXPORT
#    define KDECORATIONS_PRIVATE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KDECORATIONS_PRIVATE_DEPRECATED
#  define KDECORATIONS_PRIVATE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KDECORATIONS_PRIVATE_DEPRECATED_EXPORT
#  define KDECORATIONS_PRIVATE_DEPRECATED_EXPORT KDECORATIONS_PRIVATE_EXPORT KDECORATIONS_PRIVATE_DEPRECATED
#endif

#ifndef KDECORATIONS_PRIVATE_DEPRECATED_NO_EXPORT
#  define KDECORATIONS_PRIVATE_DEPRECATED_NO_EXPORT KDECORATIONS_PRIVATE_NO_EXPORT KDECORATIONS_PRIVATE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KDECORATIONS_PRIVATE_NO_DEPRECATED
#    define KDECORATIONS_PRIVATE_NO_DEPRECATED
#  endif
#endif

#endif /* KDECORATIONS_PRIVATE_EXPORT_H */
