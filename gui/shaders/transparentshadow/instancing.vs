//	ObjectTalk Scripting Language
//	Copyright (c) 2020-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.

$input a_position, a_texcoord0, i_data0, i_data1, i_data2, i_data3
$output v_texcoord0

#include <bgfx.glsl>

void main() {
	mat4 model = mul(u_model[0], mtxFromCols(i_data0, i_data1, i_data2, i_data3));
	vec4 position = mul(model, vec4(a_position, 1.0));
	v_texcoord0 = a_texcoord0;
	gl_Position = mul(u_viewProj, position);
}
