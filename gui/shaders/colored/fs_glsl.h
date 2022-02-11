static const uint8_t OtColoredFS_glsl[3520] =
{
	0x46, 0x53, 0x48, 0x0b, 0xbb, 0x17, 0x8e, 0xa9, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0a, 0x75, // FSH............u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x02, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, // _material.......
	0x00, 0x00, 0x00, 0x07, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x02, 0x13, 0x00, 0x00, 0x13, // ....u_light.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x0d, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, // .........varying
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, //  vec3 v_normal;.
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x70, // varying vec3 v_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // osition;.uniform
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, //  vec4 u_material
	0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, // [5];.uniform vec
	0x34, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x39, 0x5d, 0x3b, 0x0a, 0x76, // 4 u_light[19];.v
	0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // oid main ().{.  
	0x76, 0x65, 0x63, 0x34, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, // vec4 color_1;.  
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, // color_1 = u_mate
	0x72, 0x69, 0x61, 0x6c, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // rial[0];.  vec4 
	0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, // result_2;.  vec3
	0x20, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, //  view_direction_
	0x33, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, // 3;.  vec3 specul
	0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x64, 0x69, 0x66, // ar_4;.  vec3 dif
	0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, // fuse_5;.  vec3 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_6;.  tmpva
	0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x30, // r_6 = (u_light[0
	0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, // ].xyz * u_materi
	0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // al[1].xyz);.  ve
	0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c3 tmpvar_7;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, // mpvar_7.x = 0.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x79, 0x20, 0x3d, 0x20, // .  tmpvar_7.y = 
	0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, // 0.0;.  tmpvar_7.
	0x7a, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, // z = 0.0;.  diffu
	0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, // se_5 = tmpvar_7;
	0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, // .  vec3 tmpvar_8
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x78, 0x20, 0x3d, // ;.  tmpvar_8.x =
	0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, //  0.0;.  tmpvar_8
	0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // .y = 0.0;.  tmpv
	0x61, 0x72, 0x5f, 0x38, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, // ar_8.z = 0.0;.  
	0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // specular_4 = tmp
	0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, // var_8;.  view_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, // rection_3 = norm
	0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x2d, 0x28, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // alize(-(v_positi
	0x6f, 0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, // on));.  if (bool
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, // (u_light[3].x)) 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, // {.    vec3 light
	0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, // _direction_9;.  
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x34, //   if ((u_light[4
	0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, // ].w == 0.0)) {. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, //      light_direc
	0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, // tion_9 = normali
	0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x79, // ze(u_light[4].xy
	0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, // z);.    } else {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, // .      light_dir
	0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // ection_9 = norma
	0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x34, 0x5d, // lize((u_light[4]
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // .xyz - v_positio
	0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // n));.    };.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x3b, // float tmpvar_10;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x20, 0x3d, // .    tmpvar_10 =
	0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, //  max (dot (light
	0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x39, 0x2c, 0x20, 0x76, 0x5f, // _direction_9, v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // normal), 0.0);. 
	0x20, 0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, //    diffuse_5 = (
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x35, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, // (u_light[5].xyz 
	0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, // * u_material[2].
	0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, // xyz) * tmpvar_10
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, // );.    if ((tmpv
	0x61, 0x72, 0x5f, 0x31, 0x30, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, // ar_10 > 0.0)) {.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, //       specular_4
	0x20, 0x3d, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x36, 0x5d, 0x2e, //  = ((u_light[6].
	0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // xyz * u_material
	0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, // [3].xyz) * pow (
	0x6d, 0x61, 0x78, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, // max (.        do
	0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, // t (normalize((vi
	0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x2b, // ew_direction_3 +
	0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, //  light_direction
	0x5f, 0x39, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x0a, // _9)), v_normal).
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x2c, 0x20, 0x75, 0x5f, //       , 0.0), u_
	0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x3b, // material[4].x));
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, // .    };.  };.  i
	0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // f (bool(u_light[
	0x37, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, // 7].x)) {.    vec
	0x33, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, // 3 light_directio
	0x6e, 0x5f, 0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, // n_11;.    if ((u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, // _light[8].w == 0
	0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, // .0)) {.      lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x31, 0x20, // ht_direction_11 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, // = normalize(u_li
	0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, // ght[8].xyz);.   
	0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //  } else {.      
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, // light_direction_
	0x31, 0x31, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, // 11 = normalize((
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, // u_light[8].xyz -
	0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, //  v_position));. 
	0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, //    };.    float 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, // tmpvar_12;.    t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, // mpvar_12 = max (
	0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, // dot (light_direc
	0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x31, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // tion_11, v_norma
	0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, // l), 0.0);.    di
	0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x64, 0x69, 0x66, 0x66, 0x75, // ffuse_5 = (diffu
	0x73, 0x65, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, // se_5 + ((u_light
	0x5b, 0x39, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, // [9].xyz * u_mate
	0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x74, // rial[2].xyz) * t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // mpvar_12));.    
	0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x20, 0x3e, // if ((tmpvar_12 >
	0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, //  0.0)) {.      s
	0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x70, 0x65, // pecular_4 = (spe
	0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, // cular_4 + ((u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, // ght[10].xyz * u_
	0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, // material[3].xyz)
	0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //  * pow (.       
	0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, //  max (dot (norma
	0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, // lize((view_direc
	0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, // tion_3 + light_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x31, 0x29, 0x29, 0x2c, 0x20, 0x76, // irection_11)), v
	0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, // _normal), 0.0). 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, //      , u_materia
	0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, // l[4].x)));.    }
	0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, // ;.  };.  if (boo
	0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x31, 0x5d, 0x2e, 0x78, 0x29, // l(u_light[11].x)
	0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, 0x69, 0x67, // ) {.    vec3 lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x33, 0x3b, // ht_direction_13;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, // .    if ((u_ligh
	0x74, 0x5b, 0x31, 0x32, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, // t[12].w == 0.0))
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, //  {.      light_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x33, 0x20, 0x3d, 0x20, 0x6e, 0x6f, // irection_13 = no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // rmalize(u_light[
	0x31, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, // 12].xyz);.    } 
	0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, // else {.      lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x33, 0x20, // ht_direction_13 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, // = normalize((u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, // ight[12].xyz - v
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, // _position));.   
	0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, //  };.    float tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, // pvar_14;.    tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, // var_14 = max (do
	0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, // t (light_directi
	0x6f, 0x6e, 0x5f, 0x31, 0x33, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, // on_13, v_normal)
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x66, 0x66, // , 0.0);.    diff
	0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, // use_5 = (diffuse
	0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, // _5 + ((u_light[1
	0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, // 3].xyz * u_mater
	0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, // ial[2].xyz) * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, // pvar_14));.    i
	0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x20, 0x3e, 0x20, // f ((tmpvar_14 > 
	0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, // 0.0)) {.      sp
	0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x70, 0x65, 0x63, // ecular_4 = (spec
	0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, // ular_4 + ((u_lig
	0x68, 0x74, 0x5b, 0x31, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, // ht[14].xyz * u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, // aterial[3].xyz) 
	0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // * pow (.        
	0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // max (dot (normal
	0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, // ize((view_direct
	0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, // ion_3 + light_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x33, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x5f, // rection_13)), v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, // normal), 0.0).  
	0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, //     , u_material
	0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, // [4].x)));.    };
	0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, // .  };.  if (bool
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x35, 0x5d, 0x2e, 0x78, 0x29, 0x29, // (u_light[15].x))
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, 0x69, 0x67, 0x68, //  {.    vec3 ligh
	0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x35, 0x3b, 0x0a, // t_direction_15;.
	0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, //     if ((u_light
	0x5b, 0x31, 0x36, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, // [16].w == 0.0)) 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, // {.      light_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x35, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, // rection_15 = nor
	0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, // malize(u_light[1
	0x36, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, 0x65, // 6].xyz);.    } e
	0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, // lse {.      ligh
	0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x35, 0x20, 0x3d, // t_direction_15 =
	0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, //  normalize((u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x36, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, // ght[16].xyz - v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // position));.    
	0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, // };.    float tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // var_16;.    tmpv
	0x61, 0x72, 0x5f, 0x31, 0x36, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, // ar_16 = max (dot
	0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, //  (light_directio
	0x6e, 0x5f, 0x31, 0x35, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, // n_15, v_normal),
	0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, //  0.0);.    diffu
	0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, // se_5 = (diffuse_
	0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x37, // 5 + ((u_light[17
	0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, // ].xyz * u_materi
	0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, // al[2].xyz) * tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, // var_16));.    if
	0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x20, 0x3e, 0x20, 0x30, //  ((tmpvar_16 > 0
	0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, // .0)) {.      spe
	0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x70, 0x65, 0x63, 0x75, // cular_4 = (specu
	0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, // lar_4 + ((u_ligh
	0x74, 0x5b, 0x31, 0x38, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, // t[18].xyz * u_ma
	0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, // terial[3].xyz) *
	0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6d, //  pow (.        m
	0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, // ax (dot (normali
	0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, // ze((view_directi
	0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, // on_3 + light_dir
	0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x35, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x5f, 0x6e, // ection_15)), v_n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, // ormal), 0.0).   
	0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, //    , u_material[
	0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, // 4].x)));.    };.
	0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, //   };.  vec4 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ar_17;.  tmpvar_
	0x31, 0x37, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 17.w = 1.0;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x28, // pvar_17.xyz = ((
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x2b, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, // tmpvar_6 + diffu
	0x73, 0x65, 0x5f, 0x35, 0x29, 0x20, 0x2b, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, // se_5) + specular
	0x5f, 0x34, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // _4);.  vec4 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ar_18;.  tmpvar_
	0x31, 0x38, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x20, // 18 = (tmpvar_17 
	0x2a, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, // * color_1);.  re
	0x73, 0x75, 0x6c, 0x74, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // sult_2 = tmpvar_
	0x31, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, // 18;.  if (bool(u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, // _light[1].x)) {.
	0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x6d, //     result_2 = m
	0x69, 0x78, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x32, 0x5d, 0x2c, 0x20, // ix (u_light[2], 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x38, 0x2c, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, // tmpvar_18, clamp
	0x20, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, //  ((.      (u_lig
	0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x28, 0x76, 0x5f, // ht[1].z - abs(v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x7a, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, // position.z)).   
	0x20, 0x20, 0x2f, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, //   / .      (u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, // ght[1].z - u_lig
	0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x2c, 0x20, // ht[1].y).    ), 
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, // 0.0, 1.0));.  };
	0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, // .  gl_FragColor 
	0x3d, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // = result_2;.}...
};
