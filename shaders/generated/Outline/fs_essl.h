static const uint8_t OtOutlineFS_essl[1770] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x09, 0x75, // FSH.o.><.......u
	0x5f, 0x6f, 0x75, 0x74, 0x6c, 0x69, 0x6e, 0x65, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // _outline........
	0x00, 0x00, 0x11, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x54, 0x65, 0x78, // ...s_selectedTex
	0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, 0x06, // ture............
	0x00, 0x00, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, // ..precision high
	0x70, 0x20, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, // p int;.precision
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x6f, 0x75, //  highp float;.ou
	0x74, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, // t mediump vec4 b
	0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x69, // gfx_FragColor;.i
	0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // n vec2 v_texcoor
	0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, // d0;.uniform vec4
	0x20, 0x75, 0x5f, 0x6f, 0x75, 0x74, 0x6c, 0x69, 0x6e, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, //  u_outline;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, // orm sampler2D s_
	0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, // selectedTexture;
	0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, // .void main ().{.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x76, 0x61, 0x6c, //   lowp float val
	0x75, 0x65, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, // ue_1;.  lowp vec
	0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 4 tmpvar_2;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // pvar_2 = texture
	0x20, 0x28, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x54, 0x65, 0x78, 0x74, //  (s_selectedText
	0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // ure, v_texcoord0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // );.  if ((tmpvar
	0x5f, 0x32, 0x2e, 0x78, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, // _2.x > 0.0)) {. 
	0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, //    discard;.  };
	0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // .  vec2 tmpvar_3
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x75, // ;.  tmpvar_3 = u
	0x5f, 0x6f, 0x75, 0x74, 0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x78, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, // _outline.xy;.  v
	0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // alue_1 = (tmpvar
	0x5f, 0x32, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, // _2.x + texture (
	0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // s_selectedTextur
	0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, // e, (v_texcoord0 
	0x2d, 0x20, 0x75, 0x5f, 0x6f, 0x75, 0x74, 0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x78, 0x79, 0x29, 0x29, // - u_outline.xy))
	0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, // .x);.  vec2 tmpv
	0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // ar_4;.  tmpvar_4
	0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // .x = 0.0;.  floa
	0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // t tmpvar_5;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x2d, 0x28, 0x75, 0x5f, 0x6f, 0x75, 0x74, // pvar_5 = -(u_out
	0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // line.y);.  tmpva
	0x72, 0x5f, 0x34, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, // r_4.y = tmpvar_5
	0x3b, 0x0a, 0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x76, // ;.  value_1 = (v
	0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // alue_1 + texture
	0x20, 0x28, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x54, 0x65, 0x78, 0x74, //  (s_selectedText
	0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ure, (v_texcoord
	0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x2e, 0x78, // 0 + tmpvar_4)).x
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // );.  vec2 tmpvar
	0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, // _6;.  tmpvar_6.x
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x3b, 0x0a, 0x20, //  = tmpvar_3.x;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, //  tmpvar_6.y = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, // pvar_5;.  value_
	0x31, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x74, // 1 = (value_1 + t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, // exture (s_select
	0x65, 0x64, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, // edTexture, (v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // xcoord0 + tmpvar
	0x5f, 0x36, 0x29, 0x29, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // _6)).x);.  vec2 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_7;.  tmpv
	0x61, 0x72, 0x5f, 0x37, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, // ar_7.y = 0.0;.  
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, // float tmpvar_8;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x3d, 0x20, 0x2d, 0x28, 0x75, //   tmpvar_8 = -(u
	0x5f, 0x6f, 0x75, 0x74, 0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, // _outline.x);.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // mpvar_7.x = tmpv
	0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, // ar_8;.  value_1 
	0x3d, 0x20, 0x28, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x74, 0x65, 0x78, // = (value_1 + tex
	0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, // ture (s_selected
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // Texture, (v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, // oord0 + tmpvar_7
	0x29, 0x29, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, // )).x);.  vec2 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_9;.  tmpvar
	0x5f, 0x39, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // _9.y = 0.0;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // pvar_9.x = tmpva
	0x72, 0x5f, 0x33, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, // r_3.x;.  value_1
	0x20, 0x3d, 0x20, 0x28, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x74, 0x65, //  = (value_1 + te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, // xture (s_selecte
	0x64, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // dTexture, (v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // coord0 + tmpvar_
	0x39, 0x29, 0x29, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, // 9)).x);.  vec2 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // mpvar_10;.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x30, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ar_10.x = tmpvar
	0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x2e, // _8;.  tmpvar_10.
	0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x79, 0x3b, 0x0a, // y = tmpvar_3.y;.
	0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x61, 0x6c, //   value_1 = (val
	0x75, 0x65, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, // ue_1 + texture (
	0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // s_selectedTextur
	0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, // e, (v_texcoord0 
	0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x29, 0x29, 0x2e, 0x78, 0x29, // + tmpvar_10)).x)
	0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ;.  vec2 tmpvar_
	0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x2e, // 11;.  tmpvar_11.
	0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // x = 0.0;.  tmpva
	0x72, 0x5f, 0x31, 0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // r_11.y = tmpvar_
	0x33, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x3d, // 3.y;.  value_1 =
	0x20, 0x28, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x74, 0x65, 0x78, 0x74, //  (value_1 + text
	0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, 0x64, 0x54, // ure (s_selectedT
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // exture, (v_texco
	0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, // ord0 + tmpvar_11
	0x29, 0x29, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, // )).x);.  value_1
	0x20, 0x3d, 0x20, 0x28, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x74, 0x65, //  = (value_1 + te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x73, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x65, // xture (s_selecte
	0x64, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // dTexture, (v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x75, 0x5f, 0x6f, 0x75, 0x74, 0x6c, 0x69, // coord0 + u_outli
	0x6e, 0x65, 0x2e, 0x78, 0x79, 0x29, 0x29, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, // ne.xy)).x);.  if
	0x20, 0x28, 0x28, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, //  ((value_1 > 0.0
	0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, // )) {.    value_1
	0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x76, 0x61, 0x6c, 0x75, 0x65, //  = (0.5 + (value
	0x5f, 0x31, 0x20, 0x2f, 0x20, 0x39, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, // _1 / 9.0));.  };
	0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, // .  lowp vec4 tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // var_12;.  tmpvar
	0x5f, 0x31, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, // _12.xyz = vec3(1
	0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x35, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // .0, 0.5, 0.0);. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x76, //  tmpvar_12.w = v
	0x61, 0x6c, 0x75, 0x65, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, // alue_1;.  bgfx_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ragColor = tmpva
	0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // r_12;.}...
};
