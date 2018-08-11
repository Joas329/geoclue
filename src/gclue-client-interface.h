/*
 * Generated by gdbus-codegen 2.56.1. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __GCLUE_CLIENT_INTERFACE_H__
#define __GCLUE_CLIENT_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.GeoClue2.Client */

#define GCLUE_DBUS_TYPE_CLIENT (gclue_dbus_client_get_type ())
#define GCLUE_DBUS_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_DBUS_TYPE_CLIENT, GClueDBusClient))
#define GCLUE_DBUS_IS_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_DBUS_TYPE_CLIENT))
#define GCLUE_DBUS_CLIENT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GCLUE_DBUS_TYPE_CLIENT, GClueDBusClientIface))

struct _GClueDBusClient;
typedef struct _GClueDBusClient GClueDBusClient;
typedef struct _GClueDBusClientIface GClueDBusClientIface;

struct _GClueDBusClientIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_start) (
    GClueDBusClient *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_stop) (
    GClueDBusClient *object,
    GDBusMethodInvocation *invocation);

  gboolean  (*get_active) (GClueDBusClient *object);

  const gchar * (*get_desktop_id) (GClueDBusClient *object);

  guint  (*get_distance_threshold) (GClueDBusClient *object);

  const gchar * (*get_location) (GClueDBusClient *object);

  guint  (*get_requested_accuracy_level) (GClueDBusClient *object);

  guint  (*get_time_threshold) (GClueDBusClient *object);

  void (*location_updated) (
    GClueDBusClient *object,
    const gchar *arg_old,
    const gchar *arg_new);

};

GType gclue_dbus_client_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gclue_dbus_client_interface_info (void);
guint gclue_dbus_client_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gclue_dbus_client_complete_start (
    GClueDBusClient *object,
    GDBusMethodInvocation *invocation);

void gclue_dbus_client_complete_stop (
    GClueDBusClient *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void gclue_dbus_client_emit_location_updated (
    GClueDBusClient *object,
    const gchar *arg_old,
    const gchar *arg_new);



/* D-Bus method calls: */
void gclue_dbus_client_call_start (
    GClueDBusClient *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gclue_dbus_client_call_start_finish (
    GClueDBusClient *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gclue_dbus_client_call_start_sync (
    GClueDBusClient *proxy,
    GCancellable *cancellable,
    GError **error);

void gclue_dbus_client_call_stop (
    GClueDBusClient *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gclue_dbus_client_call_stop_finish (
    GClueDBusClient *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gclue_dbus_client_call_stop_sync (
    GClueDBusClient *proxy,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *gclue_dbus_client_get_location (GClueDBusClient *object);
gchar *gclue_dbus_client_dup_location (GClueDBusClient *object);
void gclue_dbus_client_set_location (GClueDBusClient *object, const gchar *value);

guint gclue_dbus_client_get_distance_threshold (GClueDBusClient *object);
void gclue_dbus_client_set_distance_threshold (GClueDBusClient *object, guint value);

guint gclue_dbus_client_get_time_threshold (GClueDBusClient *object);
void gclue_dbus_client_set_time_threshold (GClueDBusClient *object, guint value);

const gchar *gclue_dbus_client_get_desktop_id (GClueDBusClient *object);
gchar *gclue_dbus_client_dup_desktop_id (GClueDBusClient *object);
void gclue_dbus_client_set_desktop_id (GClueDBusClient *object, const gchar *value);

guint gclue_dbus_client_get_requested_accuracy_level (GClueDBusClient *object);
void gclue_dbus_client_set_requested_accuracy_level (GClueDBusClient *object, guint value);

gboolean gclue_dbus_client_get_active (GClueDBusClient *object);
void gclue_dbus_client_set_active (GClueDBusClient *object, gboolean value);


/* ---- */

#define GCLUE_DBUS_TYPE_CLIENT_PROXY (gclue_dbus_client_proxy_get_type ())
#define GCLUE_DBUS_CLIENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_DBUS_TYPE_CLIENT_PROXY, GClueDBusClientProxy))
#define GCLUE_DBUS_CLIENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_DBUS_TYPE_CLIENT_PROXY, GClueDBusClientProxyClass))
#define GCLUE_DBUS_CLIENT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_DBUS_TYPE_CLIENT_PROXY, GClueDBusClientProxyClass))
#define GCLUE_DBUS_IS_CLIENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_DBUS_TYPE_CLIENT_PROXY))
#define GCLUE_DBUS_IS_CLIENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_DBUS_TYPE_CLIENT_PROXY))

typedef struct _GClueDBusClientProxy GClueDBusClientProxy;
typedef struct _GClueDBusClientProxyClass GClueDBusClientProxyClass;
typedef struct _GClueDBusClientProxyPrivate GClueDBusClientProxyPrivate;

struct _GClueDBusClientProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GClueDBusClientProxyPrivate *priv;
};

struct _GClueDBusClientProxyClass
{
  GDBusProxyClass parent_class;
};

GType gclue_dbus_client_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GClueDBusClientProxy, g_object_unref)
#endif

void gclue_dbus_client_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueDBusClient *gclue_dbus_client_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GClueDBusClient *gclue_dbus_client_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gclue_dbus_client_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueDBusClient *gclue_dbus_client_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GClueDBusClient *gclue_dbus_client_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GCLUE_DBUS_TYPE_CLIENT_SKELETON (gclue_dbus_client_skeleton_get_type ())
#define GCLUE_DBUS_CLIENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_DBUS_TYPE_CLIENT_SKELETON, GClueDBusClientSkeleton))
#define GCLUE_DBUS_CLIENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_DBUS_TYPE_CLIENT_SKELETON, GClueDBusClientSkeletonClass))
#define GCLUE_DBUS_CLIENT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_DBUS_TYPE_CLIENT_SKELETON, GClueDBusClientSkeletonClass))
#define GCLUE_DBUS_IS_CLIENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_DBUS_TYPE_CLIENT_SKELETON))
#define GCLUE_DBUS_IS_CLIENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_DBUS_TYPE_CLIENT_SKELETON))

typedef struct _GClueDBusClientSkeleton GClueDBusClientSkeleton;
typedef struct _GClueDBusClientSkeletonClass GClueDBusClientSkeletonClass;
typedef struct _GClueDBusClientSkeletonPrivate GClueDBusClientSkeletonPrivate;

struct _GClueDBusClientSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GClueDBusClientSkeletonPrivate *priv;
};

struct _GClueDBusClientSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gclue_dbus_client_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GClueDBusClientSkeleton, g_object_unref)
#endif

GClueDBusClient *gclue_dbus_client_skeleton_new (void);


G_END_DECLS

#endif /* __GCLUE_CLIENT_INTERFACE_H__ */
