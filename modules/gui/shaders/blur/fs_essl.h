static const uint8_t fs_blur_essl[1946] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _texture........
	0xfe, 0x7f, 0x06, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // ...u_blur.......
	0x00, 0xfe, 0x7f, 0x62, 0x07, 0x00, 0x00, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, // ...b...precision
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, //  highp int;.prec
	0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ision highp floa
	0x74, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // t;.out lowp vec4
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x3b, //  bgfx_FragData0;
	0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // .in vec2 v_texco
	0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, // ord0;.uniform sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // mpler2D s_textur
	0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // e;.uniform vec4 
	0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, // u_blur;.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, // n ().{.  lowp ve
	0x63, 0x34, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // c4 color_1;.  ve
	0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x66, // c2 tmpvar_2;.  f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, // loat tmpvar_3;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x34, 0x2e, 0x30, //  tmpvar_3 = (4.0
	0x20, 0x2a, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  * u_blur.x);.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, // tmpvar_2.x = (v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x74, 0x6d, // texcoord0.x - tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // pvar_3);.  float
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_4;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x75, // var_4 = (4.0 * u
	0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // _blur.y);.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ar_2.y = (v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // oord0.y - tmpvar
	0x5f, 0x34, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, // _4);.  color_1 =
	0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, //  (texture (s_tex
	0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x20, // ture, tmpvar_2) 
	0x2a, 0x20, 0x30, 0x2e, 0x30, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // * 0.05);.  vec2 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // tmpvar_5;.  floa
	0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // t tmpvar_6;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2a, 0x20, // pvar_6 = (3.0 * 
	0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // u_blur.x);.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // var_5.x = (v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // coord0.x - tmpva
	0x72, 0x5f, 0x36, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, // r_6);.  float tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_7;.  tmpvar
	0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x62, 0x6c, // _7 = (3.0 * u_bl
	0x75, 0x72, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ur.y);.  tmpvar_
	0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // 5.y = (v_texcoor
	0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, // d0.y - tmpvar_7)
	0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, // ;.  color_1 = (c
	0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // olor_1 + (textur
	0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, // e (s_texture, tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, 0x39, 0x29, 0x29, // pvar_5) * 0.09))
	0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ;.  vec2 tmpvar_
	0x38, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // 8;.  float tmpva
	0x72, 0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, // r_9;.  tmpvar_9 
	0x3d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, // = (2.0 * u_blur.
	0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x78, // x);.  tmpvar_8.x
	0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, //  = (v_texcoord0.
	0x78, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x29, 0x3b, 0x0a, 0x20, // x - tmpvar_9);. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, //  float tmpvar_10
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x20, 0x3d, 0x20, // ;.  tmpvar_10 = 
	0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, // (2.0 * u_blur.y)
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x79, 0x20, 0x3d, // ;.  tmpvar_8.y =
	0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, //  (v_texcoord0.y 
	0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, // - tmpvar_10);.  
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // color_1 = (color
	0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, // _1 + (texture (s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // _texture, tmpvar
	0x5f, 0x38, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // _8) * 0.12));.  
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // color_1 = (color
	0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, // _1 + (texture (s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // _texture, (v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2d, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, // coord0 - u_blur.
	0x78, 0x79, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, // xy)) * 0.15));. 
	0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, //  color_1 = (colo
	0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, // r_1 + (texture (
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // s_texture, v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x36, 0x29, 0x29, // coord0) * 0.16))
	0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, // ;.  color_1 = (c
	0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // olor_1 + (textur
	0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, // e (s_texture, (v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x75, 0x5f, 0x62, // _texcoord0 + u_b
	0x6c, 0x75, 0x72, 0x2e, 0x78, 0x79, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x35, 0x29, // lur.xy)) * 0.15)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // );.  vec2 tmpvar
	0x5f, 0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, // _11;.  tmpvar_11
	0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // .x = (v_texcoord
	0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x29, 0x3b, // 0.x + tmpvar_9);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x2e, 0x79, 0x20, 0x3d, // .  tmpvar_11.y =
	0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, //  (v_texcoord0.y 
	0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, // + tmpvar_10);.  
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // color_1 = (color
	0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, // _1 + (texture (s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // _texture, tmpvar
	0x5f, 0x31, 0x31, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, // _11) * 0.12));. 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, //  vec2 tmpvar_12;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x2e, 0x78, 0x20, 0x3d, // .  tmpvar_12.x =
	0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, //  (v_texcoord0.x 
	0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, // + tmpvar_6);.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, // mpvar_12.y = (v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2b, 0x20, 0x74, 0x6d, // texcoord0.y + tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // pvar_7);.  color
	0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, // _1 = (color_1 + 
	0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // (texture (s_text
	0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x29, 0x20, // ure, tmpvar_12) 
	0x2a, 0x20, 0x30, 0x2e, 0x30, 0x39, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, // * 0.09));.  vec2
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, //  tmpvar_13;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, // pvar_13.x = (v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, // excoord0.x + tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // var_3);.  tmpvar
	0x5f, 0x31, 0x33, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // _13.y = (v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ord0.y + tmpvar_
	0x34, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, // 4);.  color_1 = 
	0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, // (color_1 + (text
	0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, // ure (s_texture, 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, // tmpvar_13) * 0.0
	0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // 5));.  vec4 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ar_14;.  tmpvar_
	0x31, 0x34, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x7a, 0x3b, // 14.x = u_blur.z;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x2e, 0x79, 0x20, 0x3d, // .  tmpvar_14.y =
	0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  u_blur.z;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, // var_14.z = u_blu
	0x72, 0x2e, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, // r.z;.  tmpvar_14
	0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x7a, 0x20, 0x2a, // .w = (u_blur.z *
	0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, //  u_blur.w);.  bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x28, // fx_FragData0 = (
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // color_1 * tmpvar
	0x5f, 0x31, 0x34, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // _14);.}...
};
