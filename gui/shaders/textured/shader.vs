//	ObjectTalk Scripting Language
//	Copyright (c) 2020-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.

$input a_position, a_normal, a_tangent, a_texcoord0
$output v_position, v_view, v_normal, v_tangent, v_texcoord0

#include <bgfx.glsl>

void main() {
	v_position = mul(u_model[0], vec4(a_position, 1.0)).xyz;
	v_view = mul(u_modelView, vec4(a_position, 1.0)).xyz;
	v_normal = mul(u_model[0], vec4(a_normal, 0.0)).xyz;
	v_tangent = mul(u_model[0], vec4(a_tangent, 0.0)).xyz;
	v_texcoord0 = a_texcoord0;
	gl_Position = mul(u_modelViewProj, vec4(a_position, 1.0));
}
