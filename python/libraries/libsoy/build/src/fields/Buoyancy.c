/* Buoyancy.c generated by valac 0.22.1, the Vala compiler
 * generated from Buoyancy.gs, do not modify */

/*
 *  libsoy - soy.fields.Buoyancy
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
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <soy-1/ode.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define SOY_BODIES_TYPE_BODY (soy_bodies_body_get_type ())
#define SOY_BODIES_BODY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_BODIES_TYPE_BODY, soybodiesBody))
#define SOY_BODIES_BODY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_BODIES_TYPE_BODY, soybodiesBodyClass))
#define SOY_BODIES_IS_BODY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_BODIES_TYPE_BODY))
#define SOY_BODIES_IS_BODY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_BODIES_TYPE_BODY))
#define SOY_BODIES_BODY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_BODIES_TYPE_BODY, soybodiesBodyClass))

typedef struct _soybodiesBody soybodiesBody;
typedef struct _soybodiesBodyClass soybodiesBodyClass;
typedef struct _soybodiesBodyPrivate soybodiesBodyPrivate;

#define SOY_BODIES_TYPE_LIGHT (soy_bodies_light_get_type ())
#define SOY_BODIES_LIGHT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_BODIES_TYPE_LIGHT, soybodiesLight))
#define SOY_BODIES_LIGHT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_BODIES_TYPE_LIGHT, soybodiesLightClass))
#define SOY_BODIES_IS_LIGHT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_BODIES_TYPE_LIGHT))
#define SOY_BODIES_IS_LIGHT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_BODIES_TYPE_LIGHT))
#define SOY_BODIES_LIGHT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_BODIES_TYPE_LIGHT, soybodiesLightClass))

typedef struct _soybodiesLight soybodiesLight;
typedef struct _soybodiesLightClass soybodiesLightClass;

#define SOY_SCENES_TYPE_SCENE (soy_scenes_scene_get_type ())
#define SOY_SCENES_SCENE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_SCENES_TYPE_SCENE, soyscenesScene))
#define SOY_SCENES_SCENE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_SCENES_TYPE_SCENE, soyscenesSceneClass))
#define SOY_SCENES_IS_SCENE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_SCENES_TYPE_SCENE))
#define SOY_SCENES_IS_SCENE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_SCENES_TYPE_SCENE))
#define SOY_SCENES_SCENE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_SCENES_TYPE_SCENE, soyscenesSceneClass))

typedef struct _soyscenesScene soyscenesScene;
typedef struct _soyscenesSceneClass soyscenesSceneClass;

#define SOY_FIELDS_TYPE_FIELD (soy_fields_field_get_type ())
#define SOY_FIELDS_FIELD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_FIELDS_TYPE_FIELD, soyfieldsField))
#define SOY_FIELDS_FIELD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_FIELDS_TYPE_FIELD, soyfieldsFieldClass))
#define SOY_FIELDS_IS_FIELD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_FIELDS_TYPE_FIELD))
#define SOY_FIELDS_IS_FIELD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_FIELDS_TYPE_FIELD))
#define SOY_FIELDS_FIELD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_FIELDS_TYPE_FIELD, soyfieldsFieldClass))

typedef struct _soyfieldsField soyfieldsField;
typedef struct _soyfieldsFieldClass soyfieldsFieldClass;
typedef struct _soyfieldsFieldPrivate soyfieldsFieldPrivate;

#define SOY_FIELDS_TYPE_BUOYANCY (soy_fields_buoyancy_get_type ())
#define SOY_FIELDS_BUOYANCY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancy))
#define SOY_FIELDS_BUOYANCY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancyClass))
#define SOY_FIELDS_IS_BUOYANCY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_FIELDS_TYPE_BUOYANCY))
#define SOY_FIELDS_IS_BUOYANCY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_FIELDS_TYPE_BUOYANCY))
#define SOY_FIELDS_BUOYANCY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancyClass))

typedef struct _soyfieldsBuoyancy soyfieldsBuoyancy;
typedef struct _soyfieldsBuoyancyClass soyfieldsBuoyancyClass;
typedef struct _soyfieldsBuoyancyPrivate soyfieldsBuoyancyPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SOY_ATOMS_TYPE_POSITION (soy_atoms_position_get_type ())
#define SOY_ATOMS_POSITION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_ATOMS_TYPE_POSITION, soyatomsPosition))
#define SOY_ATOMS_POSITION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_ATOMS_TYPE_POSITION, soyatomsPositionClass))
#define SOY_ATOMS_IS_POSITION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_ATOMS_TYPE_POSITION))
#define SOY_ATOMS_IS_POSITION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_ATOMS_TYPE_POSITION))
#define SOY_ATOMS_POSITION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_ATOMS_TYPE_POSITION, soyatomsPositionClass))

typedef struct _soyatomsPosition soyatomsPosition;
typedef struct _soyatomsPositionClass soyatomsPositionClass;

struct _soybodiesBody {
	GObject parent_instance;
	soybodiesBodyPrivate * priv;
	struct dxBody* body;
	GLfloat* fogcoords;
	gint fogcoords_length1;
	struct dxGeom* geom;
	gchar* key;
	GMutex mutex;
	GLfloat* tslvs;
	gint tslvs_length1;
	soyscenesScene* scene;
	GeeHashMap* tags_;
};

struct _soybodiesBodyClass {
	GObjectClass parent_class;
	void (*create_geom) (soybodiesBody* self, GObject* geom_param, gfloat geom_scalar);
	void (*set_mass) (soybodiesBody* self, gfloat density);
	void (*add_extra) (soybodiesBody* self);
	void (*remove_extra) (soybodiesBody* self);
	gfloat (*pointDepth) (soybodiesBody* self, gfloat x, gfloat y, gfloat z);
	gfloat (*volume) (soybodiesBody* self);
	gint (*finite) (soybodiesBody* self);
	GLfloat* (*model_matrix) (soybodiesBody* self, int* result_length1);
	void (*render) (soybodiesBody* self, gboolean alpha_stage, GLfloat* view, int view_length1, GLfloat* projection, int projection_length1, soybodiesLight** lights, int lights_length1, GLfloat* ambient, int ambient_length1);
	gfloat (*get_col_radius) (soybodiesBody* self);
};

struct _soyfieldsField {
	soybodiesBody parent_instance;
	soyfieldsFieldPrivate * priv;
};

struct _soyfieldsFieldClass {
	soybodiesBodyClass parent_class;
	gboolean (*exert) (soyfieldsField* self, soybodiesBody* other);
	void (*give) (soyfieldsField* self, gint data);
	void (*commit) (soyfieldsField* self);
};

struct _soyfieldsBuoyancy {
	soyfieldsField parent_instance;
	soyfieldsBuoyancyPrivate * priv;
};

struct _soyfieldsBuoyancyClass {
	soyfieldsFieldClass parent_class;
};

struct _soyfieldsBuoyancyPrivate {
	GeeArrayList* _affected;
	gfloat _viscosity;
};


static gpointer soy_fields_buoyancy_parent_class = NULL;

GType soy_bodies_body_get_type (void) G_GNUC_CONST;
GType soy_bodies_light_get_type (void) G_GNUC_CONST;
GType soy_scenes_scene_get_type (void) G_GNUC_CONST;
GType soy_fields_field_get_type (void) G_GNUC_CONST;
GType soy_fields_buoyancy_get_type (void) G_GNUC_CONST;
#define SOY_FIELDS_BUOYANCY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancyPrivate))
enum  {
	SOY_FIELDS_BUOYANCY_DUMMY_PROPERTY,
	SOY_FIELDS_BUOYANCY_VISCOSITY
};
static gboolean soy_fields_buoyancy_real_exert (soyfieldsField* base, soybodiesBody* other);
gfloat soy_bodies_body_volume (soybodiesBody* self);
gfloat soy_bodies_body_pointDepth (soybodiesBody* self, gfloat x, gfloat y, gfloat z);
GType soy_atoms_position_get_type (void) G_GNUC_CONST;
soyatomsPosition* soy_bodies_body_get_position (soybodiesBody* self);
gfloat soy_atoms_position_get_x (soyatomsPosition* self);
gfloat soy_atoms_position_get_y (soyatomsPosition* self);
gfloat soy_atoms_position_get_z (soyatomsPosition* self);
GeeHashMap* soy_bodies_body_get_tags (soybodiesBody* self);
gfloat soy_bodies_body_get_density (soybodiesBody* self);
static void soy_fields_buoyancy_real_give (soyfieldsField* base, gint data);
soyfieldsBuoyancy* soy_fields_buoyancy_new (void);
soyfieldsBuoyancy* soy_fields_buoyancy_construct (GType object_type);
soyfieldsField* soy_fields_field_new (void);
soyfieldsField* soy_fields_field_construct (GType object_type);
gfloat soy_fields_buoyancy_get_viscosity (soyfieldsBuoyancy* self);
void soy_fields_buoyancy_set_viscosity (soyfieldsBuoyancy* self, gfloat value);
static GObject * soy_fields_buoyancy_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void soy_fields_buoyancy_finalize (GObject* obj);
static void _vala_soy_fields_buoyancy_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_soy_fields_buoyancy_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gboolean soy_fields_buoyancy_real_exert (soyfieldsField* base, soybodiesBody* other) {
	soyfieldsBuoyancy * self;
	gboolean result = FALSE;
	gfloat radius = 0.0F;
	gfloat submersion = 0.0F;
	soybodiesBody* _tmp0_ = NULL;
	gfloat _tmp1_ = 0.0F;
	soybodiesBody* _tmp2_ = NULL;
	soyatomsPosition* _tmp3_ = NULL;
	soyatomsPosition* _tmp4_ = NULL;
	soyatomsPosition* _tmp5_ = NULL;
	gfloat _tmp6_ = 0.0F;
	gfloat _tmp7_ = 0.0F;
	soybodiesBody* _tmp8_ = NULL;
	soyatomsPosition* _tmp9_ = NULL;
	soyatomsPosition* _tmp10_ = NULL;
	soyatomsPosition* _tmp11_ = NULL;
	gfloat _tmp12_ = 0.0F;
	gfloat _tmp13_ = 0.0F;
	soybodiesBody* _tmp14_ = NULL;
	soyatomsPosition* _tmp15_ = NULL;
	soyatomsPosition* _tmp16_ = NULL;
	soyatomsPosition* _tmp17_ = NULL;
	gfloat _tmp18_ = 0.0F;
	gfloat _tmp19_ = 0.0F;
	gfloat _tmp20_ = 0.0F;
	gfloat _tmp21_ = 0.0F;
	gfloat _tmp22_ = 0.0F;
	soybodiesBody* _tmp23_ = NULL;
	GeeHashMap* _tmp24_ = NULL;
	GeeHashMap* _tmp25_ = NULL;
	GeeHashMap* _tmp26_ = NULL;
	soybodiesBody* _tmp27_ = NULL;
	gfloat _tmp28_ = 0.0F;
	gfloat _tmp29_ = 0.0F;
	soybodiesBody* _tmp30_ = NULL;
	gfloat _tmp31_ = 0.0F;
	gfloat _tmp32_ = 0.0F;
	soybodiesBody* _tmp33_ = NULL;
	gfloat _tmp34_ = 0.0F;
	gfloat _tmp35_ = 0.0F;
	gfloat _tmp36_ = 0.0F;
	GeeArrayList* _tmp37_ = NULL;
	soybodiesBody* _tmp38_ = NULL;
#line 44 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self = (soyfieldsBuoyancy*) base;
#line 44 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	g_return_val_if_fail (other != NULL, FALSE);
#line 47 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp0_ = other;
#line 47 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp1_ = soy_bodies_body_volume (_tmp0_);
#line 47 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	if (_tmp1_ == 0.0f) {
#line 48 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		result = FALSE;
#line 48 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		return result;
#line 249 "Buoyancy.c"
	}
#line 51 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	radius = 1.0f;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp2_ = other;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp3_ = soy_bodies_body_get_position (_tmp2_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp4_ = _tmp3_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp5_ = _tmp4_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp6_ = soy_atoms_position_get_x (_tmp5_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp7_ = _tmp6_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp8_ = other;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp9_ = soy_bodies_body_get_position (_tmp8_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp10_ = _tmp9_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp11_ = _tmp10_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp12_ = soy_atoms_position_get_y (_tmp11_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp13_ = _tmp12_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp14_ = other;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp15_ = soy_bodies_body_get_position (_tmp14_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp16_ = _tmp15_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp17_ = _tmp16_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp18_ = soy_atoms_position_get_z (_tmp17_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp19_ = _tmp18_;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp20_ = soy_bodies_body_pointDepth ((soybodiesBody*) self, (gfloat) _tmp7_, (gfloat) _tmp13_, (gfloat) _tmp19_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp21_ = radius;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp22_ = radius;
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	submersion = (_tmp20_ + _tmp21_) / (_tmp22_ * 2);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_g_object_unref0 (_tmp17_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_g_object_unref0 (_tmp11_);
#line 52 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_g_object_unref0 (_tmp5_);
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp23_ = other;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp24_ = soy_bodies_body_get_tags (_tmp23_);
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp25_ = _tmp24_;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp26_ = _tmp25_;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp27_ = other;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp28_ = soy_bodies_body_get_density (_tmp27_);
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp29_ = _tmp28_;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp30_ = other;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp31_ = soy_bodies_body_volume (_tmp30_);
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp32_ = submersion;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp33_ = other;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp34_ = soy_bodies_body_volume (_tmp33_);
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp35_ = self->priv->_viscosity;
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp36_ = (_tmp29_ * _tmp31_) - ((_tmp32_ * _tmp34_) * _tmp35_);
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	gee_abstract_map_set ((GeeAbstractMap*) _tmp26_, "bmass", &_tmp36_);
#line 57 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_g_object_unref0 (_tmp26_);
#line 58 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp37_ = self->priv->_affected;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp38_ = other;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp37_, _tmp38_);
#line 59 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	result = TRUE;
#line 59 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	return result;
#line 345 "Buoyancy.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	return self ? g_object_ref (self) : NULL;
#line 352 "Buoyancy.c"
}


static void soy_fields_buoyancy_real_give (soyfieldsField* base, gint data) {
	soyfieldsBuoyancy * self;
	gint _tmp0_ = 0;
#line 62 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self = (soyfieldsBuoyancy*) base;
#line 63 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp0_ = data;
#line 63 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	if (_tmp0_ == 0) {
#line 365 "Buoyancy.c"
		GeeArrayList* _tmp16_ = NULL;
		{
			GeeArrayList* _body_list = NULL;
			GeeArrayList* _tmp1_ = NULL;
			GeeArrayList* _tmp2_ = NULL;
			gint _body_size = 0;
			GeeArrayList* _tmp3_ = NULL;
			gint _tmp4_ = 0;
			gint _tmp5_ = 0;
			gint _body_index = 0;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_tmp1_ = self->priv->_affected;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_tmp2_ = _g_object_ref0 (_tmp1_);
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_body_list = _tmp2_;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_tmp3_ = _body_list;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_tmp4_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp3_);
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_tmp5_ = _tmp4_;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_body_size = _tmp5_;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_body_index = -1;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			while (TRUE) {
#line 394 "Buoyancy.c"
				gint _tmp6_ = 0;
				gint _tmp7_ = 0;
				gint _tmp8_ = 0;
				soybodiesBody* body = NULL;
				GeeArrayList* _tmp9_ = NULL;
				gint _tmp10_ = 0;
				gpointer _tmp11_ = NULL;
				soybodiesBody* _tmp12_ = NULL;
				GeeHashMap* _tmp13_ = NULL;
				GeeHashMap* _tmp14_ = NULL;
				GeeHashMap* _tmp15_ = NULL;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp6_ = _body_index;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_body_index = _tmp6_ + 1;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp7_ = _body_index;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp8_ = _body_size;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				if (!(_tmp7_ < _tmp8_)) {
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
					break;
#line 418 "Buoyancy.c"
				}
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp9_ = _body_list;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp10_ = _body_index;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _tmp10_);
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				body = (soybodiesBody*) _tmp11_;
#line 65 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp12_ = body;
#line 65 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp13_ = soy_bodies_body_get_tags (_tmp12_);
#line 65 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp14_ = _tmp13_;
#line 65 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_tmp15_ = _tmp14_;
#line 65 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				gee_abstract_map_unset ((GeeAbstractMap*) _tmp15_, "bmass", NULL);
#line 65 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_g_object_unref0 (_tmp15_);
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
				_g_object_unref0 (body);
#line 442 "Buoyancy.c"
			}
#line 64 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
			_g_object_unref0 (_body_list);
#line 446 "Buoyancy.c"
		}
#line 66 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		_tmp16_ = self->priv->_affected;
#line 66 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		gee_abstract_collection_clear ((GeeAbstractCollection*) _tmp16_);
#line 452 "Buoyancy.c"
	}
}


soyfieldsBuoyancy* soy_fields_buoyancy_construct (GType object_type) {
	soyfieldsBuoyancy * self = NULL;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self = (soyfieldsBuoyancy*) soy_fields_field_construct (object_type);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	return self;
#line 463 "Buoyancy.c"
}


soyfieldsBuoyancy* soy_fields_buoyancy_new (void) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	return soy_fields_buoyancy_construct (SOY_FIELDS_TYPE_BUOYANCY);
#line 470 "Buoyancy.c"
}


gfloat soy_fields_buoyancy_get_viscosity (soyfieldsBuoyancy* self) {
	gfloat result;
	gfloat _tmp0_ = 0.0F;
#line 76 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	g_return_val_if_fail (self != NULL, 0.0F);
#line 77 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp0_ = self->priv->_viscosity;
#line 77 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	result = _tmp0_;
#line 77 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	return result;
#line 485 "Buoyancy.c"
}


void soy_fields_buoyancy_set_viscosity (soyfieldsBuoyancy* self, gfloat value) {
	gfloat _tmp0_ = 0.0F;
#line 78 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	g_return_if_fail (self != NULL);
#line 79 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp0_ = value;
#line 79 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self->priv->_viscosity = _tmp0_;
#line 78 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	g_object_notify ((GObject *) self, "viscosity");
#line 499 "Buoyancy.c"
}


static GObject * soy_fields_buoyancy_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	soyfieldsBuoyancy * self;
	GeeArrayList* _tmp0_ = NULL;
#line 39 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	parent_class = G_OBJECT_CLASS (soy_fields_buoyancy_parent_class);
#line 39 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 39 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancy);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_tmp0_ = gee_array_list_new (SOY_BODIES_TYPE_BODY, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_g_object_unref0 (self->priv->_affected);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self->priv->_affected = _tmp0_;
#line 41 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self->priv->_viscosity = (gfloat) 0;
#line 39 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	return obj;
#line 524 "Buoyancy.c"
}


static void soy_fields_buoyancy_class_init (soyfieldsBuoyancyClass * klass) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	soy_fields_buoyancy_parent_class = g_type_class_peek_parent (klass);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	g_type_class_add_private (klass, sizeof (soyfieldsBuoyancyPrivate));
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	SOY_FIELDS_FIELD_CLASS (klass)->exert = soy_fields_buoyancy_real_exert;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	SOY_FIELDS_FIELD_CLASS (klass)->give = soy_fields_buoyancy_real_give;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	G_OBJECT_CLASS (klass)->get_property = _vala_soy_fields_buoyancy_get_property;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	G_OBJECT_CLASS (klass)->set_property = _vala_soy_fields_buoyancy_set_property;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	G_OBJECT_CLASS (klass)->constructor = soy_fields_buoyancy_constructor;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	G_OBJECT_CLASS (klass)->finalize = soy_fields_buoyancy_finalize;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SOY_FIELDS_BUOYANCY_VISCOSITY, g_param_spec_float ("viscosity", "viscosity", "viscosity", -G_MAXFLOAT, G_MAXFLOAT, 0.0F, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 547 "Buoyancy.c"
}


static void soy_fields_buoyancy_instance_init (soyfieldsBuoyancy * self) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self->priv = SOY_FIELDS_BUOYANCY_GET_PRIVATE (self);
#line 554 "Buoyancy.c"
}


static void soy_fields_buoyancy_finalize (GObject* obj) {
	soyfieldsBuoyancy * self;
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancy);
#line 30 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	_g_object_unref0 (self->priv->_affected);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	G_OBJECT_CLASS (soy_fields_buoyancy_parent_class)->finalize (obj);
#line 566 "Buoyancy.c"
}


GType soy_fields_buoyancy_get_type (void) {
	static volatile gsize soy_fields_buoyancy_type_id__volatile = 0;
	if (g_once_init_enter (&soy_fields_buoyancy_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (soyfieldsBuoyancyClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) soy_fields_buoyancy_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (soyfieldsBuoyancy), 0, (GInstanceInitFunc) soy_fields_buoyancy_instance_init, NULL };
		GType soy_fields_buoyancy_type_id;
		soy_fields_buoyancy_type_id = g_type_register_static (SOY_FIELDS_TYPE_FIELD, "soyfieldsBuoyancy", &g_define_type_info, 0);
		g_once_init_leave (&soy_fields_buoyancy_type_id__volatile, soy_fields_buoyancy_type_id);
	}
	return soy_fields_buoyancy_type_id__volatile;
}


static void _vala_soy_fields_buoyancy_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	soyfieldsBuoyancy * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancy);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	switch (property_id) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		case SOY_FIELDS_BUOYANCY_VISCOSITY:
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		g_value_set_float (value, soy_fields_buoyancy_get_viscosity (self));
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		break;
#line 593 "Buoyancy.c"
		default:
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		break;
#line 599 "Buoyancy.c"
	}
}


static void _vala_soy_fields_buoyancy_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	soyfieldsBuoyancy * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SOY_FIELDS_TYPE_BUOYANCY, soyfieldsBuoyancy);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
	switch (property_id) {
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		case SOY_FIELDS_BUOYANCY_VISCOSITY:
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		soy_fields_buoyancy_set_viscosity (self, g_value_get_float (value));
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		break;
#line 615 "Buoyancy.c"
		default:
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/fields/Buoyancy.gs"
		break;
#line 621 "Buoyancy.c"
	}
}



