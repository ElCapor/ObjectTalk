static const uint8_t OtColoredVSI_glsl[886] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x29, 0x5e, 0x82, 0x02, 0x00, 0x0a, 0x75, // VSH.....])^....u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _viewProj.......
	0x00, 0x00, 0x00, 0x08, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x02, 0x05, 0x00, 0x00, // ....u_shadow....
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 0x03, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, // ......;...attrib
	0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // ute vec3 a_norma
	0x6c, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, // l;.attribute vec
	0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, // 3 a_position;.at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, // tribute vec4 i_d
	0x61, 0x74, 0x61, 0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, // ata0;.attribute 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x3b, 0x0a, 0x61, 0x74, // vec4 i_data1;.at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, // tribute vec4 i_d
	0x61, 0x74, 0x61, 0x32, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, // ata2;.attribute 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x3b, 0x0a, 0x76, 0x61, // vec4 i_data3;.va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // rying vec3 v_nor
	0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, // mal;.varying vec
	0x34, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, 0x61, // 4 v_position;.va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x73, 0x68, 0x61, // rying vec4 v_sha
	0x64, 0x6f, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, // dow;.uniform mat
	0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, // 4 u_viewProj;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x73, 0x68, 0x61, // iform vec4 u_sha
	0x64, 0x6f, 0x77, 0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, // dow[5];.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, // n ().{.  mat4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_1;.  tmpvar
	0x5f, 0x31, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x3b, // _1[0] = i_data0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x31, 0x5d, 0x20, 0x3d, // .  tmpvar_1[1] =
	0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, //  i_data1;.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, // ar_1[2] = i_data
	0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x33, 0x5d, // 2;.  tmpvar_1[3]
	0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, //  = i_data3;.  ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_2;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_2.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_2.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, // v_position = (tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // pvar_1 * tmpvar_
	0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // 2);.  vec4 tmpva
	0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, // r_3;.  tmpvar_3.
	0x77, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // w = 0.0;.  tmpva
	0x72, 0x5f, 0x33, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, // r_3.xyz = a_norm
	0x61, 0x6c, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, // al;.  v_normal =
	0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, //  (tmpvar_1 * tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, // var_3).xyz;.  ma
	0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, // t4 tmpvar_4;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x73, // mpvar_4[0] = u_s
	0x68, 0x61, 0x64, 0x6f, 0x77, 0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // hadow[1];.  tmpv
	0x61, 0x72, 0x5f, 0x34, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, // ar_4[1] = u_shad
	0x6f, 0x77, 0x5b, 0x32, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ow[2];.  tmpvar_
	0x34, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x5b, // 4[2] = u_shadow[
	0x33, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x5b, 0x33, // 3];.  tmpvar_4[3
	0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x5b, 0x34, 0x5d, 0x3b, // ] = u_shadow[4];
	0x0a, 0x20, 0x20, 0x76, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x74, // .  v_shadow = (t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, // mpvar_4 * v_posi
	0x74, 0x69, 0x6f, 0x6e, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, // tion);.  gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, // tion = (u_viewPr
	0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, // oj * v_position)
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                             // ;.}...
};
