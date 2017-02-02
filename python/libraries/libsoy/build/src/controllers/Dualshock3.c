/* Dualshock3.c generated by valac 0.22.1, the Vala compiler
 * generated from Dualshock3.gs, do not modify */

/*
 *  libsoy - soy.controllers.Dualshock3
 *  Copyright (C) 2006-2014 Copyleft Games Group
 *
 *  This program is free software you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program if not, see http://www.gnu.org/licenses
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define SOY_CONTROLLERS_TYPE_CONTROLLER (soy_controllers_controller_get_type ())
#define SOY_CONTROLLERS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersController))
#define SOY_CONTROLLERS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))
#define SOY_CONTROLLERS_IS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_IS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))

typedef struct _soycontrollersController soycontrollersController;
typedef struct _soycontrollersControllerClass soycontrollersControllerClass;
typedef struct _soycontrollersControllerPrivate soycontrollersControllerPrivate;

#define SOY_CONTROLLERS_TYPE_DUALSHOCK3 (soy_controllers_dualshock3_get_type ())
#define SOY_CONTROLLERS_DUALSHOCK3(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_DUALSHOCK3, soycontrollersDualshock3))
#define SOY_CONTROLLERS_DUALSHOCK3_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_DUALSHOCK3, soycontrollersDualshock3Class))
#define SOY_CONTROLLERS_IS_DUALSHOCK3(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_DUALSHOCK3))
#define SOY_CONTROLLERS_IS_DUALSHOCK3_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_DUALSHOCK3))
#define SOY_CONTROLLERS_DUALSHOCK3_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_DUALSHOCK3, soycontrollersDualshock3Class))

typedef struct _soycontrollersDualshock3 soycontrollersDualshock3;
typedef struct _soycontrollersDualshock3Class soycontrollersDualshock3Class;
typedef struct _soycontrollersDualshock3Private soycontrollersDualshock3Private;

struct _soycontrollersController {
	GObject parent_instance;
	soycontrollersControllerPrivate * priv;
};

struct _soycontrollersControllerClass {
	GObjectClass parent_class;
	gchar* (*tp_repr) (soycontrollersController* self);
};

struct _soycontrollersDualshock3 {
	soycontrollersController parent_instance;
	soycontrollersDualshock3Private * priv;
};

struct _soycontrollersDualshock3Class {
	soycontrollersControllerClass parent_class;
};


static gpointer soy_controllers_dualshock3_parent_class = NULL;

GType soy_controllers_controller_get_type (void) G_GNUC_CONST;
GType soy_controllers_dualshock3_get_type (void) G_GNUC_CONST;
enum  {
	SOY_CONTROLLERS_DUALSHOCK3_DUMMY_PROPERTY
};
static gchar* soy_controllers_dualshock3_real_tp_repr (soycontrollersController* base);
void soy_controllers_dualshock3_show_master (soycontrollersDualshock3* self);
soycontrollersDualshock3* soy_controllers_dualshock3_new (void);
soycontrollersDualshock3* soy_controllers_dualshock3_construct (GType object_type);
soycontrollersController* soy_controllers_controller_new (void);
soycontrollersController* soy_controllers_controller_construct (GType object_type);


static gchar* soy_controllers_dualshock3_real_tp_repr (soycontrollersController* base) {
	soycontrollersDualshock3 * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 35 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	self = (soycontrollersDualshock3*) base;
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	_tmp0_ = g_strdup ("Dualshock3");
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	result = _tmp0_;
#line 36 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	return result;
#line 99 "Dualshock3.c"
}


void soy_controllers_dualshock3_show_master (soycontrollersDualshock3* self) {
#line 37 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	g_return_if_fail (self != NULL);
#line 38 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	g_print ("Current Bluetooth master: \n");
#line 108 "Dualshock3.c"
}


soycontrollersDualshock3* soy_controllers_dualshock3_construct (GType object_type) {
	soycontrollersDualshock3 * self = NULL;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	self = (soycontrollersDualshock3*) soy_controllers_controller_construct (object_type);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	return self;
#line 118 "Dualshock3.c"
}


soycontrollersDualshock3* soy_controllers_dualshock3_new (void) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	return soy_controllers_dualshock3_construct (SOY_CONTROLLERS_TYPE_DUALSHOCK3);
#line 125 "Dualshock3.c"
}


static void soy_controllers_dualshock3_class_init (soycontrollersDualshock3Class * klass) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	soy_controllers_dualshock3_parent_class = g_type_class_peek_parent (klass);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/controllers/Dualshock3.gs"
	SOY_CONTROLLERS_CONTROLLER_CLASS (klass)->tp_repr = soy_controllers_dualshock3_real_tp_repr;
#line 134 "Dualshock3.c"
}


static void soy_controllers_dualshock3_instance_init (soycontrollersDualshock3 * self) {
}


GType soy_controllers_dualshock3_get_type (void) {
	static volatile gsize soy_controllers_dualshock3_type_id__volatile = 0;
	if (g_once_init_enter (&soy_controllers_dualshock3_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (soycontrollersDualshock3Class), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) soy_controllers_dualshock3_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (soycontrollersDualshock3), 0, (GInstanceInitFunc) soy_controllers_dualshock3_instance_init, NULL };
		GType soy_controllers_dualshock3_type_id;
		soy_controllers_dualshock3_type_id = g_type_register_static (SOY_CONTROLLERS_TYPE_CONTROLLER, "soycontrollersDualshock3", &g_define_type_info, 0);
		g_once_init_leave (&soy_controllers_dualshock3_type_id__volatile, soy_controllers_dualshock3_type_id);
	}
	return soy_controllers_dualshock3_type_id__volatile;
}


