// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _GTKMM_ABOUTDIALOG_P_H
#define _GTKMM_ABOUTDIALOG_P_H


#include <gtkmm/private/dialog_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API AboutDialog_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AboutDialog;
  using BaseObjectType = GtkAboutDialog;
  using BaseClassType = GtkAboutDialogClass;
  using CppClassParent = Gtk::Dialog_Class;
  using BaseClassParent = GtkDialogClass;

  friend class AboutDialog;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gboolean activate_link_callback(GtkAboutDialog* self, const gchar* p0);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_ABOUTDIALOG_P_H */

