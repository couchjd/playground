/*
    PySoy - soy.controllers.SpaceNavigator
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
#define SELF PySoy_controllers_SpaceNavigator_Object*

static char
tp_doc[] = "soy.controllers.SpaceNavigator Type\n"
"\n"
"    This class will make an object move from its current position to a given destination at a given speed through 3d space.\n"
"\n"
"The initializer for this class has the following signature::\n"
"\n"
"    soy.controllers.SpaceNavigator(scene, controlled, speed, granularity, fuzziness = None, granularity, end, updates = False, paused = False)\n"
"\n"
"================= ====================================== ====================================================================================================================================\n"
"Argument          Type                                   Explanation\n"
"================= ====================================== ====================================================================================================================================\n"
"scene             soy.scenes.Scene                       The scene being simulated.\n"
"controlled        soy.bodies.Body                        The body being controlled.\n"
"speed             float                                  The speed of the object in ____ per ____.\n" //TODO Figure out what the units are.
"fuzziness = None  float or None                          The distance around a waypoint that one is to consider being part of the waypoint. If None it is set to 1/100 the speed.\n"
"granularity       float                                  The granularity is the distance between adjacent points in the grid along one of the axes. The granularity must be a non-negative, non-zero real number.\n"
"end               soy.atoms.Position                     The desired destination.\n"
"updates   = False bool                                   True if this controller should periodically check that its path remains clear, false otherwise.\n"
"paused    = False bool                                   True when this controller should be initially paused, and False when should not be.\n"
"================= ====================================== ====================================================================================================================================\n"
"\n"
"\n";
//TODO Add documentation


static PyObject*
tp_new (PyTypeObject *type, PyObject *args, PyObject *kwds) {
    SELF self;
    PySoy_scenes_Scene_Object*   scene;
    PySoy_bodies_Body_Object*    controlled;
    PySoy_atoms_Position_Object* dest;
    float radius, speed, granularity = -1.0f, fuzziness = -1.0f;
    int updates = FALSE, paused = FALSE;
    PyObject* bounds = Py_None;

    static char *kw[] = {"scene", "controlled", "dest", "speed", "granularity", "fuzziness", "bounds", "updates", "paused", NULL};

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!O!O!ff|fOii",   kw,
                                     &PySoy_scenes_Scene_Type,      &scene,
                                     &PySoy_bodies_Body_Type,       &controlled,
                                     &PySoy_atoms_Position_Type,    &dest,
                                                                    &speed,
                                                                    &granularity,
                                                                    &fuzziness,
                                                                    &bounds,
                                                                    &updates,
                                                                    &paused))
        return NULL;

    if (fuzziness == -1.0f) {
        fuzziness = speed/10000.0f;
    } else if (fuzziness < 0.0f) {
        PyErr_SetString(PyExc_ValueError, "'fuzziness' must be a number greater than 0");
        return NULL;
    }

    self = (SELF) PyType_GenericNew(type, args, kwds);
    if (!self)
        return NULL;

    if (bounds == Py_None) {
        self->g = soy_controllers_space_navigator_new(scene->g, controlled->g, speed, fuzziness, granularity, dest->g, updates, paused);
    } else if (PySoy_atoms_Size_Check(bounds)) {
        soycontrollersgraphSpaceGraph* graph = soy_controllers_graph_space_graph_new_with_size(scene->g, granularity, ((PySoy_atoms_Size_Object*)bounds)->g,NULL);
        self->g = soy_controllers_space_navigator_new_with_graph(scene->g, controlled->g, speed, fuzziness, (soycontrollersgraphIGraph*) graph, dest->g, updates, paused);
    } else if (PyNumber_Check(bounds)) {
        PyObject* flt = PyNumber_Float(bounds);
        if (flt == NULL) 
            return NULL;
        radius = (float)PyFloat_AsDouble(flt);
        Py_DECREF(flt);
        if (PyErr_Occurred()) { return NULL; }

        soycontrollersgraphSpaceGraph* graph = soy_controllers_graph_space_graph_new_with_radius(scene->g, granularity, radius,NULL);
        self->g = soy_controllers_space_navigator_new_with_graph(scene->g, controlled->g, speed, fuzziness, (soycontrollersgraphIGraph*) graph, dest->g, updates, paused);
    } else {
        PyErr_SetString(PyExc_ValueError, "'bounds' must be either a number greater then 0 or a soy.atoms.Size");
        return NULL;
    }

    return (PyObject*) self;
}


static PyObject*
tp_repr (PyObject* self) {
    PyObject *result;

    result = PyUnicode_FromFormat("<SpaceNavigator>");

    return result;
}
 
PyTypeObject PySoy_controllers_SpaceNavigator_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "soy.controllers.SpaceNavigator",                      // tp_name
    sizeof(PySoy_controllers_SpaceNavigator_Object),       // tp_basicsize
    0,                                                     // tp_itemsize
    0,                                                     // tp_dealloc
    0,                                                     // tp_print
    (getattrfunc) 0,                                       // tp_getattr
    (setattrfunc) 0,                                       // tp_setattr
    0,                                                     // RESERVED
    (reprfunc) tp_repr,                                    // tp_repr
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
    0,                                                     // tp_methods
    0,                                                     // tp_members
    0,                                                     // tp_getset
    &PySoy_controllers_BaseNavigator_Type,                 // tp_base
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
