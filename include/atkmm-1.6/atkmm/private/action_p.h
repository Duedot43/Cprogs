// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _ATKMM_ACTION_P_H
#define _ATKMM_ACTION_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Atk
{

class ATKMM_API Action_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Action;
  using BaseObjectType = AtkAction;
  using BaseClassType = AtkActionIface;
  using CppClassParent = Glib::Interface_Class;

  friend class Action;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static gboolean do_action_vfunc_callback(AtkAction* self, gint i);
  static gint get_n_actions_vfunc_callback(AtkAction* self);
  static const gchar* get_description_vfunc_callback(AtkAction* self, gint i);
  static const gchar* get_name_vfunc_callback(AtkAction* self, gint i);
  static const gchar* get_keybinding_vfunc_callback(AtkAction* self, gint i);
  static gboolean set_description_vfunc_callback(AtkAction* self, gint i, const gchar* desc);
};


} // namespace Atk


#endif /* _ATKMM_ACTION_P_H */

