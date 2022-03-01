static const uint8_t OtWaterVS_glsl[1112] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x71, 0xad, 0x71, 0xf9, 0x04, 0x00, 0x07, 0x75, // VSH.....q.q....u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // _model. .. .....
	0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, // .u_modelView....
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // .......u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ewProj..........
	0x08, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x02, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, // .u_shadow.......
	0x00, 0x00, 0x00, 0xf0, 0x03, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, // .......attribute
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, //  vec3 a_position
	0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, // ;.varying vec3 v
	0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, // _bitangent;.vary
	0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // ing vec3 v_norma
	0x6c, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // l;.varying vec4 
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x73, 0x63, 0x72, 0x65, 0x65, // v_position_scree
	0x6e, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // n;.varying vec4 
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, // v_position_world
	0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ;.varying vec4 v
	0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // _shadow;.varying
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, //  vec3 v_tangent;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, // .uniform mat4 u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // model[32];.unifo
	0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, // rm mat4 u_modelV
	0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, // iew;.uniform mat
	0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // 4 u_modelViewPro
	0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // j;.uniform vec4 
	0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, // u_shadow[5];.voi
	0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, // d main ().{.  ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_1;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_1.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_1.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, // v_position_world
	0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x30, 0x5d, 0x20, 0x2a, //  = (u_model[0] *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, //  tmpvar_1);.  ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_2;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_2.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_2.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x73, 0x63, 0x72, 0x65, 0x65, // v_position_scree
	0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, // n = (u_modelView
	0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, // Proj * tmpvar_2)
	0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, 0x28, // ;.  v_normal = (
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x76, 0x65, // u_modelView * ve
	0x63, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, // c4(0.0, 1.0, 0.0
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, // , 0.0)).xyz;.  v
	0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, // _tangent = (u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x31, // delView * vec4(1
	0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, // .0, 0.0, 0.0, 0.
	0x30, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x62, 0x69, 0x74, // 0)).xyz;.  v_bit
	0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // angent = (u_mode
	0x6c, 0x56, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x30, 0x2e, 0x30, // lView * vec4(0.0
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, // , 0.0, 1.0, 0.0)
	0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, // ).xyz;.  mat4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_3;.  tmpvar
	0x5f, 0x33, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, // _3[0] = u_shadow
	0x5b, 0x31, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x5b, // [1];.  tmpvar_3[
	0x31, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x5b, 0x32, 0x5d, // 1] = u_shadow[2]
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x5b, 0x32, 0x5d, 0x20, // ;.  tmpvar_3[2] 
	0x3d, 0x20, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x5b, 0x33, 0x5d, 0x3b, 0x0a, 0x20, // = u_shadow[3];. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x5b, 0x33, 0x5d, 0x20, 0x3d, 0x20, 0x75, //  tmpvar_3[3] = u
	0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // _shadow[4];.  ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_4;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_4.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_4.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x76, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, // v_shadow = (tmpv
	0x61, 0x72, 0x5f, 0x33, 0x20, 0x2a, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, // ar_3 * (u_model[
	0x30, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x29, 0x3b, // 0] * tmpvar_4));
	0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, // .  gl_Position =
	0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x73, 0x63, 0x72, 0x65, //  v_position_scre
	0x65, 0x6e, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                 // en;.}...
};
