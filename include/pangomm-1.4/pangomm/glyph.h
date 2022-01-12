// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!
#ifndef _PANGOMM_GLYPH_H
#define _PANGOMM_GLYPH_H

#include <pangommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* glyph.h
 *
 * Copyright (C) 1998-1999 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <pango/pango.h>


namespace Pango
{

class PANGOMM_API GlyphInfo;
class PANGOMM_API GlyphGeometry;


/** A Pango::Glyph represents a single glyph in the output form of a string.
 */
typedef PangoGlyph Glyph; //This is defined as a guint32


/** A Pango::GlyphUnit is used to store dimensions within Pango. Dimensions are stored in 1/64ths of a point.
 */
typedef PangoGlyphUnit GlyphUnit;


/** A Pango::GlyphVisAttr is used to communicate information between the shaping phase and the rendering phase. It's contents are still evolving.
 */
typedef PangoGlyphVisAttr GlyphVisAttr;


/** A Pango::GlyphInfo represents a single glyph together with positioning information and visual attributes.
 */
class PANGOMM_API GlyphInfo
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = GlyphInfo;
  using BaseObjectType = PangoGlyphInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


public:
  GlyphInfo();

  /** Gets the glyph itself.
   * @return The glyph.
   */
  Glyph get_glyph() const;

  /** Gets the positional information about the glyph.
   * @return A GylphGeometry object.
   */
  GlyphGeometry get_geometry() const;

  /** Gets the visual attributes of the glyph.
   * @return A GlyphVisAttr structure.
   */
  GlyphVisAttr get_attr() const;

//I don't think that we need these set_* functions!
//TODO: Who wrote this comment? Investigate. murrayc.
  /* Sets the glyph itself.
   * @param glyph The new glyph.
   */
//  _MEMBER_SET(glyph, glyph, Glyph, PangoGlyph)

  /* Sets the positional information about the glyph.
   * @param geometry A GlyphGeometry object.
   */
//  _MEMBER_SET(geometry, geometry, GlyphGeometry, PangoGlyphGeometry)

  /* Sets the visual attributes of the glyph.
   * @param attr A GylphVisAttr structure.
   */
//  _MEMBER_SET(attr, attr, GlyphVisAttr, PangoGlyphVisAttr)

  /// Provides access to the underlying C GObject.
  PangoGlyphInfo*       gobj()       { return &gobject_; }
  /// Provides access to the underlying C GObject.
  const PangoGlyphInfo* gobj() const { return &gobject_; }

protected:
  PangoGlyphInfo gobject_;


};


/** A Pango::GlyphGeometry contains width and positioning information for a single glyph. Distances are in 1/64ths of a point.
 */
class PANGOMM_API GlyphGeometry
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = GlyphGeometry;
  using BaseObjectType = PangoGlyphGeometry;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


public:
  GlyphGeometry();
  explicit GlyphGeometry(const PangoGlyphGeometry* src);

  /** Gets the logical width to use for the character.
   * @return The logical width.
   */
  GlyphUnit get_width() const;

  /** Gets the horizontal offset from nominal character position.
   * @return The horizontal offset.
   */
  GlyphUnit get_x_offset() const;

  /** Gets the vertical offset from nominal character position.
   * @return The vertical offset.
   */
  GlyphUnit get_y_offset() const;

//I don't think that we need these set_* functions!
  /* Sets the logical width to use for the character.
   * @param width The new logical width.
   */
//  _MEMBER_SET(width, width, GlyphUnit, PangoGlyphUnit)

  /* Sets the horizontal offset from nominal character position.
   * @param x_offset The new horizontal offset.
   */
//  _MEMBER_SET(x_offset, x_offset, GlyphUnit, PangoGlyphUnit)

  /* Sets the vertical offset from nominal character position.
   * @param y_offset The new vertical offset.
   */
//  _MEMBER_SET(y_offset, y_offset, GlyphUnit, PangoGlyphUnit)

  PangoGlyphGeometry*       gobj()       { return &gobject_; }
  const PangoGlyphGeometry* gobj() const { return &gobject_; }

protected:
  PangoGlyphGeometry gobject_;


};


/* Since "the contents [of this struct] are still evolving" it might get necessary
 * to create a wrapper class for PangoGlyphVisAttr in future. Currently, however,
 * PangoGlyphVisAttr just contains one simple data field (guint is_cluster_start).
 */
/*class PANGOMM_API GlyphVisAttr
{
  _CLASS_GENERIC(GlyphVisAttr, PangoGlyphVisAttr)

public:
  GlyphVisAttr();
  explicit GlyphVisAttr(const PangoGlyphVisAttr* src);

  _MEMBER_GET(cluster_start, is_cluster_start, bool, guint)

  _MEMBER_SET(cluster_start, is_cluster_start, bool, guint)

  /// Provides access to the underlying C GObject.
  PangoGlyphVisAttr*       gobj()       { return &gobject_; }
  /// Provides access to the underlying C GObject.
  const PangoGlyphVisAttr* gobj() const { return &gobject_; }

protected:
  PangoGlyphVisAttr gobject_;
};*/

} //namespace Pango


namespace Glib
{

/** @relates Pango::GlyphInfo */
PANGOMM_API
Pango::GlyphInfo& wrap(PangoGlyphInfo* object);

/** @relates Pango::GlyphInfo */
PANGOMM_API
const Pango::GlyphInfo& wrap(const PangoGlyphInfo* object);

/** @relates Pango::GlyphGeometry */
PANGOMM_API
Pango::GlyphGeometry& wrap(PangoGlyphGeometry* object);

/** @relates Pango::GlyphGeometry */
PANGOMM_API
const Pango::GlyphGeometry& wrap(const PangoGlyphGeometry* object);

/* @relates Pango::GlyphVisAttr */
//PANGOMM_API
//Pango::GlyphVisAttr& wrap(PangoGlyphVisAttr* object);

/* @relates Pango::GlyphVisAttr */
//PANGOMM_API
//const Pango::GlyphVisAttr& wrap(const PangoGlyphVisAttr* object);

} //namespace Glib


#endif /* _PANGOMM_GLYPH_H */

