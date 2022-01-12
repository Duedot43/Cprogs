// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!
#ifndef _GIOMM_CREDENTIALS_H
#define _GIOMM_CREDENTIALS_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The giomm Development Team
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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GCredentials = struct _GCredentials;
using GCredentialsClass = struct _GCredentialsClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API Credentials_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 *  @var CredentialsType CREDENTIALS_TYPE_INVALID
 * Indicates an invalid native credential type.
 * 
 *  @var CredentialsType CREDENTIALS_TYPE_LINUX_UCRED
 * The native credentials type is a `struct ucred`.
 * 
 *  @var CredentialsType CREDENTIALS_TYPE_FREEBSD_CMSGCRED
 * The native credentials type is a `struct cmsgcred`.
 * 
 *  @var CredentialsType CREDENTIALS_TYPE_OPENBSD_SOCKPEERCRED
 * The native credentials type is a `struct sockpeercred`. Added in 2.30.
 * 
 *  @var CredentialsType CREDENTIALS_TYPE_SOLARIS_UCRED
 * The native credentials type is a `ucred_t`. Added in 2.40.
 * 
 *  @var CredentialsType CREDENTIALS_TYPE_NETBSD_UNPCBID
 * The native credentials type is a `struct unpcbid`. Added in 2.42.
 * 
 *  @var CredentialsType CREDENTIALS_TYPE_APPLE_XUCRED
 * The native credentials type is a `struct xucred`. Added in 2.66.
 * 
 *  @enum CredentialsType
 * 
 * Enumeration describing different kinds of native credential types.
 * 
 * @newin{2,26}
 *
 * @ingroup giommEnums
 */
enum CredentialsType
{
  CREDENTIALS_TYPE_INVALID,
  CREDENTIALS_TYPE_LINUX_UCRED,
  CREDENTIALS_TYPE_FREEBSD_CMSGCRED,
  CREDENTIALS_TYPE_OPENBSD_SOCKPEERCRED,
  CREDENTIALS_TYPE_SOLARIS_UCRED,
  CREDENTIALS_TYPE_NETBSD_UNPCBID,
  CREDENTIALS_TYPE_APPLE_XUCRED
};


/** An object containing credentials.
 * The Credentials type is a reference-counted wrapper for native credentials.
 * This information is typically used for identifying, authenticating and
 * authorizing other processes.
 *
 * Some operating systems supports looking up the credentials of the remote
 * peer of a communication endpoint - see e.g. Gio::Socket::get_credentials().
 *
 * Some operating systems supports securely sending and receiving credentials
 * over a Unix Domain Socket, see UnixCredentialsMessage,
 * Gio::UnixConnection::send_credentials() and
 * Gio::UnixConnection::receive_credentials() for details.
 *
 * On Linux, the native credential type is a struct ucred - see the unix(7)
 * man page for details. This corresponds to
 * Gio::CREDENTIALS_TYPE_LINUX_UCRED.
 *
 * On FreeBSD, the native credential type is a struct cmsgcred. This
 * corresponds to Gio::CREDENTIALS_TYPE_FREEBSD_CMSGCRED.
 *
 * @newin{2,28}
 */

class GIOMM_API Credentials : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Credentials;
  using CppClassType = Credentials_Class;
  using BaseObjectType = GCredentials;
  using BaseClassType = GCredentialsClass;

  // noncopyable
  Credentials(const Credentials&) = delete;
  Credentials& operator=(const Credentials&) = delete;

private:  friend class Credentials_Class;
  static CppClassType credentials_class_;

protected:
  explicit Credentials(const Glib::ConstructParams& construct_params);
  explicit Credentials(GCredentials* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Credentials(Credentials&& src) noexcept;
  Credentials& operator=(Credentials&& src) noexcept;

  ~Credentials() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GCredentials*       gobj()       { return reinterpret_cast<GCredentials*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GCredentials* gobj() const { return reinterpret_cast<GCredentials*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GCredentials* gobj_copy();

private:


protected:
  Credentials();
  

public:
  
  static Glib::RefPtr<Credentials> create();


  /** Creates a human-readable textual representation of @a credentials
   * that can be used in logging and debug messages. The format of the
   * returned string may change in future GLib release.
   * 
   * @newin{2,26}
   * 
   * @return A string.
   */
  Glib::ustring to_string() const;

  
  /** Gets a pointer to native credentials of type @a native_type from
   *  @a credentials.
   * 
   * It is a programming error (which will cause a warning to be
   * logged) to use this method if there is no Credentials support for
   * the OS or if @a native_type isn't supported by the OS.
   * 
   * @newin{2,26}
   * 
   * @param native_type The type of native credentials to get.
   * @return The pointer to native credentials or <tt>nullptr</tt> if the
   * operation there is no Credentials support for the OS or if
   *  @a native_type isn't supported by the OS. Do not free the returned
   * data, it is owned by @a credentials.
   */
  gpointer get_native(CredentialsType native_type);
  
  /** Copies the native credentials of type @a native_type from @a native
   * into @a credentials.
   * 
   * It is a programming error (which will cause a warning to be
   * logged) to use this method if there is no Credentials support for
   * the OS or if @a native_type isn't supported by the OS.
   * 
   * @newin{2,26}
   * 
   * @param native_type The type of native credentials to set.
   * @param native A pointer to native credentials.
   */
  void set_native(CredentialsType native_type, gpointer native);
  
  /** Checks if @a credentials and @a other_credentials is the same user.
   * 
   * This operation can fail if Credentials is not supported on the
   * the OS.
   * 
   * @newin{2,26}
   * 
   * @param other_credentials A Credentials.
   * @return <tt>true</tt> if @a credentials and @a other_credentials has the same
   * user, <tt>false</tt> otherwise or if @a error is set.
   * 
   * @throws Glib::Error
   */
  bool is_same_user(const Glib::RefPtr<const Credentials>& other_credentials);

  
#ifdef  G_OS_UNIX

  /** Tries to get the UNIX user identifier from @a credentials. This
   * method is only available on UNIX platforms.
   * 
   * This operation can fail if Credentials is not supported on the
   * OS or if the native credentials type does not contain information
   * about the UNIX user.
   * 
   * @newin{2,26}
   * 
   * @return The UNIX user identifier or -1 if @a error is set.
   * 
   * @throws Glib::Error
   */
  uid_t get_unix_user();
#endif //  G_OS_UNIX

  
#ifdef  G_OS_UNIX

  /** Tries to set the UNIX user identifier on @a credentials. This method
   * is only available on UNIX platforms.
   * 
   * This operation can fail if Credentials is not supported on the
   * OS or if the native credentials type does not contain information
   * about the UNIX user. It can also fail if the OS does not allow the
   * use of "spoofed" credentials.
   * 
   * @newin{2,26}
   * 
   * @param uid The UNIX user identifier to set.
   * @return <tt>true</tt> if @a uid was set, <tt>false</tt> if error is set.
   * 
   * @throws Glib::Error
   */
  bool set_unix_user(uid_t uid);
#endif //  G_OS_UNIX


#ifdef  G_OS_UNIX

  /** Tries to get the UNIX process identifier from @a credentials. This
   * method is only available on UNIX platforms.
   * 
   * This operation can fail if Credentials is not supported on the
   * OS or if the native credentials type does not contain information
   * about the UNIX process ID (for example this is the case for
   * CREDENTIALS_TYPE_APPLE_XUCRED).
   * 
   * @newin{2,36}
   * 
   * @return The UNIX process ID, or -1 if @a error is set.
   * 
   * @throws Glib::Error
   */
  pid_t get_unix_pid() const;
#endif //  G_OS_UNIX


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};


} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::Credentials
   */
  GIOMM_API
  Glib::RefPtr<Gio::Credentials> wrap(GCredentials* object, bool take_copy = false);
}


#endif /* _GIOMM_CREDENTIALS_H */

