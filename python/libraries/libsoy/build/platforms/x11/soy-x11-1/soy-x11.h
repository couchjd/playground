/* soy-x11.h generated by valac 0.22.1, the Vala compiler, do not modify */


#ifndef __SOY_X11_H__
#define __SOY_X11_H__

#include <glib.h>
#include <glib-object.h>
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>
#include <X11/Xregion.h>
#include <soy-1/soy.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS


#define SOY_TYPE_CLIENT (soy_client_get_type ())
#define SOY_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_TYPE_CLIENT, soyClient))
#define SOY_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_TYPE_CLIENT, soyClientClass))
#define SOY_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_TYPE_CLIENT))
#define SOY_IS_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_TYPE_CLIENT))
#define SOY_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_TYPE_CLIENT, soyClientClass))

typedef struct _soyClient soyClient;
typedef struct _soyClientClass soyClientClass;
typedef struct _soyClientPrivate soyClientPrivate;

struct _soyClient {
	GObject parent_instance;
	soyClientPrivate * priv;
	gboolean closing;
	Display* xDisplay;
};

struct _soyClientClass {
	GObjectClass parent_class;
};


GType soy_client_get_type (void) G_GNUC_CONST;
gboolean soy_client_thread_step (soyClient* self);
void soy_client_window_client (soyClient* self, XClientMessageEvent* event);
void soy_client_window_config (soyClient* self, XConfigureEvent* event);
void soy_client_window_draw (soyClient* self, XExposeEvent* event);
void soy_client_window_opened (soyClient* self, XCreateWindowEvent* event);
void soy_client_window_resize (soyClient* self, soyatomsSize* size);
soyClient* soy_client_new (void);
soyClient* soy_client_construct (GType object_type);
const gchar* soy_client_get_address (soyClient* self);
soywidgetsWindow* soy_client_get_window (soyClient* self);


G_END_DECLS

#endif
