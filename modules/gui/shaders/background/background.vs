//	ObjectTalk Scripting Language
//	Copyright (c) 2020-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.

$input a_position, a_texcoord0
$output v_position, v_texcoord0

uniform mat4 u_background_transform;

#include <bgfx.glsl>

#include <material.glsl>

void main() {
	v_texcoord0 = mul(u_uv_transform, vec3(a_texcoord0, 1.0)).xy;
	gl_Position = mul(u_background_transform, vec4(a_position, 1.0));
}
