/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2014 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

/**
 * SECTION:as-version
 * @short_description: Preprocessor macros for the libappstream-glib version
 * @include: appstream-glib.h
 * @stability: Stable
 *
 * These functions are used in client code to conditionalize compilation
 * depending on the version of libappstream-glib headers installed.
 */

#if !defined (__APPSTREAM_GLIB_H_INSIDE__) && !defined (AS_COMPILATION)
#error "Only <appstream_glib.h> can be included directly."
#endif

#include <glib.h>

/* compile time version
 */
#define AS_MAJOR_VERSION				0
#define AS_MINOR_VERSION				7
#define AS_MICRO_VERSION				18

/* check whether a As version equal to or greater than
 * major.minor.micro.
 */
#define AS_CHECK_VERSION(major,minor,micro)    \
    (AS_MAJOR_VERSION > (major) || \
     (AS_MAJOR_VERSION == (major) && AS_MINOR_VERSION > (minor)) || \
     (AS_MAJOR_VERSION == (major) && AS_MINOR_VERSION == (minor) && \
      AS_MICRO_VERSION >= (micro)))

const gchar	*as_version_string			(void);
