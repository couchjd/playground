/* Scroller.c generated by valac 0.22.1, the Vala compiler
 * generated from Scroller.gs, do not modify */

/*
 *  libsoy - soy.widgets.Scroller
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
#include <gee.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define SOY_WIDGETS_TYPE_WIDGET (soy_widgets_widget_get_type ())
#define SOY_WIDGETS_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_WIDGETS_TYPE_WIDGET, soywidgetsWidget))
#define SOY_WIDGETS_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_WIDGETS_TYPE_WIDGET, soywidgetsWidgetClass))
#define SOY_WIDGETS_IS_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_WIDGETS_TYPE_WIDGET))
#define SOY_WIDGETS_IS_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_WIDGETS_TYPE_WIDGET))
#define SOY_WIDGETS_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_WIDGETS_TYPE_WIDGET, soywidgetsWidgetClass))

typedef struct _soywidgetsWidget soywidgetsWidget;
typedef struct _soywidgetsWidgetClass soywidgetsWidgetClass;
typedef struct _soywidgetsWidgetPrivate soywidgetsWidgetPrivate;

#define SOY_WIDGETS_TYPE_CONTAINER (soy_widgets_container_get_type ())
#define SOY_WIDGETS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_WIDGETS_TYPE_CONTAINER, soywidgetsContainer))
#define SOY_WIDGETS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_WIDGETS_TYPE_CONTAINER, soywidgetsContainerClass))
#define SOY_WIDGETS_IS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_WIDGETS_TYPE_CONTAINER))
#define SOY_WIDGETS_IS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_WIDGETS_TYPE_CONTAINER))
#define SOY_WIDGETS_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_WIDGETS_TYPE_CONTAINER, soywidgetsContainerClass))

typedef struct _soywidgetsContainer soywidgetsContainer;
typedef struct _soywidgetsContainerClass soywidgetsContainerClass;
typedef struct _soywidgetsContainerPrivate soywidgetsContainerPrivate;

#define SOY_WIDGETS_TYPE_SCROLLER (soy_widgets_scroller_get_type ())
#define SOY_WIDGETS_SCROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_WIDGETS_TYPE_SCROLLER, soywidgetsScroller))
#define SOY_WIDGETS_SCROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_WIDGETS_TYPE_SCROLLER, soywidgetsScrollerClass))
#define SOY_WIDGETS_IS_SCROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_WIDGETS_TYPE_SCROLLER))
#define SOY_WIDGETS_IS_SCROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_WIDGETS_TYPE_SCROLLER))
#define SOY_WIDGETS_SCROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_WIDGETS_TYPE_SCROLLER, soywidgetsScrollerClass))

typedef struct _soywidgetsScroller soywidgetsScroller;
typedef struct _soywidgetsScrollerClass soywidgetsScrollerClass;
typedef struct _soywidgetsScrollerPrivate soywidgetsScrollerPrivate;

#define SOY_EVENTS_TYPE_EVENT (soy_events_event_get_type ())
#define SOY_EVENTS_EVENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_EVENT, soyeventsEvent))
#define SOY_EVENTS_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_EVENT, soyeventsEventClass))
#define SOY_EVENTS_IS_EVENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_EVENT))
#define SOY_EVENTS_IS_EVENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_EVENT))
#define SOY_EVENTS_EVENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_EVENT, soyeventsEventClass))

typedef struct _soyeventsEvent soyeventsEvent;
typedef struct _soyeventsEventClass soyeventsEventClass;

#define SOY_EVENTS_TYPE_MOTION (soy_events_motion_get_type ())
#define SOY_EVENTS_MOTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_EVENTS_TYPE_MOTION, soyeventsMotion))
#define SOY_EVENTS_MOTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_EVENTS_TYPE_MOTION, soyeventsMotionClass))
#define SOY_EVENTS_IS_MOTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_EVENTS_TYPE_MOTION))
#define SOY_EVENTS_IS_MOTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_EVENTS_TYPE_MOTION))
#define SOY_EVENTS_MOTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_EVENTS_TYPE_MOTION, soyeventsMotionClass))

typedef struct _soyeventsMotion soyeventsMotion;
typedef struct _soyeventsMotionClass soyeventsMotionClass;

#define SOY_EVENTS_TYPE_SCROLL (soy_events_scroll_get_type ())

#define SOY_TYPE_EVENT_TYPE (soy_event_type_get_type ())

#define SOY_WIDGETS_TYPE_WINDOW (soy_widgets_window_get_type ())
#define SOY_WIDGETS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_WIDGETS_TYPE_WINDOW, soywidgetsWindow))
#define SOY_WIDGETS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_WIDGETS_TYPE_WINDOW, soywidgetsWindowClass))
#define SOY_WIDGETS_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_WIDGETS_TYPE_WINDOW))
#define SOY_WIDGETS_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_WIDGETS_TYPE_WINDOW))
#define SOY_WIDGETS_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_WIDGETS_TYPE_WINDOW, soywidgetsWindowClass))

typedef struct _soywidgetsWindow soywidgetsWindow;
typedef struct _soywidgetsWindowClass soywidgetsWindowClass;

#define SOY_TYPE_SCROLL_DIRECTION (soy_scroll_direction_get_type ())
typedef struct _soyeventsScroll soyeventsScroll;

#define SOY_ATOMS_TYPE_SIZE (soy_atoms_size_get_type ())
#define SOY_ATOMS_SIZE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_ATOMS_TYPE_SIZE, soyatomsSize))
#define SOY_ATOMS_SIZE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_ATOMS_TYPE_SIZE, soyatomsSizeClass))
#define SOY_ATOMS_IS_SIZE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_ATOMS_TYPE_SIZE))
#define SOY_ATOMS_IS_SIZE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_ATOMS_TYPE_SIZE))
#define SOY_ATOMS_SIZE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_ATOMS_TYPE_SIZE, soyatomsSizeClass))

typedef struct _soyatomsSize soyatomsSize;
typedef struct _soyatomsSizeClass soyatomsSizeClass;

#define SOY_ATOMS_TYPE_POSITION (soy_atoms_position_get_type ())
#define SOY_ATOMS_POSITION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_ATOMS_TYPE_POSITION, soyatomsPosition))
#define SOY_ATOMS_POSITION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_ATOMS_TYPE_POSITION, soyatomsPositionClass))
#define SOY_ATOMS_IS_POSITION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_ATOMS_TYPE_POSITION))
#define SOY_ATOMS_IS_POSITION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_ATOMS_TYPE_POSITION))
#define SOY_ATOMS_POSITION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_ATOMS_TYPE_POSITION, soyatomsPositionClass))

typedef struct _soyatomsPosition soyatomsPosition;
typedef struct _soyatomsPositionClass soyatomsPositionClass;

#define SOY_CONTROLLERS_TYPE_CONTROLLER (soy_controllers_controller_get_type ())
#define SOY_CONTROLLERS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersController))
#define SOY_CONTROLLERS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))
#define SOY_CONTROLLERS_IS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_IS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_CONTROLLER))
#define SOY_CONTROLLERS_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_CONTROLLER, soycontrollersControllerClass))

typedef struct _soycontrollersController soycontrollersController;
typedef struct _soycontrollersControllerClass soycontrollersControllerClass;

#define SOY_CONTROLLERS_TYPE_POINTER (soy_controllers_pointer_get_type ())
#define SOY_CONTROLLERS_POINTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointer))
#define SOY_CONTROLLERS_POINTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointerClass))
#define SOY_CONTROLLERS_IS_POINTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_CONTROLLERS_TYPE_POINTER))
#define SOY_CONTROLLERS_IS_POINTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_CONTROLLERS_TYPE_POINTER))
#define SOY_CONTROLLERS_POINTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_CONTROLLERS_TYPE_POINTER, soycontrollersPointerClass))

typedef struct _soycontrollersPointer soycontrollersPointer;
typedef struct _soycontrollersPointerClass soycontrollersPointerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SOY_EVENTS_TYPE_BUTTON (soy_events_button_get_type ())
typedef struct _soyeventsButton soyeventsButton;

struct _soywidgetsWidget {
	GObject parent_instance;
	soywidgetsWidgetPrivate * priv;
	gint width;
	gint height;
	gboolean resized;
};

struct _soywidgetsWidgetClass {
	GObjectClass parent_class;
	void (*add) (soywidgetsWidget* self, soywidgetsContainer* parent);
	void (*remove) (soywidgetsWidget* self);
	void (*render) (soywidgetsWidget* self, gint x, gint y, gint width, gint height);
	void (*resize) (soywidgetsWidget* self, gint x, gint y, gint width, gint height);
};

struct _soywidgetsContainer {
	soywidgetsWidget parent_instance;
	soywidgetsContainerPrivate * priv;
	GeeLinkedList* children;
	GMutex mutex;
};

struct _soywidgetsContainerClass {
	soywidgetsWidgetClass parent_class;
	void (*resize_children) (soywidgetsContainer* self, gint x, gint y, gint width, gint height);
};

typedef enum  {
	SOY_EVENT_TYPE_KeyPress,
	SOY_EVENT_TYPE_KeyDown,
	SOY_EVENT_TYPE_KeyRelease,
	SOY_EVENT_TYPE_Motion,
	SOY_EVENT_TYPE_ButtonPress,
	SOY_EVENT_TYPE_ButtonRelease,
	SOY_EVENT_TYPE_Scroll,
	SOY_EVENT_TYPE_WiimoteButtonPress
} soyEventType;

typedef enum  {
	SOY_SCROLL_DIRECTION_Up,
	SOY_SCROLL_DIRECTION_Down,
	SOY_SCROLL_DIRECTION_Left,
	SOY_SCROLL_DIRECTION_Right
} soyScrollDirection;

struct _soyeventsScroll {
	soyEventType type;
	soywidgetsWindow* window;
	guint32 time;
	gfloat x;
	gfloat y;
	gfloat x_root;
	gfloat y_root;
	soyScrollDirection direction;
};

struct _soywidgetsScroller {
	soywidgetsContainer parent_instance;
	soywidgetsScrollerPrivate * priv;
	soywidgetsContainer* parent;
	soyatomsSize* scrollbarSize;
	soyatomsPosition* scrollPosition;
	gint scrollbarThickness;
	gboolean drag;
	gfloat xstartdrag;
	gfloat ystartdrag;
	gfloat xpos_startdrag;
	gfloat ypos_startdrag;
};

struct _soywidgetsScrollerClass {
	soywidgetsContainerClass parent_class;
	void (*motion_handler) (soywidgetsScroller* self, soyeventsMotion* e);
	void (*scroll_handler) (soywidgetsScroller* self, soyeventsScroll* e);
};

struct _soywidgetsScrollerPrivate {
	soycontrollersPointer* _controller;
};

struct _soyeventsButton {
	soyEventType type;
	soywidgetsWindow* window;
	guint32 time;
	gfloat x;
	gfloat y;
	gfloat x_root;
	gfloat y_root;
	guint button;
	gchar* wiibutton;
};


static gpointer soy_widgets_scroller_parent_class = NULL;

GType soy_widgets_widget_get_type (void) G_GNUC_CONST;
GType soy_widgets_container_get_type (void) G_GNUC_CONST;
GType soy_widgets_scroller_get_type (void) G_GNUC_CONST;
GType soy_events_event_get_type (void) G_GNUC_CONST;
GType soy_events_motion_get_type (void) G_GNUC_CONST;
GType soy_events_scroll_get_type (void) G_GNUC_CONST;
GType soy_event_type_get_type (void) G_GNUC_CONST;
GType soy_widgets_window_get_type (void) G_GNUC_CONST;
GType soy_scroll_direction_get_type (void) G_GNUC_CONST;
soyeventsScroll* soy_events_scroll_dup (const soyeventsScroll* self);
void soy_events_scroll_free (soyeventsScroll* self);
void soy_events_scroll_copy (const soyeventsScroll* self, soyeventsScroll* dest);
void soy_events_scroll_destroy (soyeventsScroll* self);
GType soy_atoms_size_get_type (void) G_GNUC_CONST;
GType soy_atoms_position_get_type (void) G_GNUC_CONST;
GType soy_controllers_controller_get_type (void) G_GNUC_CONST;
GType soy_controllers_pointer_get_type (void) G_GNUC_CONST;
#define SOY_WIDGETS_SCROLLER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SOY_WIDGETS_TYPE_SCROLLER, soywidgetsScrollerPrivate))
enum  {
	SOY_WIDGETS_SCROLLER_DUMMY_PROPERTY,
	SOY_WIDGETS_SCROLLER_CONTROLLER
};
soywidgetsScroller* soy_widgets_scroller_new (void);
soywidgetsScroller* soy_widgets_scroller_construct (GType object_type);
soywidgetsContainer* soy_widgets_container_new (void);
soywidgetsContainer* soy_widgets_container_construct (GType object_type);
static void soy_widgets_scroller_real_add (soywidgetsWidget* base, soywidgetsContainer* parent);
static void soy_widgets_scroller_real_remove (soywidgetsWidget* base);
gboolean soy_widgets_scroller_hit_mouse (soywidgetsScroller* self, gfloat x, gfloat y);
gfloat soy_atoms_position_get_x (soyatomsPosition* self);
gfloat soy_atoms_size_get_width (soyatomsSize* self);
gfloat soy_atoms_position_get_y (soyatomsPosition* self);
gfloat soy_atoms_size_get_height (soyatomsSize* self);
void soy_widgets_scroller_motion_handler (soywidgetsScroller* self, soyeventsMotion* e);
static void soy_widgets_scroller_real_motion_handler (soywidgetsScroller* self, soyeventsMotion* e);
GType soy_events_button_get_type (void) G_GNUC_CONST;
soyeventsButton* soy_events_button_dup (const soyeventsButton* self);
void soy_events_button_free (soyeventsButton* self);
void soy_events_button_copy (const soyeventsButton* self, soyeventsButton* dest);
void soy_events_button_destroy (soyeventsButton* self);
void soy_widgets_scroller_button_press_handler (soywidgetsScroller* self, soyeventsButton* e);
gfloat soy_widgets_scroller_convertY (soywidgetsScroller* self, gfloat y);
void soy_widgets_scroller_button_release_handler (soywidgetsScroller* self, soyeventsButton* e);
void soy_widgets_scroller_scroll_handler (soywidgetsScroller* self, soyeventsScroll* e);
static void soy_widgets_scroller_real_scroll_handler (soywidgetsScroller* self, soyeventsScroll* e);
soycontrollersPointer* soy_widgets_scroller_get_controller (soywidgetsScroller* self);
void soy_widgets_scroller_set_controller (soywidgetsScroller* self, soycontrollersPointer* value);
static void soy_widgets_scroller_finalize (GObject* obj);
static void _vala_soy_widgets_scroller_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_soy_widgets_scroller_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


soywidgetsScroller* soy_widgets_scroller_construct (GType object_type) {
	soywidgetsScroller * self = NULL;
#line 36 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self = (soywidgetsScroller*) soy_widgets_container_construct (object_type);
#line 37 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self->drag = FALSE;
#line 36 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return self;
#line 303 "Scroller.c"
}


soywidgetsScroller* soy_widgets_scroller_new (void) {
#line 36 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return soy_widgets_scroller_construct (SOY_WIDGETS_TYPE_SCROLLER);
#line 310 "Scroller.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 40 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return self ? g_object_ref (self) : NULL;
#line 317 "Scroller.c"
}


static void soy_widgets_scroller_real_add (soywidgetsWidget* base, soywidgetsContainer* parent) {
	soywidgetsScroller * self;
	soywidgetsContainer* _tmp0_ = NULL;
	soywidgetsContainer* _tmp1_ = NULL;
#line 39 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self = (soywidgetsScroller*) base;
#line 39 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (parent != NULL);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp0_ = parent;
#line 40 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_g_object_unref0 (self->parent);
#line 40 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self->parent = _tmp1_;
#line 337 "Scroller.c"
}


static void soy_widgets_scroller_real_remove (soywidgetsWidget* base) {
	soywidgetsScroller * self;
#line 42 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self = (soywidgetsScroller*) base;
#line 43 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_g_object_unref0 (self->parent);
#line 43 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self->parent = NULL;
#line 349 "Scroller.c"
}


gboolean soy_widgets_scroller_hit_mouse (soywidgetsScroller* self, gfloat x, gfloat y) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	gfloat _tmp3_ = 0.0F;
	soyatomsPosition* _tmp4_ = NULL;
	gfloat _tmp5_ = 0.0F;
	gfloat _tmp6_ = 0.0F;
	gboolean _tmp14_ = FALSE;
	gboolean _tmp19_ = FALSE;
	gboolean _tmp27_ = FALSE;
#line 45 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_val_if_fail (self != NULL, FALSE);
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp3_ = x;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp4_ = self->scrollPosition;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp5_ = soy_atoms_position_get_x (_tmp4_);
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp6_ = _tmp5_;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	if (_tmp3_ > _tmp6_) {
#line 377 "Scroller.c"
		gfloat _tmp7_ = 0.0F;
		soyatomsPosition* _tmp8_ = NULL;
		gfloat _tmp9_ = 0.0F;
		gfloat _tmp10_ = 0.0F;
		soyatomsSize* _tmp11_ = NULL;
		gfloat _tmp12_ = 0.0F;
		gfloat _tmp13_ = 0.0F;
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp7_ = x;
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp8_ = self->scrollPosition;
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp9_ = soy_atoms_position_get_x (_tmp8_);
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp10_ = _tmp9_;
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp11_ = self->scrollbarSize;
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp12_ = soy_atoms_size_get_width (_tmp11_);
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp13_ = _tmp12_;
#line 47 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp2_ = _tmp7_ < (_tmp10_ + _tmp13_);
#line 401 "Scroller.c"
	} else {
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp2_ = FALSE;
#line 405 "Scroller.c"
	}
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp14_ = _tmp2_;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	if (_tmp14_) {
#line 411 "Scroller.c"
		gfloat _tmp15_ = 0.0F;
		soyatomsPosition* _tmp16_ = NULL;
		gfloat _tmp17_ = 0.0F;
		gfloat _tmp18_ = 0.0F;
#line 48 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp15_ = y;
#line 48 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp16_ = self->scrollPosition;
#line 48 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp17_ = soy_atoms_position_get_y (_tmp16_);
#line 48 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp18_ = _tmp17_;
#line 48 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp1_ = _tmp15_ >= _tmp18_;
#line 426 "Scroller.c"
	} else {
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp1_ = FALSE;
#line 430 "Scroller.c"
	}
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp19_ = _tmp1_;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	if (_tmp19_) {
#line 436 "Scroller.c"
		gfloat _tmp20_ = 0.0F;
		soyatomsPosition* _tmp21_ = NULL;
		gfloat _tmp22_ = 0.0F;
		gfloat _tmp23_ = 0.0F;
		soyatomsSize* _tmp24_ = NULL;
		gfloat _tmp25_ = 0.0F;
		gfloat _tmp26_ = 0.0F;
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp20_ = y;
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp21_ = self->scrollPosition;
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp22_ = soy_atoms_position_get_y (_tmp21_);
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp23_ = _tmp22_;
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp24_ = self->scrollbarSize;
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp25_ = soy_atoms_size_get_height (_tmp24_);
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp26_ = _tmp25_;
#line 49 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp0_ = _tmp20_ <= (_tmp23_ + _tmp26_);
#line 460 "Scroller.c"
	} else {
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		_tmp0_ = FALSE;
#line 464 "Scroller.c"
	}
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp27_ = _tmp0_;
#line 46 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	if (_tmp27_) {
#line 50 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		result = TRUE;
#line 50 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		return result;
#line 474 "Scroller.c"
	}
#line 51 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	result = FALSE;
#line 51 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return result;
#line 480 "Scroller.c"
}


static void soy_widgets_scroller_real_motion_handler (soywidgetsScroller* self, soyeventsMotion* e) {
#line 54 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (e != NULL);
#line 55 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return;
#line 489 "Scroller.c"
}


void soy_widgets_scroller_motion_handler (soywidgetsScroller* self, soyeventsMotion* e) {
#line 54 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (self != NULL);
#line 54 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	SOY_WIDGETS_SCROLLER_GET_CLASS (self)->motion_handler (self, e);
#line 498 "Scroller.c"
}


void soy_widgets_scroller_button_press_handler (soywidgetsScroller* self, soyeventsButton* e) {
	soyeventsButton _tmp0_ = {0};
	guint _tmp1_ = 0U;
#line 58 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (self != NULL);
#line 58 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (e != NULL);
#line 59 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp0_ = *e;
#line 59 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp1_ = _tmp0_.button;
#line 59 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	switch (_tmp1_) {
#line 59 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		case 1:
#line 517 "Scroller.c"
		{
			{
				soyeventsButton _tmp2_ = {0};
				gfloat _tmp3_ = 0.0F;
				soyeventsButton _tmp4_ = {0};
				gfloat _tmp5_ = 0.0F;
				gfloat _tmp6_ = 0.0F;
				gboolean _tmp7_ = FALSE;
#line 61 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				_tmp2_ = *e;
#line 61 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				_tmp3_ = _tmp2_.x;
#line 61 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				_tmp4_ = *e;
#line 61 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				_tmp5_ = _tmp4_.y;
#line 61 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				_tmp6_ = soy_widgets_scroller_convertY (self, _tmp5_);
#line 61 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				_tmp7_ = soy_widgets_scroller_hit_mouse (self, _tmp3_, _tmp6_);
#line 61 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				if (_tmp7_) {
#line 540 "Scroller.c"
					soyeventsButton _tmp8_ = {0};
					gfloat _tmp9_ = 0.0F;
					soyatomsPosition* _tmp10_ = NULL;
					gfloat _tmp11_ = 0.0F;
					gfloat _tmp12_ = 0.0F;
					soyatomsPosition* _tmp13_ = NULL;
					gfloat _tmp14_ = 0.0F;
					gfloat _tmp15_ = 0.0F;
					soyeventsButton _tmp16_ = {0};
					gfloat _tmp17_ = 0.0F;
					gfloat _tmp18_ = 0.0F;
#line 62 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					self->drag = TRUE;
#line 63 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp8_ = *e;
#line 63 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp9_ = _tmp8_.x;
#line 63 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					self->xstartdrag = (gfloat) _tmp9_;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp10_ = self->scrollPosition;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp11_ = soy_atoms_position_get_x (_tmp10_);
#line 64 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp12_ = _tmp11_;
#line 64 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					self->xpos_startdrag = _tmp12_;
#line 65 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp13_ = self->scrollPosition;
#line 65 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp14_ = soy_atoms_position_get_y (_tmp13_);
#line 65 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp15_ = _tmp14_;
#line 65 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					self->ypos_startdrag = _tmp15_;
#line 66 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp16_ = *e;
#line 66 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp17_ = _tmp16_.y;
#line 66 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					_tmp18_ = soy_widgets_scroller_convertY (self, _tmp17_);
#line 66 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					self->ystartdrag = _tmp18_;
#line 584 "Scroller.c"
				}
			}
#line 59 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
			break;
#line 589 "Scroller.c"
		}
		default:
#line 59 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		break;
#line 594 "Scroller.c"
	}
}


void soy_widgets_scroller_button_release_handler (soywidgetsScroller* self, soyeventsButton* e) {
	soyeventsButton _tmp0_ = {0};
	guint _tmp1_ = 0U;
#line 69 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (self != NULL);
#line 69 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (e != NULL);
#line 70 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp0_ = *e;
#line 70 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp1_ = _tmp0_.button;
#line 70 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	switch (_tmp1_) {
#line 70 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		case 1:
#line 614 "Scroller.c"
		{
			{
				gboolean _tmp2_ = FALSE;
#line 72 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				_tmp2_ = self->drag;
#line 72 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
				if (_tmp2_) {
#line 73 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
					self->drag = FALSE;
#line 624 "Scroller.c"
				}
			}
#line 70 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
			break;
#line 629 "Scroller.c"
		}
		default:
#line 70 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		break;
#line 634 "Scroller.c"
	}
}


gfloat soy_widgets_scroller_convertY (soywidgetsScroller* self, gfloat y) {
	gfloat result = 0.0F;
	soywidgetsContainer* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gfloat _tmp2_ = 0.0F;
#line 77 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_val_if_fail (self != NULL, 0.0F);
#line 78 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp0_ = self->parent;
#line 78 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp1_ = ((soywidgetsWidget*) _tmp0_)->height;
#line 78 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp2_ = y;
#line 78 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	result = _tmp1_ - ((gfloat) _tmp2_);
#line 78 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return result;
#line 656 "Scroller.c"
}


static void soy_widgets_scroller_real_scroll_handler (soywidgetsScroller* self, soyeventsScroll* e) {
#line 81 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (e != NULL);
#line 82 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return;
#line 665 "Scroller.c"
}


void soy_widgets_scroller_scroll_handler (soywidgetsScroller* self, soyeventsScroll* e) {
#line 81 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (self != NULL);
#line 81 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	SOY_WIDGETS_SCROLLER_GET_CLASS (self)->scroll_handler (self, e);
#line 674 "Scroller.c"
}


soycontrollersPointer* soy_widgets_scroller_get_controller (soywidgetsScroller* self) {
	soycontrollersPointer* result;
	soycontrollersPointer* _tmp0_ = NULL;
#line 87 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_val_if_fail (self != NULL, NULL);
#line 88 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp0_ = self->priv->_controller;
#line 88 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	result = _tmp0_;
#line 88 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	return result;
#line 689 "Scroller.c"
}


void soy_widgets_scroller_set_controller (soywidgetsScroller* self, soycontrollersPointer* value) {
	soycontrollersPointer* _tmp0_ = NULL;
	soycontrollersPointer* _tmp1_ = NULL;
#line 89 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_return_if_fail (self != NULL);
#line 90 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp0_ = value;
#line 90 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 90 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_g_object_unref0 (self->priv->_controller);
#line 90 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self->priv->_controller = _tmp1_;
#line 89 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_object_notify ((GObject *) self, "controller");
#line 708 "Scroller.c"
}


static void soy_widgets_scroller_class_init (soywidgetsScrollerClass * klass) {
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	soy_widgets_scroller_parent_class = g_type_class_peek_parent (klass);
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_type_class_add_private (klass, sizeof (soywidgetsScrollerPrivate));
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	SOY_WIDGETS_WIDGET_CLASS (klass)->add = soy_widgets_scroller_real_add;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	SOY_WIDGETS_WIDGET_CLASS (klass)->remove = soy_widgets_scroller_real_remove;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	SOY_WIDGETS_SCROLLER_CLASS (klass)->motion_handler = soy_widgets_scroller_real_motion_handler;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	SOY_WIDGETS_SCROLLER_CLASS (klass)->scroll_handler = soy_widgets_scroller_real_scroll_handler;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	G_OBJECT_CLASS (klass)->get_property = _vala_soy_widgets_scroller_get_property;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	G_OBJECT_CLASS (klass)->set_property = _vala_soy_widgets_scroller_set_property;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	G_OBJECT_CLASS (klass)->finalize = soy_widgets_scroller_finalize;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SOY_WIDGETS_SCROLLER_CONTROLLER, g_param_spec_object ("controller", "controller", "controller", SOY_CONTROLLERS_TYPE_POINTER, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 733 "Scroller.c"
}


static void soy_widgets_scroller_instance_init (soywidgetsScroller * self) {
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self->priv = SOY_WIDGETS_SCROLLER_GET_PRIVATE (self);
#line 28 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self->scrollbarThickness = 10;
#line 742 "Scroller.c"
}


static void soy_widgets_scroller_finalize (GObject* obj) {
	soywidgetsScroller * self;
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SOY_WIDGETS_TYPE_SCROLLER, soywidgetsScroller);
#line 25 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_g_object_unref0 (self->parent);
#line 26 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_g_object_unref0 (self->scrollbarSize);
#line 27 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_g_object_unref0 (self->scrollPosition);
#line 85 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	_g_object_unref0 (self->priv->_controller);
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	G_OBJECT_CLASS (soy_widgets_scroller_parent_class)->finalize (obj);
#line 760 "Scroller.c"
}


GType soy_widgets_scroller_get_type (void) {
	static volatile gsize soy_widgets_scroller_type_id__volatile = 0;
	if (g_once_init_enter (&soy_widgets_scroller_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (soywidgetsScrollerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) soy_widgets_scroller_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (soywidgetsScroller), 0, (GInstanceInitFunc) soy_widgets_scroller_instance_init, NULL };
		GType soy_widgets_scroller_type_id;
		soy_widgets_scroller_type_id = g_type_register_static (SOY_WIDGETS_TYPE_CONTAINER, "soywidgetsScroller", &g_define_type_info, 0);
		g_once_init_leave (&soy_widgets_scroller_type_id__volatile, soy_widgets_scroller_type_id);
	}
	return soy_widgets_scroller_type_id__volatile;
}


static void _vala_soy_widgets_scroller_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	soywidgetsScroller * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SOY_WIDGETS_TYPE_SCROLLER, soywidgetsScroller);
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	switch (property_id) {
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		case SOY_WIDGETS_SCROLLER_CONTROLLER:
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		g_value_set_object (value, soy_widgets_scroller_get_controller (self));
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		break;
#line 787 "Scroller.c"
		default:
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		break;
#line 793 "Scroller.c"
	}
}


static void _vala_soy_widgets_scroller_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	soywidgetsScroller * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SOY_WIDGETS_TYPE_SCROLLER, soywidgetsScroller);
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
	switch (property_id) {
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		case SOY_WIDGETS_SCROLLER_CONTROLLER:
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		soy_widgets_scroller_set_controller (self, g_value_get_object (value));
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		break;
#line 809 "Scroller.c"
		default:
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 24 "/home/jeff/Documents/libraries/libsoy/src/widgets/Scroller.gs"
		break;
#line 815 "Scroller.c"
	}
}



