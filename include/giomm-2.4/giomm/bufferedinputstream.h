// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!
#ifndef _GIOMM_BUFFEREDINPUTSTREAM_H
#define _GIOMM_BUFFEREDINPUTSTREAM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2008 The gtkmm Development Team
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

#include <giomm/filterinputstream.h>
#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GBufferedInputStream = struct _GBufferedInputStream;
using GBufferedInputStreamClass = struct _GBufferedInputStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API BufferedInputStream_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{

/** @defgroup Streams Stream Classes
 *
 */

/** The buffered input stream implements FilterInputStream and provides for buffered reads.
 * By default, BufferedInputStream's buffer size is set at 4 kilobytes, but you can specify
 * this to the constructor.
 *
 * To get the size of a buffer within a buffered input stream, use get_buffer_size().
 * To change the size of a buffered input stream's buffer, use set_buffer_size().
 * Note that the buffer's size cannot be reduced below the size of the data within the buffer.
 *
 * @ingroup Streams
 *
 * @newin{2,16}
 */

class GIOMM_API BufferedInputStream : public Gio::FilterInputStream
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = BufferedInputStream;
  using CppClassType = BufferedInputStream_Class;
  using BaseObjectType = GBufferedInputStream;
  using BaseClassType = GBufferedInputStreamClass;

  // noncopyable
  BufferedInputStream(const BufferedInputStream&) = delete;
  BufferedInputStream& operator=(const BufferedInputStream&) = delete;

private:  friend class BufferedInputStream_Class;
  static CppClassType bufferedinputstream_class_;

protected:
  explicit BufferedInputStream(const Glib::ConstructParams& construct_params);
  explicit BufferedInputStream(GBufferedInputStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  BufferedInputStream(BufferedInputStream&& src) noexcept;
  BufferedInputStream& operator=(BufferedInputStream&& src) noexcept;

  ~BufferedInputStream() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GBufferedInputStream*       gobj()       { return reinterpret_cast<GBufferedInputStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GBufferedInputStream* gobj() const { return reinterpret_cast<GBufferedInputStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GBufferedInputStream* gobj_copy();

private:

protected:
    explicit BufferedInputStream(const Glib::RefPtr<InputStream>& base_stream);


  //Note that we rename the size parameter to buffer_size because that is the actual name of the property.
    explicit BufferedInputStream(const Glib::RefPtr<InputStream>& base_stream, gsize buffer_size);


public:
  /** Creates a new InputStream from the given base_stream, with a buffer set to the default size (4 kilobytes).
   *
   * @param base_stream An InputStream.
   * @result an InputStream for the given base_stream.
	 */
  
  static Glib::RefPtr<BufferedInputStream> create(const Glib::RefPtr<InputStream>& base_stream);


  /** Creates a new InputStream from the given base_stream, with a buffer set to size.
   *
   * @param base_stream An InputStream.
   * @param buffer_size A size.
   * @result an InputStream for the given base_stream.
	 */
  static Glib::RefPtr<BufferedInputStream> create_sized(const Glib::RefPtr<InputStream>& base_stream, gsize buffer_size);

  
  /** Gets the size of the input buffer.
   * 
   * @return The current buffer size.
   */
  gsize get_buffer_size() const;
  
  /** Sets the size of the internal buffer of @a stream to @a size, or to the
   * size of the contents of the buffer. The buffer can never be resized
   * smaller than its current contents.
   * 
   * @param size A #gsize.
   */
  void set_buffer_size(gsize size);
  
  /** Gets the size of the available data within the stream.
   * 
   * @return Size of the available stream.
   */
  gsize get_available() const;
  
  /** Peeks in the buffer, copying data of size @a count into @a buffer,
   * offset @a offset bytes.
   * 
   * @param buffer A pointer to
   * an allocated chunk of memory.
   * @param offset A #gsize.
   * @param count A #gsize.
   * @return A #gsize of the number of bytes peeked, or -1 on error.
   */
  gsize peek(void* buffer, gsize offset, gsize count) const;
  
  /** Returns the buffer with the currently available bytes. The returned
   * buffer must not be modified and will become invalid when reading from
   * the stream or filling the buffer.
   * 
   * @param count A #gsize to get the number of bytes available in the buffer.
   * @return Read-only buffer.
   */
  const void* peek_buffer(gsize& count) const;
  
  /** Tries to read @a count bytes from the stream into the buffer. 
   * Will block during this read.
   * 
   * If @a count is zero, returns zero and does nothing. A value of @a count
   * larger than G_MAXSSIZE will cause a Gio::Error to be thrown, with INVALID_ARGUMENT.
   * 
   * On success, the number of bytes read into the buffer is returned.
   * It is not an error if this is not the same as the requested size, as it
   * can happen e.g. near the end of a file. Zero is returned on end of file
   * (or if @a count is zero),  but never otherwise.
   * 
   * The operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, a Gio::Error will be thrown with CANCELLED. If an
   * operation was partially finished when the operation was cancelled the
   * partial result will be returned, without an error.
   * 
   * 
   * 
   * For the asynchronous, non-blocking, version of this function, see 
   * g_buffered_input_stream_fill_async().
   * 
   * @param count The number of bytes that will be read from the stream.
   * @param cancellable Cancellable object.
   * @return The number of bytes read into @a stream's buffer, up to @a count, 
   * or -1 on error.
   * 
   * @throws Glib::Error
   */
  gssize fill(gssize count, const Glib::RefPtr<Cancellable>& cancellable);

  /// A fill() convenience overload.
  gssize fill(gssize count);

  
  /** Reads data into the stream's buffer asynchronously, up to @a count size.
   * @a io_priority can be used to prioritize reads. For the synchronous version of
   * this function, see fill().
   *
   * @param slot A AsyncReadyCallback.
   * @param count The number of bytes to read.
   * @param cancellable Cancellable object.
   * @param io_priority the I/O priority of the request.
   */
  void fill_async(const SlotAsyncReady& slot,
                  gssize count,
                  const Glib::RefPtr<Cancellable>& cancellable,
                  int io_priority = Glib::PRIORITY_DEFAULT);

  /** Reads data into the stream's buffer asynchronously, up to @a count size.
   * @a io_priority can be used to prioritize reads. For the synchronous version of
   * this function, see fill().
   *
   * @param slot A AsyncReadyCallback.
   * @param count The number of bytes to read.
   * @param io_priority the I/O priority of the request.
   */
  void fill_async(const SlotAsyncReady& slot,
                  gssize count,
                  int io_priority = Glib::PRIORITY_DEFAULT);

  
  /** Finishes an asynchronous read.
   * 
   * @param result A AsyncResult.
   * @return A #gssize of the read stream, or `-1` on an error.
   * 
   * @throws Glib::Error
   */
  gssize fill_finish(const Glib::RefPtr<AsyncResult>& result);

  
  /** Tries to read a single byte from the stream or the buffer. Will block
   * during this read.
   * 
   * On success, the byte read from the stream is returned. On end of stream
   * -1 is returned but it's not an exceptional error and @a error is not set.
   * 
   * The operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, a Gio::Error will be thrown with CANCELLED. If an
   * operation was partially finished when the operation was cancelled the
   * partial result will be returned, without an error.
   * 
   * @param cancellable Cancellable object.
   * @return The byte read from the @a stream, or -1 on end of stream or error.
   * 
   * @throws Glib::Error
   */
  int read_byte(const Glib::RefPtr<Cancellable>& cancellable);

  /// A read_byte() convenience overload.
  int read_byte();

  /** The size of the backend buffer.
   *
   * Default value: 4096
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_buffer_size() ;

/** The size of the backend buffer.
   *
   * Default value: 4096
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_buffer_size() const;


protected:
  //TODO: When we can break ABI, add vfunc. See https://bugzilla.gnome.org/show_bug.cgi?id=572471
 

  //_WRAP_VFUNC(gssize fill(gssize count, const Glib::RefPtr<Cancellable>& cancellable), fill, errthrow, err_return_value -1)


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
   * @relates Gio::BufferedInputStream
   */
  GIOMM_API
  Glib::RefPtr<Gio::BufferedInputStream> wrap(GBufferedInputStream* object, bool take_copy = false);
}


#endif /* _GIOMM_BUFFEREDINPUTSTREAM_H */

