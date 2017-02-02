char* soy_materials_colored_color_glslf = "/*\n*  libsoy - soy.materials.Colored.color_glslf\n*  Copyright (C) 2006-2014 Copyleft Games Group\n*\n*  This program is free software; you can redistribute it and/or modify\n*  it under the terms of the GNU Affero General Public License as published\n*  by the Free Software Foundation, either version 3 of the License, or\n*  (at your option) any later version.\n*\n*  This program is distributed in the hope that it will be useful,\n*  but WITHOUT ANY WARRANTY; without even the implied warranty of\n*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n*  GNU Affero General Public License for more details.\n*\n*  You should have received a copy of the GNU Affero General Public License\n*  along with this program; if not, see http://www.gnu.org/licenses\n*\n*/\n\n// https://imdoingitwrong.wordpress.com/2011/02/10/improved-light-attenuation/\n\nprecision mediump float;\nuniform vec4 scene_ambient;\nuniform vec4 light_diffuse[8], light_specular[8];\nuniform vec4 mat_ambient, mat_diffuse, mat_specular;\nuniform vec4 mat_emission;\nuniform float mat_shininess;\nuniform vec3 light_pos[8];\nuniform int light_num;\nvarying vec3 vVertex, vNormal;\n\nvoid main() {\nvec3 n = normalize(vNormal);\nvec3 v = normalize(-vVertex);\n\nvec4 total = mat_ambient * scene_ambient + mat_emission;\n\nfor (int i = 0; i < 8; i++) {\nif (i >= light_num) {break;}\nvec3 l = light_pos[i]-vVertex;\nfloat d = length(l);\nif (d > 20.0) {continue;}\nl /= d;\nvec3 h = normalize(l+v);\nfloat d2 = d/(1.0-pow(d/20.0,2.0));\nfloat attenuation = 1.0/pow(1.0 + 0.01*d2,2.0);\nvec4 diffuse = max(dot(l, n), 0.0) * mat_diffuse *\nlight_diffuse[i];\nvec4 specular = pow(max(dot(n, h), 0.0), mat_shininess)\n* mat_specular * light_specular[i];\ntotal += (diffuse+specular)*attenuation;\ntotal = clamp(total, 0.0, 1.0);\n}\ngl_FragColor = total;\n}\n\n";