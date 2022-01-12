// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_NUMERABLEICON_H
#define _GTKMM_NUMERABLEICON_H

#include <gtkmmconfig.h>

#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The gtkmm Development Team
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


#include <giomm/emblemedicon.h>
#include <gtkmm/stylecontext.h>


 // This whole file is deprecated.

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkNumerableIcon = struct _GtkNumerableIcon;
using GtkNumerableIconClass = struct _GtkNumerableIconClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API NumerableIcon_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A Gio::Icon that allows numbered emblems.
 *
 * Gtk::NumerableIcon is a subclass of Gio::EmblemedIcon that can show a number or short string as an emblem.
 * The number can be overlayed on top of another emblem, if desired.
 *
 * It supports theming by taking font and color information from a provided StyleContext. See set_style_context().
 *
 * @newin{3,0}
 * @deprecated No replacement available.
 */

class GTKMM_API NumerableIcon : public Gio::EmblemedIcon
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = NumerableIcon;
  using CppClassType = NumerableIcon_Class;
  using BaseObjectType = GtkNumerableIcon;
  using BaseClassType = GtkNumerableIconClass;

  // noncopyable
  NumerableIcon(const NumerableIcon&) = delete;
  NumerableIcon& operator=(const NumerableIcon&) = delete;

private:  friend class NumerableIcon_Class;
  static CppClassType numerableicon_class_;

protected:
  explicit NumerableIcon(const Glib::ConstructParams& construct_params);
  explicit NumerableIcon(GtkNumerableIcon* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  NumerableIcon(NumerableIcon&& src) noexcept;
  NumerableIcon& operator=(NumerableIcon&& src) noexcept;

  ~NumerableIcon() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkNumerableIcon*       gobj()       { return reinterpret_cast<GtkNumerableIcon*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkNumerableIcon* gobj() const { return reinterpret_cast<GtkNumerableIcon*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkNumerableIcon* gobj_copy();

private:


protected:
    explicit NumerableIcon(const Glib::RefPtr<Gio::Icon>& icon);


    explicit NumerableIcon(const Glib::RefPtr<Gio::Icon>& icon, const Glib::RefPtr<StyleContext>& style_context);


public:
  
  static Glib::RefPtr<NumerableIcon> create(const Glib::RefPtr<Gio::Icon>& icon);


  static Glib::RefPtr<NumerableIcon> create(const Glib::RefPtr<Gio::Icon>& icon, const Glib::RefPtr<StyleContext>& context);


  /** Returns the Gtk::StyleContext used by the icon for theming,
   * or <tt>nullptr</tt> if there’s none.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @return A Gtk::StyleContext, or <tt>nullptr</tt>.
   * This object is internal to GTK+ and should not be unreffed.
   * Use Glib::object_ref() if you want to keep it around.
   */
  Glib::RefPtr<StyleContext> get_style_context();
  
  /** Returns the Gtk::StyleContext used by the icon for theming,
   * or <tt>nullptr</tt> if there’s none.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @return A Gtk::StyleContext, or <tt>nullptr</tt>.
   * This object is internal to GTK+ and should not be unreffed.
   * Use Glib::object_ref() if you want to keep it around.
   */
  Glib::RefPtr<const StyleContext> get_style_context() const;

  
  /** Updates the icon to fetch theme information from the
   * given Gtk::StyleContext.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @param style A Gtk::StyleContext.
   */
  void set_style_context(const Glib::RefPtr<StyleContext>& style);

  
  /** Returns the value currently displayed by @a self.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @return The currently displayed value.
   */
  int get_count() const;
  
  /** Sets the currently displayed value of @a self to @a count.
   * 
   * The numeric value is always clamped to make it two digits, i.e.
   * between -99 and 99. Setting a count of zero removes the emblem.
   * If this method is called, and a label was already set on the icon,
   * it will automatically be reset to <tt>nullptr</tt> before rendering the number,
   * i.e. the last method called between set_count()
   * and set_label() has always priority.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @param count A number between -99 and 99.
   */
  void set_count(int count);

  
  /** Returns the currently displayed label of the icon, or <tt>nullptr</tt>.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @return The currently displayed label.
   */
  Glib::ustring get_label() const;
  
  /** Sets the currently displayed value of @a self to the string
   * in @a label. Setting an empty label removes the emblem.
   * 
   * Note that this is meant for displaying short labels, such as
   * roman numbers, or single letters. For roman numbers, consider
   * using the Unicode characters U+2160 - U+217F. Strings longer
   * than two characters will likely not be rendered very well.
   * 
   * If this method is called, and a number was already set on the
   * icon, it will automatically be reset to zero before rendering
   * the label, i.e. the last method called between
   * set_label() and set_count()
   * has always priority.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @param label A short label, or <tt>nullptr</tt>.
   */
  void set_label(const Glib::ustring& label);

  
  /** Updates the icon to use @a icon as the base background image.
   * If @a icon is <tt>nullptr</tt>, @a self will go back using style information
   * or default theming for its background image.
   * 
   * If this method is called and an icon name was already set as
   * background for the icon, @a icon will be used, i.e. the last method
   * called between set_background_gicon() and
   * set_background_icon_name() has always priority.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @param icon A Gio::Icon, or <tt>nullptr</tt>.
   */
  void set_background_gicon(const Glib::RefPtr<Gio::Icon>& icon);

  
  /** Returns the Gio::Icon that was set as the base background image, or
   * <tt>nullptr</tt> if there’s none. The caller of this function does not own
   * a reference to the returned Gio::Icon.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @return A Gio::Icon, or <tt>nullptr</tt>.
   */
  Glib::RefPtr<Gio::Icon> get_background_gicon();
  
  /** Returns the Gio::Icon that was set as the base background image, or
   * <tt>nullptr</tt> if there’s none. The caller of this function does not own
   * a reference to the returned Gio::Icon.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @return A Gio::Icon, or <tt>nullptr</tt>.
   */
  Glib::RefPtr<const Gio::Icon> get_background_gicon() const;

  
  /** Updates the icon to use the icon named @a icon_name from the
   * current icon theme as the base background image. If @a icon_name
   * is <tt>nullptr</tt>, @a self will go back using style information or default
   * theming for its background image.
   * 
   * If this method is called and a Gio::Icon was already set as
   * background for the icon, @a icon_name will be used, i.e. the
   * last method called between set_background_icon_name()
   * and set_background_gicon() has always priority.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @param icon_name An icon name, or <tt>nullptr</tt>.
   */
  void set_background_icon_name(const Glib::ustring& icon_name);
  
  /** Returns the icon name used as the base background image,
   * or <tt>nullptr</tt> if there’s none.
   * 
   * @newin{3,0}
   * 
   * Deprecated: 3.14
   * 
   * @return An icon name, or <tt>nullptr</tt>.
   */
  Glib::ustring get_background_icon_name() const;

  /** The count of the emblem currently displayed.
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_count() ;

/** The count of the emblem currently displayed.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_count() const;

  /** The label to be displayed over the icon.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_label() ;

/** The label to be displayed over the icon.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_label() const;

  /** The style context to theme the icon appearance.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<StyleContext> > property_style_context() ;

/** The style context to theme the icon appearance.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<StyleContext> > property_style_context() const;

  /** The icon for the number emblem background.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > property_background_icon() ;

/** The icon for the number emblem background.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > property_background_icon() const;

  /** The icon name for the number emblem background.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_background_icon_name() ;

/** The icon name for the number emblem background.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_background_icon_name() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


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
   * @relates Gtk::NumerableIcon
   */
  GTKMM_API
  Glib::RefPtr<Gtk::NumerableIcon> wrap(GtkNumerableIcon* object, bool take_copy = false);
}


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_NUMERABLEICON_H */

