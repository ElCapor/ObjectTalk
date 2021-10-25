static const uint8_t fs_water_glsl[4831] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6d, 0x08, 0x07, 0x68, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x75, // FSH.m..h.......u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x02, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, // _material.......
	0x00, 0xfe, 0x7f, 0x07, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x02, 0x13, 0x00, 0x00, 0x13, // ....u_light.....
	0x00, 0x00, 0x00, 0xfe, 0x7f, 0x07, 0x75, 0x5f, 0x77, 0x61, 0x74, 0x65, 0x72, 0x02, 0x02, 0x00, // ......u_water...
	0x00, 0x02, 0x00, 0x00, 0x00, 0xfe, 0x7f, 0x09, 0x73, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // ........s_normal
	0x73, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfe, 0x7f, 0x0c, 0x73, 0x5f, 0x72, 0x65, // s...........s_re
	0x66, 0x6c, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // flection........
	0xfe, 0x7f, 0x68, 0x12, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, // ..h...in vec3 v_
	0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, // bitangent;.in ve
	0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x69, 0x6e, 0x20, // c3 v_normal;.in 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, // vec3 v_position_
	0x63, 0x61, 0x6d, 0x65, 0x72, 0x61, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // camera;.in vec4 
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x73, 0x63, 0x72, 0x65, 0x65, // v_position_scree
	0x6e, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, // n;.in vec3 v_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x3b, 0x0a, 0x69, 0x6e, 0x20, // ition_world;.in 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, // vec3 v_tangent;.
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6d, // uniform vec4 u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // aterial[5];.unif
	0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, // orm vec4 u_light
	0x5b, 0x31, 0x39, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, // [19];.uniform ve
	0x63, 0x34, 0x20, 0x75, 0x5f, 0x77, 0x61, 0x74, 0x65, 0x72, 0x5b, 0x32, 0x5d, 0x3b, 0x0a, 0x75, // c4 u_water[2];.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // niform sampler2D
	0x20, 0x73, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x73, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, //  s_normals;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, // orm sampler2D s_
	0x72, 0x65, 0x66, 0x6c, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, // reflection;.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6d, 0x61, 0x74, //  main ().{.  mat
	0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 3 tmpvar_1;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x75, 0x69, 0x6e, 0x74, 0x28, 0x30, 0x29, 0x5d, 0x20, // pvar_1[uint(0)] 
	0x3d, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x20, 0x20, 0x74, // = v_tangent;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x5b, 0x31, 0x75, 0x5d, 0x20, 0x3d, 0x20, 0x76, 0x5f, // mpvar_1[1u] = v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // normal;.  tmpvar
	0x5f, 0x31, 0x5b, 0x32, 0x75, 0x5d, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, // _1[2u] = v_bitan
	0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, // gent;.  vec2 tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_2;.  tmpvar_
	0x32, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, // 2 = (v_position_
	0x77, 0x6f, 0x72, 0x6c, 0x64, 0x2e, 0x78, 0x7a, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x77, 0x61, 0x74, // world.xz * u_wat
	0x65, 0x72, 0x5b, 0x30, 0x5d, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, // er[0].y);.  vec2
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_3;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x77, 0x61, 0x74, // var_3.x = (u_wat
	0x65, 0x72, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2f, 0x20, 0x31, 0x37, 0x2e, 0x30, 0x29, 0x3b, // er[0].x / 17.0);
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x79, 0x20, 0x3d, 0x20, // .  tmpvar_3.y = 
	0x28, 0x75, 0x5f, 0x77, 0x61, 0x74, 0x65, 0x72, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2f, 0x20, // (u_water[0].x / 
	0x32, 0x39, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, // 29.0);.  vec2 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_4;.  tmpvar
	0x5f, 0x34, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x77, 0x61, 0x74, 0x65, 0x72, 0x5b, // _4.x = (u_water[
	0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2f, 0x20, 0x2d, 0x31, 0x39, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // 0].x / -19.0);. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x75, //  tmpvar_4.y = (u
	0x5f, 0x77, 0x61, 0x74, 0x65, 0x72, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2f, 0x20, 0x33, 0x31, // _water[0].x / 31
	0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, // .0);.  vec2 tmpv
	0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, // ar_5;.  tmpvar_5
	0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x77, 0x61, 0x74, 0x65, 0x72, 0x5b, 0x30, 0x5d, // .x = (u_water[0]
	0x2e, 0x78, 0x20, 0x2f, 0x20, 0x31, 0x30, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, // .x / 101.0);.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x77, // mpvar_5.y = (u_w
	0x61, 0x74, 0x65, 0x72, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2f, 0x20, 0x39, 0x37, 0x2e, 0x30, // ater[0].x / 97.0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // );.  vec2 tmpvar
	0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, // _6;.  tmpvar_6.x
	0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x77, 0x61, 0x74, 0x65, 0x72, 0x5b, 0x30, 0x5d, 0x2e, 0x78, //  = (u_water[0].x
	0x20, 0x2f, 0x20, 0x31, 0x30, 0x39, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  / 109.0);.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x77, 0x61, 0x74, // var_6.y = (u_wat
	0x65, 0x72, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2f, 0x20, 0x2d, 0x31, 0x31, 0x33, 0x2e, 0x30, // er[0].x / -113.0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // );.  vec3 tmpvar
	0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x20, 0x3d, // _7;.  tmpvar_7 =
	0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, //  normalize((tmpv
	0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x28, 0x28, // ar_1 * (.    (((
	0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // (.      (texture
	0x20, 0x28, 0x73, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x73, 0x2c, 0x20, 0x28, 0x28, 0x74, //  (s_normals, ((t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x2f, 0x20, 0x31, 0x30, 0x33, 0x2e, 0x30, 0x29, // mpvar_2 / 103.0)
	0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, 0x2b, 0x20, //  + tmpvar_3)) + 
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // texture (s_norma
	0x6c, 0x73, 0x2c, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x2f, // ls, ((tmpvar_2 /
	0x20, 0x31, 0x30, 0x37, 0x2e, 0x30, 0x29, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  107.0) - tmpvar
	0x5f, 0x34, 0x29, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2b, 0x20, 0x74, 0x65, 0x78, // _4))).     + tex
	0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x73, 0x2c, // ture (s_normals,
	0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  .      ((tmpvar
	0x5f, 0x32, 0x20, 0x2f, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x38, 0x39, 0x30, 0x37, 0x2e, 0x30, // _2 / vec2(8907.0
	0x2c, 0x20, 0x39, 0x38, 0x30, 0x33, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, // , 9803.0)) + tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x29, 0x20, 0x2b, 0x20, // var_5).    )) + 
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // texture (s_norma
	0x6c, 0x73, 0x2c, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, // ls, (.      (tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x2f, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x31, 0x30, 0x39, // var_2 / vec2(109
	0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x30, 0x32, 0x37, 0x2e, 0x30, 0x29, 0x29, 0x0a, 0x20, 0x20, // 1.0, 1027.0)).  
	0x20, 0x20, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x29, 0x29, //    - tmpvar_6)))
	0x20, 0x2a, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x0a, 0x20, //  * 0.5) - 1.0). 
	0x20, 0x2e, 0x78, 0x7a, 0x79, 0x20, 0x2a, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x35, //  .xzy * vec3(1.5
	0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x35, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, // , 1.0, 1.5))));.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, //   vec4 tmpvar_8;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x3d, 0x20, 0x74, 0x65, // .  tmpvar_8 = te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x72, 0x65, 0x66, 0x6c, 0x65, 0x63, 0x74, // xture (s_reflect
	0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x28, 0x28, 0x28, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // ion, (((v_positi
	0x6f, 0x6e, 0x5f, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x2e, 0x78, 0x79, 0x20, 0x2f, 0x20, 0x76, // on_screen.xy / v
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, // _position_screen
	0x2e, 0x77, 0x29, 0x20, 0x2f, 0x20, 0x32, 0x2e, 0x30, 0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, // .w) / 2.0) + 0.5
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6f, 0x74, 0x61, 0x6c, // ));.  vec4 total
	0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x69, 0x65, 0x77, 0x5f, // _9;.  vec3 view_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, // direction_10;.  
	0x76, 0x65, 0x63, 0x34, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x31, 0x31, // vec4 specular_11
	0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, // ;.  vec4 diffuse
	0x5f, 0x31, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // _12;.  vec4 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ar_13;.  tmpvar_
	0x31, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x30, // 13 = ((u_light[0
	0x5d, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, // ] * u_material[1
	0x5d, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x3b, 0x0a, // ]) * tmpvar_8);.
	0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x76, //   diffuse_12 = v
	0x65, 0x63, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, // ec4(0.0, 0.0, 0.
	0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, // 0, 0.0);.  specu
	0x6c, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x30, 0x2e, // lar_11 = vec4(0.
	0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, // 0, 0.0, 0.0, 0.0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, // );.  view_direct
	0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x30, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, // ion_10 = normali
	0x7a, 0x65, 0x28, 0x2d, 0x28, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, // ze(-(v_position_
	0x63, 0x61, 0x6d, 0x65, 0x72, 0x61, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, // camera));.  if (
	0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x33, 0x5d, 0x2e, // bool(u_light[3].
	0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, // x)) {.    vec3 l
	0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, // ight_direction_1
	0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, // 4;.    if ((u_li
	0x67, 0x68, 0x74, 0x5b, 0x34, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, // ght[4].w == 0.0)
	0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, // ) {.      light_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x34, 0x20, 0x3d, 0x20, 0x6e, // direction_14 = n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, // ormalize(u_light
	0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, // [4].xyz);.    } 
	0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, // else {.      lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x34, 0x20, // ht_direction_14 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, // = normalize((u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, // ight[4].xyz - v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x61, 0x6d, 0x65, 0x72, 0x61, 0x29, // position_camera)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // );.    };.    fl
	0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x35, 0x3b, 0x0a, 0x20, // oat tmpvar_15;. 
	0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x35, 0x20, 0x3d, 0x20, 0x6d, //    tmpvar_15 = m
	0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, // ax (dot (light_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x34, 0x2c, 0x20, 0x74, 0x6d, 0x70, // irection_14, tmp
	0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, // var_7), 0.0);.  
	0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x28, //   diffuse_12 = (
	0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x35, 0x5d, 0x20, 0x2a, 0x20, 0x75, // ((u_light[5] * u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x29, 0x20, 0x2a, 0x20, // _material[2]) * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_8) * tmpv
	0x61, 0x72, 0x5f, 0x31, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, // ar_15);.    if (
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x35, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, // (tmpvar_15 > 0.0
	0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, // )) {.      specu
	0x6c, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, // lar_11 = (((u_li
	0x67, 0x68, 0x74, 0x5b, 0x36, 0x5d, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, // ght[6] * u_mater
	0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ial[3]) * tmpvar
	0x5f, 0x38, 0x29, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x6d, 0x61, 0x78, 0x20, 0x28, // _8) * pow (max (
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, // .        dot (no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, // rmalize((view_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x30, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, // rection_10 + lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x34, 0x29, // ht_direction_14)
	0x29, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x0a, 0x20, 0x20, 0x20, // ), tmpvar_7).   
	0x20, 0x20, 0x20, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, //    , 0.0), u_mat
	0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // erial[4].x));.  
	0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, //   };.  };.  if (
	0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x37, 0x5d, 0x2e, // bool(u_light[7].
	0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, // x)) {.    vec3 l
	0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, // ight_direction_1
	0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, // 6;.    if ((u_li
	0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, // ght[8].w == 0.0)
	0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, // ) {.      light_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x36, 0x20, 0x3d, 0x20, 0x6e, // direction_16 = n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, // ormalize(u_light
	0x5b, 0x38, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, // [8].xyz);.    } 
	0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, // else {.      lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x36, 0x20, // ht_direction_16 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, // = normalize((u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x38, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, // ight[8].xyz - v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x61, 0x6d, 0x65, 0x72, 0x61, 0x29, // position_camera)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // );.    };.    fl
	0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x3b, 0x0a, 0x20, // oat tmpvar_17;. 
	0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x20, 0x3d, 0x20, 0x6d, //    tmpvar_17 = m
	0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, // ax (dot (light_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x36, 0x2c, 0x20, 0x74, 0x6d, 0x70, // irection_16, tmp
	0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, // var_7), 0.0);.  
	0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x28, //   diffuse_12 = (
	0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x0a, // diffuse_12 + ((.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x39, //       (u_light[9
	0x5d, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, // ] * u_material[2
	0x5d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ]).     * tmpvar
	0x5f, 0x38, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x37, 0x29, // _8) * tmpvar_17)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, // );.    if ((tmpv
	0x61, 0x72, 0x5f, 0x31, 0x37, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, // ar_17 > 0.0)) {.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x31, //       specular_1
	0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x31, 0x31, // 1 = (specular_11
	0x20, 0x2b, 0x20, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, //  + ((.        (u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x30, 0x5d, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, // _light[10] * u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, // aterial[3]).    
	0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x20, 0x2a, //    * tmpvar_8) *
	0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6d, //  pow (.        m
	0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, // ax (dot (normali
	0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, // ze((view_directi
	0x6f, 0x6e, 0x5f, 0x31, 0x30, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, // on_10 + light_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x36, 0x29, 0x29, 0x2c, 0x20, 0x74, 0x6d, // rection_16)), tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, // pvar_7), 0.0).  
	0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, //     , u_material
	0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, // [4].x)));.    };
	0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, // .  };.  if (bool
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x31, 0x5d, 0x2e, 0x78, 0x29, 0x29, // (u_light[11].x))
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, 0x69, 0x67, 0x68, //  {.    vec3 ligh
	0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x38, 0x3b, 0x0a, // t_direction_18;.
	0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, //     if ((u_light
	0x5b, 0x31, 0x32, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, // [12].w == 0.0)) 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, 0x69, // {.      light_di
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x38, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, // rection_18 = nor
	0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, // malize(u_light[1
	0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, 0x65, // 2].xyz);.    } e
	0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, // lse {.      ligh
	0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x38, 0x20, 0x3d, // t_direction_18 =
	0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, //  normalize((u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, 0x5f, // ght[12].xyz - v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x61, 0x6d, 0x65, 0x72, 0x61, 0x29, // position_camera)
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // );.    };.    fl
	0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, 0x3b, 0x0a, 0x20, // oat tmpvar_19;. 
	0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, 0x20, 0x3d, 0x20, 0x6d, //    tmpvar_19 = m
	0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, // ax (dot (light_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x38, 0x2c, 0x20, 0x74, 0x6d, 0x70, // irection_18, tmp
	0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, // var_7), 0.0);.  
	0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, 0x28, //   diffuse_12 = (
	0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x0a, // diffuse_12 + ((.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, //       (u_light[1
	0x33, 0x5d, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, // 3] * u_material[
	0x32, 0x5d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // 2]).     * tmpva
	0x72, 0x5f, 0x38, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, // r_8) * tmpvar_19
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, // ));.    if ((tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x39, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x7b, // var_19 > 0.0)) {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, // .      specular_
	0x31, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x31, // 11 = (specular_1
	0x31, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, // 1 + ((.        (
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x34, 0x5d, 0x20, 0x2a, 0x20, 0x75, 0x5f, // u_light[14] * u_
	0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x29, 0x0a, 0x20, 0x20, 0x20, // material[3]).   
	0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x20, //     * tmpvar_8) 
	0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // * pow (.        
	0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // max (dot (normal
	0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, // ize((view_direct
	0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x30, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, // ion_10 + light_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x38, 0x29, 0x29, 0x2c, 0x20, 0x74, // irection_18)), t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, // mpvar_7), 0.0). 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, //      , u_materia
	0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, // l[4].x)));.    }
	0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, // ;.  };.  if (boo
	0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x35, 0x5d, 0x2e, 0x78, 0x29, // l(u_light[15].x)
	0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6c, 0x69, 0x67, // ) {.    vec3 lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x32, 0x30, 0x3b, // ht_direction_20;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, // .    if ((u_ligh
	0x74, 0x5b, 0x31, 0x36, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, // t[16].w == 0.0))
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x64, //  {.      light_d
	0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x32, 0x30, 0x20, 0x3d, 0x20, 0x6e, 0x6f, // irection_20 = no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // rmalize(u_light[
	0x31, 0x36, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20, // 16].xyz);.    } 
	0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x69, 0x67, // else {.      lig
	0x68, 0x74, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x32, 0x30, 0x20, // ht_direction_20 
	0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6c, // = normalize((u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x36, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x76, // ight[16].xyz - v
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x61, 0x6d, 0x65, 0x72, 0x61, // _position_camera
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // ));.    };.    f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x31, 0x3b, 0x0a, // loat tmpvar_21;.
	0x20, 0x20, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x31, 0x20, 0x3d, 0x20, //     tmpvar_21 = 
	0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, // max (dot (light_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x32, 0x30, 0x2c, 0x20, 0x74, 0x6d, // direction_20, tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // pvar_7), 0.0);. 
	0x20, 0x20, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x3d, 0x20, //    diffuse_12 = 
	0x28, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, 0x20, 0x2b, 0x20, 0x28, 0x28, // (diffuse_12 + ((
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // .      (u_light[
	0x31, 0x37, 0x5d, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // 17] * u_material
	0x5b, 0x32, 0x5d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // [2]).     * tmpv
	0x61, 0x72, 0x5f, 0x38, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // ar_8) * tmpvar_2
	0x31, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, // 1));.    if ((tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x31, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x20, // pvar_21 > 0.0)) 
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, // {.      specular
	0x5f, 0x31, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, // _11 = (specular_
	0x31, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 11 + ((.        
	0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x38, 0x5d, 0x20, 0x2a, 0x20, 0x75, // (u_light[18] * u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x29, 0x0a, 0x20, 0x20, // _material[3]).  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, //      * tmpvar_8)
	0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //  * pow (.       
	0x20, 0x6d, 0x61, 0x78, 0x20, 0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, //  max (dot (norma
	0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x76, 0x69, 0x65, 0x77, 0x5f, 0x64, 0x69, 0x72, 0x65, 0x63, // lize((view_direc
	0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x31, 0x30, 0x20, 0x2b, 0x20, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5f, // tion_10 + light_
	0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x32, 0x30, 0x29, 0x29, 0x2c, 0x20, // direction_20)), 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, // tmpvar_7), 0.0).
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2c, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, //       , u_materi
	0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // al[4].x)));.    
	0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, // };.  };.  vec4 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // mpvar_22;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ar_22 = ((tmpvar
	0x5f, 0x31, 0x33, 0x20, 0x2b, 0x20, 0x64, 0x69, 0x66, 0x66, 0x75, 0x73, 0x65, 0x5f, 0x31, 0x32, // _13 + diffuse_12
	0x29, 0x20, 0x2b, 0x20, 0x73, 0x70, 0x65, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x5f, 0x31, 0x31, 0x29, // ) + specular_11)
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6f, 0x74, 0x61, 0x6c, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x74, 0x6d, // ;.  total_9 = tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, // pvar_22;.  if ((
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x32, 0x2e, 0x77, 0x20, 0x3e, 0x20, 0x31, 0x2e, // tmpvar_22.w > 1.
	0x30, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x74, 0x6f, 0x74, 0x61, 0x6c, 0x5f, // 0)) {.    total_
	0x39, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, // 9.w = 1.0;.  };.
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x62, 0x6f, 0x6f, 0x6c, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, //   if (bool(u_lig
	0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // ht[1].x)) {.    
	0x74, 0x6f, 0x74, 0x61, 0x6c, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x6d, 0x69, 0x78, 0x20, 0x28, 0x75, // total_9 = mix (u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x32, 0x5d, 0x2c, 0x20, 0x74, 0x6f, 0x74, 0x61, 0x6c, // _light[2], total
	0x5f, 0x39, 0x2c, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, // _9, clamp ((.   
	0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, //    (u_light[1].z
	0x20, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x28, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, //  - abs(v_positio
	0x6e, 0x5f, 0x63, 0x61, 0x6d, 0x65, 0x72, 0x61, 0x2e, 0x7a, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, // n_camera.z)).   
	0x20, 0x20, 0x2f, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x6c, 0x69, //   / .      (u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, // ght[1].z - u_lig
	0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x29, 0x2c, 0x20, // ht[1].y).    ), 
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, // 0.0, 1.0));.  };
	0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, // .  gl_FragColor 
	0x3d, 0x20, 0x74, 0x6f, 0x74, 0x61, 0x6c, 0x5f, 0x39, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       // = total_9;.}...
};
