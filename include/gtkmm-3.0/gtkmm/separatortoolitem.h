// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_SEPARATORTOOLITEM_H
#define _GTKMM_SEPARATORTOOLITEM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2003 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/toolitem.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkSeparatorToolItem = struct _GtkSeparatorToolItem;
using GtkSeparatorToolItemClass = struct _GtkSeparatorToolItemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API SeparatorToolItem_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A toolbar item that separates groups of other toolbar items.
 *
 * A Gtk::SeparatorToolItem is a Gtk::ToolItem that separates groups of other Gtk::ToolItems.
 * Depending on the theme, it will often look like a vertical line on
 * horizontally docked toolbars. If the property "expand" is <tt>true</tt> and the property "draw"
 * is <tt>false</tt>, a Gtk::SeparatorToolItem will act as a "spring" that forces other items to the
 * ends of the toolbar.
 *
 * @ingroup Widgets
 */

class GTKMM_API SeparatorToolItem : public ToolItem
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef SeparatorToolItem CppObjectType;
  typedef SeparatorToolItem_Class CppClassType;
  typedef GtkSeparatorToolItem BaseObjectType;
  typedef GtkSeparatorToolItemClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  SeparatorToolItem(SeparatorToolItem&& src) noexcept;
  SeparatorToolItem& operator=(SeparatorToolItem&& src) noexcept;

  // noncopyable
  SeparatorToolItem(const SeparatorToolItem&) = delete;
  SeparatorToolItem& operator=(const SeparatorToolItem&) = delete;

  ~SeparatorToolItem() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API SeparatorToolItem_Class;
  static CppClassType separatortoolitem_class_;

protected:
  explicit SeparatorToolItem(const Glib::ConstructParams& construct_params);
  explicit SeparatorToolItem(GtkSeparatorToolItem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkSeparatorToolItem*       gobj()       { return reinterpret_cast<GtkSeparatorToolItem*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkSeparatorToolItem* gobj() const { return reinterpret_cast<GtkSeparatorToolItem*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  SeparatorToolItem();

  
  /** Returns whether @a item is drawn as a line, or just blank. 
   * See set_draw().
   * 
   * @newin{2,4}
   * 
   * @return <tt>true</tt> if @a item is drawn as a line, or just blank.
   */
  bool get_draw() const;
  
  /** Whether @a item is drawn as a vertical line, or just blank.
   * Setting this to <tt>false</tt> along with Gtk::ToolItem::set_expand() is useful
   * to create an item that forces following items to the end of the toolbar.
   * 
   * @newin{2,4}
   * 
   * @param should_draw Whether @a item is drawn as a vertical line.
   */
  void set_draw(bool should_draw =  true);

  /** Whether the separator is drawn, or just blank.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_draw() ;

/** Whether the separator is drawn, or just blank.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_draw() const;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::SeparatorToolItem
   */
  GTKMM_API
  Gtk::SeparatorToolItem* wrap(GtkSeparatorToolItem* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SEPARATORTOOLITEM_H */

