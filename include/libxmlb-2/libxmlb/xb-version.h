/*
 * Copyright (C) 2015 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */
/**
 * SECTION:xb-version
 * @short_description: Obtains the version for the installed libxmlb
 *
 * These compile time macros allow the user to enable parts of client code
 * depending on the version of libxmlb installed.
 */

#if !defined (__LIBXMLB_H_INSIDE__) && !defined (LIBXMLB_COMPILATION)
#error "Only <libxmlb.h> can be included directly."
#endif

#ifndef __LIBXMLB_VERSION_H
#define __LIBXMLB_VERSION_H

/**
 * XMLB_MAJOR_VERSION:
 *
 * The compile-time major version
 */
#ifndef XMLB_MAJOR_VERSION
#define XMLB_MAJOR_VERSION				(0)
#endif

/**
 * XMLB_MINOR_VERSION:
 *
 * The compile-time minor version
 */
#ifndef XMLB_MINOR_VERSION
#define XMLB_MINOR_VERSION				(3)
#endif

/**
 * XMLB_MICRO_VERSION:
 *
 * The compile-time micro version
 */
#ifndef XMLB_MICRO_VERSION
#define XMLB_MICRO_VERSION				(6)
#endif

/**
 * LIBXMLB_CHECK_VERSION:
 * @major: Major version number
 * @minor: Minor version number
 * @micro: Micro version number
 *
 * Check whether a libxmlb version equal to or greater than
 * major.minor.micro.
 */
#define LIBXMLB_CHECK_VERSION(major,minor,micro)    \
    (XMLB_MAJOR_VERSION > (major) || \
     (XMLB_MAJOR_VERSION == (major) && XMLB_MINOR_VERSION > (minor)) || \
     (XMLB_MAJOR_VERSION == (major) && XMLB_MINOR_VERSION == (minor) && \
      XMLB_MICRO_VERSION >= (micro)))

#endif /* __LIBXMLB_VERSION_H */
