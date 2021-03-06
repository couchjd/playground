/* Device.c generated by valac 0.22.1, the Vala compiler
 * generated from Device.gs, do not modify */

/*
 *  libsoy - soy.events.Device
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
#include <float.h>
#include <math.h>


#define SOY_EVENTS_TYPE_EVENT (soy_events_event_get_type ())
#define SOY_EVENTS_EVENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_EVENT, soyeventsEvent))
#define SOY_EVENTS_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_EVENT, soyeventsEventClass))
#define SOY_EVENTS_IS_EVENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_EVENT))
#define SOY_EVENTS_IS_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_EVENT))
#define SOY_EVENTS_EVENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_EVENT, soyeventsEventClass))

typedef struct _soyeventsEvent soyeventsEvent;
typedef struct _soyeventsEventClass soyeventsEventClass;
typedef struct _soyeventsEventPrivate soyeventsEventPrivate;

#define SOY_EVENTS_TYPE_DEVICE (soy_events_device_get_type ())
#define SOY_EVENTS_DEVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_DEVICE, soyeventsDevice))
#define SOY_EVENTS_DEVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_DEVICE, soyeventsDeviceClass))
#define SOY_EVENTS_IS_DEVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_DEVICE))
#define SOY_EVENTS_IS_DEVICE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_DEVICE))
#define SOY_EVENTS_DEVICE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_DEVICE, soyeventsDeviceClass))

typedef struct _soyeventsDevice soyeventsDevice;
typedef struct _soyeventsDeviceClass soyeventsDeviceClass;
typedef struct _soyeventsDevicePrivate soyeventsDevicePrivate;

struct _soyeventsEvent {
	GObject parent_instance;
	soyeventsEventPrivate * priv;
};

struct _soyeventsEventClass {
	GObjectClass parent_class;
};

struct _soyeventsDevice {
	soyeventsEvent parent_instance;
	soyeventsDevicePrivate * priv;
	gint detail;
};

struct _soyeventsDeviceClass {
	soyeventsEventClass parent_class;
};

struct _soyeventsDevicePrivate {
	gdouble _root_x;
	gdouble _root_y;
	gdouble _x;
	gdouble _y;
};


static gpointer soy_events_device_parent_class = NULL;

GType soy_events_event_get_type (void) G_GNUC_CONST;
GType soy_events_device_get_type (void) G_GNUC_CONST;
#define SOY_EVENTS_DEVICE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SOY_EVENTS_TYPE_DEVICE, soyeventsDevicePrivate))
enum  {
	SOY_EVENTS_DEVICE_DUMMY_PROPERTY,
	SOY_EVENTS_DEVICE_ROOT_X,
	SOY_EVENTS_DEVICE_ROOT_Y,
	SOY_EVENTS_DEVICE_X,
	SOY_EVENTS_DEVICE_Y
};
soyeventsDevice* soy_events_device_new_instance (gint detail, gdouble root_x, gdouble root_y, gdouble x, gdouble y);
soyeventsDevice* soy_events_device_construct_instance (GType object_type, gint detail, gdouble root_x, gdouble root_y, gdouble x, gdouble y);
soyeventsEvent* soy_events_event_new (void);
soyeventsEvent* soy_events_event_construct (GType object_type);
soyeventsDevice* soy_events_device_new (void);
soyeventsDevice* soy_events_device_construct (GType object_type);
gdouble soy_events_device_get_root_x (soyeventsDevice* self);
gdouble soy_events_device_get_root_y (soyeventsDevice* self);
gdouble soy_events_device_get_x (soyeventsDevice* self);
gdouble soy_events_device_get_y (soyeventsDevice* self);
static void soy_events_device_finalize (GObject* obj);
static void _vala_soy_events_device_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);


soyeventsDevice* soy_events_device_construct_instance (GType object_type, gint detail, gdouble root_x, gdouble root_y, gdouble x, gdouble y) {
	soyeventsDevice * self = NULL;
	gint _tmp0_ = 0;
	gdouble _tmp1_ = 0.0;
	gdouble _tmp2_ = 0.0;
	gdouble _tmp3_ = 0.0;
	gdouble _tmp4_ = 0.0;
#line 37 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self = (soyeventsDevice*) soy_events_event_construct (object_type);
#line 42 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp0_ = detail;
#line 42 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self->detail = _tmp0_;
#line 43 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp1_ = root_x;
#line 43 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self->priv->_root_x = _tmp1_;
#line 44 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp2_ = root_y;
#line 44 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self->priv->_root_y = _tmp2_;
#line 45 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp3_ = x;
#line 45 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self->priv->_x = _tmp3_;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp4_ = y;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self->priv->_y = _tmp4_;
#line 37 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return self;
#line 136 "Device.c"
}


soyeventsDevice* soy_events_device_new_instance (gint detail, gdouble root_x, gdouble root_y, gdouble x, gdouble y) {
#line 37 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return soy_events_device_construct_instance (SOY_EVENTS_TYPE_DEVICE, detail, root_x, root_y, x, y);
#line 143 "Device.c"
}


soyeventsDevice* soy_events_device_construct (GType object_type) {
	soyeventsDevice * self = NULL;
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self = (soyeventsDevice*) soy_events_event_construct (object_type);
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return self;
#line 153 "Device.c"
}


soyeventsDevice* soy_events_device_new (void) {
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return soy_events_device_construct (SOY_EVENTS_TYPE_DEVICE);
#line 160 "Device.c"
}


gdouble soy_events_device_get_root_x (soyeventsDevice* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 32 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_return_val_if_fail (self != NULL, 0.0);
#line 32 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp0_ = self->priv->_root_x;
#line 32 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	result = _tmp0_;
#line 32 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return result;
#line 175 "Device.c"
}


gdouble soy_events_device_get_root_y (soyeventsDevice* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 33 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_return_val_if_fail (self != NULL, 0.0);
#line 33 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp0_ = self->priv->_root_y;
#line 33 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	result = _tmp0_;
#line 33 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return result;
#line 190 "Device.c"
}


gdouble soy_events_device_get_x (soyeventsDevice* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 34 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_return_val_if_fail (self != NULL, 0.0);
#line 34 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp0_ = self->priv->_x;
#line 34 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	result = _tmp0_;
#line 34 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return result;
#line 205 "Device.c"
}


gdouble soy_events_device_get_y (soyeventsDevice* self) {
	gdouble result;
	gdouble _tmp0_ = 0.0;
#line 35 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_return_val_if_fail (self != NULL, 0.0);
#line 35 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	_tmp0_ = self->priv->_y;
#line 35 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	result = _tmp0_;
#line 35 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	return result;
#line 220 "Device.c"
}


static void soy_events_device_class_init (soyeventsDeviceClass * klass) {
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	soy_events_device_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_type_class_add_private (klass, sizeof (soyeventsDevicePrivate));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	G_OBJECT_CLASS (klass)->get_property = _vala_soy_events_device_get_property;
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	G_OBJECT_CLASS (klass)->finalize = soy_events_device_finalize;
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SOY_EVENTS_DEVICE_ROOT_X, g_param_spec_double ("root-x", "root-x", "root-x", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SOY_EVENTS_DEVICE_ROOT_Y, g_param_spec_double ("root-y", "root-y", "root-y", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SOY_EVENTS_DEVICE_X, g_param_spec_double ("x", "x", "x", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SOY_EVENTS_DEVICE_Y, g_param_spec_double ("y", "y", "y", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 241 "Device.c"
}


static void soy_events_device_instance_init (soyeventsDevice * self) {
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self->priv = SOY_EVENTS_DEVICE_GET_PRIVATE (self);
#line 248 "Device.c"
}


static void soy_events_device_finalize (GObject* obj) {
	soyeventsDevice * self;
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_EVENTS_TYPE_DEVICE, soyeventsDevice);
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	G_OBJECT_CLASS (soy_events_device_parent_class)->finalize (obj);
#line 258 "Device.c"
}


GType soy_events_device_get_type (void) {
	static volatile gsize soy_events_device_type_id__volatile = 0;
	if (g_once_init_enter (&soy_events_device_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (soyeventsDeviceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) soy_events_device_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (soyeventsDevice), 0, (GInstanceInitFunc) soy_events_device_instance_init, NULL };
		GType soy_events_device_type_id;
		soy_events_device_type_id = g_type_register_static (SOY_EVENTS_TYPE_EVENT, "soyeventsDevice", &g_define_type_info, 0);
		g_once_init_leave (&soy_events_device_type_id__volatile, soy_events_device_type_id);
	}
	return soy_events_device_type_id__volatile;
}


static void _vala_soy_events_device_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	soyeventsDevice * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SOY_EVENTS_TYPE_DEVICE, soyeventsDevice);
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
	switch (property_id) {
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		case SOY_EVENTS_DEVICE_ROOT_X:
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		g_value_set_double (value, soy_events_device_get_root_x (self));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		break;
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		case SOY_EVENTS_DEVICE_ROOT_Y:
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		g_value_set_double (value, soy_events_device_get_root_y (self));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		break;
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		case SOY_EVENTS_DEVICE_X:
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		g_value_set_double (value, soy_events_device_get_x (self));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		break;
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		case SOY_EVENTS_DEVICE_Y:
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		g_value_set_double (value, soy_events_device_get_y (self));
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		break;
#line 303 "Device.c"
		default:
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 22 "/home/jeff/Documents/libraries/libsoy/src/events/Device.gs"
		break;
#line 309 "Device.c"
	}
}



