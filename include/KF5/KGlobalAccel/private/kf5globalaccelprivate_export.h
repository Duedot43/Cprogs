
#ifndef KGLOBALACCELPRIVATE_EXPORT_H
#define KGLOBALACCELPRIVATE_EXPORT_H

#ifdef KGLOBALACCELPRIVATE_STATIC_DEFINE
#  define KGLOBALACCELPRIVATE_EXPORT
#  define KGLOBALACCELPRIVATE_NO_EXPORT
#else
#  ifndef KGLOBALACCELPRIVATE_EXPORT
#    ifdef KF5GlobalAccelPrivate_EXPORTS
        /* We are building this library */
#      define KGLOBALACCELPRIVATE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KGLOBALACCELPRIVATE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KGLOBALACCELPRIVATE_NO_EXPORT
#    define KGLOBALACCELPRIVATE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KGLOBALACCELPRIVATE_DECL_DEPRECATED
#  define KGLOBALACCELPRIVATE_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KGLOBALACCELPRIVATE_DECL_DEPRECATED_EXPORT
#  define KGLOBALACCELPRIVATE_DECL_DEPRECATED_EXPORT KGLOBALACCELPRIVATE_EXPORT KGLOBALACCELPRIVATE_DECL_DEPRECATED
#endif

#ifndef KGLOBALACCELPRIVATE_DECL_DEPRECATED_NO_EXPORT
#  define KGLOBALACCELPRIVATE_DECL_DEPRECATED_NO_EXPORT KGLOBALACCELPRIVATE_NO_EXPORT KGLOBALACCELPRIVATE_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KGLOBALACCELPRIVATE_NO_DEPRECATED
#    define KGLOBALACCELPRIVATE_NO_DEPRECATED
#  endif
#endif

#define KGLOBALACCELPRIVATE_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KGLOBALACCELPRIVATE_NO_DEPRECATED) && !defined(KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KGLOBALACCELPRIVATE_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS) && !defined(KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KGLOBALACCELPRIVATE_NO_DEPRECATED)
#  undef KGLOBALACCELPRIVATE_DEPRECATED
#  define KGLOBALACCELPRIVATE_DEPRECATED_EXPORT KGLOBALACCELPRIVATE_EXPORT
#  define KGLOBALACCELPRIVATE_DEPRECATED_NO_EXPORT KGLOBALACCELPRIVATE_NO_EXPORT
#elif defined(KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS)
#  define KGLOBALACCELPRIVATE_DEPRECATED
#  define KGLOBALACCELPRIVATE_DEPRECATED_EXPORT KGLOBALACCELPRIVATE_EXPORT
#  define KGLOBALACCELPRIVATE_DEPRECATED_NO_EXPORT KGLOBALACCELPRIVATE_NO_EXPORT
#else
#  define KGLOBALACCELPRIVATE_DEPRECATED KGLOBALACCELPRIVATE_DECL_DEPRECATED
#  define KGLOBALACCELPRIVATE_DEPRECATED_EXPORT KGLOBALACCELPRIVATE_DECL_DEPRECATED_EXPORT
#  define KGLOBALACCELPRIVATE_DEPRECATED_NO_EXPORT KGLOBALACCELPRIVATE_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KGLOBALACCELPRIVATE_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KGLOBALACCELPRIVATE_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KGLOBALACCELPRIVATE_NO_DEPRECATED
#  define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS
#  define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE
#  ifdef KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KGLOBALACCELPRIVATE_DEPRECATED
#  define KGLOBALACCELPRIVATE_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KGLOBALACCELPRIVATE_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE >= 0x40300
#  define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4_3(text) KGLOBALACCELPRIVATE_DECL_DEPRECATED_TEXT(text)
#else
#  define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4_3(text)
#endif
#define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4(minor, text)      KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4_##minor(text)
#define KGLOBALACCELPRIVATE_DEPRECATED_VERSION(major, minor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION(major, minor, text)
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* KGLOBALACCELPRIVATE_EXPORT_H */


#ifndef ECM_GENERATEEXPORTHEADER_KGLOBALACCELPRIVATE_EXPORT_H
#define ECM_GENERATEEXPORTHEADER_KGLOBALACCELPRIVATE_EXPORT_H


#define KGLOBALACCELPRIVATE_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KGLOBALACCELPRIVATE_NO_DEPRECATED) && !defined(KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KGLOBALACCELPRIVATE_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS) && !defined(KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KGLOBALACCELPRIVATE_NO_DEPRECATED)
#  undef KGLOBALACCELPRIVATE_DEPRECATED
#  define KGLOBALACCELPRIVATE_DEPRECATED_EXPORT KGLOBALACCELPRIVATE_EXPORT
#  define KGLOBALACCELPRIVATE_DEPRECATED_NO_EXPORT KGLOBALACCELPRIVATE_NO_EXPORT
#elif defined(KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS)
#  define KGLOBALACCELPRIVATE_DEPRECATED
#  define KGLOBALACCELPRIVATE_DEPRECATED_EXPORT KGLOBALACCELPRIVATE_EXPORT
#  define KGLOBALACCELPRIVATE_DEPRECATED_NO_EXPORT KGLOBALACCELPRIVATE_NO_EXPORT
#else
#  define KGLOBALACCELPRIVATE_DEPRECATED KGLOBALACCELPRIVATE_DECL_DEPRECATED
#  define KGLOBALACCELPRIVATE_DEPRECATED_EXPORT KGLOBALACCELPRIVATE_DECL_DEPRECATED_EXPORT
#  define KGLOBALACCELPRIVATE_DEPRECATED_NO_EXPORT KGLOBALACCELPRIVATE_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KGLOBALACCELPRIVATE_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KGLOBALACCELPRIVATE_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KGLOBALACCELPRIVATE_NO_DEPRECATED
#  define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KGLOBALACCELPRIVATE_NO_DEPRECATED_WARNINGS
#  define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE
#  ifdef KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KGLOBALACCELPRIVATE_DEPRECATED
#  define KGLOBALACCELPRIVATE_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KGLOBALACCELPRIVATE_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KGLOBALACCELPRIVATE_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KGLOBALACCELPRIVATE_DEPRECATED_WARNINGS_SINCE >= 0x40300
#  define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4_3(text) KGLOBALACCELPRIVATE_DECL_DEPRECATED_TEXT(text)
#else
#  define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4_3(text)
#endif
#define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4(minor, text)      KGLOBALACCELPRIVATE_DEPRECATED_VERSION_4_##minor(text)
#define KGLOBALACCELPRIVATE_DEPRECATED_VERSION(major, minor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KGLOBALACCELPRIVATE_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION(major, minor, text)
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KGLOBALACCELPRIVATE_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KGLOBALACCELPRIVATE_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif


#endif /* ECM_GENERATEEXPORTHEADER_KGLOBALACCELPRIVATE_EXPORT_H */
