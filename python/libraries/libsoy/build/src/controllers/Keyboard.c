/* Keyboard.c generated by valac 0.22.1, the Vala compiler
 * generated from Keyboard.gs, do not modify */

/*
 *  libsoy - soy.controllers.Keyboard
 *  Copyright (C) 2006-2014 Copyleft Games Group
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program; if not, see http://www.gnu.org/licenses
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define SOY_CONTROLLERS_TYPE_CONTROLLER (soy_controllers_controller_get_type ())
#define SOY_CONTROLLERS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersController))
#define SOY_CONTROLLERS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))
#define SOY_CONTROLLERS_IS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_IS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))

typedef struct _soycontrollersController soycontrollersController;
typedef struct _soycontrollersControllerClass soycontrollersControllerClass;
typedef struct _soycontrollersControllerPrivate soycontrollersControllerPrivate;

#define SOY_CONTROLLERS_TYPE_KEYBOARD (soy_controllers_keyboard_get_type ())
#define SOY_CONTROLLERS_KEYBOARD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_KEYBOARD, soycontrollersKeyboard))
#define SOY_CONTROLLERS_KEYBOARD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_KEYBOARD, soycontrollersKeyboardClass))
#define SOY_CONTROLLERS_IS_KEYBOARD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_KEYBOARD))
#define SOY_CONTROLLERS_IS_KEYBOARD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_KEYBOARD))
#define SOY_CONTROLLERS_KEYBOARD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_KEYBOARD, soycontrollersKeyboardClass))

typedef struct _soycontrollersKeyboard soycontrollersKeyboard;
typedef struct _soycontrollersKeyboardClass soycontrollersKeyboardClass;
typedef struct _soycontrollersKeyboardPrivate soycontrollersKeyboardPrivate;

#define SOY_EVENTS_TYPE_EVENT (soy_events_event_get_type ())
#define SOY_EVENTS_EVENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_EVENT, soyeventsEvent))
#define SOY_EVENTS_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_EVENT, soyeventsEventClass))
#define SOY_EVENTS_IS_EVENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_EVENT))
#define SOY_EVENTS_IS_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_EVENT))
#define SOY_EVENTS_EVENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_EVENT, soyeventsEventClass))

typedef struct _soyeventsEvent soyeventsEvent;
typedef struct _soyeventsEventClass soyeventsEventClass;

#define SOY_EVENTS_TYPE_DEVICE (soy_events_device_get_type ())
#define SOY_EVENTS_DEVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_DEVICE, soyeventsDevice))
#define SOY_EVENTS_DEVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_DEVICE, soyeventsDeviceClass))
#define SOY_EVENTS_IS_DEVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_DEVICE))
#define SOY_EVENTS_IS_DEVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_DEVICE))
#define SOY_EVENTS_DEVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_DEVICE, soyeventsDeviceClass))

typedef struct _soyeventsDevice soyeventsDevice;
typedef struct _soyeventsDeviceClass soyeventsDeviceClass;

#define SOY_EVENTS_TYPE_KEY_PRESS (soy_events_key_press_get_type ())
#define SOY_EVENTS_KEY_PRESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_KEY_PRESS, soyeventsKeyPress))
#define SOY_EVENTS_KEY_PRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_KEY_PRESS, soyeventsKeyPressClass))
#define SOY_EVENTS_IS_KEY_PRESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_KEY_PRESS))
#define SOY_EVENTS_IS_KEY_PRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_KEY_PRESS))
#define SOY_EVENTS_KEY_PRESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_KEY_PRESS, soyeventsKeyPressClass))

typedef struct _soyeventsKeyPress soyeventsKeyPress;
typedef struct _soyeventsKeyPressClass soyeventsKeyPressClass;

#define SOY_EVENTS_TYPE_KEY_RELEASE (soy_events_key_release_get_type ())
#define SOY_EVENTS_KEY_RELEASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_KEY_RELEASE, soyeventsKeyRelease))
#define SOY_EVENTS_KEY_RELEASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_KEY_RELEASE, soyeventsKeyReleaseClass))
#define SOY_EVENTS_IS_KEY_RELEASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_KEY_RELEASE))
#define SOY_EVENTS_IS_KEY_RELEASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_KEY_RELEASE))
#define SOY_EVENTS_KEY_RELEASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_KEY_RELEASE, soyeventsKeyReleaseClass))

typedef struct _soyeventsKeyRelease soyeventsKeyRelease;
typedef struct _soyeventsKeyReleaseClass soyeventsKeyReleaseClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _soycontrollersController {
	GObject parent_instance;
	soycontrollersControllerPrivate * priv;
};

struct _soycontrollersControllerClass {
	GObjectClass parent_class;
	gchar* (*tp_repr) (soycontrollersController* self);
};

struct _soycontrollersKeyboard {
	soycontrollersController parent_instance;
	soycontrollersKeyboardPrivate * priv;
};

struct _soycontrollersKeyboardClass {
	soycontrollersControllerClass parent_class;
};


static gpointer soy_controllers_keyboard_parent_class = NULL;
static GeeArrayList* soy_controllers_keyboard__downed_keys;
static GeeArrayList* soy_controllers_keyboard__downed_keys = NULL;

GType soy_controllers_controller_get_type (void) G_GNUC_CONST;
GType soy_controllers_keyboard_get_type (void) G_GNUC_CONST;
enum  {
	SOY_CONTROLLERS_KEYBOARD_DUMMY_PROPERTY
};
static gchar* soy_controllers_keyboard_real_tp_repr (soycontrollersController* base);
void soy_controllers_keyboard_addKey (soycontrollersKeyboard* self, const gchar* key);
void soy_controllers_keyboard_removeKey (soycontrollersKeyboard* self, const gchar* key);
soycontrollersKeyboard* soy_controllers_keyboard_new (void);
soycontrollersKeyboard* soy_controllers_keyboard_construct (GType object_type);
soycontrollersController* soy_controllers_controller_new (void);
soycontrollersController* soy_controllers_controller_construct (GType object_type);
GType soy_events_event_get_type (void) G_GNUC_CONST;
GType soy_events_device_get_type (void) G_GNUC_CONST;
GType soy_events_key_press_get_type (void) G_GNUC_CONST;
GType soy_events_key_release_get_type (void) G_GNUC_CONST;
static GObject * soy_controllers_keyboard_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void _soy_controllers_keyboard___lambda2_ (soycontrollersKeyboard* self, soycontrollersKeyboard* t, soyeventsKeyPress* e);
void soy_events_key_press_executeBinding (soyeventsKeyPress* self);
static void __soy_controllers_keyboard___lambda2__soy_controllers_keyboard_key_press (soycontrollersKeyboard* _sender, soyeventsKeyPress* e, gpointer self);
static void _soy_controllers_keyboard___lambda3_ (soycontrollersKeyboard* self, soycontrollersKeyboard* t, soyeventsKeyRelease* e);
void soy_events_key_release_executeBinding (soyeventsKeyRelease* self);
static void __soy_controllers_keyboard___lambda3__soy_controllers_keyboard_key_release (soycontrollersKeyboard* _sender, soyeventsKeyRelease* e, gpointer self);
static void soy_controllers_keyboard_finalize (GObject* obj);


static gchar* soy_controllers_keyboard_real_tp_repr (soycontrollersController* base) {
	soycontrollersKeyboard * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	self = (soycontrollersKeyboard*) base;
#line 53 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp0_ = g_strdup ("Keyboard");
#line 53 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	result = _tmp0_;
#line 53 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	return result;
#line 156 "Keyboard.c"
}


void soy_controllers_keyboard_addKey (soycontrollersKeyboard* self, const gchar* key) {
	GeeArrayList* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
#line 55 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (self != NULL);
#line 55 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (key != NULL);
#line 56 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp0_ = soy_controllers_keyboard__downed_keys;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp1_ = key;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp0_, _tmp1_);
#line 173 "Keyboard.c"
}


void soy_controllers_keyboard_removeKey (soycontrollersKeyboard* self, const gchar* key) {
	GeeArrayList* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (self != NULL);
#line 58 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (key != NULL);
#line 59 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp0_ = soy_controllers_keyboard__downed_keys;
#line 59 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp1_ = key;
#line 59 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	gee_abstract_collection_remove ((GeeAbstractCollection*) _tmp0_, _tmp1_);
#line 190 "Keyboard.c"
}


soycontrollersKeyboard* soy_controllers_keyboard_construct (GType object_type) {
	soycontrollersKeyboard * self = NULL;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	self = (soycontrollersKeyboard*) soy_controllers_controller_construct (object_type);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	return self;
#line 200 "Keyboard.c"
}


soycontrollersKeyboard* soy_controllers_keyboard_new (void) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	return soy_controllers_keyboard_construct (SOY_CONTROLLERS_TYPE_KEYBOARD);
#line 207 "Keyboard.c"
}


static void _soy_controllers_keyboard___lambda2_ (soycontrollersKeyboard* self, soycontrollersKeyboard* t, soyeventsKeyPress* e) {
	soyeventsKeyPress* _tmp0_ = NULL;
#line 38 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (t != NULL);
#line 38 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (e != NULL);
#line 39 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp0_ = e;
#line 39 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	soy_events_key_press_executeBinding (_tmp0_);
#line 221 "Keyboard.c"
}


static void __soy_controllers_keyboard___lambda2__soy_controllers_keyboard_key_press (soycontrollersKeyboard* _sender, soyeventsKeyPress* e, gpointer self) {
#line 38 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_soy_controllers_keyboard___lambda2_ (self, _sender, e);
#line 228 "Keyboard.c"
}


static void _soy_controllers_keyboard___lambda3_ (soycontrollersKeyboard* self, soycontrollersKeyboard* t, soyeventsKeyRelease* e) {
	soyeventsKeyRelease* _tmp0_ = NULL;
#line 41 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (t != NULL);
#line 41 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_return_if_fail (e != NULL);
#line 42 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp0_ = e;
#line 42 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	soy_events_key_release_executeBinding (_tmp0_);
#line 242 "Keyboard.c"
}


static void __soy_controllers_keyboard___lambda3__soy_controllers_keyboard_key_release (soycontrollersKeyboard* _sender, soyeventsKeyRelease* e, gpointer self) {
#line 41 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_soy_controllers_keyboard___lambda3_ (self, _sender, e);
#line 249 "Keyboard.c"
}


static GObject * soy_controllers_keyboard_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	soycontrollersKeyboard * self;
	GeeArrayList* _tmp0_ = NULL;
#line 35 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	parent_class = G_OBJECT_CLASS (soy_controllers_keyboard_parent_class);
#line 35 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 35 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_CONTROLLERS_TYPE_KEYBOARD, soycontrollersKeyboard);
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_tmp0_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	_g_object_unref0 (soy_controllers_keyboard__downed_keys);
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	soy_controllers_keyboard__downed_keys = _tmp0_;
#line 38 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_signal_connect_object (self, "key-press", (GCallback) __soy_controllers_keyboard___lambda2__soy_controllers_keyboard_key_press, self, 0);
#line 41 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_signal_connect_object (self, "key-release", (GCallback) __soy_controllers_keyboard___lambda3__soy_controllers_keyboard_key_release, self, 0);
#line 35 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	return obj;
#line 276 "Keyboard.c"
}


static void soy_controllers_keyboard_class_init (soycontrollersKeyboardClass * klass) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	soy_controllers_keyboard_parent_class = g_type_class_peek_parent (klass);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	SOY_CONTROLLERS_CONTROLLER_CLASS (klass)->tp_repr = soy_controllers_keyboard_real_tp_repr;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	G_OBJECT_CLASS (klass)->constructor = soy_controllers_keyboard_constructor;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	G_OBJECT_CLASS (klass)->finalize = soy_controllers_keyboard_finalize;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_signal_new ("key_press", SOY_CONTROLLERS_TYPE_KEYBOARD, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, SOY_EVENTS_TYPE_KEY_PRESS);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	g_signal_new ("key_release", SOY_CONTROLLERS_TYPE_KEYBOARD, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, SOY_EVENTS_TYPE_KEY_RELEASE);
#line 293 "Keyboard.c"
}


static void soy_controllers_keyboard_instance_init (soycontrollersKeyboard * self) {
}


static void soy_controllers_keyboard_finalize (GObject* obj) {
	soycontrollersKeyboard * self;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_CONTROLLERS_TYPE_KEYBOARD, soycontrollersKeyboard);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Keyboard.gs"
	G_OBJECT_CLASS (soy_controllers_keyboard_parent_class)->finalize (obj);
#line 307 "Keyboard.c"
}


GType soy_controllers_keyboard_get_type (void) {
	static volatile gsize soy_controllers_keyboard_type_id__volatile = 0;
	if (g_once_init_enter (&soy_controllers_keyboard_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (soycontrollersKeyboardClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) soy_controllers_keyboard_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (soycontrollersKeyboard), 0, (GInstanceInitFunc) soy_controllers_keyboard_instance_init, NULL };
		GType soy_controllers_keyboard_type_id;
		soy_controllers_keyboard_type_id = g_type_register_static (SOY_CONTROLLERS_TYPE_CONTROLLER, "soycontrollersKeyboard", &g_define_type_info, 0);
		g_once_init_leave (&soy_controllers_keyboard_type_id__volatile, soy_controllers_keyboard_type_id);
	}
	return soy_controllers_keyboard_type_id__volatile;
}



