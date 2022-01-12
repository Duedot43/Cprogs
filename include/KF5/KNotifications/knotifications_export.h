
#ifndef KNOTIFICATIONS_EXPORT_H
#define KNOTIFICATIONS_EXPORT_H

#ifdef KNOTIFICATIONS_STATIC_DEFINE
#  define KNOTIFICATIONS_EXPORT
#  define KNOTIFICATIONS_NO_EXPORT
#else
#  ifndef KNOTIFICATIONS_EXPORT
#    ifdef KF5Notifications_EXPORTS
        /* We are building this library */
#      define KNOTIFICATIONS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KNOTIFICATIONS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KNOTIFICATIONS_NO_EXPORT
#    define KNOTIFICATIONS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KNOTIFICATIONS_DECL_DEPRECATED
#  define KNOTIFICATIONS_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KNOTIFICATIONS_DECL_DEPRECATED_EXPORT
#  define KNOTIFICATIONS_DECL_DEPRECATED_EXPORT KNOTIFICATIONS_EXPORT KNOTIFICATIONS_DECL_DEPRECATED
#endif

#ifndef KNOTIFICATIONS_DECL_DEPRECATED_NO_EXPORT
#  define KNOTIFICATIONS_DECL_DEPRECATED_NO_EXPORT KNOTIFICATIONS_NO_EXPORT KNOTIFICATIONS_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KNOTIFICATIONS_NO_DEPRECATED
#    define KNOTIFICATIONS_NO_DEPRECATED
#  endif
#endif

#define KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KNOTIFICATIONS_NO_DEPRECATED) && !defined(KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KNOTIFICATIONS_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KNOTIFICATIONS_NO_DEPRECATED_WARNINGS) && !defined(KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KNOTIFICATIONS_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KNOTIFICATIONS_NO_DEPRECATED)
#  undef KNOTIFICATIONS_DEPRECATED
#  define KNOTIFICATIONS_DEPRECATED_EXPORT KNOTIFICATIONS_EXPORT
#  define KNOTIFICATIONS_DEPRECATED_NO_EXPORT KNOTIFICATIONS_NO_EXPORT
#elif defined(KNOTIFICATIONS_NO_DEPRECATED_WARNINGS)
#  define KNOTIFICATIONS_DEPRECATED
#  define KNOTIFICATIONS_DEPRECATED_EXPORT KNOTIFICATIONS_EXPORT
#  define KNOTIFICATIONS_DEPRECATED_NO_EXPORT KNOTIFICATIONS_NO_EXPORT
#else
#  define KNOTIFICATIONS_DEPRECATED KNOTIFICATIONS_DECL_DEPRECATED
#  define KNOTIFICATIONS_DEPRECATED_EXPORT KNOTIFICATIONS_DECL_DEPRECATED_EXPORT
#  define KNOTIFICATIONS_DEPRECATED_NO_EXPORT KNOTIFICATIONS_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KNOTIFICATIONS_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KNOTIFICATIONS_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KNOTIFICATIONS_NO_DEPRECATED
#  define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KNOTIFICATIONS_NO_DEPRECATED_WARNINGS
#  define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE
#  ifdef KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KNOTIFICATIONS_DEPRECATED
#  define KNOTIFICATIONS_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KNOTIFICATIONS_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54300
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_67(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_67(text)
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54b00
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_75(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_75(text)
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54c00
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_76(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_76(text)
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54f00
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_79(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_79(text)
#endif
#define KNOTIFICATIONS_DEPRECATED_VERSION_5(minor, text)      KNOTIFICATIONS_DEPRECATED_VERSION_5_##minor(text)
#define KNOTIFICATIONS_DEPRECATED_VERSION(major, minor, text) KNOTIFICATIONS_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KNOTIFICATIONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KNOTIFICATIONS_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KNOTIFICATIONS_DEPRECATED_VERSION(major, minor, text)
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KNOTIFICATIONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* KNOTIFICATIONS_EXPORT_H */


#ifndef ECM_GENERATEEXPORTHEADER_KNOTIFICATIONS_EXPORT_H
#define ECM_GENERATEEXPORTHEADER_KNOTIFICATIONS_EXPORT_H


#define KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KNOTIFICATIONS_NO_DEPRECATED) && !defined(KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KNOTIFICATIONS_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KNOTIFICATIONS_NO_DEPRECATED_WARNINGS) && !defined(KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KNOTIFICATIONS_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KNOTIFICATIONS_NO_DEPRECATED)
#  undef KNOTIFICATIONS_DEPRECATED
#  define KNOTIFICATIONS_DEPRECATED_EXPORT KNOTIFICATIONS_EXPORT
#  define KNOTIFICATIONS_DEPRECATED_NO_EXPORT KNOTIFICATIONS_NO_EXPORT
#elif defined(KNOTIFICATIONS_NO_DEPRECATED_WARNINGS)
#  define KNOTIFICATIONS_DEPRECATED
#  define KNOTIFICATIONS_DEPRECATED_EXPORT KNOTIFICATIONS_EXPORT
#  define KNOTIFICATIONS_DEPRECATED_NO_EXPORT KNOTIFICATIONS_NO_EXPORT
#else
#  define KNOTIFICATIONS_DEPRECATED KNOTIFICATIONS_DECL_DEPRECATED
#  define KNOTIFICATIONS_DEPRECATED_EXPORT KNOTIFICATIONS_DECL_DEPRECATED_EXPORT
#  define KNOTIFICATIONS_DEPRECATED_NO_EXPORT KNOTIFICATIONS_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KNOTIFICATIONS_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KNOTIFICATIONS_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KNOTIFICATIONS_NO_DEPRECATED
#  define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KNOTIFICATIONS_NO_DEPRECATED_WARNINGS
#  define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE
#  ifdef KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KNOTIFICATIONS_DEPRECATED
#  define KNOTIFICATIONS_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KNOTIFICATIONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KNOTIFICATIONS_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54300
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_67(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_67(text)
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54b00
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_75(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_75(text)
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54c00
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_76(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_76(text)
#endif

#if KNOTIFICATIONS_DEPRECATED_WARNINGS_SINCE >= 0x54f00
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_79(text) KNOTIFICATIONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KNOTIFICATIONS_DEPRECATED_VERSION_5_79(text)
#endif
#define KNOTIFICATIONS_DEPRECATED_VERSION_5(minor, text)      KNOTIFICATIONS_DEPRECATED_VERSION_5_##minor(text)
#define KNOTIFICATIONS_DEPRECATED_VERSION(major, minor, text) KNOTIFICATIONS_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KNOTIFICATIONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KNOTIFICATIONS_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KNOTIFICATIONS_DEPRECATED_VERSION(major, minor, text)
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KNOTIFICATIONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KNOTIFICATIONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif


#endif /* ECM_GENERATEEXPORTHEADER_KNOTIFICATIONS_EXPORT_H */
