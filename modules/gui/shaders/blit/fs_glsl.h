static const uint8_t fs_blit_glsl[339] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _texture........
	0xfe, 0x7f, 0x06, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // ...u_blit.......
	0x00, 0xfe, 0x7f, 0x1b, 0x01, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, // .......in vec2 v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // _texcoord0;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, // orm sampler2D s_
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // texture;.uniform
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x3b, 0x0a, 0x76, 0x6f, //  vec4 u_blit;.vo
	0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, // id main ().{.  v
	0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, // ec4 tmpvar_1;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x62, // tmpvar_1.x = u_b
	0x6c, 0x69, 0x74, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // lit.x;.  tmpvar_
	0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, 0x78, 0x3b, 0x0a, // 1.y = u_blit.x;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x75, //   tmpvar_1.z = u
	0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // _blit.x;.  tmpva
	0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, // r_1.w = (u_blit.
	0x78, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x69, 0x74, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, // x * u_blit.y);. 
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, //  gl_FragColor = 
	0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // (texture (s_text
	0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // ure, v_texcoord0
	0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x7d, // ) * tmpvar_1);.}
	0x0a, 0x0a, 0x00,                                                                               // ...
};
