static const uint8_t OtShadowFS_essl[232] =
{
	0x46, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd5, 0x00, // FSH.............
	0x00, 0x00, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, // ..precision high
	0x70, 0x20, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, // p int;.precision
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x6f, 0x75, //  highp float;.ou
	0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, // t vec4 bgfx_Frag
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // Color;.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, //  ().{.  vec4 tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_1;.  tmpvar_
	0x31, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 1.x = 0.0;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, // var_1.y = 0.0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x30, 0x2e, //  tmpvar_1.z = 0.
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, // 0;.  tmpvar_1.w 
	0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, // = 0.0;.  bgfx_Fr
	0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // agColor = tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                 // _1;.}...
};
