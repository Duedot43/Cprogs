// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _ATKMM_IMPLEMENTOR_H
#define _ATKMM_IMPLEMENTOR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: implementor.hg,v 1.1 2004/04/11 21:00:53 murrayc Exp $ */

/* Copyright (C) 2002 The gtkmm Development Team
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


#include <atkmm/object.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
  typedef struct _AtkImplementorIface AtkImplementorIface;
  typedef struct _AtkImplementor      AtkImplementor;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using AtkImplementor = struct _AtkImplementor;
using AtkImplementorClass = struct _AtkImplementorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Atk
{ class ATKMM_API Implementor_Class; } // namespace Atk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Atk
{


class ATKMM_API Implementor : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Implementor;
  using CppClassType = Implementor_Class;
  using BaseObjectType = AtkImplementor;
  using BaseClassType = AtkImplementorIface;

  // noncopyable
  Implementor(const Implementor&) = delete;
  Implementor& operator=(const Implementor&) = delete;

private:
  friend class Implementor_Class;
  static CppClassType implementor_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Implementor();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit Implementor(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit Implementor(AtkImplementor* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Implementor(Implementor&& src) noexcept;
  Implementor& operator=(Implementor&& src) noexcept;

  ~Implementor() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkImplementor*       gobj()       { return reinterpret_cast<AtkImplementor*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const AtkImplementor* gobj() const { return reinterpret_cast<AtkImplementor*>(gobject_); }

private:


protected:
    virtual Glib::RefPtr<Object> ref_accessibile_vfunc();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Atk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Atk::Implementor
   */
  ATKMM_API
  Glib::RefPtr<Atk::Implementor> wrap(AtkImplementor* object, bool take_copy = false);

} // namespace Glib


#endif /* _ATKMM_IMPLEMENTOR_H */

