/*
 * This file is part of libplacebo.
 *
 * libplacebo is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * libplacebo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libplacebo.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBPLACEBO_CONFIG_H_
#define LIBPLACEBO_CONFIG_H_

// Increased any time the library changes in a fundamental/major way.
#define PL_MAJOR_VER 4

// Increased any time the API changes. (Note: Does not reset when PL_MAJOR_VER
// is increased)
#define PL_API_VER 157

// Increased any time a fix is made to a given API version.
#define PL_FIX_VER (pl_fix_ver())

// Friendly name (`git describe`) for the overall version of the library
#define PL_VERSION (pl_version())

int pl_fix_ver(void);
const char *pl_version(void);

// Feature tests. These aren't described in further detail, but may be useful
// for programmers wanting to programmatically check for feature support
// in their compiled libplacebo versions.
#define PL_HAVE_LCMS 1
#define PL_HAVE_GLSLANG 1
#define PL_HAVE_SHADERC 1
#define PL_HAVE_VULKAN 1
#define PL_HAVE_OPENGL 1
#undef PL_HAVE_D3D11
#define PL_HAVE_VK_PROC_ADDR 1

// Extra compiler-specific stuff
#if defined(_MSC_VER)
#define PL_DEPRECATED
#else
#define PL_DEPRECATED __attribute__((deprecated))
#endif

#endif // LIBPLACEBO_CONTEXT_H_
