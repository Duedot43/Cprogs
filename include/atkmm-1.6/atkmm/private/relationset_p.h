// Generated by gmmproc 2.66.1 -- DO NOT MODIFY!
#ifndef _ATKMM_RELATIONSET_P_H
#define _ATKMM_RELATIONSET_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Atk
{

class ATKMM_API RelationSet_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = RelationSet;
  using BaseObjectType = AtkRelationSet;
  using BaseClassType = AtkRelationSetClass;
  using CppClassParent = Glib::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class RelationSet;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Atk


#endif /* _ATKMM_RELATIONSET_P_H */

