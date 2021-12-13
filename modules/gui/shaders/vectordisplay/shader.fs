//	ObjectTalk Scripting Language
//	Copyright (c) 2020-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.

$input v_texcoord0, v_color0

#include <bgfx.glsl>

SAMPLER2D(s_texture,  0);

uniform vec4 u_params;
#define u_alpha u_params.x

void main() {
	gl_FragColor = v_color0 * texture2D(s_texture, v_texcoord0.xy) * vec4(1.0, 1.0, 1.0, u_alpha);
}
