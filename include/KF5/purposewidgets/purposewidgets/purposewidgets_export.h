
#ifndef PURPOSEWIDGETS_EXPORT_H
#define PURPOSEWIDGETS_EXPORT_H

#ifdef PURPOSEWIDGETS_STATIC_DEFINE
#  define PURPOSEWIDGETS_EXPORT
#  define PURPOSEWIDGETS_NO_EXPORT
#else
#  ifndef PURPOSEWIDGETS_EXPORT
#    ifdef KF5PurposeWidgets_EXPORTS
        /* We are building this library */
#      define PURPOSEWIDGETS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define PURPOSEWIDGETS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef PURPOSEWIDGETS_NO_EXPORT
#    define PURPOSEWIDGETS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef PURPOSEWIDGETS_DEPRECATED
#  define PURPOSEWIDGETS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PURPOSEWIDGETS_DEPRECATED_EXPORT
#  define PURPOSEWIDGETS_DEPRECATED_EXPORT PURPOSEWIDGETS_EXPORT PURPOSEWIDGETS_DEPRECATED
#endif

#ifndef PURPOSEWIDGETS_DEPRECATED_NO_EXPORT
#  define PURPOSEWIDGETS_DEPRECATED_NO_EXPORT PURPOSEWIDGETS_NO_EXPORT PURPOSEWIDGETS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PURPOSEWIDGETS_NO_DEPRECATED
#    define PURPOSEWIDGETS_NO_DEPRECATED
#  endif
#endif

#endif /* PURPOSEWIDGETS_EXPORT_H */
