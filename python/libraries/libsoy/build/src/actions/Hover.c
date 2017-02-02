/* Hover.c generated by valac 0.22.1, the Vala compiler
 * generated from Hover.gs, do not modify */

/*
 *  libsoy - soy.actions.Hover
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


#define SOY_ACTIONS_TYPE_ACTION (soy_actions_action_get_type ())
#define SOY_ACTIONS_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_ACTIONS_TYPE_ACTION, soyactionsAction))
#define SOY_ACTIONS_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_ACTIONS_TYPE_ACTION, soyactionsActionClass))
#define SOY_ACTIONS_IS_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_ACTIONS_TYPE_ACTION))
#define SOY_ACTIONS_IS_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_ACTIONS_TYPE_ACTION))
#define SOY_ACTIONS_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_ACTIONS_TYPE_ACTION, soyactionsActionClass))

typedef struct _soyactionsAction soyactionsAction;
typedef struct _soyactionsActionClass soyactionsActionClass;
typedef struct _soyactionsActionPrivate soyactionsActionPrivate;

#define SOY_ACTIONS_ACTION_TYPE_HID_PROFILE (soy_actions_action_hid_profile_get_type ())
typedef struct _soyactionsActionhid_profile soyactionsActionhid_profile;

#define SOY_ACTIONS_TYPE_HOVER (soy_actions_hover_get_type ())
#define SOY_ACTIONS_HOVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_ACTIONS_TYPE_HOVER, soyactionsHover))
#define SOY_ACTIONS_HOVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_ACTIONS_TYPE_HOVER, soyactionsHoverClass))
#define SOY_ACTIONS_IS_HOVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_ACTIONS_TYPE_HOVER))
#define SOY_ACTIONS_IS_HOVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_ACTIONS_TYPE_HOVER))
#define SOY_ACTIONS_HOVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_ACTIONS_TYPE_HOVER, soyactionsHoverClass))

typedef struct _soyactionsHover soyactionsHover;
typedef struct _soyactionsHoverClass soyactionsHoverClass;
typedef struct _soyactionsHoverPrivate soyactionsHoverPrivate;

struct _soyactionsActionhid_profile {
	gchar* name;
	gchar** axis;
	gint axis_length1;
	gchar** buttons;
	gint buttons_length1;
	gboolean pointer;
	gboolean text;
	gint8 touch;
};

struct _soyactionsAction {
	GObject parent_instance;
	soyactionsActionPrivate * priv;
	soyactionsActionhid_profile* hid_profiles;
	gint hid_profiles_length1;
	gint hid_mode;
};

struct _soyactionsActionClass {
	GObjectClass parent_class;
	gchar* (*tp_repr) (soyactionsAction* self);
	void (*hid_axis_value) (soyactionsAction* self, gint8 axis, gfloat value);
	void (*hid_button_down) (soyactionsAction* self, const gchar* button);
	void (*hid_button_up) (soyactionsAction* self, const gchar* button);
	void (*hid_text) (soyactionsAction* self, const gchar* text);
	void (*hid_touch_down) (soyactionsAction* self, const gchar* button, gint x, gint y);
	void (*hid_touch_drag) (soyactionsAction* self, const gchar* button, gint x, gint y);
	void (*hid_touch_up) (soyactionsAction* self, const gchar* button, gint x, gint y);
	void (*hid_moved) (soyactionsAction* self, gint x, gint y);
};

struct _soyactionsHover {
	soyactionsAction parent_instance;
	soyactionsHoverPrivate * priv;
};

struct _soyactionsHoverClass {
	soyactionsActionClass parent_class;
};

struct _soyactionsHoverPrivate {
	gboolean _hover;
	gint _targetX;
	gint _targetY;
	gint _targetW;
	gint _targetH;
};


static gpointer soy_actions_hover_parent_class = NULL;

GType soy_actions_action_get_type (void) G_GNUC_CONST;
GType soy_actions_action_hid_profile_get_type (void) G_GNUC_CONST;
soyactionsActionhid_profile* soy_actions_action_hid_profile_dup (const soyactionsActionhid_profile* self);
void soy_actions_action_hid_profile_free (soyactionsActionhid_profile* self);
void soy_actions_action_hid_profile_copy (const soyactionsActionhid_profile* self, soyactionsActionhid_profile* dest);
void soy_actions_action_hid_profile_destroy (soyactionsActionhid_profile* self);
GType soy_actions_hover_get_type (void) G_GNUC_CONST;
#define SOY_ACTIONS_HOVER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SOY_ACTIONS_TYPE_HOVER, soyactionsHoverPrivate))
enum  {
	SOY_ACTIONS_HOVER_DUMMY_PROPERTY
};
soyactionsHover* soy_actions_hover_new (gint targetX, gint targetY, gint targetW, gint targetH);
soyactionsHover* soy_actions_hover_construct (GType object_type, gint targetX, gint targetY, gint targetW, gint targetH);
soyactionsAction* soy_actions_action_new (void);
soyactionsAction* soy_actions_action_construct (GType object_type);
static gchar* soy_actions_hover_real_tp_repr (soyactionsAction* base);
static void soy_actions_hover_real_hid_moved (soyactionsAction* base, gint x, gint y);
static GObject * soy_actions_hover_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void soy_actions_hover_finalize (GObject* obj);


soyactionsHover* soy_actions_hover_construct (GType object_type, gint targetX, gint targetY, gint targetW, gint targetH) {
	soyactionsHover * self = NULL;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
#line 41 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self = (soyactionsHover*) soy_actions_action_construct (object_type);
#line 42 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp0_ = targetX;
#line 42 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self->priv->_targetX = _tmp0_;
#line 43 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp1_ = targetY;
#line 43 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self->priv->_targetY = _tmp1_;
#line 44 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp2_ = targetW;
#line 44 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self->priv->_targetW = _tmp2_;
#line 45 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp3_ = targetH;
#line 45 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self->priv->_targetH = _tmp3_;
#line 40 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	return self;
#line 156 "Hover.c"
}


soyactionsHover* soy_actions_hover_new (gint targetX, gint targetY, gint targetW, gint targetH) {
#line 40 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	return soy_actions_hover_construct (SOY_ACTIONS_TYPE_HOVER, targetX, targetY, targetW, targetH);
#line 163 "Hover.c"
}


static gchar* soy_actions_hover_real_tp_repr (soyactionsAction* base) {
	soyactionsHover * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
#line 50 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self = (soyactionsHover*) base;
#line 51 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp0_ = g_strdup ("Hover");
#line 51 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	result = _tmp0_;
#line 51 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	return result;
#line 179 "Hover.c"
}


static void soy_actions_hover_real_hid_moved (soyactionsAction* base, gint x, gint y) {
	soyactionsHover * self;
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gboolean _tmp6_ = FALSE;
#line 53 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self = (soyactionsHover*) base;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp1_ = x;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp2_ = self->priv->_targetX;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	if (_tmp1_ >= _tmp2_) {
#line 197 "Hover.c"
		gint _tmp3_ = 0;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp3_ = x;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp4_ = self->priv->_targetX;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp5_ = self->priv->_targetW;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp0_ = _tmp3_ <= (_tmp4_ + _tmp5_);
#line 209 "Hover.c"
	} else {
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp0_ = FALSE;
#line 213 "Hover.c"
	}
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	_tmp6_ = _tmp0_;
#line 56 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	if (_tmp6_) {
#line 219 "Hover.c"
		gboolean _tmp7_ = FALSE;
		gint _tmp8_ = 0;
		gint _tmp9_ = 0;
		gboolean _tmp13_ = FALSE;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp8_ = y;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp9_ = self->priv->_targetY;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		if (_tmp8_ >= _tmp9_) {
#line 230 "Hover.c"
			gint _tmp10_ = 0;
			gint _tmp11_ = 0;
			gint _tmp12_ = 0;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
			_tmp10_ = y;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
			_tmp11_ = self->priv->_targetY;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
			_tmp12_ = self->priv->_targetH;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
			_tmp7_ = _tmp10_ <= (_tmp11_ + _tmp12_);
#line 242 "Hover.c"
		} else {
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
			_tmp7_ = FALSE;
#line 246 "Hover.c"
		}
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp13_ = _tmp7_;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		if (_tmp13_) {
#line 59 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
			self->priv->_hover = TRUE;
#line 254 "Hover.c"
		}
	} else {
		gboolean _tmp14_ = FALSE;
#line 63 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		_tmp14_ = self->priv->_hover;
#line 63 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
		if (_tmp14_) {
#line 66 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
			self->priv->_hover = FALSE;
#line 264 "Hover.c"
		}
	}
#line 68 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	return;
#line 269 "Hover.c"
}


static GObject * soy_actions_hover_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	soyactionsHover * self;
#line 37 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	parent_class = G_OBJECT_CLASS (soy_actions_hover_parent_class);
#line 37 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 37 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_ACTIONS_TYPE_HOVER, soyactionsHover);
#line 38 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self->priv->_hover = FALSE;
#line 37 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	return obj;
#line 287 "Hover.c"
}


static void soy_actions_hover_class_init (soyactionsHoverClass * klass) {
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	soy_actions_hover_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	g_type_class_add_private (klass, sizeof (soyactionsHoverPrivate));
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	SOY_ACTIONS_ACTION_CLASS (klass)->tp_repr = soy_actions_hover_real_tp_repr;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	SOY_ACTIONS_ACTION_CLASS (klass)->hid_moved = soy_actions_hover_real_hid_moved;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	G_OBJECT_CLASS (klass)->constructor = soy_actions_hover_constructor;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	G_OBJECT_CLASS (klass)->finalize = soy_actions_hover_finalize;
#line 304 "Hover.c"
}


static void soy_actions_hover_instance_init (soyactionsHover * self) {
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self->priv = SOY_ACTIONS_HOVER_GET_PRIVATE (self);
#line 311 "Hover.c"
}


static void soy_actions_hover_finalize (GObject* obj) {
	soyactionsHover * self;
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_ACTIONS_TYPE_HOVER, soyactionsHover);
#line 23 "/home/jeff/Documents/libraries/libsoy/src/actions/Hover.gs"
	G_OBJECT_CLASS (soy_actions_hover_parent_class)->finalize (obj);
#line 321 "Hover.c"
}


GType soy_actions_hover_get_type (void) {
	static volatile gsize soy_actions_hover_type_id__volatile = 0;
	if (g_once_init_enter (&soy_actions_hover_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (soyactionsHoverClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) soy_actions_hover_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (soyactionsHover), 0, (GInstanceInitFunc) soy_actions_hover_instance_init, NULL };
		GType soy_actions_hover_type_id;
		soy_actions_hover_type_id = g_type_register_static (SOY_ACTIONS_TYPE_ACTION, "soyactionsHover", &g_define_type_info, 0);
		g_once_init_leave (&soy_actions_hover_type_id__volatile, soy_actions_hover_type_id);
	}
	return soy_actions_hover_type_id__volatile;
}


