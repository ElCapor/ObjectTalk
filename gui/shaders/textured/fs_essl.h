static const uint8_t OtTexturedFS_essl[3693] =
{
	0x46, 0x53, 0x48, 0x0b, 0x92, 0x1b, 0x2b, 0xe2, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0a, 0x75, // FSH...+........u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x02, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, // _material.......
	0x00, 0xf7, 0x7f, 0x07, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x02, 0x13, 0x00, 0x00, 0x13, // ....u_light.....
	0x00, 0x00, 0x00, 0xf7, 0x7f, 0x09, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, // ......s_texture.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf7, 0x7f, 0x1f, 0x0e, 0x00, 0x00, 0x70, 0x72, 0x65, // .............pre
	0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, // cision highp int
	0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, // ;.precision high
	0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x6c, 0x6f, 0x77, // p float;.out low
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, // p vec4 bgfx_Frag
	0x44, 0x61, 0x74, 0x61, 0x30, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, // Data0;.in vec3 v
	0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, // _normal;.in vec3
	0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x69, 0x6e, 0x20, //  v_position;.in 
	0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // vec2 v_texcoord0
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, // ;.uniform vec4 u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, // _material[5];.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, // iform vec4 u_lig
	0x68, 0x74, 0x5b, 0x31, 0x39, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // ht[19];.uniform 
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // sampler2D s_text
	0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, // ure;.void main (
	0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // ).{.  lowp vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_1;.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, // ar_1 = texture (
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // s_texture, v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, // coord0);.  lowp 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x32, 0x3b, 0x0a, 0x20, // vec4 result_2;. 
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, //  vec3 view_direc
	0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x73, // tion_3;.  vec3 s
	0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, // pecular_4;.  vec
	0x33, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x76, // 3 diffuse_5;.  v
	0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, // ec3 tmpvar_6;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, // tmpvar_6 = (u_li
	0x67, 0x68, 0x74, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, // ght[0].xyz * u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, // aterial[1].xyz);
	0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, // .  vec3 tmpvar_7
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x78, 0x20, 0x3d, // ;.  tmpvar_7.x =
	0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, //  0.0;.  tmpvar_7
	0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // .y = 0.0;.  tmpv
	0x61, 0x72, 0x5f, 0x37, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, // ar_7.z = 0.0;.  
	0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // diffuse_5 = tmpv
	0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, // ar_7;.  vec3 tmp
	0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_8;.  tmpvar_
	0x38, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 8.x = 0.0;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, // var_8.y = 0.0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x30, 0x2e, //  tmpvar_8.z = 0.
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, // 0;.  specular_4 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x69, // = tmpvar_8;.  vi
	0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x3d, // ew_direction_3 =
	0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x2d, 0x28, 0x76, 0x5f, 0x70, //  normalize(-(v_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, // osition));.  if 
	0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x33, 0x5d, // (bool(u_light[3]
	0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // .x)) {.    vec3 
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, // light_direction_
	0x39, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, // 9;.    if ((u_li
	0x67, 0x68, 0x74, 0x5b, 0x34, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, // ght[4].w == 0.0)
	0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, // ) {.      light_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x6e, 0x6f, // direction_9 = no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // rmalize(u_light[
	0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, 0x65, // 4].xyz);.    } e
	0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, // lse {.      ligh
	0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x39, 0x20, 0x3d, 0x20, // t_direction_9 = 
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, // normalize((u_lig
	0x68, 0x74, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, 0x70, 0x6f, // ht[4].xyz - v_po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, // sition));.    };
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // .    float tmpva
	0x72, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // r_10;.    tmpvar
	0x5f, 0x31, 0x30, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, // _10 = max (dot (
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, // light_direction_
	0x39, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, // 9, v_normal), 0.
	0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, // 0);.    diffuse_
	0x35, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x35, 0x5d, // 5 = ((u_light[5]
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // .xyz * u_materia
	0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // l[2].xyz) * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, // ar_10);.    if (
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, // (tmpvar_10 > 0.0
	0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, // )) {.      specu
	0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, // lar_4 = ((u_ligh
	0x74, 0x5b, 0x36, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, // t[6].xyz * u_mat
	0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, // erial[3].xyz) * 
	0x70, 0x6f, 0x77, 0x20, 0x28, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, // pow (max (.     
	0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, //    dot (normaliz
	0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, // e((view_directio
	0x6e, 0x5f, 0x33, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, // n_3 + light_dire
	0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x39, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // ction_9)), v_nor
	0x6d, 0x61, 0x6c, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x30, 0x2e, 0x30, // mal).      , 0.0
	0x29, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, // ), u_material[4]
	0x2e, 0x78, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, // .x));.    };.  }
	0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, // ;.  if (bool(u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x37, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, // ight[7].x)) {.  
	0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, //   vec3 light_dir
	0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, // ection_11;.    i
	0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, 0x77, // f ((u_light[8].w
	0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, //  == 0.0)) {.    
	0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, //   light_directio
	0x6e, 0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, // n_11 = normalize
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, // (u_light[8].xyz)
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, // ;.    } else {. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, //      light_direc
	0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // tion_11 = normal
	0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, // ize((u_light[8].
	0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // xyz - v_position
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // ));.    };.    f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x3b, 0x0a, // loat tmpvar_12;.
	0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, //     tmpvar_12 = 
	0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, // max (dot (light_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x31, 0x2c, 0x20, 0x76, 0x5f, // direction_11, v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // normal), 0.0);. 
	0x20, 0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, //    diffuse_5 = (
	0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, // diffuse_5 + ((u_
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x39, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, // light[9].xyz * u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, // _material[2].xyz
	0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x32, 0x29, 0x29, 0x3b, // ) * tmpvar_12));
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // .    if ((tmpvar
	0x5f, 0x31, 0x32, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, // _12 > 0.0)) {.  
	0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, //     specular_4 =
	0x20, 0x28, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2b, 0x20, 0x28, //  (specular_4 + (
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, // (u_light[10].xyz
	0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, //  * u_material[3]
	0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, // .xyz) * pow (.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, //       max (dot (
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, // normalize((view_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x2b, 0x20, 0x6c, 0x69, // direction_3 + li
	0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x31, // ght_direction_11
	0x29, 0x29, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, // )), v_normal), 0
	0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, // .0).      , u_ma
	0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, // terial[4].x)));.
	0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, //     };.  };.  if
	0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, //  (bool(u_light[1
	0x31, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, // 1].x)) {.    vec
	0x33, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, // 3 light_directio
	0x6e, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, // n_13;.    if ((u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x32, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, // _light[12].w == 
	0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, // 0.0)) {.      li
	0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x33, // ght_direction_13
	0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, //  = normalize(u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, // ight[12].xyz);. 
	0x20, 0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, //    } else {.    
	0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, //   light_directio
	0x6e, 0x5f, 0x31, 0x33, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, // n_13 = normalize
	0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x32, 0x5d, 0x2e, 0x78, 0x79, // ((u_light[12].xy
	0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, // z - v_position))
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, // ;.    };.    flo
	0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x3b, 0x0a, 0x20, 0x20, // at tmpvar_14;.  
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x20, 0x3d, 0x20, 0x6d, 0x61, //   tmpvar_14 = ma
	0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, // x (dot (light_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x33, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, // rection_13, v_no
	0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, // rmal), 0.0);.   
	0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x64, 0x69, //  diffuse_5 = (di
	0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, // ffuse_5 + ((u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, // ght[13].xyz * u_
	0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, // material[2].xyz)
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x34, 0x29, 0x29, 0x3b, 0x0a, //  * tmpvar_14));.
	0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, //     if ((tmpvar_
	0x31, 0x34, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, // 14 > 0.0)) {.   
	0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, //    specular_4 = 
	0x28, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2b, 0x20, 0x28, 0x28, // (specular_4 + ((
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, // u_light[14].xyz 
	0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, // * u_material[3].
	0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, // xyz) * pow (.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, //      max (dot (n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, // ormalize((view_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, // irection_3 + lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x33, 0x29, // ht_direction_13)
	0x29, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, // ), v_normal), 0.
	0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, // 0).      , u_mat
	0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, // erial[4].x)));. 
	0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, //    };.  };.  if 
	0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x35, // (bool(u_light[15
	0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, // ].x)) {.    vec3
	0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, //  light_direction
	0x5f, 0x31, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, // _15;.    if ((u_
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x36, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, // light[16].w == 0
	0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, // .0)) {.      lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x35, 0x20, // ht_direction_15 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, // = normalize(u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x36, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, // ght[16].xyz);.  
	0x20, 0x20, 0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, //   } else {.     
	0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, //  light_direction
	0x5f, 0x31, 0x35, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, // _15 = normalize(
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x36, 0x5d, 0x2e, 0x78, 0x79, 0x7a, // (u_light[16].xyz
	0x20, 0x2d, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x29, 0x3b, //  - v_position));
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // .    };.    floa
	0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, // t tmpvar_16;.   
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x20, 0x3d, 0x20, 0x6d, 0x61, 0x78, //  tmpvar_16 = max
	0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, //  (dot (light_dir
	0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x35, 0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // ection_15, v_nor
	0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // mal), 0.0);.    
	0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x64, 0x69, 0x66, // diffuse_5 = (dif
	0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, // fuse_5 + ((u_lig
	0x68, 0x74, 0x5b, 0x31, 0x37, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, // ht[17].xyz * u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, // aterial[2].xyz) 
	0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x36, 0x29, 0x29, 0x3b, 0x0a, 0x20, // * tmpvar_16));. 
	0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, //    if ((tmpvar_1
	0x36, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // 6 > 0.0)) {.    
	0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x28, //   specular_4 = (
	0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x75, // specular_4 + ((u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x38, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, // _light[18].xyz *
	0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, //  u_material[3].x
	0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, // yz) * pow (.    
	0x20, 0x20, 0x20, 0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, //     max (dot (no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, // rmalize((view_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x33, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, // rection_3 + ligh
	0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x35, 0x29, 0x29, // t_direction_15))
	0x2c, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, // , v_normal), 0.0
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, // ).      , u_mate
	0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // rial[4].x)));.  
	0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, //   };.  };.  vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, //  tmpvar_17;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // pvar_17.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x2e, 0x78, 0x79, 0x7a, // .  tmpvar_17.xyz
	0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x2b, 0x20, //  = ((tmpvar_6 + 
	0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x35, 0x29, 0x20, 0x2b, 0x20, 0x73, 0x70, 0x65, // diffuse_5) + spe
	0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, // cular_4);.  lowp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x38, 0x3b, //  vec4 tmpvar_18;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x38, 0x20, 0x3d, 0x20, 0x28, // .  tmpvar_18 = (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_17 * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, // ar_1);.  result_
	0x32, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x38, 0x3b, 0x0a, 0x20, // 2 = tmpvar_18;. 
	0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, //  if (bool(u_ligh
	0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, // t[1].x)) {.    r
	0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x6d, 0x69, 0x78, 0x20, 0x28, 0x75, // esult_2 = mix (u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x32, 0x5d, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // _light[2], tmpva
	0x72, 0x5f, 0x31, 0x38, 0x2c, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x0a, 0x20, // r_18, clamp ((. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, //      (u_light[1]
	0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x28, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, // .z - abs(v_posit
	0x69, 0x6f, 0x6e, 0x2e, 0x7a, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x0a, // ion.z)).     / .
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, //       (u_light[1
	0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, // ].z - u_light[1]
	0x2e, 0x79, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, // .y).    ), 0.0, 
	0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, // 1.0));.  };.  bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x72, // fx_FragData0 = r
	0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                   // esult_2;.}...
};
