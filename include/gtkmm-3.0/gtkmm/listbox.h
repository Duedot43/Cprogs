// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_LISTBOX_H
#define _GTKMM_LISTBOX_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2013 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkmm/container.h>
#include <gtkmm/listboxrow.h>
#include <gtkmm/enums.h>
#include <giomm/liststore.h>
#include <glibmm/exceptionhandler.h>
#include <vector>
#include <utility> // std::forward


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkListBox = struct _GtkListBox;
using GtkListBoxClass = struct _GtkListBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API ListBox_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
class GTKMM_API Adjustment;

/** A ListBox is a vertical container that contains ListBoxRow
 * children. These rows can by dynamically sorted and filtered, and
 * headers can be added dynamically depending on the row content.
 * It also allows keyboard and mouse navigation and selection like
 * a typical list.
 *
 * Using ListBox is often an alternative to TreeView, especially
 * when the list contents have a more complicated layout than what is allowed
 * by a CellRenderer, or when the contents are interactive (e.g. contain a
 * button).
 *
 * Although a ListBox must have only ListBoxRow children you can
 * add any kind of widget to it via Container::add(), and a ListBoxRow
 * widget will automatically be inserted between the list and the widget.
 *
 * Also see FlowBox.
 *
 * A ListBox looks like this:
 * @image html listbox1.png
 *
 * @ingroup Widgets
 * @ingroup Containers
 *
 * @newin{3,10}
 */

class GTKMM_API ListBox : public Container
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ListBox CppObjectType;
  typedef ListBox_Class CppClassType;
  typedef GtkListBox BaseObjectType;
  typedef GtkListBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ListBox(ListBox&& src) noexcept;
  ListBox& operator=(ListBox&& src) noexcept;

  // noncopyable
  ListBox(const ListBox&) = delete;
  ListBox& operator=(const ListBox&) = delete;

  ~ListBox() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API ListBox_Class;
  static CppClassType listbox_class_;

protected:
  explicit ListBox(const Glib::ConstructParams& construct_params);
  explicit ListBox(GtkListBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkListBox*       gobj()       { return reinterpret_cast<GtkListBox*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkListBox* gobj() const { return reinterpret_cast<GtkListBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_row_selected().
  virtual void on_row_selected(ListBoxRow* row);
  /// This is a default handler for the signal signal_row_activated().
  virtual void on_row_activated(ListBoxRow* row);


private:

public:
  ListBox();

  /** For instance: bool on_filter(ListBoxRow* row);
   *
   * Will be called whenever the row changes or is added and lets you control
   * if the row should be visible or not.
   *
   * @param row The row that may be filtered
   * @returns <tt>true</tt> if the row should be visible, <tt>false</tt> otherwise
   *
   * @newin{3,10}
   */
  typedef sigc::slot<bool, ListBoxRow*> SlotFilter;

  /** For instance: int on_sort(ListBoxRow* row1, ListBoxRow* row2);
   *
   * Compare two rows to determine which should be first.
   *
   * @param row1 The first row
   * @param row2 The second row
   * @returns < 0 if @a row1 should be before @a row2, 0 if they are
   *          equal and > 0 otherwise
   *
   * @newin{3,10}
   */
  typedef sigc::slot<int, ListBoxRow*, ListBoxRow*> SlotSort;

  /** For instance: void on_update_header(ListBoxRow* row, ListBoxRow* before);
   *
   * Whenever @a row changes or which row is before @a row changes this
   * is called, which lets you update the header on @a row. You may
   * remove or set a new one via ListBoxRow::set_header() or
   * just change the state of the current header widget.
   *
   * @param row The row to update
   * @param before The row before @a row, or <tt>0</tt> if it is first
   *
   * @newin{3,10}
   */
  typedef sigc::slot<void, ListBoxRow*, ListBoxRow*> SlotUpdateHeader;

  
  /** Prepend a widget to the list. If a sort function is set, the widget will
   * actually be inserted at the calculated position and this function has the
   * same effect of Gtk::Container::add().
   * 
   * @newin{3,10}
   * 
   * @param child The Gtk::Widget to add.
   */
  void prepend(Widget& child);
  
  /** Insert the @a child into the @a box at @a position. If a sort function is
   * set, the widget will actually be inserted at the calculated position and
   * this function has the same effect of Gtk::Container::add().
   * 
   * If @a position is -1, or larger than the total number of items in the
   *  @a box, then the @a child will be appended to the end.
   * 
   * @newin{3,10}
   * 
   * @param child The Gtk::Widget to add.
   * @param position The position to insert @a child in.
   */
  void insert(Widget& child, int position);

  //We added this in the gtkmm API, because this is clearer than the magic -1 value for position with insert().
  //The C API developers disagree: https://bugzilla.gnome.org/show_bug.cgi?id=705558#c12
  /** Append a widget to the list. If a sort function is set, the widget will
   * actually be inserted at the calculated position and this function has the
   * same effect of Gtk::Container::add().
   *
   * @newin{3,10}
   *
   * @param child The Gtk::Widget to add.
   */
  void append(Widget& child);

  
  /** Gets the selected row.
   * 
   * Note that the box may allow multiple selection, in which
   * case you should use selected_foreach() to
   * find all selected rows.
   * 
   * @newin{3,10}
   * 
   * @return The selected row.
   */
  ListBoxRow* get_selected_row();
  
  /** Gets the selected row.
   * 
   * Note that the box may allow multiple selection, in which
   * case you should use selected_foreach() to
   * find all selected rows.
   * 
   * @newin{3,10}
   * 
   * @return The selected row.
   */
  const ListBoxRow* get_selected_row() const;
  
  /** Gets the n-th child in the list (not counting headers).
   * If @a _index is negative or larger than the number of items in the
   * list, <tt>nullptr</tt> is returned.
   * 
   * @newin{3,10}
   * 
   * @param index The index of the row.
   * @return The child Gtk::Widget or <tt>nullptr</tt>.
   */
  ListBoxRow* get_row_at_index(int index);
  
  /** Gets the n-th child in the list (not counting headers).
   * If @a _index is negative or larger than the number of items in the
   * list, <tt>nullptr</tt> is returned.
   * 
   * @newin{3,10}
   * 
   * @param index The index of the row.
   * @return The child Gtk::Widget or <tt>nullptr</tt>.
   */
  const ListBoxRow* get_row_at_index(int index) const;
  
  /** Gets the row at the @a y position.
   * 
   * @newin{3,10}
   * 
   * @param y Position.
   * @return The row or <tt>nullptr</tt>
   * in case no row exists for the given y coordinate.
   */
  ListBoxRow* get_row_at_y(int y);
  
  /** Gets the row at the @a y position.
   * 
   * @newin{3,10}
   * 
   * @param y Position.
   * @return The row or <tt>nullptr</tt>
   * in case no row exists for the given y coordinate.
   */
  const ListBoxRow* get_row_at_y(int y) const;
  
  /** Make @a row the currently selected row.
   * 
   * @newin{3,10}
   * 
   * @param row The row to select or <tt>nullptr</tt>.
   */
  void select_row(ListBoxRow& row);

  /** Unselects the currently selected row, if any.
   *
   * @newin{3,10}
   */
  void unselect_row();

  
  /** Sets the placeholder widget that is shown in the list when
   * it doesn't display any visible children.
   * 
   * @newin{3,10}
   * 
   * @param placeholder A Gtk::Widget or <tt>nullptr</tt>.
   */
  void set_placeholder(Widget& placeholder);

  /** Removes the placeholder widget, if any.
   *
   * @newin{3,10}
   */
  void unset_placeholder();

  
  /** Sets the adjustment (if any) that the widget uses to
   * for vertical scrolling. For instance, this is used
   * to get the page size for PageUp/Down key handling.
   * 
   * In the normal case when the @a box is packed inside
   * a Gtk::ScrolledWindow the adjustment from that will
   * be picked up automatically, so there is no need
   * to manually do that.
   * 
   * @newin{3,10}
   * 
   * @param adjustment The adjustment, or <tt>nullptr</tt>.
   */
  void set_adjustment(const Glib::RefPtr<Adjustment>& adjustment);
  
  /** Gets the adjustment (if any) that the widget uses to
   * for vertical scrolling.
   * 
   * @newin{3,10}
   * 
   * @return The adjustment.
   */
  Glib::RefPtr<Adjustment> get_adjustment();
  
  /** Gets the adjustment (if any) that the widget uses to
   * for vertical scrolling.
   * 
   * @newin{3,10}
   * 
   * @return The adjustment.
   */
  Glib::RefPtr<const Adjustment> get_adjustment() const;

  /** For instance,
   * void on_foreach(ListBoxRow* row);
   */
  typedef sigc::slot<void, ListBoxRow*> SlotForeach;

  void selected_foreach(const SlotForeach& slot);
  

  /** Creates a list of all selected children.
   * 
   * @newin{3,14}
   * 
   * @return A List containing the Gtk::Widget for each selected child.
   */
  std::vector<ListBoxRow*> get_selected_rows();

 
  /** Creates a list of all selected children.
   * 
   * @newin{3,14}
   * 
   * @return A List containing the Gtk::Widget for each selected child.
   */
  std::vector<ListBoxRow*> get_selected_rows() const;


  /** Unselects a single row of @a box, if the selection mode allows it.
   * 
   * @newin{3,14}
   * 
   * @param row The row to unselected.
   */
  void unselect_row(ListBoxRow* row);
  
  /** Select all children of @a box, if the selection mode allows it.
   * 
   * @newin{3,14}
   */
  void select_all();
  
  /** Unselect all children of @a box, if the selection mode allows it.
   * 
   * @newin{3,14}
   */
  void unselect_all();


  /** Sets how selection works in the listbox.
   * See Gtk::SelectionMode for details.
   * 
   * @newin{3,10}
   * 
   * @param mode The Gtk::SelectionMode.
   */
  void set_selection_mode(SelectionMode mode);
  
  /** Gets the selection mode of the listbox.
   * 
   * @newin{3,10}
   * 
   * @return A Gtk::SelectionMode.
   */
  SelectionMode get_selection_mode() const;

  /** Sets a filter function.
   *
   * By setting a filter function on the ListBox one can decide dynamically which
   * of the rows to show. For instance, to implement a search function on a list that
   * filters the original list to only show the matching rows.
   *
   * The @a slot will be called for each row after the call, and it will
   * continue to be called each time a row changes (via ListBoxRow::changed()) or
   * when invalidate_filter() is called.
   *
   * @param slot Callback that lets you filter which rows to show
   * @newin{3,10}
   */
  void set_filter_func(const SlotFilter& slot);
  

  /** Removes the filter function, if any.
   * @newin{3,10}
   */
  void unset_filter_func();

  /** Sets a sort function.
   *
   * By setting a sort function on the ListBox one can dynamically reorder the rows
   * of the list, based on the contents of the rows.
   *
   * The @a slot will be called for each row after the call, and will continue to
   * be called each time a row changes (via ListBoxRow::changed()) and when
   * invalidate_sort() is called.
   *
   * @param slot The sort function.
   * @newin{3,10}
   */
  void set_sort_func(const SlotSort& slot);
  

  /** Removes the sort function, if any.
   * @newin{3,10}
   */
  void unset_sort_func();

  /** Sets a header function.
   *
   * By setting a header function on the ListBox one can dynamically add headers
   * in front of rows, depending on the contents of the row and its position in the list.
   * For instance, one could use it to add headers in front of the first item of a
   * new kind, in a list sorted by the kind.
   *
   * The @a slot can look at the current header widget using ListBoxRow::get_header()
   * and either update the state of the widget as needed, or set a new one using
   * ListBoxRow::set_header(). If no header is needed, use ListBoxRow::unset_header().
   *
   * Note that you may get many calls to this @a slot for a particular row when e.g.
   * changing things that don't affect the header. In this case it is important for performance
   * to not blindly replace an exisiting header with an identical one.
   *
   * The @a slot function will be called for each row after the call, and it will
   * continue to be called each time a row changes (via ListBoxRow::changed()) and when
   * the row before changes (either by ListBoxRow::changed() on the previous row, or when
   * the previous row becomes a different row). It is also called for all rows when
   * invalidate_headers() is called.
   *
   * @param slot Callback that lets you add row headers
   * @newin{3,10}
   */
  void set_header_func(const SlotUpdateHeader& slot);
  

  /** Removes the header function, if any.
   * @newin{3,10}
   */
  void unset_header_func();

  
  /** Update the filtering for all rows. Call this when result
   * of the filter function on the @a box is changed due
   * to an external factor. For instance, this would be used
   * if the filter function just looked for a specific search
   * string and the entry with the search string has changed.
   * 
   * @newin{3,10}
   */
  void invalidate_filter();
  
  /** Update the sorting for all rows. Call this when result
   * of the sort function on the @a box is changed due
   * to an external factor.
   * 
   * @newin{3,10}
   */
  void invalidate_sort();
  
  /** Update the separators for all rows. Call this when result
   * of the header function on the @a box is changed due
   * to an external factor.
   * 
   * @newin{3,10}
   */
  void invalidate_headers();
  
  /** If @a single is <tt>true</tt>, rows will be activated when you click on them,
   * otherwise you need to double-click.
   * 
   * @newin{3,10}
   * 
   * @param single A boolean.
   */
  void set_activate_on_single_click(bool single =  true);
  
  /** Returns whether rows activate on single clicks.
   * 
   * @newin{3,10}
   * 
   * @return <tt>true</tt> if rows are activated on single click, <tt>false</tt> otherwise.
   */
  bool get_activate_on_single_click() const;
  
  /** If a row has previously been highlighted via drag_highlight_row()
   * it will have the highlight removed.
   * 
   * @newin{3,10}
   */
  void drag_unhighlight_row();
  
  /** This is a helper function for implementing DnD onto a Gtk::ListBox.
   * The passed in @a row will be highlighted via gtk_drag_highlight(),
   * and any previously highlighted row will be unhighlighted.
   * 
   * The row will also be unhighlighted when the widget gets
   * a drag leave event.
   * 
   * @newin{3,10}
   * 
   * @param row A Gtk::ListBoxRow.
   */
  void drag_highlight_row(ListBoxRow& row);

  /** For instance:
   * Gtk::Widget* on_create_widget(const Glib::RefPtr<T_item>& item);
   *
   * Called for list boxes that are bound to a Gio::ListModel with bind_model()
   * or bind_list_store() for each item that gets added to the model.
   *
   * Versions of GTK+ prior to 3.18 called show_all() on the rows
   * created by the SlotCreateWidget, but this forced all widgets
   * inside the row to be shown, and is no longer the case. Applications should
   * be updated to show the desired row widgets.
   *
   * @newin{3,22}
   *
   * @tparam T_item Base class of the items in the Gio::ListModel. All items must
   *                be of type T_item or a type derived from T_item.
   *                T_item must be Glib::Object or a type derived from Glib::Object.
   * @param item The item from the model for which to create a widget.
   * @eturn A Gtk::Widget that represents @a item.
   */
  template <typename T_item>
  using SlotCreateWidget = sigc::slot<Gtk::Widget*, const Glib::RefPtr<T_item>&>;

  /** Binds a Gio::ListModel.
   *
   * If this ListBox was already bound to a model, that previous binding is
   * destroyed.
   *
   * The contents of the ListBox are cleared and then filled with widgets that
   * represent items from @a model. The ListBox is updated whenever @a model changes.
   * If @a model is an empty Glib::RefPtr, the ListBox is left empty.
   *
   * It is undefined to add or remove widgets directly (for example, with
   * insert() or Gtk::Container::add()) while the ListBox is bound to a model.
   *
   * Note that using a model is incompatible with the filtering and sorting
   * functionality in ListBox. When using a model, filtering and sorting
   * should be implemented by the model.
   *
   * @newin{3,22}
   *
   * @param model The Gio::ListModel to be bound.
   * @param slot_create_widget A slot that creates widgets for items.
   *
   * @see bind_list_store()
   */
  void bind_model(const Glib::RefPtr<Gio::ListModel>& model,
    const SlotCreateWidget<Glib::Object>& slot_create_widget);
  

  /** Binds a Gio::ListStore<>.
   *
   * If this ListBox was already bound to a Gio::ListModel, that previous binding is
   * destroyed. (Gio::ListStore is a Gio::ListModel.)
   *
   * The contents of the ListBox are cleared and then filled with widgets that
   * represent items from @a store. The ListBox is updated whenever @a store changes.
   * If @a store is an empty Glib::RefPtr, the ListBox is left empty.
   *
   * It is undefined to add or remove widgets directly (for example, with
   * insert() or Gtk::Container::add()) while the ListBox is bound to a model.
   *
   * Note that using a model is incompatible with the filtering and sorting
   * functionality in ListBox. When using a model, filtering and sorting
   * should be implemented by the model.
   *
   * @newin{3,22}
   *
   * @tparam T_item Base class of the items in the Gio::ListStore. All items must
   *                be of type T_item or a type derived from T_item.
   *                T_item must be Glib::Object or a type derived from Glib::Object.
   * @tparam T_slot SlotCreateWidget<T_item> or a type that can be converted
   *                to SlotCreateWidget<T_item>.
   * @param store The Gio::ListStore<> to be bound.
   * @param slot_create_widget A slot that creates widgets for items.
   */
  template <typename T_item, typename T_slot>
  void bind_list_store(const Glib::RefPtr<Gio::ListStore<T_item>>& store,
    T_slot&& slot_create_widget);

  /** The selection mode.
   *
   * Default value: Gtk::SELECTION_SINGLE
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SelectionMode > property_selection_mode() ;

/** The selection mode.
   *
   * Default value: Gtk::SELECTION_SINGLE
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SelectionMode > property_selection_mode() const;

  /** Activate row on a single click.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_activate_on_single_click() ;

/** Activate row on a single click.
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_activate_on_single_click() const;


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%row_selected(ListBoxRow* row)</tt>
   *
   * Flags: Run Last
   *
   * The signal_row_selected() signal is emitted when a new row is selected, or
   * (with a <tt>nullptr</tt> @a row) when the selection is cleared.
   * 
   * When the @a box is using Gtk::SELECTION_MULTIPLE, this signal will not
   * give you the full picture of selection changes, and you should use
   * the Gtk::ListBox::signal_selected_rows_changed() signal instead.
   * 
   * @newin{3,10}
   * 
   * @param row The selected row.
   */

  Glib::SignalProxy< void,ListBoxRow* > signal_row_selected();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%row_activated(ListBoxRow* row)</tt>
   *
   * Flags: Run Last
   *
   * The signal_row_activated() signal is emitted when a row has been activated by the user.
   * 
   * @newin{3,10}
   * 
   * @param row The activated row.
   */

  Glib::SignalProxy< void,ListBoxRow* > signal_row_activated();


  //TODO: Remove no_default_handler when we can break ABI.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%selected_rows_changed()</tt>
   *
   * Flags: Run First
   *
   * The signal_selected_rows_changed() signal is emitted when the
   * set of selected rows changes.
   * 
   * @newin{3,14}
   */

  Glib::SignalProxy< void > signal_selected_rows_changed();


   // Action signals

private:
  template <typename T_item>
  static GtkWidget* proxy_bind_list_store_create_widget_callback(void* item, void* data);


};

#ifndef DOXYGEN_SHOULD_SKIP_THIS

template <typename T_item, typename T_slot>
void ListBox::bind_list_store(const Glib::RefPtr<Gio::ListStore<T_item>>& store,
  T_slot&& slot_create_widget)
{
  // Create a copy of the slot.
  // It will be deleted by Glib::destroy_notify_delete<SlotCreateWidget>.
  auto slot_copy = new SlotCreateWidget<T_item>(std::forward<T_slot>(slot_create_widget));

  gtk_list_box_bind_model(gobj(),
    Glib::unwrap(Glib::RefPtr<Gio::ListModel>::cast_static(store)),
    &proxy_bind_list_store_create_widget_callback<T_item>,
    slot_copy, &Glib::destroy_notify_delete<SlotCreateWidget<T_item>>);
}

template <typename T_item>
GtkWidget* ListBox::proxy_bind_list_store_create_widget_callback(void* item, void* data)
{
  auto& slot = *static_cast<SlotCreateWidget<T_item>*>(data);
  auto cobject = static_cast<typename T_item::BaseObjectType*>(item);

  try
  {
    // cast_dynamic is necessary if T_item is a user-defined type, such as
    // class MyObject : public Glib::Object
    // take_copy is true here, because wrap() returns a Glib::RefPtr<>.
    // cobject will be unreferenced when the RefPtr is deleted.
    Gtk::Widget* widget = slot(Glib::RefPtr<T_item>::cast_dynamic(Glib::wrap(cobject, true)));
    if (widget)
      return widget->gobj();
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
  return nullptr;
}

#endif // DOXYGEN_SHOULD_SKIP_THIS

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ListBox
   */
  GTKMM_API
  Gtk::ListBox* wrap(GtkListBox* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_LISTBOX_H */

