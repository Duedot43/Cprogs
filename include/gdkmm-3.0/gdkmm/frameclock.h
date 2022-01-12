// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GDKMM_FRAMECLOCK_H
#define _GDKMM_FRAMECLOCK_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2018 The gtkmm Development Team
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

#include <glibmm/object.h>
#include <gdkmm/frametimings.h>


extern "C" typedef struct _GdkFrameClock GdkFrameClock;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GdkFrameClock = struct _GdkFrameClock;
using GdkFrameClockClass = struct _GdkFrameClockClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class GDKMM_API FrameClock_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{
/** @addtogroup gdkmmEnums gdkmm Enums and Flags */

/** 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_NONE
 * No phase.
 * 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_FLUSH_EVENTS
 * Corresponds to GdkFrameClock::flush-events. Should not be handled by applications.
 * 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_BEFORE_PAINT
 * Corresponds to GdkFrameClock::before-paint. Should not be handled by applications.
 * 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_UPDATE
 * Corresponds to GdkFrameClock::update.
 * 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_LAYOUT
 * Corresponds to GdkFrameClock::layout.
 * 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_PAINT
 * Corresponds to GdkFrameClock::paint.
 * 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_RESUME_EVENTS
 * Corresponds to GdkFrameClock::resume-events. Should not be handled by applications.
 * 
 *  @var FrameClockPhase FRAME_CLOCK_PHASE_AFTER_PAINT
 * Corresponds to GdkFrameClock::after-paint. Should not be handled by applications.
 * 
 *  @enum FrameClockPhase
 * 
 * Gdk::FrameClockPhase is used to represent the different paint clock
 * phases that can be requested. The elements of the enumeration
 * correspond to the signals of Gdk::FrameClock.
 * 
 * @newin{3,24}
 *
 * @ingroup gdkmmEnums
 * @par Bitwise operators:
 * <tt>%FrameClockPhase operator|(FrameClockPhase, FrameClockPhase)</tt><br>
 * <tt>%FrameClockPhase operator&(FrameClockPhase, FrameClockPhase)</tt><br>
 * <tt>%FrameClockPhase operator^(FrameClockPhase, FrameClockPhase)</tt><br>
 * <tt>%FrameClockPhase operator~(FrameClockPhase)</tt><br>
 * <tt>%FrameClockPhase& operator|=(FrameClockPhase&, FrameClockPhase)</tt><br>
 * <tt>%FrameClockPhase& operator&=(FrameClockPhase&, FrameClockPhase)</tt><br>
 * <tt>%FrameClockPhase& operator^=(FrameClockPhase&, FrameClockPhase)</tt><br>
 */
enum FrameClockPhase
{
  FRAME_CLOCK_PHASE_NONE = 0x0,
  FRAME_CLOCK_PHASE_FLUSH_EVENTS = 1 << 0,
  FRAME_CLOCK_PHASE_BEFORE_PAINT = 1 << 1,
  FRAME_CLOCK_PHASE_UPDATE = 1 << 2,
  FRAME_CLOCK_PHASE_LAYOUT = 1 << 3,
  FRAME_CLOCK_PHASE_PAINT = 1 << 4,
  FRAME_CLOCK_PHASE_RESUME_EVENTS = 1 << 5,
  FRAME_CLOCK_PHASE_AFTER_PAINT = 1 << 6
};

/** @ingroup gdkmmEnums */
inline FrameClockPhase operator|(FrameClockPhase lhs, FrameClockPhase rhs)
  { return static_cast<FrameClockPhase>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gdkmmEnums */
inline FrameClockPhase operator&(FrameClockPhase lhs, FrameClockPhase rhs)
  { return static_cast<FrameClockPhase>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gdkmmEnums */
inline FrameClockPhase operator^(FrameClockPhase lhs, FrameClockPhase rhs)
  { return static_cast<FrameClockPhase>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gdkmmEnums */
inline FrameClockPhase operator~(FrameClockPhase flags)
  { return static_cast<FrameClockPhase>(~static_cast<unsigned>(flags)); }

/** @ingroup gdkmmEnums */
inline FrameClockPhase& operator|=(FrameClockPhase& lhs, FrameClockPhase rhs)
  { return (lhs = static_cast<FrameClockPhase>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gdkmmEnums */
inline FrameClockPhase& operator&=(FrameClockPhase& lhs, FrameClockPhase rhs)
  { return (lhs = static_cast<FrameClockPhase>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gdkmmEnums */
inline FrameClockPhase& operator^=(FrameClockPhase& lhs, FrameClockPhase rhs)
  { return (lhs = static_cast<FrameClockPhase>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gdk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GDKMM_API Value<Gdk::FrameClockPhase> : public Glib::Value_Flags<Gdk::FrameClockPhase>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gdk
{


/** Frame clock syncs painting to a window or display.
 *
 * A %Gdk::FrameClock tells the application when to update and repaint a
 * window. This may be synced to the vertical refresh rate of the
 * monitor, for example. Even when the frame clock uses a simple timer
 * rather than a hardware-based vertical sync, the frame clock helps
 * because it ensures everything paints at the same time (reducing the
 * total number of frames). The frame clock can also automatically
 * stop painting when it knows the frames will not be visible, or
 * scale back animation framerates.
 *
 * %Gdk::FrameClock is designed to be compatible with an OpenGL-based
 * implementation or with mozRequestAnimationFrame in Firefox,
 * for example.
 *
 * A frame clock is idle until someone requests a frame with
 * request_phase(). At some later point that makes
 * sense for the synchronization being implemented, the clock will
 * process a frame and emit signals for each phase that has been
 * requested. (See the signals of the %Gdk::FrameClock class for
 * documentation of the phases. Gdk::FRAME_CLOCK_PHASE_UPDATE and the
 * signal_update() signal are most interesting for application
 * writers, and are used to update the animations, using the frame time
 * given by get_frame_time().
 *
 * The frame time is reported in microseconds and generally in the same
 * timescale as g_get_monotonic_time(), however, it is not the same
 * as g_get_monotonic_time(). The frame time does not advance during
 * the time a frame is being painted, and outside of a frame, an attempt
 * is made so that all calls to get_frame_time() that
 * are called at a “similar” time get the same value. This means that
 * if different animations are timed by looking at the difference in
 * time between an initial value from get_frame_time()
 * and the value inside the signal_update() signal of the clock,
 * they will stay exactly synchronized.
 *
 * @newin{3,24}
 */

class GDKMM_API FrameClock : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = FrameClock;
  using CppClassType = FrameClock_Class;
  using BaseObjectType = GdkFrameClock;
  using BaseClassType = GdkFrameClockClass;

  // noncopyable
  FrameClock(const FrameClock&) = delete;
  FrameClock& operator=(const FrameClock&) = delete;

private:  friend class FrameClock_Class;
  static CppClassType frameclock_class_;

protected:
  explicit FrameClock(const Glib::ConstructParams& construct_params);
  explicit FrameClock(GdkFrameClock* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FrameClock(FrameClock&& src) noexcept;
  FrameClock& operator=(FrameClock&& src) noexcept;

  ~FrameClock() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkFrameClock*       gobj()       { return reinterpret_cast<GdkFrameClock*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkFrameClock* gobj() const { return reinterpret_cast<GdkFrameClock*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkFrameClock* gobj_copy();

private:


public:
  
  /** Gets the time that should currently be used for animations.  Inside
   * the processing of a frame, it’s the time used to compute the
   * animation position of everything in a frame. Outside of a frame, it's
   * the time of the conceptual “previous frame,” which may be either
   * the actual previous frame time, or if that’s too old, an updated
   * time.
   * 
   * @newin{3,8}
   * 
   * @return A timestamp in microseconds, in the timescale of
   * of Glib::get_monotonic_time().
   */
  gint64 get_frame_time() const;
  
  /** Asks the frame clock to run a particular phase. The signal
   * corresponding the requested phase will be emitted the next
   * time the frame clock processes. Multiple calls to
   * request_phase() will be combined together
   * and only one frame processed. If you are displaying animated
   * content and want to continually request the
   * Gdk::FRAME_CLOCK_PHASE_UPDATE phase for a period of time,
   * you should use begin_updating() instead, since
   * this allows GTK+ to adjust system parameters to get maximally
   * smooth animations.
   * 
   * @newin{3,8}
   * 
   * @param phase The phase that is requested.
   */
  void request_phase(FrameClockPhase phase);
  
  /** Starts updates for an animation. Until a matching call to
   * end_updating() is made, the frame clock will continually
   * request a new frame with the Gdk::FRAME_CLOCK_PHASE_UPDATE phase.
   * This function may be called multiple times and frames will be
   * requested until end_updating() is called the same
   * number of times.
   * 
   * @newin{3,8}
   */
  void begin_updating();
  
  /** Stops updates for an animation. See the documentation for
   * begin_updating().
   * 
   * @newin{3,8}
   */
  void end_updating();
  
  /** A Gdk::FrameClock maintains a 64-bit counter that increments for
   * each frame drawn.
   * 
   * @newin{3,8}
   * 
   * @return Inside frame processing, the value of the frame counter
   * for the current frame. Outside of frame processing, the frame
   * counter for the last frame.
   */
  gint64 get_frame_counter() const;
  
  /** Gdk::FrameClock internally keeps a history of Gdk::FrameTimings
   * objects for recent frames that can be retrieved with
   * get_timings(). The set of stored frames
   * is the set from the counter values given by
   * get_history_start() and
   * get_frame_counter(), inclusive.
   * 
   * @newin{3,8}
   * 
   * @return The frame counter value for the oldest frame
   * that is available in the internal frame history of the
   * Gdk::FrameClock.
   */
  gint64 get_history_start() const;
  
  /** Retrieves a Gdk::FrameTimings object holding timing information
   * for the current frame or a recent frame. The Gdk::FrameTimings
   * object may not yet be complete: see Gdk::FrameTimings::get_complete().
   * 
   * @newin{3,8}
   * 
   * @param frame_counter The frame counter value identifying the frame to
   * be received.
   * @return The Gdk::FrameTimings object for the specified
   * frame, or <tt>nullptr</tt> if it is not available. See
   * get_history_start().
   */
  Glib::RefPtr<FrameTimings> get_timings(gint64 frame_counter);
  
  /** Retrieves a Gdk::FrameTimings object holding timing information
   * for the current frame or a recent frame. The Gdk::FrameTimings
   * object may not yet be complete: see Gdk::FrameTimings::get_complete().
   * 
   * @newin{3,8}
   * 
   * @param frame_counter The frame counter value identifying the frame to
   * be received.
   * @return The Gdk::FrameTimings object for the specified
   * frame, or <tt>nullptr</tt> if it is not available. See
   * get_history_start().
   */
  Glib::RefPtr<const FrameTimings> get_timings(gint64 frame_counter) const;
  
  /** Gets the frame timings for the current frame.
   * 
   * @newin{3,8}
   * 
   * @return The Gdk::FrameTimings for the frame currently
   * being processed, or even no frame is being processed, for the
   * previous frame. Before any frames have been processed, returns
   * <tt>nullptr</tt>.
   */
  Glib::RefPtr<FrameTimings> get_current_timings();
  
  /** Gets the frame timings for the current frame.
   * 
   * @newin{3,8}
   * 
   * @return The Gdk::FrameTimings for the frame currently
   * being processed, or even no frame is being processed, for the
   * previous frame. Before any frames have been processed, returns
   * <tt>nullptr</tt>.
   */
  Glib::RefPtr<const FrameTimings> get_current_timings() const;
  
  /** Using the frame history stored in the frame clock, finds the last
   * known presentation time and refresh interval, and assuming that
   * presentation times are separated by the refresh interval,
   * predicts a presentation time that is a multiple of the refresh
   * interval after the last presentation time, and later than @a base_time.
   * 
   * @newin{3,8}
   * 
   * @param base_time Base time for determining a presentaton time.
   * @param refresh_interval_return A location to store the
   * determined refresh interval, or <tt>nullptr</tt>. A default refresh interval of
   * 1/60th of a second will be stored if no history is present.
   * @param presentation_time_return A location to store the next
   * candidate presentation time after the given base time.
   * 0 will be will be stored if no history is present.
   */
  void get_refresh_info(gint64 base_time, gint64& refresh_interval_return, gint64& presentation_time_return) const;

    
  // no_default_handler because the wrapped C signals have no default handlers.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%update()</tt>
   *
   * Flags: Run Last
   *
   * This signal is emitted as the first step of toolkit and
   * application processing of the frame. Animations should
   * be updated using Gdk::FrameClock::get_frame_time().
   * Applications can connect directly to this signal, or
   * use gtk_widget_add_tick_callback() as a more convenient
   * interface.
   */

  Glib::SignalProxy< void > signal_update();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%layout()</tt>
   *
   * Flags: Run Last
   *
   * This signal is emitted as the second step of toolkit and
   * application processing of the frame. Any work to update
   * sizes and positions of application elements should be
   * performed. GTK+ normally handles this internally.
   */

  Glib::SignalProxy< void > signal_layout();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%paint()</tt>
   *
   * Flags: Run Last
   *
   * This signal is emitted as the third step of toolkit and
   * application processing of the frame. The frame is
   * repainted. GDK normally handles this internally and
   * produces expose events, which are turned into GTK+
   * Gtk::Widget::signal_draw() signals.
   */

  Glib::SignalProxy< void > signal_paint();


  // There are no properties or vfuncs.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::FrameClock
   */
  GDKMM_API
  Glib::RefPtr<Gdk::FrameClock> wrap(GdkFrameClock* object, bool take_copy = false);
}


#endif /* _GDKMM_FRAMECLOCK_H */

