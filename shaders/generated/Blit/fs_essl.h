static const uint8_t OtBlitFS_essl[463] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _texture........
	0x00, 0x00, 0x06, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // ...u_blit.......
	0x00, 0x00, 0x00, 0x97, 0x01, 0x00, 0x00, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, // .......precision
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, //  highp int;.prec
	0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ision highp floa
	0x74, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, // t;.out mediump v
	0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, // ec4 bgfx_FragCol
	0x6f, 0x72, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, // or;.in vec2 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // xcoord0;.uniform
	0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, //  sampler2D s_tex
	0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, // ture;.uniform ve
	0x63, 0x34, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, // c4 u_blit;.void 
	0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, // main ().{.  lowp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, //  vec4 tmpvar_1;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, //   tmpvar_1 = tex
	0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, // ture (s_texture,
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, //  v_texcoord0);. 
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, //  vec4 tmpvar_2;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x75, //   tmpvar_2.x = u
	0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // _blit.x;.  tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, 0x78, // r_2.y = u_blit.x
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x7a, 0x20, 0x3d, // ;.  tmpvar_2.z =
	0x20, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  u_blit.x;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x62, 0x6c, 0x69, // var_2.w = (u_bli
	0x74, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, 0x79, 0x29, 0x3b, // t.x * u_blit.y);
	0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, // .  bgfx_FragColo
	0x72, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, // r = (tmpvar_1 * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       // tmpvar_2);.}...
};
