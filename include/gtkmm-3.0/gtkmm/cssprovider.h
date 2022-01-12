// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_CSSPROVIDER_H
#define _GTKMM_CSSPROVIDER_H


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

#include <gtkmm/styleprovider.h>
#include <gtkmm/csssection.h>
#include <glibmm/object.h>
#include <giomm/file.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkCssProvider = struct _GtkCssProvider;
using GtkCssProviderClass = struct _GtkCssProviderClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API CssProvider_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/**  %Exception class for Gtk::CssProvider errors.
 *
 * @newin{3,16}
 */
class GTKMM_API CssProviderError : public Glib::Error
{
public:
  /**  @var Code FAILED
   * Failed.
   * 
   *  @var Code SYNTAX
   * Syntax error.
   * 
   *  @var Code IMPORT
   * Import error.
   * 
   *  @var Code NAME
   * Name error.
   * 
   *  @var Code DEPRECATED
   * Deprecation error.
   * 
   *  @var Code UNKNOWN_VALUE
   * Unknown value.
   * 
   *  @enum Code
   * 
   * %Error codes for GTK_CSS_PROVIDER_ERROR.
   */
  enum Code
  {
    FAILED,
    SYNTAX,
    IMPORT,
    NAME,
    DEPRECATED,
    UNKNOWN_VALUE
  };

  CssProviderError(Code error_code, const Glib::ustring& error_message);
  explicit CssProviderError(GError* gobject);
  Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  static void throw_func(GError* gobject);

  friend GTKMM_API void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};

} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::CssProviderError::Code> : public Glib::Value_Enum<Gtk::CssProviderError::Code>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** CSS-like styling for widgets, implementing the StyleProvider base class.
 *
 * It is able to parse <a href="http://www.w3.org/TR/CSS2">CSS</a>-like
 * input in order to style widgets.
 *
 * An application can cause GTK+ to parse a specific CSS style sheet by
 * calling load_from_file() and adding the provider with
 * StyleContext::add_provider() or StyleContext::add_provider_for_screen().
 * In addition, certain files will be read when GTK+ is initialized.
 * See the <a href="http://library.gnome.org/devel/gtk3/unstable/GtkCssProvider.html#GtkCssProvider.description">GtkCssProvider documentation</a> for details of these default files and details of the stylesheets.
 *
 * @newin{3,0}
 */

class GTKMM_API CssProvider
  : public Glib::Object,
    public StyleProvider
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = CssProvider;
  using CppClassType = CssProvider_Class;
  using BaseObjectType = GtkCssProvider;
  using BaseClassType = GtkCssProviderClass;

  // noncopyable
  CssProvider(const CssProvider&) = delete;
  CssProvider& operator=(const CssProvider&) = delete;

private:  friend class CssProvider_Class;
  static CppClassType cssprovider_class_;

protected:
  explicit CssProvider(const Glib::ConstructParams& construct_params);
  explicit CssProvider(GtkCssProvider* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  CssProvider(CssProvider&& src) noexcept;
  CssProvider& operator=(CssProvider&& src) noexcept;

  ~CssProvider() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkCssProvider*       gobj()       { return reinterpret_cast<GtkCssProvider*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkCssProvider* gobj() const { return reinterpret_cast<GtkCssProvider*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkCssProvider* gobj_copy();

private:

  
protected:
  CssProvider();
  

public:
  
  static Glib::RefPtr<CssProvider> create();


  /** Converts the @a provider into a string representation in CSS
   * format.
   * 
   * Using load_from_data() with the return value
   * from this function on a new provider created with
   * new() will basically create a duplicate of
   * this @a provider.
   * 
   * @newin{3,2}
   * 
   * @return A new string representing the @a provider.
   */
  Glib::ustring to_string() const;

  // TODO: Remove the bool return value when we can break ABI.
  // The return value has been deprecated in the C API anyway.
  /** Loads @a data into this css provider, making it clear any previously loaded information.
   *
   * @param data CSS data loaded in memory.
   * @result True if the data could be loaded, though an exception will always be thrown if this would return false.
   * @throws CssProviderError
   */
  bool load_from_data(const std::string& data);
  

  /** Loads the data contained in @a file into @a css_provider, making it
   * clear any previously loaded information.
   * 
   * @param file Gio::File pointing to a file to load.
   * @return <tt>true</tt>. The return value is deprecated and <tt>false</tt> will only be
   * returned for backwards compatibility reasons if an @a error is not 
   * <tt>nullptr</tt> and a loading error occurred. To track errors while loading
   * CSS, connect to the Gtk::CssProvider::signal_parsing_error() signal.
   * 
   * @throws Glib::Error
   */
  bool load_from_file(const Glib::RefPtr<const Gio::File>& file);
  
  /** Loads the data contained in @a path into @a css_provider, making it clear
   * any previously loaded information.
   * 
   * @param path The path of a filename to load, in the GLib filename encoding.
   * @return <tt>true</tt>. The return value is deprecated and <tt>false</tt> will only be
   * returned for backwards compatibility reasons if an @a error is not 
   * <tt>nullptr</tt> and a loading error occurred. To track errors while loading
   * CSS, connect to the Gtk::CssProvider::signal_parsing_error() signal.
   * 
   * @throws Glib::Error
   */
  bool load_from_path(const std::string& path);
  
  /** Loads the data contained in the resource at @a resource_path into
   * the Gtk::CssProvider, clearing any previously loaded information.
   * 
   * To track errors while loading CSS, connect to the
   * Gtk::CssProvider::signal_parsing_error() signal.
   * 
   * @newin{3,16}
   * 
   * @param resource_path A Gio::Resource resource path.
   */
  void load_from_resource(const std::string& resource_path);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the provider containing the style settings used as a
   * fallback for all widgets.
   * 
   * Deprecated: 3.24: Use new() instead.
   * 
   * @deprecated Use create() instead.
   * 
   * @return The provider used for fallback styling.
   * This memory is owned by GTK+, and you must not free it.
   */
  static Glib::RefPtr<CssProvider> get_default();
#endif // GTKMM_DISABLE_DEPRECATED


  /** Loads a theme from the usual theme paths
   * 
   * @param name A theme name.
   * @param variant Variant to load, for example, "dark", or
   * <tt>nullptr</tt> for the default.
   * @return A Gtk::CssProvider with the theme loaded.
   * This memory is owned by GTK+, and you must not free it.
   */
  static Glib::RefPtr<CssProvider> get_named(const Glib::ustring& name, const Glib::ustring& variant);

  //TODO: When we can break ABI, remove no_default_handler and
  // uncomment CssProvider_Class::parsing_error_callback() in the .ccg file.
 

  /** @param error The parsing error. The referenced object may belong to a subclass of Glib::Error, such as Gtk::CssProviderError.
   *
   * @par Slot Prototype:
   * <tt>void on_my_%parsing_error(const Glib::RefPtr<const CssSection>& section, const Glib::Error& error)</tt>
   *
   * Flags: Run Last
   *
   * Signals that a parsing error occurred. the @a path, @a line and @a position
   * describe the actual location of the error as accurately as possible.
   * 
   * Parsing errors are never fatal, so the parsing will resume after
   * the error. Errors may however cause parts of the given
   * data or even all of it to not be parsed at all. So it is a useful idea
   * to check that the parsing succeeds by connecting to this signal.
   * 
   * Note that this signal may be emitted at any time as the css provider
   * may opt to defer parsing parts or all of the input to a later time
   * than when a loading function was called.
   * 
   * @param section Section the error happened in.
   */

  Glib::SignalProxy< void,const Glib::RefPtr<const CssSection>&,const Glib::Error& > signal_parsing_error();


  //There are no properties.


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
   * @relates Gtk::CssProvider
   */
  GTKMM_API
  Glib::RefPtr<Gtk::CssProvider> wrap(GtkCssProvider* object, bool take_copy = false);
}


#endif /* _GTKMM_CSSPROVIDER_H */

