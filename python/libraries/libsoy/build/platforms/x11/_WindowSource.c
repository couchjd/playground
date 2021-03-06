/* _WindowSource.c generated by valac 0.22.1, the Vala compiler
 * generated from _WindowSource.gs, do not modify */

/*
 *  libsoy - soy._WindowSource for X11
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
#include <soy-1/soy.h>
#include <X11/Xlib.h>
#include <X11/Xatom.h>
#include <X11/Xutil.h>
#include <X11/Xregion.h>

typedef struct _soy_WindowSource soy_WindowSource;

#define SOY_TYPE_CLIENT (soy_client_get_type ())
#define SOY_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOY_TYPE_CLIENT, soyClient))
#define SOY_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SOY_TYPE_CLIENT, soyClientClass))
#define SOY_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOY_TYPE_CLIENT))
#define SOY_IS_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SOY_TYPE_CLIENT))
#define SOY_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SOY_TYPE_CLIENT, soyClientClass))

typedef struct _soyClient soyClient;
typedef struct _soyClientClass soyClientClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _soyClientPrivate soyClientPrivate;

struct _soy_WindowSource {
	GSource parent_instance;
	soyClient* client;
	soycontrollersKeyboard* Keyboard;
	soycontrollersPointer* Pointer;
	gboolean is_repeated;
};

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
static void soy__windowsource_instance_init (soy_WindowSource * self);
static void soy__windowsource_finalize (GSource* obj);
soy_WindowSource* soy__windowsource_new (soyClient* c);
soy_WindowSource* soy__windowsource_new (soyClient* c);
static gboolean soy__windowsource_real_prepare (GSource* base, gint* timeout_);
static gboolean soy__windowsource_real_check (GSource* base);
static gboolean soy__windowsource_real_dispatch (GSource* base, GSourceFunc cb, void* cb_target);
void soy_client_window_draw (soyClient* self, XExposeEvent* event);
void soy_client_window_config (soyClient* self, XConfigureEvent* event);
void soy_client_window_opened (soyClient* self, XCreateWindowEvent* event);
void soy_client_window_client (soyClient* self, XClientMessageEvent* event);


soy_WindowSource* soy__windowsource_new (soyClient* c) {
	soy_WindowSource* self;
#line 31 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	static const GSourceFuncs _source_funcs = { soy__windowsource_real_prepare, soy__windowsource_real_check, soy__windowsource_real_dispatch, soy__windowsource_finalize};
#line 85 "_WindowSource.c"
	soyClient* _tmp0_ = NULL;
	soycontrollersKeyboard* _tmp1_ = NULL;
	soycontrollersPointer* _tmp2_ = NULL;
#line 31 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	g_return_val_if_fail (c != NULL, NULL);
#line 31 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self = (soy_WindowSource*) g_source_new (&_source_funcs, sizeof (soy_WindowSource));
#line 31 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	soy__windowsource_instance_init (self);
#line 32 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp0_ = c;
#line 32 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self->client = _tmp0_;
#line 33 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp1_ = soy_controllers_keyboard_new ();
#line 33 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_g_object_unref0 (self->Keyboard);
#line 33 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self->Keyboard = _tmp1_;
#line 34 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp2_ = soy_controllers_pointer_new ();
#line 34 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_g_object_unref0 (self->Pointer);
#line 34 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self->Pointer = _tmp2_;
#line 31 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	return self;
#line 113 "_WindowSource.c"
}


static gboolean soy__windowsource_real_prepare (GSource* base, gint* timeout_) {
	soy_WindowSource * self;
	gint _vala_timeout_ = 0;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	soyClient* _tmp2_ = NULL;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp9_ = FALSE;
#line 36 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self = (soy_WindowSource*) base;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp2_ = self->client;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (_tmp2_ == NULL) {
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp1_ = TRUE;
#line 134 "_WindowSource.c"
	} else {
		soyClient* _tmp3_ = NULL;
		Display* _tmp4_ = NULL;
		gint _tmp5_ = 0;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp3_ = self->client;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp4_ = _tmp3_->xDisplay;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp5_ = XPending (_tmp4_);
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp1_ = _tmp5_ > 0;
#line 147 "_WindowSource.c"
	}
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp6_ = _tmp1_;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (_tmp6_) {
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp0_ = TRUE;
#line 155 "_WindowSource.c"
	} else {
		soyClient* _tmp7_ = NULL;
		gboolean _tmp8_ = FALSE;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp7_ = self->client;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp8_ = _tmp7_->closing;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp0_ = _tmp8_;
#line 165 "_WindowSource.c"
	}
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp9_ = _tmp0_;
#line 40 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (_tmp9_) {
#line 41 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_vala_timeout_ = 0;
#line 42 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		result = TRUE;
#line 42 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		if (timeout_) {
#line 42 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			*timeout_ = _vala_timeout_;
#line 179 "_WindowSource.c"
		}
#line 42 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		return result;
#line 183 "_WindowSource.c"
	}
#line 44 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_vala_timeout_ = 10;
#line 45 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	result = FALSE;
#line 45 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (timeout_) {
#line 45 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		*timeout_ = _vala_timeout_;
#line 193 "_WindowSource.c"
	}
#line 45 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	return result;
#line 197 "_WindowSource.c"
}


static gboolean soy__windowsource_real_check (GSource* base) {
	soy_WindowSource * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	soyClient* _tmp2_ = NULL;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp9_ = FALSE;
#line 47 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self = (soy_WindowSource*) base;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp2_ = self->client;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (_tmp2_ == NULL) {
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp1_ = TRUE;
#line 217 "_WindowSource.c"
	} else {
		soyClient* _tmp3_ = NULL;
		Display* _tmp4_ = NULL;
		gint _tmp5_ = 0;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp3_ = self->client;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp4_ = _tmp3_->xDisplay;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp5_ = XPending (_tmp4_);
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp1_ = _tmp5_ > 0;
#line 230 "_WindowSource.c"
	}
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp6_ = _tmp1_;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (_tmp6_) {
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp0_ = TRUE;
#line 238 "_WindowSource.c"
	} else {
		soyClient* _tmp7_ = NULL;
		gboolean _tmp8_ = FALSE;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp7_ = self->client;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp8_ = _tmp7_->closing;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp0_ = _tmp8_;
#line 248 "_WindowSource.c"
	}
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp9_ = _tmp0_;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	result = _tmp9_;
#line 48 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	return result;
#line 256 "_WindowSource.c"
}


static gboolean soy__windowsource_real_dispatch (GSource* base, GSourceFunc cb, void* cb_target) {
	soy_WindowSource * self;
	gboolean result = FALSE;
	XEvent event = {0};
	soyClient* _tmp0_ = NULL;
	soyClient* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
#line 51 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self = (soy_WindowSource*) base;
#line 54 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp0_ = self->client;
#line 54 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (_tmp0_ == NULL) {
#line 55 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		result = FALSE;
#line 55 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		return result;
#line 277 "_WindowSource.c"
	}
#line 58 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp1_ = self->client;
#line 58 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_tmp2_ = _tmp1_->closing;
#line 58 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	if (_tmp2_) {
#line 59 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		result = FALSE;
#line 59 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		return result;
#line 289 "_WindowSource.c"
	}
#line 61 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	while (TRUE) {
#line 293 "_WindowSource.c"
		soyClient* _tmp3_ = NULL;
		Display* _tmp4_ = NULL;
		gint _tmp5_ = 0;
		soyClient* _tmp6_ = NULL;
		Display* _tmp7_ = NULL;
		XEvent _tmp8_ = {0};
		XEvent _tmp9_ = {0};
		gint _tmp10_ = 0;
#line 61 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp3_ = self->client;
#line 61 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp4_ = _tmp3_->xDisplay;
#line 61 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp5_ = XPending (_tmp4_);
#line 61 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		if (!(_tmp5_ > 0)) {
#line 61 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			break;
#line 312 "_WindowSource.c"
		}
#line 63 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp6_ = self->client;
#line 63 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp7_ = _tmp6_->xDisplay;
#line 63 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		XNextEvent (_tmp7_, &_tmp8_);
#line 63 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		event = _tmp8_;
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp9_ = event;
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		_tmp10_ = _tmp9_.type;
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
		switch (_tmp10_) {
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case Expose:
#line 330 "_WindowSource.c"
			{
				{
					soyClient* _tmp11_ = NULL;
					XEvent _tmp12_ = {0};
					XExposeEvent _tmp13_ = {0};
#line 68 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp11_ = self->client;
#line 68 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp12_ = event;
#line 68 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp13_ = _tmp12_.xexpose;
#line 68 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					soy_client_window_draw (_tmp11_, &_tmp13_);
#line 344 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 348 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case ConfigureNotify:
#line 352 "_WindowSource.c"
			{
				{
					soyClient* _tmp14_ = NULL;
					XEvent _tmp15_ = {0};
					XConfigureEvent _tmp16_ = {0};
#line 71 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp14_ = self->client;
#line 71 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp15_ = event;
#line 71 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp16_ = _tmp15_.xconfigure;
#line 71 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					soy_client_window_config (_tmp14_, &_tmp16_);
#line 366 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 370 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case CreateNotify:
#line 374 "_WindowSource.c"
			{
				{
					soyClient* _tmp17_ = NULL;
					XEvent _tmp18_ = {0};
					XCreateWindowEvent _tmp19_ = {0};
#line 74 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp17_ = self->client;
#line 74 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp18_ = event;
#line 74 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp19_ = _tmp18_.xcreatewindow;
#line 74 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					soy_client_window_opened (_tmp17_, &_tmp19_);
#line 388 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 392 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case ClientMessage:
#line 396 "_WindowSource.c"
			{
				{
					soyClient* _tmp20_ = NULL;
					XEvent _tmp21_ = {0};
					XClientMessageEvent _tmp22_ = {0};
#line 77 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp20_ = self->client;
#line 77 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp21_ = event;
#line 77 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp22_ = _tmp21_.xclient;
#line 77 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					soy_client_window_client (_tmp20_, &_tmp22_);
#line 410 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 414 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case KeyPress:
#line 418 "_WindowSource.c"
			{
				{
					soycontrollersKeyboard* _tmp23_ = NULL;
					XEvent _tmp24_ = {0};
					XKeyEvent _tmp25_ = {0};
					guint _tmp26_ = 0U;
					soycontrollersKeyboard* _tmp27_ = NULL;
					soyeventsKeyPress* _tmp28_ = NULL;
					soyeventsKeyPress* _tmp29_ = NULL;
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp23_ = self->Keyboard;
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp24_ = event;
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp25_ = _tmp24_.xkey;
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp26_ = _tmp25_.keycode;
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp27_ = self->Keyboard;
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp28_ = soy_events_key_press_new (_tmp26_, _tmp27_);
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp29_ = _tmp28_;
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					g_signal_emit_by_name (_tmp23_, "key-press", _tmp29_);
#line 80 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_g_object_unref0 (_tmp29_);
#line 446 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 450 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case KeyRelease:
#line 454 "_WindowSource.c"
			{
				{
					soyClient* _tmp30_ = NULL;
					Display* _tmp31_ = NULL;
					gint _tmp32_ = 0;
					gboolean _tmp55_ = FALSE;
#line 85 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					self->is_repeated = FALSE;
#line 86 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp30_ = self->client;
#line 86 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp31_ = _tmp30_->xDisplay;
#line 86 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp32_ = XEventsQueued (_tmp31_, 1);
#line 86 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					if (_tmp32_ != 0) {
#line 471 "_WindowSource.c"
						XEvent nev = {0};
						soyClient* _tmp33_ = NULL;
						Display* _tmp34_ = NULL;
						XEvent _tmp35_ = {0};
						gboolean _tmp36_ = FALSE;
						XEvent _tmp37_ = {0};
						gint _tmp38_ = 0;
						gboolean _tmp45_ = FALSE;
#line 88 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp33_ = self->client;
#line 88 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp34_ = _tmp33_->xDisplay;
#line 88 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						XPeekEvent (_tmp34_, &_tmp35_);
#line 88 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						nev = _tmp35_;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp37_ = nev;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp38_ = _tmp37_.type;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						if (_tmp38_ == ((gint) KeyPress)) {
#line 494 "_WindowSource.c"
							XEvent _tmp39_ = {0};
							XKeyEvent _tmp40_ = {0};
							gulong _tmp41_ = 0UL;
							XEvent _tmp42_ = {0};
							XKeyEvent _tmp43_ = {0};
							gulong _tmp44_ = 0UL;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp39_ = nev;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp40_ = _tmp39_.xkey;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp41_ = _tmp40_.time;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp42_ = event;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp43_ = _tmp42_.xkey;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp44_ = _tmp43_.time;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp36_ = _tmp41_ == _tmp44_;
#line 515 "_WindowSource.c"
						} else {
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp36_ = FALSE;
#line 519 "_WindowSource.c"
						}
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp45_ = _tmp36_;
#line 90 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						if (_tmp45_) {
#line 525 "_WindowSource.c"
							XEvent _tmp46_ = {0};
							XKeyEvent _tmp47_ = {0};
							guint _tmp48_ = 0U;
							XEvent _tmp49_ = {0};
							XKeyEvent _tmp50_ = {0};
							guint _tmp51_ = 0U;
#line 91 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp46_ = nev;
#line 91 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp47_ = _tmp46_.xkey;
#line 91 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp48_ = _tmp47_.keycode;
#line 91 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp49_ = event;
#line 91 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp50_ = _tmp49_.xkey;
#line 91 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							_tmp51_ = _tmp50_.keycode;
#line 91 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
							if (_tmp48_ == _tmp51_) {
#line 546 "_WindowSource.c"
								soyClient* _tmp52_ = NULL;
								Display* _tmp53_ = NULL;
								XEvent _tmp54_ = {0};
#line 92 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
								_tmp52_ = self->client;
#line 92 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
								_tmp53_ = _tmp52_->xDisplay;
#line 92 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
								XNextEvent (_tmp53_, &_tmp54_);
#line 92 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
								event = _tmp54_;
#line 93 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
								self->is_repeated = TRUE;
#line 560 "_WindowSource.c"
							}
						}
					}
#line 96 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp55_ = self->is_repeated;
#line 96 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					if (!_tmp55_) {
#line 568 "_WindowSource.c"
						soycontrollersKeyboard* _tmp56_ = NULL;
						XEvent _tmp57_ = {0};
						XKeyEvent _tmp58_ = {0};
						guint _tmp59_ = 0U;
						soycontrollersKeyboard* _tmp60_ = NULL;
						soyeventsKeyRelease* _tmp61_ = NULL;
						soyeventsKeyRelease* _tmp62_ = NULL;
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp56_ = self->Keyboard;
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp57_ = event;
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp58_ = _tmp57_.xkey;
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp59_ = _tmp58_.keycode;
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp60_ = self->Keyboard;
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp61_ = soy_events_key_release_new (_tmp59_, _tmp60_);
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_tmp62_ = _tmp61_;
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						g_signal_emit_by_name (_tmp56_, "key-release", _tmp62_);
#line 97 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
						_g_object_unref0 (_tmp62_);
#line 594 "_WindowSource.c"
					}
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 599 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case MotionNotify:
#line 603 "_WindowSource.c"
			{
				{
					soycontrollersPointer* _tmp63_ = NULL;
					XEvent _tmp64_ = {0};
					XButtonEvent _tmp65_ = {0};
					gint _tmp66_ = 0;
					XEvent _tmp67_ = {0};
					XButtonEvent _tmp68_ = {0};
					gint _tmp69_ = 0;
					XEvent _tmp70_ = {0};
					XButtonEvent _tmp71_ = {0};
					gint _tmp72_ = 0;
					XEvent _tmp73_ = {0};
					XButtonEvent _tmp74_ = {0};
					gint _tmp75_ = 0;
					soycontrollersPointer* _tmp76_ = NULL;
					soyeventsMotion* _tmp77_ = NULL;
					soyeventsMotion* _tmp78_ = NULL;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp63_ = self->Pointer;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp64_ = event;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp65_ = _tmp64_.xbutton;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp66_ = _tmp65_.x;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp67_ = event;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp68_ = _tmp67_.xbutton;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp69_ = _tmp68_.y;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp70_ = event;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp71_ = _tmp70_.xbutton;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp72_ = _tmp71_.x_root;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp73_ = event;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp74_ = _tmp73_.xbutton;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp75_ = _tmp74_.y_root;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp76_ = self->Pointer;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp77_ = soy_events_motion_new (_tmp66_, _tmp69_, _tmp72_, _tmp75_, _tmp76_);
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp78_ = _tmp77_;
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					g_signal_emit_by_name (_tmp63_, "on-motion", _tmp78_);
#line 100 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_g_object_unref0 (_tmp78_);
#line 658 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 662 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case ButtonPress:
#line 666 "_WindowSource.c"
			{
				{
					soycontrollersPointer* _tmp79_ = NULL;
					XEvent _tmp80_ = {0};
					XButtonEvent _tmp81_ = {0};
					guint _tmp82_ = 0U;
					soycontrollersPointer* _tmp83_ = NULL;
					soyeventsButtonPress* _tmp84_ = NULL;
					soyeventsButtonPress* _tmp85_ = NULL;
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp79_ = self->Pointer;
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp80_ = event;
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp81_ = _tmp80_.xbutton;
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp82_ = _tmp81_.button;
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp83_ = self->Pointer;
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp84_ = soy_events_button_press_new (_tmp82_, _tmp83_);
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp85_ = _tmp84_;
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					g_signal_emit_by_name (_tmp79_, "button-press", _tmp85_);
#line 103 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_g_object_unref0 (_tmp85_);
#line 694 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 698 "_WindowSource.c"
			}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
			case ButtonRelease:
#line 702 "_WindowSource.c"
			{
				{
					soycontrollersPointer* _tmp86_ = NULL;
					XEvent _tmp87_ = {0};
					XButtonEvent _tmp88_ = {0};
					guint _tmp89_ = 0U;
					soycontrollersPointer* _tmp90_ = NULL;
					soyeventsButtonRelease* _tmp91_ = NULL;
					soyeventsButtonRelease* _tmp92_ = NULL;
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp86_ = self->Pointer;
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp87_ = event;
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp88_ = _tmp87_.xbutton;
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp89_ = _tmp88_.button;
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp90_ = self->Pointer;
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp91_ = soy_events_button_release_new (_tmp89_, _tmp90_);
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp92_ = _tmp91_;
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					g_signal_emit_by_name (_tmp86_, "button-release", _tmp92_);
#line 106 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_g_object_unref0 (_tmp92_);
#line 730 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 734 "_WindowSource.c"
			}
			default:
			{
				{
					XEvent _tmp93_ = {0};
					gint _tmp94_ = 0;
#line 110 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp93_ = event;
#line 110 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					_tmp94_ = _tmp93_.type;
#line 110 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
					g_print ("Unknown event %d received\n", _tmp94_);
#line 747 "_WindowSource.c"
				}
#line 65 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
				break;
#line 751 "_WindowSource.c"
			}
		}
	}
#line 112 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	result = TRUE;
#line 112 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	return result;
#line 759 "_WindowSource.c"
}


static void soy__windowsource_instance_init (soy_WindowSource * self) {
}


static void soy__windowsource_finalize (GSource* obj) {
	soy_WindowSource * self;
#line 23 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	self = (soy_WindowSource*) obj;
#line 27 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_g_object_unref0 (self->Keyboard);
#line 28 "/home/jeff/Documents/libraries/libsoy/platforms/x11/_WindowSource.gs"
	_g_object_unref0 (self->Pointer);
#line 775 "_WindowSource.c"
}



