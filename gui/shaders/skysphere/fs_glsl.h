static const uint8_t OtSkySphereFS_glsl[192] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x12, 0x73, // FSH.o.><.......s
	0x5f, 0x73, 0x6b, 0x79, 0x53, 0x70, 0x68, 0x65, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // _skySphereTextur
	0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x76, // e..............v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, // arying vec2 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // xcoord0;.uniform
	0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x73, 0x6b, 0x79, //  sampler2D s_sky
	0x53, 0x70, 0x68, 0x65, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, // SphereTexture;.v
	0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // oid main ().{.  
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, // gl_FragColor = t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x73, 0x6b, 0x79, 0x53, // exture2D (s_skyS
	0x70, 0x68, 0x65, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, // phereTexture, v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // texcoord0);.}...
};
