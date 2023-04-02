static const uint8_t OtGeometryFS_glsl[2420] =
{
	0x46, 0x53, 0x48, 0x0b, 0x19, 0x67, 0x93, 0x59, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0a, 0x75, // FSH..g.Y.......u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x02, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, // _material.......
	0x00, 0x00, 0x00, 0x17, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, 0x6c, // ....s_geometryAl
	0x62, 0x65, 0x64, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, // bedoTexture.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, // ....."s_geometry
	0x4d, 0x65, 0x74, 0x61, 0x6c, 0x6c, 0x69, 0x63, 0x52, 0x6f, 0x75, 0x67, 0x68, 0x6e, 0x65, 0x73, // MetallicRoughnes
	0x73, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // sTexture........
	0x00, 0x00, 0x19, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x45, 0x6d, 0x69, // ...s_geometryEmi
	0x73, 0x73, 0x69, 0x76, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, // ssiveTexture....
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, // .......s_geometr
	0x79, 0x41, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, // yAoTexture......
	0x00, 0x00, 0x00, 0x00, 0x17, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x4e, // .....s_geometryN
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, // ormalTexture....
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x08, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, // ..........varyin
	0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, // g vec3 v_bitange
	0x6e, 0x74, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, // nt;.varying vec3
	0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, //  v_normal;.varyi
	0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, // ng vec3 v_tangen
	0x74, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // t;.varying vec2 
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // v_texcoord0;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, // form vec4 u_mate
	0x72, 0x69, 0x61, 0x6c, 0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // rial[5];.uniform
	0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, 0x6f, //  sampler2D s_geo
	0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, // metryAlbedoTextu
	0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, // re;.uniform samp
	0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, // ler2D s_geometry
	0x4d, 0x65, 0x74, 0x61, 0x6c, 0x6c, 0x69, 0x63, 0x52, 0x6f, 0x75, 0x67, 0x68, 0x6e, 0x65, 0x73, // MetallicRoughnes
	0x73, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // sTexture;.unifor
	0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, // m sampler2D s_ge
	0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x45, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x76, 0x65, 0x54, 0x65, // ometryEmissiveTe
	0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, // xture;.uniform s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, // ampler2D s_geome
	0x74, 0x72, 0x79, 0x41, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, // tryAoTexture;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, // iform sampler2D 
	0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // s_geometryNormal
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, // Texture;.void ma
	0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6e, // in ().{.  vec3 n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // ormal_1;.  vec3 
	0x61, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, // albedo_2;.  vec2
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_3;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // var_3 = (v_texco
	0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // ord0 * u_materia
	0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // l[1].w);.  vec3 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_4;.  tmpv
	0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // ar_4 = u_materia
	0x6c, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x61, 0x6c, 0x62, 0x65, // l[0].xyz;.  albe
	0x64, 0x6f, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, // do_2 = tmpvar_4;
	0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, // .  if (bool(u_ma
	0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, // terial[3].x)) {.
	0x20, 0x20, 0x20, 0x20, 0x61, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, //     albedo_2 = (
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, // texture2D (s_geo
	0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, // metryAlbedoTextu
	0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x2e, 0x78, 0x79, // re, tmpvar_3).xy
	0x7a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x3b, 0x0a, 0x20, // z * tmpvar_4);. 
	0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, //  };.  vec3 tmpva
	0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, // r_5;.  tmpvar_5 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x6e, 0x6f, // = normalize(v_no
	0x72, 0x6d, 0x61, 0x6c, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, // rmal);.  normal_
	0x31, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, // 1 = tmpvar_5;.  
	0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, // if (bool(u_mater
	0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x7a, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, // ial[4].z)) {.   
	0x20, 0x6d, 0x61, 0x74, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, //  mat3 tmpvar_6;.
	0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x5b, 0x30, 0x5d, 0x20, //     tmpvar_6[0] 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x74, 0x61, // = normalize(v_ta
	0x6e, 0x67, 0x65, 0x6e, 0x74, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // ngent);.    tmpv
	0x61, 0x72, 0x5f, 0x36, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // ar_6[1] = normal
	0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x29, // ize(v_bitangent)
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x5b, 0x32, // ;.    tmpvar_6[2
	0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, // ] = tmpvar_5;.  
	0x20, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, //   normal_1 = nor
	0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, // malize((tmpvar_6
	0x20, 0x2a, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, //  * (.      (text
	0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, // ure2D (s_geometr
	0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, // yNormalTexture, 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, // tmpvar_3).xyz * 
	0x32, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, // 2.0).     - 1.0)
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // ));.  };.  float
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, //  tmpvar_7;.  if 
	0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // (bool(u_material
	0x5b, 0x33, 0x5d, 0x2e, 0x79, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, // [3].y)) {.    tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // pvar_7 = (textur
	0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x4d, // e2D (s_geometryM
	0x65, 0x74, 0x61, 0x6c, 0x6c, 0x69, 0x63, 0x52, 0x6f, 0x75, 0x67, 0x68, 0x6e, 0x65, 0x73, 0x73, // etallicRoughness
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // Texture, tmpvar_
	0x33, 0x29, 0x2e, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // 3).z * u_materia
	0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, // l[1].x);.  } els
	0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, // e {.    tmpvar_7
	0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, //  = u_material[1]
	0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // .x;.  };.  float
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, //  tmpvar_8;.  if 
	0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // (bool(u_material
	0x5b, 0x33, 0x5d, 0x2e, 0x79, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, // [3].y)) {.    tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // pvar_8 = (textur
	0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x4d, // e2D (s_geometryM
	0x65, 0x74, 0x61, 0x6c, 0x6c, 0x69, 0x63, 0x52, 0x6f, 0x75, 0x67, 0x68, 0x6e, 0x65, 0x73, 0x73, // etallicRoughness
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // Texture, tmpvar_
	0x33, 0x29, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // 3).y * u_materia
	0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, // l[1].y);.  } els
	0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, // e {.    tmpvar_8
	0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, //  = u_material[1]
	0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // .y;.  };.  vec3 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, // tmpvar_9;.  if (
	0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, // bool(u_material[
	0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, // 4].x)) {.    tmp
	0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // var_9 = (texture
	0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x45, 0x6d, // 2D (s_geometryEm
	0x69, 0x73, 0x73, 0x69, 0x76, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, // issiveTexture, t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, // mpvar_3).xyz * u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, // _material[2].xyz
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, // );.  } else {.  
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, //   tmpvar_9 = u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, // aterial[2].xyz;.
	0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, //   };.  float tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, // var_10;.  if (bo
	0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, // ol(u_material[4]
	0x2e, 0x79, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // .y)) {.    tmpva
	0x72, 0x5f, 0x31, 0x30, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // r_10 = (texture2
	0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, 0x6f, 0x54, // D (s_geometryAoT
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // exture, tmpvar_3
	0x29, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // ).x * u_material
	0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, // [1].z);.  } else
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, //  {.    tmpvar_10
	0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, //  = u_material[1]
	0x2e, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // .z;.  };.  vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // tmpvar_11;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, // var_11.w = 1.0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, //   tmpvar_11.xyz 
	0x3d, 0x20, 0x61, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // = albedo_2;.  gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x74, // _FragData[0] = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, // mpvar_11;.  vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, //  tmpvar_12;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, // pvar_12.w = 0.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x2e, 0x78, 0x79, 0x7a, // .  tmpvar_12.xyz
	0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x67, //  = normal_1;.  g
	0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, // l_FragData[1] = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, // tmpvar_12;.  vec
	0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, // 4 tmpvar_13;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, // mpvar_13.w = 0.0
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x2e, 0x78, 0x20, // ;.  tmpvar_13.x 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // = tmpvar_7;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // pvar_13.y = tmpv
	0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // ar_8;.  tmpvar_1
	0x33, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x3b, // 3.z = tmpvar_10;
	0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, 0x32, // .  gl_FragData[2
	0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x20, // ] = tmpvar_13;. 
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x3b, //  vec4 tmpvar_14;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x2e, 0x77, 0x20, 0x3d, // .  tmpvar_14.w =
	0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, //  1.0;.  tmpvar_1
	0x34, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, // 4.xyz = tmpvar_9
	0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5b, // ;.  gl_FragData[
	0x33, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x3b, 0x0a, // 3] = tmpvar_14;.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
