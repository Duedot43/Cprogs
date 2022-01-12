// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_WINDOW_P_H
#define _GTKMM_WINDOW_P_H


#include <gtkmm/private/bin_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API Window_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Window;
  using BaseObjectType = GtkWindow;
  using BaseClassType = GtkWindowClass;
  using CppClassParent = Gtk::Bin_Class;
  using BaseClassParent = GtkBinClass;

  friend class Window;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void set_focus_callback(GtkWindow* self, GtkWidget* p0);

  //Callbacks (virtual functions):
    static void dispose_vfunc_callback(GObject* self);
  };


} // namespace Gtk


#endif /* _GTKMM_WINDOW_P_H */

