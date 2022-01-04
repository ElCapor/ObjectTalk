static const uint8_t vs_terrain_dx9[805] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xb8, 0xa6, 0x04, 0x03, 0x00, 0x07, 0x75, // VSH............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // _model. ........
	0x0b, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x04, 0x01, 0x04, 0x00, // .u_modelView....
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // .......u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // ewProj..........
	0xd0, 0x02, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x34, 0x00, 0x43, 0x54, 0x41, 0x42, // ..........4.CTAB
	0x1c, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x03, 0x00, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, // ............X...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........`.......
	0x70, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, // p...........|...
	0x00, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, // |.......u_model.
	0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........ .......
	0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x03, 0x00, 0x03, 0x00, // u_modelView.....
	0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, // ............u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x76, 0x73, 0x5f, 0x33, // delViewProj.vs_3
	0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, // _0.Microsoft (R)
	0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, //  HLSL Shader Com
	0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, 0x00, 0x02, // piler 10.1......
	0x03, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, // ................
	0x1f, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x80, 0x01, 0x00, 0x07, 0xe0, 0x1f, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x02, 0x80, 0x02, 0x00, 0x07, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x03, 0x80, // ................
	0x03, 0x00, 0x07, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x04, 0x00, 0x07, 0xe0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, // ..............U.
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, // ................
	0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x02, 0x00, 0xe4, 0xa0, // ................
	0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x04, 0x00, 0x07, 0xe0, // ................
	0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, // ................
	0x05, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, // ......U.........
	0x04, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, // ................
	0x00, 0x00, 0x07, 0x80, 0x06, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, // ................
	0x02, 0x00, 0x00, 0x03, 0x03, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x07, 0x00, 0xe4, 0xa0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x55, 0x90, // ..............U.
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x90, // ................
	0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0xa0, // ................
	0x00, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x09, 0x00, 0x00, 0x03, 0x00, 0x00, 0x08, 0x80, // ................
	0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, // ................
	0x00, 0x00, 0xff, 0x80, 0x05, 0x00, 0x00, 0x03, 0x02, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xff, 0x80, // ................
	0x00, 0x00, 0xe4, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x05, 0x00, 0xe4, 0xa0, // ................
	0x00, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x04, 0x00, 0xe4, 0xa0, // ..U.............
	0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, // ................
	0x06, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x09, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x07, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0xff, 0x80, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0xe0, // ................
	0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, // ................
	0x09, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, // ......U.........
	0x08, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, // ................
	0x00, 0x00, 0x0f, 0x80, 0x0a, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, // ................
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x0b, 0x00, 0xe4, 0xa0, // ................
	0xff, 0xff, 0x00, 0x00, 0x00,                                                                   // .....
};
