// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_FILEFILTER_H
#define _GTKMM_FILEFILTER_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2003 The gtkmm Development Team
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


#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkFileFilter = struct _GtkFileFilter;
using GtkFileFilterClass = struct _GtkFileFilterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API FileFilter_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var FileFilterFlags FILE_FILTER_FILENAME
 * The filename of the file being tested.
 * 
 *  @var FileFilterFlags FILE_FILTER_URI
 * The URI for the file being tested.
 * 
 *  @var FileFilterFlags FILE_FILTER_DISPLAY_NAME
 * The string that will be used to 
 * display the file in the file chooser.
 * 
 *  @var FileFilterFlags FILE_FILTER_MIME_TYPE
 * The mime type of the file.
 * 
 *  @enum FileFilterFlags
 * 
 * These flags indicate what parts of a Gtk::FileFilterInfo struct
 * are filled or need to be filled.
 *
 * @ingroup gtkmmEnums
 * @par Bitwise operators:
 * <tt>%FileFilterFlags operator|(FileFilterFlags, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags operator&(FileFilterFlags, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags operator^(FileFilterFlags, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags operator~(FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags& operator|=(FileFilterFlags&, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags& operator&=(FileFilterFlags&, FileFilterFlags)</tt><br>
 * <tt>%FileFilterFlags& operator^=(FileFilterFlags&, FileFilterFlags)</tt><br>
 */
enum FileFilterFlags
{
  FILE_FILTER_FILENAME = 1 << 0,
  FILE_FILTER_URI = 1 << 1,
  FILE_FILTER_DISPLAY_NAME = 1 << 2,
  FILE_FILTER_MIME_TYPE = 1 << 3
};

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator|(FileFilterFlags lhs, FileFilterFlags rhs)
  { return static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator&(FileFilterFlags lhs, FileFilterFlags rhs)
  { return static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator^(FileFilterFlags lhs, FileFilterFlags rhs)
  { return static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags operator~(FileFilterFlags flags)
  { return static_cast<FileFilterFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags& operator|=(FileFilterFlags& lhs, FileFilterFlags rhs)
  { return (lhs = static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags& operator&=(FileFilterFlags& lhs, FileFilterFlags rhs)
  { return (lhs = static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline FileFilterFlags& operator^=(FileFilterFlags& lhs, FileFilterFlags rhs)
  { return (lhs = static_cast<FileFilterFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::FileFilterFlags> : public Glib::Value_Flags<Gtk::FileFilterFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** A filter for selecting a file subset.
 *
 * A Gtk::FileFilter can be used to restrict the files being shown in a Gtk::FileChooser.
 * Files can be filtered based on their name (with add_pattern()),
 * on their MIME type (with add_mime_type()), or by a custom filter
 * function (with add_custom()).
 *
 * Filtering by MIME types handles aliasing and subclassing of MIME types;
 * e.g. a filter for <tt>text/plain</tt> also matches a file with MIME type
 * <tt>application/rtf</tt>, since <tt>application/rtf</tt> is a subclass of
 * <tt>text/plain</tt>. Note that Gtk::FileFilter allows wildcards for the
 * subtype of a MIME type, so you can e.g. filter for <tt>image/ *</tt>.
 *
 * Filters are used by adding them to a Gtk::FileChooser. See Gtk::FileChooser::add_filter().
 */

class GTKMM_API FileFilter : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = FileFilter;
  using CppClassType = FileFilter_Class;
  using BaseObjectType = GtkFileFilter;
  using BaseClassType = GtkFileFilterClass;

  // noncopyable
  FileFilter(const FileFilter&) = delete;
  FileFilter& operator=(const FileFilter&) = delete;

private:  friend class FileFilter_Class;
  static CppClassType filefilter_class_;

protected:
  explicit FileFilter(const Glib::ConstructParams& construct_params);
  explicit FileFilter(GtkFileFilter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FileFilter(FileFilter&& src) noexcept;
  FileFilter& operator=(FileFilter&& src) noexcept;

  ~FileFilter() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkFileFilter*       gobj()       { return reinterpret_cast<GtkFileFilter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkFileFilter* gobj() const { return reinterpret_cast<GtkFileFilter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkFileFilter* gobj_copy();

private:

  
protected:
  FileFilter();

public:
  
  static Glib::RefPtr<FileFilter> create();


  /** Sets the human-readable name of the filter; this is the string
   * that will be displayed in the file selector user interface if
   * there is a selectable list of filters.
   * 
   * @newin{2,4}
   * 
   * @param name The human-readable-name for the filter, or <tt>nullptr</tt>
   * to remove any existing name.
   */
  void set_name(const Glib::ustring& name);
  
  /** Gets the human-readable name for the filter. See set_name().
   * 
   * @newin{2,4}
   * 
   * @return The human-readable name of the filter,
   * or <tt>nullptr</tt>. This value is owned by GTK+ and must not
   * be modified or freed.
   */
  Glib::ustring get_name() const;

  
  /** Adds a rule allowing a given mime type to @a filter.
   * 
   * @newin{2,4}
   * 
   * @param mime_type Name of a MIME type.
   */
  void add_mime_type(const Glib::ustring& mime_type);
  
  /** Adds a rule allowing a shell style glob to a filter.
   * 
   * @newin{2,4}
   * 
   * @param pattern A shell style glob.
   */
  void add_pattern(const Glib::ustring& pattern);
  
  /** Adds a rule allowing image files in the formats supported
   * by GdkPixbuf.
   * 
   * @newin{2,6}
   */
  void add_pixbuf_formats();

  /** Information available per file when implementing a custom filter rule via
   * add_custom().
   */
  class Info
  {
  public:
    /// Flags indicating which of the following fields are filled. See add_custom().
    FileFilterFlags contains;

    /// The filename of the file being tested.
    Glib::ustring filename;

    /// The URI for the file being tested.
    Glib::ustring uri;

    /// The string that will be used to display the file in the Gtk::FileChooser.
    Glib::ustring display_name;

    /// The MIME type of the file.
    Glib::ustring mime_type;
  };

  /** A slot provided to add_custom() that implements a custom filter rule. This
   * will be called with the Info of each file that is available, and it must
   * return a bool indicating whether or not that file should be displayed.
   *
   * For instance:
   * @code
   * bool on_custom(const Gtk::FileFilter::Info& filter_info);
   * @endcode
   */
  typedef sigc::slot<bool, const Info&> SlotCustom;

  /**
   * Adds a rule to a filter that allows files based on a SlotCustom function.
   * The Gtk::FileFilterFlags passed in provide information about what sorts of
   * information the filter function needs; this allows the toolkit to avoid
   * retrieving expensive information when it isn’t needed by the custom filter.
   *
   * @param needed The FileFilterFlags identifying info needed by the @a slot.
   * @param slot A SlotCustom to call for each file to perform the filtering.
   */
  void add_custom(FileFilterFlags needed, const SlotCustom& slot);
  

  /** Gets the fields that need to be filled in for the Gtk::FileFilterInfo
   * passed to filter()
   * 
   * This function will not typically be used by applications; it
   * is intended principally for use in the implementation of
   * Gtk::FileChooser.
   * 
   * @newin{2,4}
   * 
   * @return Bitfield of flags indicating needed fields when
   * calling filter().
   */
  FileFilterFlags get_needed() const;

  // This method is meant for implementors of FileChooser, so we don’t wrap it.
  // (So is get_needed() really, but we had better not remove that in gtkmm-3.)
  

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
   * @relates Gtk::FileFilter
   */
  GTKMM_API
  Glib::RefPtr<Gtk::FileFilter> wrap(GtkFileFilter* object, bool take_copy = false);
}


#endif /* _GTKMM_FILEFILTER_H */

