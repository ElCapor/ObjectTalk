static const uint8_t OtVectorDisplayFS_essl[450] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x09, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _texture........
	0x00, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x02, 0x01, 0x00, 0x00, 0x01, // ...u_params.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, // .........precisi
	0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x70, 0x72, // on highp int;.pr
	0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, // ecision highp fl
	0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, // oat;.out mediump
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, //  vec4 bgfx_FragC
	0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, // olor;.in vec4 v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // color0;.in vec2 
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // v_texcoord0;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, // form sampler2D s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // _texture;.unifor
	0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x3b, // m vec4 u_params;
	0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, // .void main ().{.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, //   lowp vec4 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // ar_1;.  tmpvar_1
	0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, //  = texture (s_te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // xture, v_texcoor
	0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // d0);.  vec4 tmpv
	0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // ar_2;.  tmpvar_2
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x30, 0x2c, // .xyz = vec3(1.0,
	0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, //  1.0, 1.0);.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, // pvar_2.w = u_par
	0x61, 0x6d, 0x73, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, // ams.x;.  bgfx_Fr
	0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x76, 0x5f, 0x63, 0x6f, // agColor = ((v_co
	0x6c, 0x6f, 0x72, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, // lor0 * tmpvar_1)
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, //  * tmpvar_2);.}.
	0x0a, 0x00,                                                                                     // ..
};
