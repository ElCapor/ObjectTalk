static const uint8_t OtSkySphereFS_essl[443] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0d, 0x75, // FSH.o.><.......u
	0x5f, 0x65, 0x6e, 0x76, 0x69, 0x72, 0x6f, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x02, 0x03, 0x00, 0x00, // _environment....
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x73, 0x5f, 0x73, 0x6b, 0x79, 0x53, 0x70, 0x68, 0x65, // .......s_skySphe
	0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, // reTexture.......
	0x00, 0x00, 0x00, 0x73, 0x01, 0x00, 0x00, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, // ...s...precision
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x3b, 0x0a, 0x70, 0x72, 0x65, 0x63, //  highp int;.prec
	0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ision highp floa
	0x74, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, // t;.out mediump v
	0x65, 0x63, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, // ec4 bgfx_FragCol
	0x6f, 0x72, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, // or;.in vec2 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // xcoord0;.uniform
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x65, 0x6e, 0x76, 0x69, 0x72, 0x6f, 0x6e, 0x6d, //  vec4 u_environm
	0x65, 0x6e, 0x74, 0x5b, 0x33, 0x5d, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // ent[3];.uniform 
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x73, 0x6b, 0x79, 0x53, // sampler2D s_skyS
	0x70, 0x68, 0x65, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, 0x6f, // phereTexture;.vo
	0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, // id main ().{.  l
	0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // owp vec4 tmpvar_
	0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, // 1;.  tmpvar_1.w 
	0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // = 1.0;.  tmpvar_
	0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x65, 0x6e, 0x76, 0x69, 0x72, // 1.xyz = (u_envir
	0x6f, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x5b, 0x30, 0x5d, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x70, 0x6f, // onment[0].x * po
	0x77, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x73, 0x6b, // w (texture (s_sk
	0x79, 0x53, 0x70, 0x68, 0x65, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, // ySphereTexture, 
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x2e, 0x78, 0x79, 0x7a, // v_texcoord0).xyz
	0x2c, 0x20, 0x75, 0x5f, 0x65, 0x6e, 0x76, 0x69, 0x72, 0x6f, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x5b, // , u_environment[
	0x30, 0x5d, 0x2e, 0x79, 0x79, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x67, 0x66, 0x78, // 0].yyy));.  bgfx
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // _FragColor = tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // var_1;.}...
};
