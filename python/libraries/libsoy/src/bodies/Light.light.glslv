/*
 *  libsoy - soy.bodies.Light.light_glslv
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

attribute vec3 vertex;
attribute vec2 texcoord;
uniform mat4 mv_matrix, p_matrix;
varying vec2 vTexCoord;
void main()
{
    gl_Position = p_matrix*mv_matrix*vec4(vertex,1.0);
    vTexCoord = texcoord;
}
