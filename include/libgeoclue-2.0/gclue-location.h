/*
 * This file is generated by gdbus-codegen, do not modify it.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from. Note that it links to GLib, so must comply with the
 * LGPL linking clauses.
 */

#ifndef __GCLUE_LOCATION_H__
#define __GCLUE_LOCATION_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.GeoClue2.Location */

#define GCLUE_TYPE_LOCATION (gclue_location_get_type ())
#define GCLUE_LOCATION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_TYPE_LOCATION, GClueLocation))
#define GCLUE_IS_LOCATION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_TYPE_LOCATION))
#define GCLUE_LOCATION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GCLUE_TYPE_LOCATION, GClueLocationIface))

struct _GClueLocation;
typedef struct _GClueLocation GClueLocation;
typedef struct _GClueLocationIface GClueLocationIface;

struct _GClueLocationIface
{
  GTypeInterface parent_iface;

  gdouble  (*get_accuracy) (GClueLocation *object);

  gdouble  (*get_altitude) (GClueLocation *object);

  const gchar * (*get_description) (GClueLocation *object);

  gdouble  (*get_heading) (GClueLocation *object);

  gdouble  (*get_latitude) (GClueLocation *object);

  gdouble  (*get_longitude) (GClueLocation *object);

  gdouble  (*get_speed) (GClueLocation *object);

  GVariant * (*get_timestamp) (GClueLocation *object);

};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GClueLocation, g_object_unref)
#endif

GType gclue_location_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gclue_location_interface_info (void);
guint gclue_location_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
gdouble gclue_location_get_latitude (GClueLocation *object);
void gclue_location_set_latitude (GClueLocation *object, gdouble value);

gdouble gclue_location_get_longitude (GClueLocation *object);
void gclue_location_set_longitude (GClueLocation *object, gdouble value);

gdouble gclue_location_get_accuracy (GClueLocation *object);
void gclue_location_set_accuracy (GClueLocation *object, gdouble value);

gdouble gclue_location_get_altitude (GClueLocation *object);
void gclue_location_set_altitude (GClueLocation *object, gdouble value);

gdouble gclue_location_get_speed (GClueLocation *object);
void gclue_location_set_speed (GClueLocation *object, gdouble value);

gdouble gclue_location_get_heading (GClueLocation *object);
void gclue_location_set_heading (GClueLocation *object, gdouble value);

const gchar *gclue_location_get_description (GClueLocation *object);
gchar *gclue_location_dup_description (GClueLocation *object);
void gclue_location_set_description (GClueLocation *object, const gchar *value);

GVariant *gclue_location_get_timestamp (GClueLocation *object);
GVariant *gclue_location_dup_timestamp (GClueLocation *object);
void gclue_location_set_timestamp (GClueLocation *object, GVariant *value);


/* ---- */

#define GCLUE_TYPE_LOCATION_PROXY (gclue_location_proxy_get_type ())
#define GCLUE_LOCATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_TYPE_LOCATION_PROXY, GClueLocationProxy))
#define GCLUE_LOCATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_TYPE_LOCATION_PROXY, GClueLocationProxyClass))
#define GCLUE_LOCATION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_TYPE_LOCATION_PROXY, GClueLocationProxyClass))
#define GCLUE_IS_LOCATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_TYPE_LOCATION_PROXY))
#define GCLUE_IS_LOCATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_TYPE_LOCATION_PROXY))

typedef struct _GClueLocationProxy GClueLocationProxy;
typedef struct _GClueLocationProxyClass GClueLocationProxyClass;
typedef struct _GClueLocationProxyPrivate GClueLocationProxyPrivate;

struct _GClueLocationProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GClueLocationProxyPrivate *priv;
};

struct _GClueLocationProxyClass
{
  GDBusProxyClass parent_class;
};

GType gclue_location_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GClueLocationProxy, g_object_unref)
#endif

void gclue_location_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueLocation *gclue_location_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GClueLocation *gclue_location_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gclue_location_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueLocation *gclue_location_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GClueLocation *gclue_location_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GCLUE_TYPE_LOCATION_SKELETON (gclue_location_skeleton_get_type ())
#define GCLUE_LOCATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_TYPE_LOCATION_SKELETON, GClueLocationSkeleton))
#define GCLUE_LOCATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_TYPE_LOCATION_SKELETON, GClueLocationSkeletonClass))
#define GCLUE_LOCATION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_TYPE_LOCATION_SKELETON, GClueLocationSkeletonClass))
#define GCLUE_IS_LOCATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_TYPE_LOCATION_SKELETON))
#define GCLUE_IS_LOCATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_TYPE_LOCATION_SKELETON))

typedef struct _GClueLocationSkeleton GClueLocationSkeleton;
typedef struct _GClueLocationSkeletonClass GClueLocationSkeletonClass;
typedef struct _GClueLocationSkeletonPrivate GClueLocationSkeletonPrivate;

struct _GClueLocationSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GClueLocationSkeletonPrivate *priv;
};

struct _GClueLocationSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gclue_location_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GClueLocationSkeleton, g_object_unref)
#endif

GClueLocation *gclue_location_skeleton_new (void);


G_END_DECLS

#endif /* __GCLUE_LOCATION_H__ */
