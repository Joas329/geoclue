/*
 * Generated by gdbus-codegen 2.46.1. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GEOCLUE_AGENT_INTERFACE_H__
#define __GEOCLUE_AGENT_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.GeoClue2.Agent */

#define GCLUE_TYPE_AGENT (gclue_agent_get_type ())
#define GCLUE_AGENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_TYPE_AGENT, GClueAgent))
#define GCLUE_IS_AGENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_TYPE_AGENT))
#define GCLUE_AGENT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GCLUE_TYPE_AGENT, GClueAgentIface))

struct _GClueAgent;
typedef struct _GClueAgent GClueAgent;
typedef struct _GClueAgentIface GClueAgentIface;

struct _GClueAgentIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_authorize_app) (
    GClueAgent *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_desktop_id,
    guint arg_req_accuracy_level);

  guint  (*get_max_accuracy_level) (GClueAgent *object);

};

GType gclue_agent_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gclue_agent_interface_info (void);
guint gclue_agent_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gclue_agent_complete_authorize_app (
    GClueAgent *object,
    GDBusMethodInvocation *invocation,
    gboolean authorized,
    guint allowed_accuracy_level);



/* D-Bus method calls: */
void gclue_agent_call_authorize_app (
    GClueAgent *proxy,
    const gchar *arg_desktop_id,
    guint arg_req_accuracy_level,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gclue_agent_call_authorize_app_finish (
    GClueAgent *proxy,
    gboolean *out_authorized,
    guint *out_allowed_accuracy_level,
    GAsyncResult *res,
    GError **error);

gboolean gclue_agent_call_authorize_app_sync (
    GClueAgent *proxy,
    const gchar *arg_desktop_id,
    guint arg_req_accuracy_level,
    gboolean *out_authorized,
    guint *out_allowed_accuracy_level,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
guint gclue_agent_get_max_accuracy_level (GClueAgent *object);
void gclue_agent_set_max_accuracy_level (GClueAgent *object, guint value);


/* ---- */

#define GCLUE_TYPE_AGENT_PROXY (gclue_agent_proxy_get_type ())
#define GCLUE_AGENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_TYPE_AGENT_PROXY, GClueAgentProxy))
#define GCLUE_AGENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_TYPE_AGENT_PROXY, GClueAgentProxyClass))
#define GCLUE_AGENT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_TYPE_AGENT_PROXY, GClueAgentProxyClass))
#define GCLUE_IS_AGENT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_TYPE_AGENT_PROXY))
#define GCLUE_IS_AGENT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_TYPE_AGENT_PROXY))

typedef struct _GClueAgentProxy GClueAgentProxy;
typedef struct _GClueAgentProxyClass GClueAgentProxyClass;
typedef struct _GClueAgentProxyPrivate GClueAgentProxyPrivate;

struct _GClueAgentProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GClueAgentProxyPrivate *priv;
};

struct _GClueAgentProxyClass
{
  GDBusProxyClass parent_class;
};

GType gclue_agent_proxy_get_type (void) G_GNUC_CONST;

void gclue_agent_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueAgent *gclue_agent_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GClueAgent *gclue_agent_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gclue_agent_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GClueAgent *gclue_agent_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GClueAgent *gclue_agent_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GCLUE_TYPE_AGENT_SKELETON (gclue_agent_skeleton_get_type ())
#define GCLUE_AGENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCLUE_TYPE_AGENT_SKELETON, GClueAgentSkeleton))
#define GCLUE_AGENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCLUE_TYPE_AGENT_SKELETON, GClueAgentSkeletonClass))
#define GCLUE_AGENT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCLUE_TYPE_AGENT_SKELETON, GClueAgentSkeletonClass))
#define GCLUE_IS_AGENT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCLUE_TYPE_AGENT_SKELETON))
#define GCLUE_IS_AGENT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCLUE_TYPE_AGENT_SKELETON))

typedef struct _GClueAgentSkeleton GClueAgentSkeleton;
typedef struct _GClueAgentSkeletonClass GClueAgentSkeletonClass;
typedef struct _GClueAgentSkeletonPrivate GClueAgentSkeletonPrivate;

struct _GClueAgentSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GClueAgentSkeletonPrivate *priv;
};

struct _GClueAgentSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gclue_agent_skeleton_get_type (void) G_GNUC_CONST;

GClueAgent *gclue_agent_skeleton_new (void);


G_END_DECLS

#endif /* __GEOCLUE_AGENT_INTERFACE_H__ */
