
#ifndef KJOBWIDGETS_EXPORT_H
#define KJOBWIDGETS_EXPORT_H

#ifdef KJOBWIDGETS_STATIC_DEFINE
#  define KJOBWIDGETS_EXPORT
#  define KJOBWIDGETS_NO_EXPORT
#else
#  ifndef KJOBWIDGETS_EXPORT
#    ifdef KF5JobWidgets_EXPORTS
        /* We are building this library */
#      define KJOBWIDGETS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KJOBWIDGETS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KJOBWIDGETS_NO_EXPORT
#    define KJOBWIDGETS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KJOBWIDGETS_DECL_DEPRECATED
#  define KJOBWIDGETS_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KJOBWIDGETS_DECL_DEPRECATED_EXPORT
#  define KJOBWIDGETS_DECL_DEPRECATED_EXPORT KJOBWIDGETS_EXPORT KJOBWIDGETS_DECL_DEPRECATED
#endif

#ifndef KJOBWIDGETS_DECL_DEPRECATED_NO_EXPORT
#  define KJOBWIDGETS_DECL_DEPRECATED_NO_EXPORT KJOBWIDGETS_NO_EXPORT KJOBWIDGETS_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KJOBWIDGETS_NO_DEPRECATED
#    define KJOBWIDGETS_NO_DEPRECATED
#  endif
#endif

#define KJOBWIDGETS_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KJOBWIDGETS_NO_DEPRECATED) && !defined(KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KJOBWIDGETS_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KJOBWIDGETS_NO_DEPRECATED_WARNINGS) && !defined(KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KJOBWIDGETS_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KJOBWIDGETS_NO_DEPRECATED)
#  undef KJOBWIDGETS_DEPRECATED
#  define KJOBWIDGETS_DEPRECATED_EXPORT KJOBWIDGETS_EXPORT
#  define KJOBWIDGETS_DEPRECATED_NO_EXPORT KJOBWIDGETS_NO_EXPORT
#elif defined(KJOBWIDGETS_NO_DEPRECATED_WARNINGS)
#  define KJOBWIDGETS_DEPRECATED
#  define KJOBWIDGETS_DEPRECATED_EXPORT KJOBWIDGETS_EXPORT
#  define KJOBWIDGETS_DEPRECATED_NO_EXPORT KJOBWIDGETS_NO_EXPORT
#else
#  define KJOBWIDGETS_DEPRECATED KJOBWIDGETS_DECL_DEPRECATED
#  define KJOBWIDGETS_DEPRECATED_EXPORT KJOBWIDGETS_DECL_DEPRECATED_EXPORT
#  define KJOBWIDGETS_DEPRECATED_NO_EXPORT KJOBWIDGETS_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KJOBWIDGETS_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KJOBWIDGETS_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KJOBWIDGETS_NO_DEPRECATED
#  define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KJOBWIDGETS_NO_DEPRECATED_WARNINGS
#  define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE
#  ifdef KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KJOBWIDGETS_DEPRECATED
#  define KJOBWIDGETS_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KJOBWIDGETS_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE >= 0x54f00
#  define KJOBWIDGETS_DEPRECATED_VERSION_5_79(text) KJOBWIDGETS_DECL_DEPRECATED_TEXT(text)
#else
#  define KJOBWIDGETS_DEPRECATED_VERSION_5_79(text)
#endif
#define KJOBWIDGETS_DEPRECATED_VERSION_5(minor, text)      KJOBWIDGETS_DEPRECATED_VERSION_5_##minor(text)
#define KJOBWIDGETS_DEPRECATED_VERSION(major, minor, text) KJOBWIDGETS_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KJOBWIDGETS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KJOBWIDGETS_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KJOBWIDGETS_DEPRECATED_VERSION(major, minor, text)
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KJOBWIDGETS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* KJOBWIDGETS_EXPORT_H */


#ifndef ECM_GENERATEEXPORTHEADER_KJOBWIDGETS_EXPORT_H
#define ECM_GENERATEEXPORTHEADER_KJOBWIDGETS_EXPORT_H


#define KJOBWIDGETS_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KJOBWIDGETS_NO_DEPRECATED) && !defined(KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KJOBWIDGETS_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KJOBWIDGETS_NO_DEPRECATED_WARNINGS) && !defined(KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KJOBWIDGETS_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KJOBWIDGETS_NO_DEPRECATED)
#  undef KJOBWIDGETS_DEPRECATED
#  define KJOBWIDGETS_DEPRECATED_EXPORT KJOBWIDGETS_EXPORT
#  define KJOBWIDGETS_DEPRECATED_NO_EXPORT KJOBWIDGETS_NO_EXPORT
#elif defined(KJOBWIDGETS_NO_DEPRECATED_WARNINGS)
#  define KJOBWIDGETS_DEPRECATED
#  define KJOBWIDGETS_DEPRECATED_EXPORT KJOBWIDGETS_EXPORT
#  define KJOBWIDGETS_DEPRECATED_NO_EXPORT KJOBWIDGETS_NO_EXPORT
#else
#  define KJOBWIDGETS_DEPRECATED KJOBWIDGETS_DECL_DEPRECATED
#  define KJOBWIDGETS_DEPRECATED_EXPORT KJOBWIDGETS_DECL_DEPRECATED_EXPORT
#  define KJOBWIDGETS_DEPRECATED_NO_EXPORT KJOBWIDGETS_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KJOBWIDGETS_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KJOBWIDGETS_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KJOBWIDGETS_NO_DEPRECATED
#  define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KJOBWIDGETS_NO_DEPRECATED_WARNINGS
#  define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE
#  ifdef KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KJOBWIDGETS_DEPRECATED
#  define KJOBWIDGETS_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KJOBWIDGETS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KJOBWIDGETS_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KJOBWIDGETS_DEPRECATED_WARNINGS_SINCE >= 0x54f00
#  define KJOBWIDGETS_DEPRECATED_VERSION_5_79(text) KJOBWIDGETS_DECL_DEPRECATED_TEXT(text)
#else
#  define KJOBWIDGETS_DEPRECATED_VERSION_5_79(text)
#endif
#define KJOBWIDGETS_DEPRECATED_VERSION_5(minor, text)      KJOBWIDGETS_DEPRECATED_VERSION_5_##minor(text)
#define KJOBWIDGETS_DEPRECATED_VERSION(major, minor, text) KJOBWIDGETS_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KJOBWIDGETS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KJOBWIDGETS_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KJOBWIDGETS_DEPRECATED_VERSION(major, minor, text)
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KJOBWIDGETS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KJOBWIDGETS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif


#endif /* ECM_GENERATEEXPORTHEADER_KJOBWIDGETS_EXPORT_H */
