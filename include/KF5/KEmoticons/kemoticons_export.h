
#ifndef KEMOTICONS_EXPORT_H
#define KEMOTICONS_EXPORT_H

#ifdef KEMOTICONS_STATIC_DEFINE
#  define KEMOTICONS_EXPORT
#  define KEMOTICONS_NO_EXPORT
#else
#  ifndef KEMOTICONS_EXPORT
#    ifdef KF5Emoticons_EXPORTS
        /* We are building this library */
#      define KEMOTICONS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KEMOTICONS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KEMOTICONS_NO_EXPORT
#    define KEMOTICONS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KEMOTICONS_DECL_DEPRECATED
#  define KEMOTICONS_DECL_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KEMOTICONS_DECL_DEPRECATED_EXPORT
#  define KEMOTICONS_DECL_DEPRECATED_EXPORT KEMOTICONS_EXPORT KEMOTICONS_DECL_DEPRECATED
#endif

#ifndef KEMOTICONS_DECL_DEPRECATED_NO_EXPORT
#  define KEMOTICONS_DECL_DEPRECATED_NO_EXPORT KEMOTICONS_NO_EXPORT KEMOTICONS_DECL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KEMOTICONS_NO_DEPRECATED
#    define KEMOTICONS_NO_DEPRECATED
#  endif
#endif

#define KEMOTICONS_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KEMOTICONS_NO_DEPRECATED) && !defined(KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KEMOTICONS_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KEMOTICONS_NO_DEPRECATED_WARNINGS) && !defined(KEMOTICONS_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KEMOTICONS_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KEMOTICONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KEMOTICONS_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KEMOTICONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KEMOTICONS_NO_DEPRECATED)
#  undef KEMOTICONS_DEPRECATED
#  define KEMOTICONS_DEPRECATED_EXPORT KEMOTICONS_EXPORT
#  define KEMOTICONS_DEPRECATED_NO_EXPORT KEMOTICONS_NO_EXPORT
#elif defined(KEMOTICONS_NO_DEPRECATED_WARNINGS)
#  define KEMOTICONS_DEPRECATED
#  define KEMOTICONS_DEPRECATED_EXPORT KEMOTICONS_EXPORT
#  define KEMOTICONS_DEPRECATED_NO_EXPORT KEMOTICONS_NO_EXPORT
#else
#  define KEMOTICONS_DEPRECATED KEMOTICONS_DECL_DEPRECATED
#  define KEMOTICONS_DEPRECATED_EXPORT KEMOTICONS_DECL_DEPRECATED_EXPORT
#  define KEMOTICONS_DEPRECATED_NO_EXPORT KEMOTICONS_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KEMOTICONS_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KEMOTICONS_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KEMOTICONS_NO_DEPRECATED
#  define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KEMOTICONS_NO_DEPRECATED_WARNINGS
#  define KEMOTICONS_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KEMOTICONS_DEPRECATED_WARNINGS_SINCE
#  ifdef KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KEMOTICONS_DEPRECATED_WARNINGS_SINCE KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KEMOTICONS_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KEMOTICONS_DEPRECATED
#  define KEMOTICONS_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KEMOTICONS_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KEMOTICONS_DEPRECATED_WARNINGS_SINCE >= 0x50000
#  define KEMOTICONS_DEPRECATED_VERSION_5_0(text) KEMOTICONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KEMOTICONS_DEPRECATED_VERSION_5_0(text)
#endif
#define KEMOTICONS_DEPRECATED_VERSION_5(minor, text)      KEMOTICONS_DEPRECATED_VERSION_5_##minor(text)
#define KEMOTICONS_DEPRECATED_VERSION(major, minor, text) KEMOTICONS_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KEMOTICONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KEMOTICONS_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KEMOTICONS_DEPRECATED_VERSION(major, minor, text)
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KEMOTICONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif

#endif /* KEMOTICONS_EXPORT_H */


#ifndef ECM_GENERATEEXPORTHEADER_KEMOTICONS_EXPORT_H
#define ECM_GENERATEEXPORTHEADER_KEMOTICONS_EXPORT_H


#define KEMOTICONS_DECL_DEPRECATED_TEXT(text) __attribute__ ((__deprecated__(text)))

#define ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

/* Take any defaults from group settings */
#if !defined(KEMOTICONS_NO_DEPRECATED) && !defined(KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  ifdef KF_NO_DEPRECATED
#    define KEMOTICONS_NO_DEPRECATED
#  elif defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#    define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#  endif
#endif
#if !defined(KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT) && defined(KF_DISABLE_DEPRECATED_BEFORE_AND_AT)
#  define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT KF_DISABLE_DEPRECATED_BEFORE_AND_AT
#endif

#if !defined(KEMOTICONS_NO_DEPRECATED_WARNINGS) && !defined(KEMOTICONS_DEPRECATED_WARNINGS_SINCE)
#  ifdef KF_NO_DEPRECATED_WARNINGS
#    define KEMOTICONS_NO_DEPRECATED_WARNINGS
#  elif defined(KF_DEPRECATED_WARNINGS_SINCE)
#    define KEMOTICONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#  endif
#endif
#if !defined(KEMOTICONS_DEPRECATED_WARNINGS_SINCE) && defined(KF_DEPRECATED_WARNINGS_SINCE)
#  define KEMOTICONS_DEPRECATED_WARNINGS_SINCE KF_DEPRECATED_WARNINGS_SINCE
#endif

#if defined(KEMOTICONS_NO_DEPRECATED)
#  undef KEMOTICONS_DEPRECATED
#  define KEMOTICONS_DEPRECATED_EXPORT KEMOTICONS_EXPORT
#  define KEMOTICONS_DEPRECATED_NO_EXPORT KEMOTICONS_NO_EXPORT
#elif defined(KEMOTICONS_NO_DEPRECATED_WARNINGS)
#  define KEMOTICONS_DEPRECATED
#  define KEMOTICONS_DEPRECATED_EXPORT KEMOTICONS_EXPORT
#  define KEMOTICONS_DEPRECATED_NO_EXPORT KEMOTICONS_NO_EXPORT
#else
#  define KEMOTICONS_DEPRECATED KEMOTICONS_DECL_DEPRECATED
#  define KEMOTICONS_DEPRECATED_EXPORT KEMOTICONS_DECL_DEPRECATED_EXPORT
#  define KEMOTICONS_DEPRECATED_NO_EXPORT KEMOTICONS_DECL_DEPRECATED_NO_EXPORT
#endif

/* No deprecated API had been removed from build */
#define KEMOTICONS_EXCLUDE_DEPRECATED_BEFORE_AND_AT 0

#define KEMOTICONS_BUILD_DEPRECATED_SINCE(major, minor) 1

#ifdef KEMOTICONS_NO_DEPRECATED
#  define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0x55900
#endif
#ifdef KEMOTICONS_NO_DEPRECATED_WARNINGS
#  define KEMOTICONS_DEPRECATED_WARNINGS_SINCE 0
#endif

#ifndef KEMOTICONS_DEPRECATED_WARNINGS_SINCE
#  ifdef KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#    define KEMOTICONS_DEPRECATED_WARNINGS_SINCE KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  else
#    define KEMOTICONS_DEPRECATED_WARNINGS_SINCE 0x55900
#  endif
#endif

#ifndef KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT
#  define KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT 0
#endif

#ifdef KEMOTICONS_DEPRECATED
#  define KEMOTICONS_ENABLE_DEPRECATED_SINCE(major, minor) (ECM_GENERATEEXPORTHEADER_VERSION_VALUE(major, minor, 0) > KEMOTICONS_DISABLE_DEPRECATED_BEFORE_AND_AT)
#else
#  define KEMOTICONS_ENABLE_DEPRECATED_SINCE(major, minor) 0
#endif

#if KEMOTICONS_DEPRECATED_WARNINGS_SINCE >= 0x50000
#  define KEMOTICONS_DEPRECATED_VERSION_5_0(text) KEMOTICONS_DECL_DEPRECATED_TEXT(text)
#else
#  define KEMOTICONS_DEPRECATED_VERSION_5_0(text)
#endif
#define KEMOTICONS_DEPRECATED_VERSION_5(minor, text)      KEMOTICONS_DEPRECATED_VERSION_5_##minor(text)
#define KEMOTICONS_DEPRECATED_VERSION(major, minor, text) KEMOTICONS_DEPRECATED_VERSION_##major(minor, "Since "#major"."#minor". " text)
#define KEMOTICONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KEMOTICONS_DEPRECATED_VERSION_##major(minor, "Since "#textmajor"."#textminor". " text)
#if defined(__cpp_enumerator_attributes) && __cpp_enumerator_attributes >= 201411
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text) KEMOTICONS_DEPRECATED_VERSION(major, minor, text)
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text) KEMOTICONS_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#else
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION(major, minor, text)
#  define KEMOTICONS_ENUMERATOR_DEPRECATED_VERSION_BELATED(major, minor, textmajor, textminor, text)
#endif


#endif /* ECM_GENERATEEXPORTHEADER_KEMOTICONS_EXPORT_H */
