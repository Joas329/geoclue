/*
 * Generated by gdbus-codegen 2.50.3. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GCLUE_LOCATION_INTERFACE_H__
#define __GCLUE_LOCATION_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.GeoClue2.Location */

#define GCLUE_DBUS_TYPE_LOCATION (gclue_dbus_location_get_type ())
#define GCLUE_DBUS_LOCATION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_DBUS_TYPE_LOCATION, GClueDBusLocation))
#define GCLUE_DBUS_IS_LOCATION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_DBUS_TYPE_LOCATION))
#define GCLUE_DBUS_LOCATION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GCLUE_DBUS_TYPE_LOCATION, GClueDBusLocationIface))

struct _GClueDBusLocation;
typedef struct _GClueDBusLocation GClueDBusLocation;
typedef struct _GClueDBusLocationIface GClueDBusLocationIface;

struct _GClueDBusLocationIface
{
  GTypeInterface parent_iface;

  gdouble  (*get_accuracy) (GClueDBusLocation *object);

  gdouble  (*get_altitude) (GClueDBusLocation *object);

  const gchar * (*get_description) (GClueDBusLocation *object);

  gdouble  (*get_heading) (GClueDBusLocation *object);

  gdouble  (*get_latitude) (GClueDBusLocation *object);

  gdouble  (*get_longitude) (GClueDBusLocation *object);

  gdouble  (*get_speed) (GClueDBusLocation *object);

  GVariant * (*get_timestamp) (GClueDBusLocation *object);

};

GType gclue_dbus_location_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gclue_dbus_location_interface_info (void);
guint gclue_dbus_location_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus property accessors: */
gdouble gclue_dbus_location_get_latitude (GClueDBusLocation *object);
void gclue_dbus_location_set_latitude (GClueDBusLocation *object, gdouble value);

gdouble gclue_dbus_location_get_longitude (GClueDBusLocation *object);
void gclue_dbus_location_set_longitude (GClueDBusLocation *object, gdouble value);

gdouble gclue_dbus_location_get_accuracy (GClueDBusLocation *object);
void gclue_dbus_location_set_accuracy (GClueDBusLocation *object, gdouble value);

gdouble gclue_dbus_location_get_altitude (GClueDBusLocation *object);
void gclue_dbus_location_set_altitude (GClueDBusLocation *object, gdouble value);

gdouble gclue_dbus_location_get_speed (GClueDBusLocation *object);
void gclue_dbus_location_set_speed (GClueDBusLocation *object, gdouble value);

gdouble gclue_dbus_location_get_heading (GClueDBusLocation *object);
void gclue_dbus_location_set_heading (GClueDBusLocation *object, gdouble value);

const gchar *gclue_dbus_location_get_description (GClueDBusLocation *object);
gchar *gclue_dbus_location_dup_description (GClueDBusLocation *object);
void gclue_dbus_location_set_description (GClueDBusLocation *object, const gchar *value);

GVariant *gclue_dbus_location_get_timestamp (GClueDBusLocation *object);
GVariant *gclue_dbus_location_dup_timestamp (GClueDBusLocation *object);
void gclue_dbus_location_set_timestamp (GClueDBusLocation *object, GVariant *value);


/* ---- */

#define GCLUE_DBUS_TYPE_LOCATION_PROXY (gclue_dbus_location_proxy_get_type ())
#define GCLUE_DBUS_LOCATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_DBUS_TYPE_LOCATION_PROXY, GClueDBusLocationProxy))
#define GCLUE_DBUS_LOCATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_DBUS_TYPE_LOCATION_PROXY, GClueDBusLocationProxyClass))
#define GCLUE_DBUS_LOCATION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_DBUS_TYPE_LOCATION_PROXY, GClueDBusLocationProxyClass))
#define GCLUE_DBUS_IS_LOCATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_DBUS_TYPE_LOCATION_PROXY))
#define GCLUE_DBUS_IS_LOCATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_DBUS_TYPE_LOCATION_PROXY))

typedef struct _GClueDBusLocationProxy GClueDBusLocationProxy;
typedef struct _GClueDBusLocationProxyClass GClueDBusLocationProxyClass;
typedef struct _GClueDBusLocationProxyPrivate GClueDBusLocationProxyPrivate;

struct _GClueDBusLocationProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GClueDBusLocationProxyPrivate *priv;
};

struct _GClueDBusLocationProxyClass
{
  GDBusProxyClass parent_class;
};

GType gclue_dbus_location_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GClueDBusLocationProxy, g_object_unref)
#endif

void gclue_dbus_location_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueDBusLocation *gclue_dbus_location_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GClueDBusLocation *gclue_dbus_location_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gclue_dbus_location_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueDBusLocation *gclue_dbus_location_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GClueDBusLocation *gclue_dbus_location_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GCLUE_DBUS_TYPE_LOCATION_SKELETON (gclue_dbus_location_skeleton_get_type ())
#define GCLUE_DBUS_LOCATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_DBUS_TYPE_LOCATION_SKELETON, GClueDBusLocationSkeleton))
#define GCLUE_DBUS_LOCATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_DBUS_TYPE_LOCATION_SKELETON, GClueDBusLocationSkeletonClass))
#define GCLUE_DBUS_LOCATION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_DBUS_TYPE_LOCATION_SKELETON, GClueDBusLocationSkeletonClass))
#define GCLUE_DBUS_IS_LOCATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_DBUS_TYPE_LOCATION_SKELETON))
#define GCLUE_DBUS_IS_LOCATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_DBUS_TYPE_LOCATION_SKELETON))

typedef struct _GClueDBusLocationSkeleton GClueDBusLocationSkeleton;
typedef struct _GClueDBusLocationSkeletonClass GClueDBusLocationSkeletonClass;
typedef struct _GClueDBusLocationSkeletonPrivate GClueDBusLocationSkeletonPrivate;

struct _GClueDBusLocationSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GClueDBusLocationSkeletonPrivate *priv;
};

struct _GClueDBusLocationSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gclue_dbus_location_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GClueDBusLocationSkeleton, g_object_unref)
#endif

GClueDBusLocation *gclue_dbus_location_skeleton_new (void);


G_END_DECLS

#endif /* __GCLUE_LOCATION_INTERFACE_H__ */
