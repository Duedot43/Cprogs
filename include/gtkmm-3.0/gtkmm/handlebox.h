// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_HANDLEBOX_H
#define _GTKMM_HANDLEBOX_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/eventbox.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkHandleBox = struct _GtkHandleBox;
using GtkHandleBoxClass = struct _GtkHandleBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API HandleBox_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget for detachable window portions.
 *
 * The Gtk::HandleBox widget allows a portion of a window to be "torn off".
 * It displays its child and a handle that the user can drag to tear off a separate window (the float window) containing the child widget. A thin ghost is drawn in the original location of the handlebox. By dragging the separate window back to its original location, it can be reattached.
 * When reattaching, the ghost and float window must be aligned along one of the edges, the snap edge. This can be specified by the application programmer explicitely, or GTK+ will pick a reasonable default based on the handle position.
 * To make detaching and reattaching the handlebox as minimally confusing as possible to the user, it is important to set the snap edge so that the snap edge does not move when the handlebox is deattached.
 * For instance, if the handlebox is packed at the bottom of a VBox, then when the handlebox is detached, the bottom edge of the handlebox's allocation will remain fixed as the height of the handlebox shrinks, so the snap edge should be set to GTK_POS_BOTTOM.
 *
 * @deprecated This is very specialized, lacks features
 * to make it useful and most importantly does not fit well into modern
 * application design. There is no replacement.
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class GTKMM_API HandleBox : public Bin
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef HandleBox CppObjectType;
  typedef HandleBox_Class CppClassType;
  typedef GtkHandleBox BaseObjectType;
  typedef GtkHandleBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  HandleBox(HandleBox&& src) noexcept;
  HandleBox& operator=(HandleBox&& src) noexcept;

  // noncopyable
  HandleBox(const HandleBox&) = delete;
  HandleBox& operator=(const HandleBox&) = delete;

  ~HandleBox() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API HandleBox_Class;
  static CppClassType handlebox_class_;

protected:
  explicit HandleBox(const Glib::ConstructParams& construct_params);
  explicit HandleBox(GtkHandleBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkHandleBox*       gobj()       { return reinterpret_cast<GtkHandleBox*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkHandleBox* gobj() const { return reinterpret_cast<GtkHandleBox*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_child_attached().
  virtual void on_child_attached(Widget* child);
  /// This is a default handler for the signal signal_child_detached().
  virtual void on_child_detached(Widget* child);


private:

  
public:
  HandleBox();


  /** Sets the type of shadow to be drawn around the border
   * of the handle box.
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @param type The shadow type.
   */
  void set_shadow_type(ShadowType type);
  
  /** Gets the type of shadow drawn around the handle box. See
   * set_shadow_type().
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @return The type of shadow currently drawn around the handle box.
   */
  ShadowType get_shadow_type() const;
  
  /** Sets the side of the handlebox where the handle is drawn.
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @param position The side of the handlebox where the handle should be drawn.
   */
  void set_handle_position(PositionType position);
  
  /** Gets the handle position of the handle box. See
   * set_handle_position().
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @return The current handle position.
   */
  PositionType get_handle_position() const;
  
  /** Sets the snap edge of a handlebox. The snap edge is
   * the edge of the detached child that must be aligned
   * with the corresponding edge of the “ghost” left
   * behind when the child was detached to reattach
   * the torn-off window. Usually, the snap edge should
   * be chosen so that it stays in the same place on
   * the screen when the handlebox is torn off.
   * 
   * If the snap edge is not set, then an appropriate value
   * will be guessed from the handle position. If the
   * handle position is Gtk::POS_RIGHT or Gtk::POS_LEFT,
   * then the snap edge will be Gtk::POS_TOP, otherwise
   * it will be Gtk::POS_LEFT.
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @param edge The snap edge, or -1 to unset the value; in which
   * case GTK+ will try to guess an appropriate value
   * in the future.
   */
  void set_snap_edge(PositionType edge);
  
  /** Gets the edge used for determining reattachment of the handle box.
   * See set_snap_edge().
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @return The edge used for determining reattachment, or
   * (GtkPositionType)-1 if this is determined (as per default)
   * from the handle position.
   */
  PositionType get_snap_edge() const;

  
  /** Whether the handlebox’s child is currently detached.
   * 
   * @newin{2,14}
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @return <tt>true</tt> if the child is currently detached, otherwise <tt>false</tt>.
   */
  bool is_child_detached() const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%child_attached(Widget* child)</tt>
   *
   * Flags: Run First
   *
   * This signal is emitted when the contents of the
   * handlebox are reattached to the main window.
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @param child The child widget of the handlebox.
   * (this argument provides no extra information
   * and is here only for backwards-compatibility).
   */

  Glib::SignalProxy< void,Widget* > signal_child_attached();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%child_detached(Widget* child)</tt>
   *
   * Flags: Run First
   *
   * This signal is emitted when the contents of the
   * handlebox are detached from the main window.
   * 
   * Deprecated: 3.4: Gtk::HandleBox has been deprecated.
   * 
   * @param child The child widget of the handlebox.
   * (this argument provides no extra information
   * and is here only for backwards-compatibility).
   */

  Glib::SignalProxy< void,Widget* > signal_child_detached();


  //_WRAP_PROPERTY("shadow", ShadowType); //deprecated.
  /** Appearance of the shadow that surrounds the container.
   *
   * Default value: Gtk::SHADOW_OUT
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< ShadowType > property_shadow_type() ;

/** Appearance of the shadow that surrounds the container.
   *
   * Default value: Gtk::SHADOW_OUT
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< ShadowType > property_shadow_type() const;

  /** Position of the handle relative to the child widget.
   *
   * Default value: Gtk::POS_LEFT
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PositionType > property_handle_position() ;

/** Position of the handle relative to the child widget.
   *
   * Default value: Gtk::POS_LEFT
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PositionType > property_handle_position() const;

  /** Side of the handlebox that's lined up with the docking point to dock the handlebox.
   *
   * Default value: Gtk::POS_TOP
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PositionType > property_snap_edge() ;

/** Side of the handlebox that's lined up with the docking point to dock the handlebox.
   *
   * Default value: Gtk::POS_TOP
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PositionType > property_snap_edge() const;

  /** Whether to use the value from the snap_edge property or a value derived from handle_position.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_snap_edge_set() ;

/** Whether to use the value from the snap_edge property or a value derived from handle_position.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_snap_edge_set() const;

  /** A boolean value indicating whether the handlebox's child is attached or detached.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_child_detached() const;


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::HandleBox
   */
  GTKMM_API
  Gtk::HandleBox* wrap(GtkHandleBox* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_HANDLEBOX_H */

