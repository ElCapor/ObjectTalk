static const uint8_t OtTransparentFS_glsl[3962] =
{
	0x46, 0x53, 0x48, 0x0b, 0x19, 0x67, 0x93, 0x59, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0a, 0x75, // FSH..g.Y.......u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x02, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, // _material.......
	0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x02, 0x03, // ....u_lighting..
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, // .........s_geome
	0x74, 0x72, 0x79, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // tryAlbedoTexture
	0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x73, 0x5f, 0x67, 0x65, 0x6f, // .........."s_geo
	0x6d, 0x65, 0x74, 0x72, 0x79, 0x4d, 0x65, 0x74, 0x61, 0x6c, 0x6c, 0x69, 0x63, 0x52, 0x6f, 0x75, // metryMetallicRou
	0x67, 0x68, 0x6e, 0x65, 0x73, 0x73, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, // ghnessTexture...
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, // ........s_geomet
	0x72, 0x79, 0x45, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x76, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // ryEmissiveTextur
	0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x73, 0x5f, 0x67, 0x65, // e...........s_ge
	0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, // ometryAoTexture.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, // ..........s_geom
	0x65, 0x74, 0x72, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // etryNormalTextur
	0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x0e, 0x00, 0x00, 0x76, // e..............v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x62, 0x69, // arying vec3 v_bi
	0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // tangent;.varying
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, //  vec3 v_normal;.
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x70, // varying vec3 v_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // osition;.varying
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, //  vec3 v_tangent;
	0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, // .varying vec2 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // texcoord0;.unifo
	0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, // rm vec4 u_materi
	0x61, 0x6c, 0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, // al[5];.uniform v
	0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x5b, 0x33, // ec4 u_lighting[3
	0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, // ];.uniform sampl
	0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, // er2D s_geometryA
	0x6c, 0x62, 0x65, 0x64, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, // lbedoTexture;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, // iform sampler2D 
	0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x4d, 0x65, 0x74, 0x61, 0x6c, 0x6c, // s_geometryMetall
	0x69, 0x63, 0x52, 0x6f, 0x75, 0x67, 0x68, 0x6e, 0x65, 0x73, 0x73, 0x54, 0x65, 0x78, 0x74, 0x75, // icRoughnessTextu
	0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, // re;.uniform samp
	0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, // ler2D s_geometry
	0x45, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x76, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, // EmissiveTexture;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // .uniform sampler
	0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, 0x6f, 0x54, // 2D s_geometryAoT
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // exture;.uniform 
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, // sampler2D s_geom
	0x65, 0x74, 0x72, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // etryNormalTextur
	0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, // e;.void main ().
	0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // {.  vec4 tmpvar_
	0x31, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // 1;.  vec3 tmpvar
	0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // _2;.  vec2 tmpva
	0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, // r_3;.  tmpvar_3 
	0x3d, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2a, // = (v_texcoord0 *
	0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x77, //  u_material[1].w
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, // );.  if (bool(u_
	0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, // material[3].x)) 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, // {.    tmpvar_1 =
	0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, //  (texture2D (s_g
	0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x41, 0x6c, 0x62, 0x65, 0x64, 0x6f, 0x54, 0x65, 0x78, // eometryAlbedoTex
	0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x20, // ture, tmpvar_3) 
	0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x30, 0x5d, 0x29, // * u_material[0])
	0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, // ;.  } else {.   
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, //  tmpvar_1 = u_ma
	0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, // terial[0];.  };.
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, //   if ((tmpvar_1.
	0x77, 0x20, 0x3c, 0x20, 0x30, 0x2e, 0x33, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // w < 0.3)) {.    
	0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, // discard;.  };.  
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, // float tmpvar_4;.
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, //   if (bool(u_mat
	0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x79, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, // erial[3].y)) {. 
	0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x74, //    tmpvar_4 = (t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, // exture2D (s_geom
	0x65, 0x74, 0x72, 0x79, 0x4d, 0x65, 0x74, 0x61, 0x6c, 0x6c, 0x69, 0x63, 0x52, 0x6f, 0x75, 0x67, // etryMetallicRoug
	0x68, 0x6e, 0x65, 0x73, 0x73, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, // hnessTexture, tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x2e, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, // pvar_3).z * u_ma
	0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, // terial[1].x);.  
	0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, // } else {.    tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, // var_4 = u_materi
	0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, // al[1].x;.  };.  
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, // float tmpvar_5;.
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, //   if (bool(u_mat
	0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x79, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, // erial[3].y)) {. 
	0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x74, //    tmpvar_5 = (t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, // exture2D (s_geom
	0x65, 0x74, 0x72, 0x79, 0x4d, 0x65, 0x74, 0x61, 0x6c, 0x6c, 0x69, 0x63, 0x52, 0x6f, 0x75, 0x67, // etryMetallicRoug
	0x68, 0x6e, 0x65, 0x73, 0x73, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, // hnessTexture, tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, // pvar_3).y * u_ma
	0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, // terial[1].y);.  
	0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, // } else {.    tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, // var_5 = u_materi
	0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, // al[1].y;.  };.  
	0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, // vec3 tmpvar_6;. 
	0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, //  if (bool(u_mate
	0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, // rial[3].x)) {.  
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, //   tmpvar_6 = (te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, // xture2D (s_geome
	0x74, 0x72, 0x79, 0x45, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x76, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, // tryEmissiveTextu
	0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x2e, 0x78, 0x79, // re, tmpvar_3).xy
	0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, // z * u_material[2
	0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, // ].xyz);.  } else
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, //  {.    tmpvar_6 
	0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, // = u_material[2].
	0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // xyz;.  };.  floa
	0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, // t tmpvar_7;.  if
	0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, //  (bool(u_materia
	0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x79, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, // l[3].y)) {.    t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, // mpvar_7 = (textu
	0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, // re2D (s_geometry
	0x41, 0x6f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // AoTexture, tmpva
	0x72, 0x5f, 0x33, 0x29, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, // r_3).x * u_mater
	0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, 0x65, // ial[1].z);.  } e
	0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // lse {.    tmpvar
	0x5f, 0x37, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, // _7 = u_material[
	0x31, 0x5d, 0x2e, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, // 1].z;.  };.  if 
	0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // (bool(u_material
	0x5b, 0x33, 0x5d, 0x2e, 0x7a, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6d, 0x61, // [3].z)) {.    ma
	0x74, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x20, // t3 tmpvar_8;.   
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x6e, //  tmpvar_8[0] = n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, // ormalize(v_tange
	0x6e, 0x74, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // nt);.    tmpvar_
	0x38, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, // 8[1] = normalize
	0x28, 0x76, 0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x29, 0x3b, 0x0a, 0x20, // (v_bitangent);. 
	0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x5b, 0x32, 0x5d, 0x20, 0x3d, //    tmpvar_8[2] =
	0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x6e, 0x6f, 0x72, //  normalize(v_nor
	0x6d, 0x61, 0x6c, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // mal);.    tmpvar
	0x5f, 0x32, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, // _2 = normalize((
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x2a, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, // tmpvar_8 * (.   
	0x20, 0x20, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, //    (texture2D (s
	0x5f, 0x67, 0x65, 0x6f, 0x6d, 0x65, 0x74, 0x72, 0x79, 0x4e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x54, // _geometryNormalT
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // exture, tmpvar_3
	0x29, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x32, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, // ).xyz * 2.0).   
	0x20, 0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x20, //   - 1.0)));.  } 
	0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // else {.    tmpva
	0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, // r_2 = normalize(
	0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, // v_normal);.  };.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, //   vec3 tmpvar_9;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x6e, 0x6f, // .  tmpvar_9 = no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, // rmalize((u_light
	0x69, 0x6e, 0x67, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, 0x70, // ing[0].xyz - v_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, // osition));.  vec
	0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // 3 tmpvar_10;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // mpvar_10 = norma
	0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x5b, // lize(u_lighting[
	0x31, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // 1].xyz);.  vec3 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // tmpvar_11;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, // var_11 = normali
	0x7a, 0x65, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x2b, 0x20, 0x74, // ze((tmpvar_9 + t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // mpvar_10));.  ve
	0x63, 0x33, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x76, // c3 color_12;.  v
	0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x20, // ec3 tmpvar_13;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x20, 0x3d, 0x20, 0x6d, 0x69, 0x78, //  tmpvar_13 = mix
	0x20, 0x28, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x30, //  (vec3(0.04, 0.0
	0x34, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x34, 0x29, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // 4, 0.04), tmpvar
	0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // _1.xyz, tmpvar_4
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // );.  float tmpva
	0x72, 0x5f, 0x31, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // r_14;.  tmpvar_1
	0x34, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x2a, 0x20, // 4 = (tmpvar_5 * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // tmpvar_5);.  flo
	0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x35, 0x3b, 0x0a, 0x20, 0x20, // at tmpvar_15;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, // tmpvar_15 = (tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_14 * tmpvar_
	0x31, 0x34, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, // 14);.  float tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // var_16;.  tmpvar
	0x5f, 0x31, 0x36, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, // _16 = max (dot (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // tmpvar_2, tmpvar
	0x5f, 0x31, 0x31, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // _11), 0.0);.  fl
	0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x3b, 0x0a, 0x20, // oat tmpvar_17;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, //  tmpvar_17 = max
	0x20, 0x28, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  (((.    (tmpvar
	0x5f, 0x31, 0x36, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x29, // _16 * tmpvar_16)
	0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, // .   * .    (tmpv
	0x61, 0x72, 0x5f, 0x31, 0x35, 0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x29, // ar_15 - 1.0).  )
	0x20, 0x2b, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x30, 0x30, 0x31, 0x29, //  + 1.0), 0.0001)
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ;.  float tmpvar
	0x5f, 0x31, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x38, // _18;.  tmpvar_18
	0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, //  = max (dot (tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x29, // var_2, tmpvar_9)
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, // , 0.0);.  float 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // tmpvar_19;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, // var_19 = max (do
	0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, 0x20, 0x74, 0x6d, 0x70, // t (tmpvar_2, tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // var_10), 0.0);. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x30, //  float tmpvar_20
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x30, 0x20, 0x3d, 0x20, // ;.  tmpvar_20 = 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x31, 0x2e, 0x30, 0x29, // (tmpvar_5 + 1.0)
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ;.  float tmpvar
	0x5f, 0x32, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x31, // _21;.  tmpvar_21
	0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x30, 0x20, 0x2a, //  = ((tmpvar_20 *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x30, 0x29, 0x20, 0x2f, 0x20, 0x38, 0x2e, //  tmpvar_20) / 8.
	0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, // 0);.  float tmpv
	0x61, 0x72, 0x5f, 0x32, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ar_22;.  tmpvar_
	0x32, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x2b, // 22 = (tmpvar_5 +
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, //  1.0);.  float t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // mpvar_23;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ar_23 = ((tmpvar
	0x5f, 0x32, 0x32, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x32, 0x29, // _22 * tmpvar_22)
	0x20, 0x2f, 0x20, 0x38, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, //  / 8.0);.  vec3 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // tmpvar_24;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // var_24 = (tmpvar
	0x5f, 0x31, 0x33, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x74, 0x6d, // _13 + ((1.0 - tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x33, 0x29, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, // pvar_13) * pow (
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x31, 0x2e, 0x30, // .    clamp ((1.0
	0x20, 0x2d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, //  - max (dot (tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, // var_11, tmpvar_9
	0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, // ), 0.0)), 0.0, 1
	0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x35, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, // .0).  , 5.0)));.
	0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x28, //   color_12 = (((
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x28, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // .    ((((.      
	0x28, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, // (vec3(1.0, 1.0, 
	0x31, 0x2e, 0x30, 0x29, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x34, // 1.0) - tmpvar_24
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // ).     * .      
	0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, // (1.0 - tmpvar_4)
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // .    ) * tmpvar_
	0x31, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2f, 0x20, 0x33, 0x2e, 0x31, 0x34, 0x31, 0x35, 0x39, // 1.xyz) / 3.14159
	0x33, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, // 3) + (((.      (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x35, 0x20, 0x2f, 0x20, 0x28, 0x28, 0x33, 0x2e, // tmpvar_15 / ((3.
	0x31, 0x34, 0x31, 0x35, 0x39, 0x33, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // 141593 * tmpvar_
	0x31, 0x37, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x29, // 17) * tmpvar_17)
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // ).     * .      
	0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, 0x20, 0x2f, 0x20, 0x28, 0x28, // ((tmpvar_19 / ((
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, // tmpvar_19 * .   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, //      (1.0 - tmpv
	0x61, 0x72, 0x5f, 0x32, 0x33, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x29, 0x20, 0x2b, // ar_23).      ) +
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x33, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x28, //  tmpvar_23)) * (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x38, 0x20, 0x2f, 0x20, 0x28, 0x28, 0x74, 0x6d, // tmpvar_18 / ((tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x38, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, // pvar_18 * .     
	0x20, 0x20, 0x20, 0x28, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //    (1.0 - tmpvar
	0x5f, 0x32, 0x31, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x29, 0x20, 0x2b, 0x20, 0x74, // _21).      ) + t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x31, 0x29, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, // mpvar_21))).    
	0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x34, 0x29, 0x20, 0x2f, // ) * tmpvar_24) /
	0x20, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, //  ((.      (4.0 *
	0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, //  max (dot (tmpva
	0x72, 0x5f, 0x32, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x29, 0x2c, 0x20, // r_2, tmpvar_9), 
	0x30, 0x2e, 0x30, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, // 0.0)).     * .  
	0x20, 0x20, 0x20, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, //     max (dot (tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // pvar_2, tmpvar_1
	0x30, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x20, 0x2b, // 0), 0.0).    ) +
	0x20, 0x30, 0x2e, 0x30, 0x30, 0x30, 0x31, 0x29, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2a, 0x20, //  0.0001))).   * 
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x69, 0x6e, 0x67, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, // u_lighting[2].xy
	0x7a, 0x29, 0x20, 0x2a, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, // z) * max (.    d
	0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2c, 0x20, 0x74, 0x6d, // ot (tmpvar_2, tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x30, 0x2e, 0x30, // pvar_10).  , 0.0
	0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x33, // )) + ((vec3(0.03
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x33, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x33, 0x29, 0x20, 0x2a, 0x20, // , 0.03, 0.03) * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, // tmpvar_1.xyz) * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, // tmpvar_7));.  co
	0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, // lor_12 = (color_
	0x31, 0x32, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x3b, 0x0a, // 12 + tmpvar_6);.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x35, //   vec4 tmpvar_25
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x35, 0x2e, 0x78, 0x79, // ;.  tmpvar_25.xy
	0x7a, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, // z = color_12;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x35, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x74, 0x6d, // tmpvar_25.w = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, // pvar_1.w;.  gl_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ragColor = tmpva
	0x72, 0x5f, 0x32, 0x35, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // r_25;.}...
};
