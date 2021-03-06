/* Pointer.c generated by valac 0.22.1, the Vala compiler
 * generated from Pointer.gs, do not modify */

/*
 *  libsoy - soy.controllers.Pointer
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
#include <float.h>
#include <math.h>


#define SOY_CONTROLLERS_TYPE_CONTROLLER (soy_controllers_controller_get_type ())
#define SOY_CONTROLLERS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersController))
#define SOY_CONTROLLERS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))
#define SOY_CONTROLLERS_IS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_IS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))

typedef struct _soycontrollersController soycontrollersController;
typedef struct _soycontrollersControllerClass soycontrollersControllerClass;
typedef struct _soycontrollersControllerPrivate soycontrollersControllerPrivate;

#define SOY_CONTROLLERS_TYPE_POINTER (soy_controllers_pointer_get_type ())
#define SOY_CONTROLLERS_POINTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointer))
#define SOY_CONTROLLERS_POINTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointerClass))
#define SOY_CONTROLLERS_IS_POINTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_POINTER))
#define SOY_CONTROLLERS_IS_POINTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_POINTER))
#define SOY_CONTROLLERS_POINTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointerClass))

typedef struct _soycontrollersPointer soycontrollersPointer;
typedef struct _soycontrollersPointerClass soycontrollersPointerClass;
typedef struct _soycontrollersPointerPrivate soycontrollersPointerPrivate;

#define SOY_ATOMS_TYPE_POSITION (soy_atoms_position_get_type ())
#define SOY_ATOMS_POSITION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_ATOMS_TYPE_POSITION, soyatomsPosition))
#define SOY_ATOMS_POSITION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_ATOMS_TYPE_POSITION, soyatomsPositionClass))
#define SOY_ATOMS_IS_POSITION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_ATOMS_TYPE_POSITION))
#define SOY_ATOMS_IS_POSITION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_ATOMS_TYPE_POSITION))
#define SOY_ATOMS_POSITION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_ATOMS_TYPE_POSITION, soyatomsPositionClass))

typedef struct _soyatomsPosition soyatomsPosition;
typedef struct _soyatomsPositionClass soyatomsPositionClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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

#define SOY_EVENTS_TYPE_BUTTON_PRESS (soy_events_button_press_get_type ())
#define SOY_EVENTS_BUTTON_PRESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_BUTTON_PRESS, soyeventsButtonPress))
#define SOY_EVENTS_BUTTON_PRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_BUTTON_PRESS, soyeventsButtonPressClass))
#define SOY_EVENTS_IS_BUTTON_PRESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_BUTTON_PRESS))
#define SOY_EVENTS_IS_BUTTON_PRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_BUTTON_PRESS))
#define SOY_EVENTS_BUTTON_PRESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_BUTTON_PRESS, soyeventsButtonPressClass))

typedef struct _soyeventsButtonPress soyeventsButtonPress;
typedef struct _soyeventsButtonPressClass soyeventsButtonPressClass;

#define SOY_EVENTS_TYPE_BUTTON_RELEASE (soy_events_button_release_get_type ())
#define SOY_EVENTS_BUTTON_RELEASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_BUTTON_RELEASE, soyeventsButtonRelease))
#define SOY_EVENTS_BUTTON_RELEASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_BUTTON_RELEASE, soyeventsButtonReleaseClass))
#define SOY_EVENTS_IS_BUTTON_RELEASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_BUTTON_RELEASE))
#define SOY_EVENTS_IS_BUTTON_RELEASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_BUTTON_RELEASE))
#define SOY_EVENTS_BUTTON_RELEASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_BUTTON_RELEASE, soyeventsButtonReleaseClass))

typedef struct _soyeventsButtonRelease soyeventsButtonRelease;
typedef struct _soyeventsButtonReleaseClass soyeventsButtonReleaseClass;

#define SOY_EVENTS_TYPE_MOTION (soy_events_motion_get_type ())
#define SOY_EVENTS_MOTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_MOTION, soyeventsMotion))
#define SOY_EVENTS_MOTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_MOTION, soyeventsMotionClass))
#define SOY_EVENTS_IS_MOTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_MOTION))
#define SOY_EVENTS_IS_MOTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_MOTION))
#define SOY_EVENTS_MOTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_MOTION, soyeventsMotionClass))

typedef struct _soyeventsMotion soyeventsMotion;
typedef struct _soyeventsMotionClass soyeventsMotionClass;

struct _soycontrollersController {
	GObject parent_instance;
	soycontrollersControllerPrivate * priv;
};

struct _soycontrollersControllerClass {
	GObjectClass parent_class;
	gchar* (*tp_repr) (soycontrollersController* self);
};

struct _soycontrollersPointer {
	soycontrollersController parent_instance;
	soycontrollersPointerPrivate * priv;
};

struct _soycontrollersPointerClass {
	soycontrollersControllerClass parent_class;
};

struct _soycontrollersPointerPrivate {
	gint _x;
	gint _y;
	soyatomsPosition* _position_obj;
};


static gpointer soy_controllers_pointer_parent_class = NULL;

GType soy_controllers_controller_get_type (void) G_GNUC_CONST;
GType soy_controllers_pointer_get_type (void) G_GNUC_CONST;
GType soy_atoms_position_get_type (void) G_GNUC_CONST;
#define SOY_CONTROLLERS_POINTER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointerPrivate))
enum  {
	SOY_CONTROLLERS_POINTER_DUMMY_PROPERTY,
	SOY_CONTROLLERS_POINTER_POSITION
};
static gchar* soy_controllers_pointer_real_tp_repr (soycontrollersController* base);
void soy_controllers_pointer_motion (soycontrollersPointer* self, gint x, gint y);
void soy_atoms_position_set (soyatomsPosition* self, gfloat x, gfloat y, gfloat z);
static void _soy_controllers_pointer_position_set (soycontrollersPointer* self, soyatomsPosition* position);
gfloat soy_atoms_position_get_x (soyatomsPosition* self);
gfloat soy_atoms_position_get_y (soyatomsPosition* self);
static void _soy_controllers_pointer_position_weak (soycontrollersPointer* self, GObject* position);
soycontrollersPointer* soy_controllers_pointer_new (void);
soycontrollersPointer* soy_controllers_pointer_construct (GType object_type);
soycontrollersController* soy_controllers_controller_new (void);
soycontrollersController* soy_controllers_controller_construct (GType object_type);
soyatomsPosition* soy_controllers_pointer_get_position (soycontrollersPointer* self);
soyatomsPosition* soy_atoms_position_new (gfloat x, gfloat y, gfloat z);
soyatomsPosition* soy_atoms_position_construct (GType object_type, gfloat x, gfloat y, gfloat z);
static void __soy_controllers_pointer_position_set_soy_atoms_position_on_set (soyatomsPosition* _sender, soyatomsPosition* position, gpointer self);
static void __soy_controllers_pointer_position_weak_gweak_notify (gpointer self, GObject* object);
void soy_controllers_pointer_set_position (soycontrollersPointer* self, soyatomsPosition* value);
GType soy_events_event_get_type (void) G_GNUC_CONST;
GType soy_events_device_get_type (void) G_GNUC_CONST;
GType soy_events_button_press_get_type (void) G_GNUC_CONST;
GType soy_events_button_release_get_type (void) G_GNUC_CONST;
GType soy_events_motion_get_type (void) G_GNUC_CONST;
static GObject * soy_controllers_pointer_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void _soy_controllers_pointer___lambda4_ (soycontrollersPointer* self, soycontrollersPointer* t, soyeventsButtonPress* e);
void soy_events_button_press_executeBinding (soyeventsButtonPress* self);
static void __soy_controllers_pointer___lambda4__soy_controllers_pointer_button_press (soycontrollersPointer* _sender, soyeventsButtonPress* e, gpointer self);
static void _soy_controllers_pointer___lambda5_ (soycontrollersPointer* self, soycontrollersPointer* t, soyeventsButtonRelease* e);
void soy_events_button_release_executeBinding (soyeventsButtonRelease* self);
static void __soy_controllers_pointer___lambda5__soy_controllers_pointer_button_release (soycontrollersPointer* _sender, soyeventsButtonRelease* e, gpointer self);
static void _soy_controllers_pointer___lambda6_ (soycontrollersPointer* self, soycontrollersPointer* t, soyeventsMotion* e);
void soy_events_motion_executeBindings (soyeventsMotion* self);
static void __soy_controllers_pointer___lambda6__soy_controllers_pointer_on_motion (soycontrollersPointer* _sender, soyeventsMotion* e, gpointer self);
static void soy_controllers_pointer_finalize (GObject* obj);
static void _vala_soy_controllers_pointer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_soy_controllers_pointer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gchar* soy_controllers_pointer_real_tp_repr (soycontrollersController* base) {
	soycontrollersPointer * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 49 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self = (soycontrollersPointer*) base;
#line 50 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = g_strdup ("Pointer");
#line 50 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	result = _tmp0_;
#line 50 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	return result;
#line 200 "Pointer.c"
}


void soy_controllers_pointer_motion (soycontrollersPointer* self, gint x, gint y) {
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	soyatomsPosition* _tmp2_ = NULL;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (self != NULL);
#line 53 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = x;
#line 53 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self->priv->_x = _tmp0_;
#line 54 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp1_ = y;
#line 54 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self->priv->_y = _tmp1_;
#line 55 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp2_ = self->priv->_position_obj;
#line 55 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	if (_tmp2_ != NULL) {
#line 222 "Pointer.c"
		soyatomsPosition* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp3_ = self->priv->_position_obj;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp4_ = x;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp5_ = y;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		soy_atoms_position_set (_tmp3_, (gfloat) _tmp4_, (gfloat) _tmp5_, 0.0f);
#line 234 "Pointer.c"
	}
}


static void _soy_controllers_pointer_position_set (soycontrollersPointer* self, soyatomsPosition* position) {
	soyatomsPosition* _tmp0_ = NULL;
	gfloat _tmp1_ = 0.0F;
	gfloat _tmp2_ = 0.0F;
	soyatomsPosition* _tmp3_ = NULL;
	gfloat _tmp4_ = 0.0F;
	gfloat _tmp5_ = 0.0F;
#line 67 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (self != NULL);
#line 67 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (position != NULL);
#line 68 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = position;
#line 68 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp1_ = soy_atoms_position_get_x (_tmp0_);
#line 68 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp2_ = _tmp1_;
#line 68 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self->priv->_x = (gint) _tmp2_;
#line 69 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp3_ = position;
#line 69 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp4_ = soy_atoms_position_get_y (_tmp3_);
#line 69 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp5_ = _tmp4_;
#line 69 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self->priv->_y = (gint) _tmp5_;
#line 266 "Pointer.c"
}


static void _soy_controllers_pointer_position_weak (soycontrollersPointer* self, GObject* position) {
#line 72 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (self != NULL);
#line 72 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (position != NULL);
#line 73 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self->priv->_position_obj = NULL;
#line 277 "Pointer.c"
}


soycontrollersPointer* soy_controllers_pointer_construct (GType object_type) {
	soycontrollersPointer * self = NULL;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self = (soycontrollersPointer*) soy_controllers_controller_construct (object_type);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	return self;
#line 287 "Pointer.c"
}


soycontrollersPointer* soy_controllers_pointer_new (void) {
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	return soy_controllers_pointer_construct (SOY_CONTROLLERS_TYPE_POINTER);
#line 294 "Pointer.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 77 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	return self ? g_object_ref (self) : NULL;
#line 301 "Pointer.c"
}


static void __soy_controllers_pointer_position_set_soy_atoms_position_on_set (soyatomsPosition* _sender, soyatomsPosition* position, gpointer self) {
#line 81 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_soy_controllers_pointer_position_set (self, position);
#line 308 "Pointer.c"
}


static void __soy_controllers_pointer_position_weak_gweak_notify (gpointer self, GObject* object) {
#line 82 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_soy_controllers_pointer_position_weak (self, object);
#line 315 "Pointer.c"
}


soyatomsPosition* soy_controllers_pointer_get_position (soycontrollersPointer* self) {
	soyatomsPosition* result;
	soyatomsPosition* value = NULL;
	soyatomsPosition* _tmp0_ = NULL;
	soyatomsPosition* _tmp1_ = NULL;
	soyatomsPosition* _tmp2_ = NULL;
#line 76 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_val_if_fail (self != NULL, NULL);
#line 77 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = self->priv->_position_obj;
#line 77 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 77 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	value = _tmp1_;
#line 78 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp2_ = value;
#line 78 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	if (_tmp2_ == NULL) {
#line 337 "Pointer.c"
		gint _tmp3_ = 0;
		gint _tmp4_ = 0;
		soyatomsPosition* _tmp5_ = NULL;
		soyatomsPosition* _tmp6_ = NULL;
		soyatomsPosition* _tmp7_ = NULL;
		soyatomsPosition* _tmp8_ = NULL;
#line 79 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp3_ = self->priv->_x;
#line 79 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp4_ = self->priv->_y;
#line 79 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp5_ = soy_atoms_position_new ((gfloat) _tmp3_, (gfloat) _tmp4_, 0.0f);
#line 79 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_g_object_unref0 (value);
#line 79 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		value = _tmp5_;
#line 81 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp6_ = value;
#line 81 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		g_signal_connect_object (_tmp6_, "on-set", (GCallback) __soy_controllers_pointer_position_set_soy_atoms_position_on_set, self, 0);
#line 82 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp7_ = value;
#line 82 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		g_object_weak_ref ((GObject*) _tmp7_, __soy_controllers_pointer_position_weak_gweak_notify, self);
#line 83 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp8_ = value;
#line 83 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		self->priv->_position_obj = _tmp8_;
#line 366 "Pointer.c"
	}
#line 84 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	result = value;
#line 84 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	return result;
#line 372 "Pointer.c"
}


void soy_controllers_pointer_set_position (soycontrollersPointer* self, soyatomsPosition* value) {
	soyatomsPosition* _tmp0_ = NULL;
	soyatomsPosition* _tmp1_ = NULL;
	soyatomsPosition* _tmp5_ = NULL;
	soyatomsPosition* _tmp6_ = NULL;
	soyatomsPosition* _tmp7_ = NULL;
#line 86 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (self != NULL);
#line 87 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = value;
#line 87 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_soy_controllers_pointer_position_set (self, _tmp0_);
#line 88 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp1_ = self->priv->_position_obj;
#line 88 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	if (_tmp1_ != NULL) {
#line 392 "Pointer.c"
		soyatomsPosition* _tmp2_ = NULL;
		guint _tmp3_ = 0U;
		soyatomsPosition* _tmp4_ = NULL;
#line 89 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp2_ = self->priv->_position_obj;
#line 89 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		g_signal_parse_name ("on-set", SOY_ATOMS_TYPE_POSITION, &_tmp3_, NULL, FALSE);
#line 89 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		g_signal_handlers_disconnect_matched (_tmp2_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp3_, 0, NULL, (GCallback) __soy_controllers_pointer_position_set_soy_atoms_position_on_set, self);
#line 90 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		_tmp4_ = self->priv->_position_obj;
#line 90 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		g_object_weak_unref ((GObject*) _tmp4_, __soy_controllers_pointer_position_weak_gweak_notify, self);
#line 406 "Pointer.c"
	}
#line 91 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp5_ = value;
#line 91 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self->priv->_position_obj = _tmp5_;
#line 92 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp6_ = value;
#line 92 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_signal_connect_object (_tmp6_, "on-set", (GCallback) __soy_controllers_pointer_position_set_soy_atoms_position_on_set, self, 0);
#line 93 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp7_ = value;
#line 93 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_object_weak_ref ((GObject*) _tmp7_, __soy_controllers_pointer_position_weak_gweak_notify, self);
#line 86 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_object_notify ((GObject *) self, "position");
#line 422 "Pointer.c"
}


static void _soy_controllers_pointer___lambda4_ (soycontrollersPointer* self, soycontrollersPointer* t, soyeventsButtonPress* e) {
	soyeventsButtonPress* _tmp0_ = NULL;
#line 37 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (t != NULL);
#line 37 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (e != NULL);
#line 38 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = e;
#line 38 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	soy_events_button_press_executeBinding (_tmp0_);
#line 436 "Pointer.c"
}


static void __soy_controllers_pointer___lambda4__soy_controllers_pointer_button_press (soycontrollersPointer* _sender, soyeventsButtonPress* e, gpointer self) {
#line 37 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_soy_controllers_pointer___lambda4_ (self, _sender, e);
#line 443 "Pointer.c"
}


static void _soy_controllers_pointer___lambda5_ (soycontrollersPointer* self, soycontrollersPointer* t, soyeventsButtonRelease* e) {
	soyeventsButtonRelease* _tmp0_ = NULL;
#line 40 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (t != NULL);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (e != NULL);
#line 41 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = e;
#line 41 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	soy_events_button_release_executeBinding (_tmp0_);
#line 457 "Pointer.c"
}


static void __soy_controllers_pointer___lambda5__soy_controllers_pointer_button_release (soycontrollersPointer* _sender, soyeventsButtonRelease* e, gpointer self) {
#line 40 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_soy_controllers_pointer___lambda5_ (self, _sender, e);
#line 464 "Pointer.c"
}


static void _soy_controllers_pointer___lambda6_ (soycontrollersPointer* self, soycontrollersPointer* t, soyeventsMotion* e) {
	soyeventsMotion* _tmp0_ = NULL;
#line 43 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (t != NULL);
#line 43 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_return_if_fail (e != NULL);
#line 44 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_tmp0_ = e;
#line 44 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	soy_events_motion_executeBindings (_tmp0_);
#line 478 "Pointer.c"
}


static void __soy_controllers_pointer___lambda6__soy_controllers_pointer_on_motion (soycontrollersPointer* _sender, soyeventsMotion* e, gpointer self) {
#line 43 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	_soy_controllers_pointer___lambda6_ (self, _sender, e);
#line 485 "Pointer.c"
}


static GObject * soy_controllers_pointer_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	soycontrollersPointer * self;
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	parent_class = G_OBJECT_CLASS (soy_controllers_pointer_parent_class);
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointer);
#line 37 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_signal_connect_object (self, "button-press", (GCallback) __soy_controllers_pointer___lambda4__soy_controllers_pointer_button_press, self, 0);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_signal_connect_object (self, "button-release", (GCallback) __soy_controllers_pointer___lambda5__soy_controllers_pointer_button_release, self, 0);
#line 43 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_signal_connect_object (self, "on-motion", (GCallback) __soy_controllers_pointer___lambda6__soy_controllers_pointer_on_motion, self, 0);
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	return obj;
#line 507 "Pointer.c"
}


static void soy_controllers_pointer_class_init (soycontrollersPointerClass * klass) {
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	soy_controllers_pointer_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_type_class_add_private (klass, sizeof (soycontrollersPointerPrivate));
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	SOY_CONTROLLERS_CONTROLLER_CLASS (klass)->tp_repr = soy_controllers_pointer_real_tp_repr;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	G_OBJECT_CLASS (klass)->get_property = _vala_soy_controllers_pointer_get_property;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	G_OBJECT_CLASS (klass)->set_property = _vala_soy_controllers_pointer_set_property;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	G_OBJECT_CLASS (klass)->constructor = soy_controllers_pointer_constructor;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	G_OBJECT_CLASS (klass)->finalize = soy_controllers_pointer_finalize;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SOY_CONTROLLERS_POINTER_POSITION, g_param_spec_object ("position", "position", "position", SOY_ATOMS_TYPE_POSITION, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_signal_new ("button_press", SOY_CONTROLLERS_TYPE_POINTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, SOY_EVENTS_TYPE_BUTTON_PRESS);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_signal_new ("button_release", SOY_CONTROLLERS_TYPE_POINTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, SOY_EVENTS_TYPE_BUTTON_RELEASE);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	g_signal_new ("on_motion", SOY_CONTROLLERS_TYPE_POINTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, SOY_EVENTS_TYPE_MOTION);
#line 534 "Pointer.c"
}


static void soy_controllers_pointer_instance_init (soycontrollersPointer * self) {
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self->priv = SOY_CONTROLLERS_POINTER_GET_PRIVATE (self);
#line 541 "Pointer.c"
}


static void soy_controllers_pointer_finalize (GObject* obj) {
	soycontrollersPointer * self;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointer);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	G_OBJECT_CLASS (soy_controllers_pointer_parent_class)->finalize (obj);
#line 551 "Pointer.c"
}


GType soy_controllers_pointer_get_type (void) {
	static volatile gsize soy_controllers_pointer_type_id__volatile = 0;
	if (g_once_init_enter (&soy_controllers_pointer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (soycontrollersPointerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) soy_controllers_pointer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (soycontrollersPointer), 0, (GInstanceInitFunc) soy_controllers_pointer_instance_init, NULL };
		GType soy_controllers_pointer_type_id;
		soy_controllers_pointer_type_id = g_type_register_static (SOY_CONTROLLERS_TYPE_CONTROLLER, "soycontrollersPointer", &g_define_type_info, 0);
		g_once_init_leave (&soy_controllers_pointer_type_id__volatile, soy_controllers_pointer_type_id);
	}
	return soy_controllers_pointer_type_id__volatile;
}


static void _vala_soy_controllers_pointer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	soycontrollersPointer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointer);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	switch (property_id) {
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		case SOY_CONTROLLERS_POINTER_POSITION:
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		g_value_take_object (value, soy_controllers_pointer_get_position (self));
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		break;
#line 578 "Pointer.c"
		default:
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		break;
#line 584 "Pointer.c"
	}
}


static void _vala_soy_controllers_pointer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	soycontrollersPointer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointer);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
	switch (property_id) {
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		case SOY_CONTROLLERS_POINTER_POSITION:
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		soy_controllers_pointer_set_position (self, g_value_get_object (value));
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		break;
#line 600 "Pointer.c"
		default:
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/controllers/Pointer.gs"
		break;
#line 606 "Pointer.c"
	}
}



