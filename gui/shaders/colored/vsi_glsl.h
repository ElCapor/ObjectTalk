static const uint8_t OtColoredVSI_glsl[724] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x29, 0x5e, 0x82, 0x01, 0x00, 0x0a, 0x75, // VSH.....])^....u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // _viewProj.......
	0x00, 0x00, 0x00, 0xac, 0x02, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, // .......attribute
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, //  vec3 a_normal;.
	0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, // attribute vec3 a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, // _position;.attri
	0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, // bute vec4 i_data
	0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, // 0;.attribute vec
	0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, // 4 i_data1;.attri
	0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, // bute vec4 i_data
	0x32, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, // 2;.attribute vec
	0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, // 4 i_data3;.varyi
	0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // ng vec3 v_normal
	0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ;.varying vec4 v
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // _position;.unifo
	0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, // rm mat4 u_viewPr
	0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, // oj;.void main ()
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // .{.  mat4 tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x30, // _1;.  tmpvar_1[0
	0x5d, 0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // ] = i_data0;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, // mpvar_1[1] = i_d
	0x61, 0x74, 0x61, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // ata1;.  tmpvar_1
	0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, 0x3b, 0x0a, 0x20, // [2] = i_data2;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x33, 0x5d, 0x20, 0x3d, 0x20, 0x69, //  tmpvar_1[3] = i
	0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, // _data3;.  vec4 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_2;.  tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // r_2.w = 1.0;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, // mpvar_2.xyz = a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x70, 0x6f, // position;.  v_po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // sition = (tmpvar
	0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, // _1 * tmpvar_2);.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, //   vec4 tmpvar_3;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x77, 0x20, 0x3d, 0x20, // .  tmpvar_3.w = 
	0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, // 0.0;.  tmpvar_3.
	0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, // xyz = a_normal;.
	0x20, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, //   v_normal = (tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // pvar_1 * tmpvar_
	0x33, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, // 3).xyz;.  vec4 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_4;.  tmpva
	0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // r_4.w = 1.0;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, // mpvar_4.xyz = a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, // position;.  gl_P
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, // osition = (u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // wProj * (tmpvar_
	0x31, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x3b, 0x0a, // 1 * tmpvar_4));.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
