static const uint8_t OtBloomUpSampleFS_glsl[1410] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // FSH.o.><.......u
	0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // _bloom..........
	0x0e, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, // .s_bloomTexture.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x05, 0x00, 0x00, 0x76, 0x61, 0x72, // .........D...var
	0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ying vec2 v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, // oord0;.uniform v
	0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // ec4 u_bloom;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, // form sampler2D s
	0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, // _bloomTexture;.v
	0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // oid main ().{.  
	0x76, 0x65, 0x63, 0x34, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // vec4 sum_1;.  ve
	0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c2 tmpvar_2;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2a, // mpvar_2 = (0.5 *
	0x20, 0x75, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  u_bloom.xy);.  
	0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, // vec2 tmpvar_3;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, //  tmpvar_3.y = 0.
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x20, // 0;.  tmpvar_3.x 
	0x3d, 0x20, 0x2d, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x29, 0x3b, // = -(tmpvar_2.x);
	0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, // .  sum_1 = (0.12
	0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, // 5 * texture2D (s
	0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, // _bloomTexture, (
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, // v_texcoord0 + tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, // pvar_3)));.  vec
	0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 2 tmpvar_4;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, // pvar_4.x = 0.0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, //   tmpvar_4.y = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, // mpvar_2.y;.  sum
	0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, // _1 = (sum_1 + (0
	0x2e, 0x31, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // .125 * texture2D
	0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, //  (s_bloomTexture
	0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, // , (v_texcoord0 +
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, //  tmpvar_4))));. 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, //  vec2 tmpvar_5;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, //   tmpvar_5.y = 0
	0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x78, // .0;.  tmpvar_5.x
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x3b, 0x0a, 0x20, //  = tmpvar_2.x;. 
	0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, //  sum_1 = (sum_1 
	0x2b, 0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // + (0.125 * textu
	0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, // re2D (s_bloomTex
	0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // ture, (v_texcoor
	0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x29, 0x29, 0x29, // d0 + tmpvar_5)))
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // );.  vec2 tmpvar
	0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, // _6;.  tmpvar_6.x
	0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  = 0.0;.  tmpvar
	0x5f, 0x36, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x2d, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // _6.y = -(tmpvar_
	0x32, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, // 2.y);.  sum_1 = 
	0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, // (sum_1 + (0.125 
	0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x62, // * texture2D (s_b
	0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, // loomTexture, (v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, // texcoord0 + tmpv
	0x61, 0x72, 0x5f, 0x36, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, // ar_6))));.  sum_
	0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, // 1 = (sum_1 + (0.
	0x30, 0x36, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // 0625 * texture2D
	0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, //  (s_bloomTexture
	0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2d, // , (v_texcoord0 -
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, //  tmpvar_2))));. 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, //  vec2 tmpvar_7;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x2d, //   tmpvar_7.x = -
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, // (tmpvar_2.x);.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // tmpvar_7.y = tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, // var_2.y;.  sum_1
	0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x30, //  = (sum_1 + (0.0
	0x36, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, // 625 * texture2D 
	0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, // (s_bloomTexture,
	0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, //  (v_texcoord0 + 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // tmpvar_7))));.  
	0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, // vec2 tmpvar_8;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x74, 0x6d, //  tmpvar_8.x = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // pvar_2.x;.  tmpv
	0x61, 0x72, 0x5f, 0x38, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x2d, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, // ar_8.y = -(tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, // r_2.y);.  sum_1 
	0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x30, 0x36, // = (sum_1 + (0.06
	0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, // 25 * texture2D (
	0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, // s_bloomTexture, 
	0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, // (v_texcoord0 + t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, // mpvar_8))));.  s
	0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, // um_1 = (sum_1 + 
	0x28, 0x30, 0x2e, 0x30, 0x36, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // (0.0625 * textur
	0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, // e2D (s_bloomText
	0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ure, (v_texcoord
	0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x29, 0x29, // 0 + tmpvar_2))))
	0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, // ;.  sum_1 = (sum
	0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, // _1 + (0.25 * tex
	0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, // ture2D (s_bloomT
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // exture, v_texcoo
	0x72, 0x64, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, // rd0)));.  gl_Fra
	0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, // gColor = (u_bloo
	0x6d, 0x2e, 0x7a, 0x20, 0x2a, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, // m.z * sum_1);.}.
	0x0a, 0x00,                                                                                     // ..
};
