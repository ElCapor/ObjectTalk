static const uint8_t OtBloomUpSampleFS_essl[1471] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // FSH.o.><.......u
	0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // _bloom..........
	0x0e, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, // .s_bloomTexture.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x05, 0x00, 0x00, 0x70, 0x72, 0x65, // .............pre
	0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, // cision highp int
	0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, // ;.precision high
	0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x6d, 0x65, 0x64, // p float;.out med
	0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, // iump vec4 bgfx_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, // ragColor;.in vec
	0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, // 2 v_texcoord0;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x62, 0x6c, // niform vec4 u_bl
	0x6f, 0x6f, 0x6d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, // oom;.uniform sam
	0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, // pler2D s_bloomTe
	0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // xture;.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, //  ().{.  lowp vec
	0x34, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // 4 sum_1;.  vec2 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_2;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2a, 0x20, 0x75, 0x5f, // ar_2 = (0.5 * u_
	0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, // bloom.xy);.  vec
	0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 2 tmpvar_3;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, // pvar_3.y = 0.0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x2d, //   tmpvar_3.x = -
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, // (tmpvar_2.x);.  
	0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x2a, // sum_1 = (0.125 *
	0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, //  texture (s_bloo
	0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, // mTexture, (v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // coord0 + tmpvar_
	0x33, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, // 3)));.  vec2 tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_4;.  tmpvar_
	0x34, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 4.x = 0.0;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // var_4.y = tmpvar
	0x5f, 0x32, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, // _2.y;.  sum_1 = 
	0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, // (sum_1 + (0.125 
	0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, // * texture (s_blo
	0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, // omTexture, (v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // xcoord0 + tmpvar
	0x5f, 0x34, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, // _4))));.  vec2 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_5;.  tmpva
	0x72, 0x5f, 0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // r_5.y = 0.0;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // mpvar_5.x = tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, // ar_2.x;.  sum_1 
	0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x31, 0x32, // = (sum_1 + (0.12
	0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x62, // 5 * texture (s_b
	0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, // loomTexture, (v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, // texcoord0 + tmpv
	0x61, 0x72, 0x5f, 0x35, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, // ar_5))));.  vec2
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_6;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, // var_6.x = 0.0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x2d, 0x28, //  tmpvar_6.y = -(
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, // tmpvar_2.y);.  s
	0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, // um_1 = (sum_1 + 
	0x28, 0x30, 0x2e, 0x31, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // (0.125 * texture
	0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, //  (s_bloomTexture
	0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, // , (v_texcoord0 +
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, //  tmpvar_6))));. 
	0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, //  sum_1 = (sum_1 
	0x2b, 0x20, 0x28, 0x30, 0x2e, 0x30, 0x36, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, // + (0.0625 * text
	0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, // ure (s_bloomText
	0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ure, (v_texcoord
	0x30, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x29, 0x29, // 0 - tmpvar_2))))
	0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ;.  vec2 tmpvar_
	0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x78, 0x20, // 7;.  tmpvar_7.x 
	0x3d, 0x20, 0x2d, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x29, 0x3b, // = -(tmpvar_2.x);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x79, 0x20, 0x3d, 0x20, // .  tmpvar_7.y = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, // tmpvar_2.y;.  su
	0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, // m_1 = (sum_1 + (
	0x30, 0x2e, 0x30, 0x36, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // 0.0625 * texture
	0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, //  (s_bloomTexture
	0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, // , (v_texcoord0 +
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, //  tmpvar_7))));. 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, //  vec2 tmpvar_8;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x74, //   tmpvar_8.x = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // mpvar_2.x;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x2d, 0x28, 0x74, 0x6d, 0x70, 0x76, // var_8.y = -(tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, // ar_2.y);.  sum_1
	0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x30, 0x2e, 0x30, //  = (sum_1 + (0.0
	0x36, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, // 625 * texture (s
	0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x28, // _bloomTexture, (
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x74, 0x6d, // v_texcoord0 + tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x75, // pvar_8))));.  su
	0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, // m_1 = (sum_1 + (
	0x30, 0x2e, 0x30, 0x36, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // 0.0625 * texture
	0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, //  (s_bloomTexture
	0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, // , (v_texcoord0 +
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, //  tmpvar_2))));. 
	0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x20, //  sum_1 = (sum_1 
	0x2b, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x35, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // + (0.25 * textur
	0x65, 0x20, 0x28, 0x73, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // e (s_bloomTextur
	0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x29, // e, v_texcoord0))
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, // );.  bgfx_FragCo
	0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x62, 0x6c, 0x6f, 0x6f, 0x6d, 0x2e, 0x7a, // lor = (u_bloom.z
	0x20, 0x2a, 0x20, 0x73, 0x75, 0x6d, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       //  * sum_1);.}...
};
