static const uint8_t OtBlendMappedVSI_glsl[1021] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x92, 0x1b, 0x2b, 0xe2, 0x03, 0x00, 0x06, 0x75, // VSH.......+....u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, // _view...........
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, // u_viewProj......
	0x00, 0x00, 0x00, 0x00, 0x0e, 0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, // .....u_uv_transf
	0x6f, 0x72, 0x6d, 0x03, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, 0x03, 0x00, // orm.............
	0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // .attribute vec3 
	0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, // a_normal;.attrib
	0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, // ute vec3 a_posit
	0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, // ion;.attribute v
	0x65, 0x63, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, // ec2 a_texcoord0;
	0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // .attribute vec4 
	0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, // i_data0;.attribu
	0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x3b, // te vec4 i_data1;
	0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // .attribute vec4 
	0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, // i_data2;.attribu
	0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x3b, // te vec4 i_data3;
	0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, // .varying vec3 v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, // normal;.varying 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, // vec3 v_position;
	0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, // .varying vec2 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // texcoord0;.unifo
	0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, // rm mat4 u_view;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, // uniform mat4 u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // iewProj;.uniform
	0x20, 0x6d, 0x61, 0x74, 0x33, 0x20, 0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, 0x6e, 0x73, //  mat3 u_uv_trans
	0x66, 0x6f, 0x72, 0x6d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, // form;.void main 
	0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // ().{.  mat4 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // ar_1;.  tmpvar_1
	0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x3b, 0x0a, 0x20, // [0] = i_data0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x69, //  tmpvar_1[1] = i
	0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // _data1;.  tmpvar
	0x5f, 0x31, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, 0x3b, // _1[2] = i_data2;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x33, 0x5d, 0x20, 0x3d, // .  tmpvar_1[3] =
	0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, //  i_data3;.  vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_2;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, // var_2.w = 1.0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, //  tmpvar_2.xyz = 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, // a_position;.  v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, // position = (u_vi
	0x65, 0x77, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, // ew * (tmpvar_1 *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, //  tmpvar_2)).xyz;
	0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // .  vec4 tmpvar_3
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x77, 0x20, 0x3d, // ;.  tmpvar_3.w =
	0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, //  0.0;.  tmpvar_3
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, // .xyz = a_normal;
	0x0a, 0x20, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, 0x6e, 0x6f, // .  v_normal = no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, // rmalize((u_view 
	0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, // * (tmpvar_1 * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, // pvar_3))).xyz;. 
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, //  vec3 tmpvar_4;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x31, //   tmpvar_4.z = 1
	0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, // .0;.  tmpvar_4.x
	0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, // y = a_texcoord0;
	0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, // .  v_texcoord0 =
	0x20, 0x28, 0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, //  (u_uv_transform
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x2e, 0x78, 0x79, 0x3b, //  * tmpvar_4).xy;
	0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, // .  vec4 tmpvar_5
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x77, 0x20, 0x3d, // ;.  tmpvar_5.w =
	0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, //  1.0;.  tmpvar_5
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // .xyz = a_positio
	0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // n;.  gl_Position
	0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, //  = (u_viewProj *
	0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, //  (tmpvar_1 * tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                   // var_5));.}...
};
