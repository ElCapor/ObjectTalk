static const uint8_t OtSkyboxFS_essl[415] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x05, 0x75, // FSH.o.><.......u
	0x5f, 0x73, 0x6b, 0x79, 0x02, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x73, // _sky...........s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x30, // _textureSampler0
	0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x70, 0x72, // ..........`...pr
	0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, // ecision highp in
	0x74, 0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, // t;.precision hig
	0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x6d, 0x65, // hp float;.out me
	0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, // diump vec4 bgfx_
	0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, // FragColor;.in ve
	0x63, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, // c3 v_texcoord0;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x73, // uniform vec4 u_s
	0x6b, 0x79, 0x5b, 0x33, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6c, // ky[3];.uniform l
	0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x43, 0x75, 0x62, 0x65, 0x20, // owp samplerCube 
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // s_textureSampler
	0x30, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, // 0;.void main ().
	0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, // {.  lowp vec4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_1;.  tmpvar
	0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // _1.w = 1.0;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, // pvar_1.xyz = (u_
	0x73, 0x6b, 0x79, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, // sky[0].x * pow (
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, // texture (s_textu
	0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x30, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, // reSampler0, v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x75, 0x5f, // xcoord0).xyz, u_
	0x73, 0x6b, 0x79, 0x5b, 0x30, 0x5d, 0x2e, 0x79, 0x79, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // sky[0].yyy));.  
	0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, // bgfx_FragColor =
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       //  tmpvar_1;.}...
};
