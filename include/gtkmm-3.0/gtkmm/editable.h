// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_EDITABLE_H
#define _GTKMM_EDITABLE_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2002 The gtkmm Development Team
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


#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkEditableInterface GtkEditableInterface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkEditable = struct _GtkEditable;
using GtkEditableClass = struct _GtkEditableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Editable_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Base class for text-editing widgets.
 *
 * The Gtk::Editable class is a base class for widgets for editing text,
 * such as Gtk::Entry. It cannot be instantiated by itself. The editable
 * class contains functions for generically manipulating an editable widget,
 * a large number of action signals used for key bindings, and several
 * signals that an application can connect to to modify the behavior of a
 * widget.
 *
 */

class GTKMM_API Editable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Editable;
  using CppClassType = Editable_Class;
  using BaseObjectType = GtkEditable;
  using BaseClassType = GtkEditableInterface;

  // noncopyable
  Editable(const Editable&) = delete;
  Editable& operator=(const Editable&) = delete;

private:
  friend class Editable_Class;
  static CppClassType editable_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Editable();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit Editable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit Editable(GtkEditable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Editable(Editable&& src) noexcept;
  Editable& operator=(Editable&& src) noexcept;

  ~Editable() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkEditable*       gobj()       { return reinterpret_cast<GtkEditable*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkEditable* gobj() const { return reinterpret_cast<GtkEditable*>(gobject_); }

private:


public:
  
  /** Removes the contents of the currently selected content in the editable and
   * puts it on the clipboard.
   */
  void cut_clipboard();
  
  /** Copies the contents of the currently selected content in the editable and
   * puts it on the clipboard.
   */
  void copy_clipboard();
  
  /** Pastes the content of the clipboard to the current position of the
   * cursor in the editable.
   */
  void paste_clipboard();
  
  /** Deletes the currently selected text of the editable.
   * This call doesn’t do anything if there is no selected text.
   */
  void delete_selection();
  
  /** Determines if the user can edit the text in the editable
   * widget or not.
   * 
   * @param is_editable <tt>true</tt> if the user is allowed to edit the text
   * in the widget.
   */
  void set_editable(bool is_editable =  true);
  
  /** Retrieves whether @a editable is editable. See
   * set_editable().
   * 
   * @return <tt>true</tt> if @a editable is editable.
   */
  bool get_editable() const;

  
  /** Inserts @a new_text_length bytes of @a new_text into the contents of the
   * widget, at position @a position.
   * 
   * Note that the position is in characters, not in bytes. 
   * The function updates @a position to point after the newly inserted text.
   * 
   * @param new_text The text to append.
   * @param new_text_length The length of the text in bytes, or -1.
   * @param position Location of the position text will be inserted at.
   */
  void insert_text(const Glib::ustring& new_text, int new_text_length, int& position);
  
  /** Deletes a sequence of characters. The characters that are deleted are 
   * those characters at positions from @a start_pos up to, but not including 
   *  @a end_pos. If @a end_pos is negative, then the characters deleted
   * are those from @a start_pos to the end of the text.
   * 
   * Note that the positions are specified in characters, not bytes.
   * 
   * @param start_pos Start position.
   * @param end_pos End position.
   */
  void delete_text(int start_pos, int end_pos);

  
  /** Retrieves a sequence of characters. The characters that are retrieved 
   * are those characters at positions from @a start_pos up to, but not 
   * including @a end_pos. If @a end_pos is negative, then the characters
   * retrieved are those characters from @a start_pos to the end of the text.
   * 
   * Note that positions are specified in characters, not bytes.
   * 
   * @param start_pos Start of text.
   * @param end_pos End of text.
   * @return A pointer to the contents of the widget as a
   * string. This string is allocated by the Gtk::Editable
   * implementation and should be freed by the caller.
   */
  Glib::ustring get_chars(int start_pos, int end_pos) const;

  
  /** Selects a region of text. The characters that are selected are 
   * those characters at positions from @a start_pos up to, but not 
   * including @a end_pos. If @a end_pos is negative, then the
   * characters selected are those characters from @a start_pos to 
   * the end of the text.
   * 
   * Note that positions are specified in characters, not bytes.
   * 
   * @param start_pos Start of region.
   * @param end_pos End of region.
   */
  void select_region(int start_pos, int end_pos);
  
  /** Retrieves the selection bound of the editable. start_pos will be filled
   * with the start of the selection and @a end_pos with end. If no text was
   * selected both will be identical and <tt>false</tt> will be returned.
   * 
   * Note that positions are specified in characters, not bytes.
   * 
   * @param start_pos Location to store the starting position, or <tt>nullptr</tt>.
   * @param end_pos Location to store the end position, or <tt>nullptr</tt>.
   * @return <tt>true</tt> if an area is selected, <tt>false</tt> otherwise.
   */
  bool get_selection_bounds(int& start_pos, int& end_pos) const;

  
  /** Sets the cursor position in the editable to the given value.
   * 
   * The cursor is displayed before the character with the given (base 0) 
   * index in the contents of the editable. The value must be less than or 
   * equal to the number of characters in the editable. A value of -1 
   * indicates that the position should be set after the last character 
   * of the editable. Note that @a position is in characters, not in bytes.
   * 
   * @param position The position of the cursor.
   */
  void set_position(int position);
  
  /** Retrieves the current position of the cursor relative to the start
   * of the content of the editable. 
   * 
   * Note that this position is in characters, not in bytes.
   * 
   * @return The cursor position.
   */
  int get_position() const;

  
  Glib::SignalProxy< void,const Glib::ustring&,int* > signal_insert_text();

    
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%delete_text(int start_pos, int end_pos)</tt>
   *
   * Flags: Run Last
   *
   * This signal is emitted when text is deleted from
   * the widget by the user. The default handler for
   * this signal will normally be responsible for deleting
   * the text, so by connecting to this signal and then
   * stopping the signal with Glib::signal_stop_emission(), it
   * is possible to modify the range of deleted text, or
   * prevent it from being deleted entirely. The @a start_pos
   * and @a end_pos parameters are interpreted as for
   * Gtk::Editable::delete_text().
   * 
   * @param start_pos The starting position.
   * @param end_pos The end position.
   */

  Glib::SignalProxy< void,int,int > signal_delete_text();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%changed()</tt>
   *
   * Flags: Run Last
   *
   * The signal_changed() signal is emitted at the end of a single
   * user-visible operation on the contents of the Gtk::Editable.
   * 
   * E.g., a paste operation that replaces the contents of the
   * selection will cause only one signal emission (even though it
   * is implemented by first deleting the selection, then inserting
   * the new content, and may cause multiple ::notify::text signals
   * to be emitted).
   */

  Glib::SignalProxy< void > signal_changed();


protected:


    virtual void delete_text_vfunc(int start_pos, int end_pos);


    virtual Glib::ustring get_chars_vfunc(int start_pos, int end_pos) const;


    virtual void select_region_vfunc(int start_pos, int end_pos);

    virtual bool get_selection_bounds_vfunc(int& start_pos, int& end_pos) const;

    virtual void set_position_vfunc(int position);

    virtual int get_position_vfunc() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
virtual void insert_text_vfunc(const Glib::ustring& text, int& position);


  //Default Signal Handlers::
  /// This is a default handler for the signal signal_insert_text().
  virtual void on_insert_text(const Glib::ustring& text, int* position);
  /// This is a default handler for the signal signal_delete_text().
  virtual void on_delete_text(int start_pos, int end_pos);
  /// This is a default handler for the signal signal_changed().
  virtual void on_changed();


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
   * @relates Gtk::Editable
   */
  GTKMM_API
  Glib::RefPtr<Gtk::Editable> wrap(GtkEditable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_EDITABLE_H */

