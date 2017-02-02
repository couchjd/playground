/*
    PySoy - soy.controllers.Keyboard
    Copyright (C) 2006-2014 Copyleft Games Group

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program; if not, see http://www.gnu.org/licenses
*/

#include "pysoy.h"
#define SELF PySoy_controllers_Keyboard_Object*


static char
tp_doc[] = "soy.controllers.Keyboard Type\n"
"\n"
"    The keyboard controller receives all keystrokes from a\n"
"    keyboard, sends the keystrokes to the allpplication using\n"
"    the controller. The controller supports all types of\n"
"    keyboard layouts.\n"
"\n";


static SELF
tp_new (PyTypeObject* type, PyObject* args,
                                PyObject* kwds) {
    SELF self;
    static char* kw[] = {NULL};

    // Parse arguments
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "", kw))
        return NULL;

    // inherit base type
    self = (PySoy_controllers_Keyboard_Object*)
           PyType_GenericNew(type, args, kwds);
    if (!self)
        return NULL;

    // new gobject
    self->g = soy_controllers_keyboard_new();

    return self;
}
///////////////////////////////////////////////////////////////////////////////
// Methods

static char
addKey_doc[] = ".. py:method:: Keyboard.addKey(key)\n"
"\n"
"    Adds a downed key.\n"
"\n"
"    :param string key: String of the key to be added\n"
"\n";

static PyObject*
addKey (SELF self, PyObject* args, PyObject* kwds)
{
    const gchar* key;

    //ensure no keywords were provided
    if(!_PyArg_NoKeywords("string", kwds))
        return NULL;

    // parse argumets
    if (!PyArg_ParseTuple(args, "s", key))
        return NULL;

    soy_controllers_keyboard_addKey(self->g, key);

}

///////////////////////////////////////////////////////////////////////////////
// Type structs
static PyMethodDef 
tp_methods[] = {
    {"addKey",                                             // ml_name
    (PyCFunction)addKey,                                   // ml_meth
    METH_VARARGS,                                          // ml_flags
    "Add downed key"},                                     // ml_doc
    {NULL},                                                // sentinel
};

PyTypeObject PySoy_controllers_Keyboard_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "soy.controllers.Keyboard",                            // tp_name
    sizeof(PySoy_controllers_Keyboard_Object),             // tp_basicsize
    0,                                                     // tp_itemsize
    0,                                                     // tp_dealloc
    0,                                                     // tp_print
    (getattrfunc) 0,                                       // tp_getattr
    (setattrfunc) 0,                                       // tp_setattr
    0,                                                     // RESERVED
    0,                                                     // tp_repr
    0,                                                     // tp_as_number
    0,                                                     // tp_as_sequence
    0,                                                     // tp_as_mapping
    0,                                                     // tp_hash
    0,                                                     // tp_call
    0,                                                     // tp_str
    (getattrofunc) 0,                                      // tp_getattro
    (setattrofunc) 0,                                      // tp_setattro
    0,                                                     // tp_as_buffer
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,              // tp_flags
    tp_doc,                                                // tp_doc
    0,                                                     // tp_traverse
    0,                                                     // tp_clear
    0,                                                     // tp_richcompare
    0,                                                     // tp_weaklistoffset
    0,                                                     // tp_iter
    0,                                                     // tp_iternext
    tp_methods,                                            // tp_methods
    0,                                                     // tp_members
    0,                                                     // tp_getset
    &PySoy_controllers_Controller_Type,                    // tp_base
    0,                                                     // tp_dict
    0,                                                     // tp_descr_get
    0,                                                     // tp_descr_set
    0,                                                     // tp_dictoffset
    0,                                                     // tp_init
    0,                                                     // tp_alloc
    (newfunc) tp_new,                                      // tp_new
    0,                                                     // tp_free
    0,                                                     // tp_is_gc
};

