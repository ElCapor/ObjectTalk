static const uint8_t vs_skybox_glsl[647] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x06, 0x75, // VSH.....o.><...u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfe, 0x7f, 0x06, // _view...........
	0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfe, 0x7f, // u_proj..........
	0x52, 0x02, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, // R...in vec3 a_po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x33, // sition;.out vec3
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, //  v_texcoord0;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, // iform mat4 u_vie
	0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, // w;.uniform mat4 
	0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, // u_proj;.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // n ().{.  v_texco
	0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // ord0 = a_positio
	0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // n;.  mat4 tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x75, // _1;.  tmpvar_1[u
	0x69, 0x6e, 0x74, 0x28, 0x30, 0x29, 0x5d, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x31, // int(0)] = vec4(1
	0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, // .0, 0.0, 0.0, 0.
	0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x31, // 0);.  tmpvar_1[1
	0x75, 0x5d, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, // u] = vec4(0.0, 1
	0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // .0, 0.0, 0.0);. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x32, 0x75, 0x5d, 0x20, 0x3d, 0x20, //  tmpvar_1[2u] = 
	0x76, 0x65, 0x63, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, // vec4(0.0, 0.0, 1
	0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // .0, 0.0);.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x5b, 0x33, 0x75, 0x5d, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, // ar_1[3u] = vec4(
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, // 0.0, 0.0, 0.0, 1
	0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, // .0);.  tmpvar_1[
	0x75, 0x69, 0x6e, 0x74, 0x28, 0x30, 0x29, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x75, // uint(0)].xyz = u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x5b, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x30, 0x29, 0x5d, 0x2e, 0x78, // _view[uint(0)].x
	0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x31, // yz;.  tmpvar_1[1
	0x75, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x5b, // u].xyz = u_view[
	0x31, 0x75, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // 1u].xyz;.  tmpva
	0x72, 0x5f, 0x31, 0x5b, 0x32, 0x75, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x75, 0x5f, // r_1[2u].xyz = u_
	0x76, 0x69, 0x65, 0x77, 0x5b, 0x32, 0x75, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, // view[2u].xyz;.  
	0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, // vec4 tmpvar_2;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, //  tmpvar_2.w = 1.
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, // 0;.  tmpvar_2.xy
	0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, // z = a_position;.
	0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, //   gl_Position = 
	0x28, 0x28, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ((u_proj * tmpva
	0x72, 0x5f, 0x31, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, // r_1) * tmpvar_2)
	0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, // ;.  gl_Position.
	0x7a, 0x20, 0x3d, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, // z = gl_Position.
	0x77, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                       // w;.}...
};
