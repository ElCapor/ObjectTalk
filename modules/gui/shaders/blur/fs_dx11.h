static const uint8_t fs_blur_dx11[2193] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x11, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // _texColorSampler
	0x11, 0x01, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x73, 0x5f, 0x74, 0x65, 0x78, // ...........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x11, 0x01, 0xff, 0xff, // ColorTexture....
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, // .......u_params.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // ..........s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x08, // olor............
	0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, // ..#include <meta
	0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, // l_stdlib>.#inclu
	0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, // de <simd/simd.h>
	0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, // ..using namespac
	0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // e metal;..struct
	0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, //  _Global.{.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x3b, 0x0a, // loat4 u_params;.
	0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // };..struct xlatM
	0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, // tlMain_out.{.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, //  float4 bgfx_Fra
	0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, // gData0 [[color(0
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // )]];.};..struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, // xlatMtlMain_in.{
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, // .    float2 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, // xcoord0 [[user(l
	0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, // ocn0)]];.};..fra
	0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // gment xlatMtlMai
	0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // n_out xlatMtlMai
	0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, // n(xlatMtlMain_in
	0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, //  in [[stage_in]]
	0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, // , constant _Glob
	0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, // al& _mtl_u [[buf
	0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // fer(0)]], textur
	0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, // e2d<float> s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, // Color [[texture(
	0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, // 0)]], sampler s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, // texColorSampler 
	0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, // [[sampler(0)]]).
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // {.    xlatMtlMai
	0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, // n_out out = {};.
	0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, //     out.bgfx_Fra
	0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, // gData0 = (((((((
	0x28, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, // ((s_texColor.sam
	0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, // ple(s_texColorSa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, // mpler, float2(in
	0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, // .v_texcoord0.x -
	0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, //  (4.0 * _mtl_u.u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, // _params.x), in.v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, 0x28, // _texcoord0.y - (
	0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, // 4.0 * _mtl_u.u_p
	0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x79, 0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, // arams.y))) * 0.0
	0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x37, 0x34, 0x35, 0x30, 0x35, 0x38, 0x30, 0x35, // 5000000074505805
	0x39, 0x36, 0x39, 0x32, 0x33, 0x38, 0x32, 0x38, 0x31, 0x32, 0x35, 0x29, 0x20, 0x2b, 0x20, 0x28, // 96923828125) + (
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, // s_texColor.sampl
	0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, // e(s_texColorSamp
	0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, // ler, float2(in.v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, // _texcoord0.x - (
	0x33, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, // 3.0 * _mtl_u.u_p
	0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, // arams.x), in.v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, 0x28, 0x33, 0x2e, // excoord0.y - (3.
	0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, // 0 * _mtl_u.u_par
	0x61, 0x6d, 0x73, 0x2e, 0x79, 0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, 0x39, 0x30, // ams.y))) * 0.090
	0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x35, 0x37, 0x36, 0x32, 0x37, 0x38, 0x36, 0x38, 0x36, 0x35, // 0000035762786865
	0x32, 0x33, 0x34, 0x33, 0x37, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, // 234375)) + (s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, // xColor.sample(s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, // texColorSampler,
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, //  float2(in.v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, // coord0.x - (2.0 
	0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // * _mtl_u.u_param
	0x73, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // s.x), in.v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, // ord0.y - (2.0 * 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, // _mtl_u.u_params.
	0x79, 0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x31, 0x39, 0x39, 0x39, 0x39, 0x39, // y))) * 0.1199999
	0x39, 0x37, 0x33, 0x31, 0x37, 0x37, 0x39, 0x30, 0x39, 0x38, 0x35, 0x31, 0x30, 0x37, 0x34, 0x32, // 9731779098510742
	0x31, 0x38, 0x37, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // 1875)) + (s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, // olor.sample(s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, // xColorSampler, f
	0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // loat2(in.v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // ord0.x - _mtl_u.
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, // u_params.x, in.v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, 0x5f, // _texcoord0.y - _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x79, // mtl_u.u_params.y
	0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x35, // )) * 0.150000005
	0x39, 0x36, 0x30, 0x34, 0x36, 0x34, 0x34, 0x37, 0x37, 0x35, 0x33, 0x39, 0x30, 0x36, 0x32, 0x35, // 9604644775390625
	0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // )) + (s_texColor
	0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // .sample(s_texCol
	0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // orSampler, in.v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, // texcoord0) * 0.1
	0x35, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x36, 0x34, 0x32, 0x33, 0x37, 0x32, 0x31, 0x33, 0x31, // 5999999642372131
	0x33, 0x34, 0x37, 0x36, 0x35, 0x36, 0x32, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, // 34765625)) + (s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, // texColor.sample(
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // s_texColorSample
	0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, // r, float2(in.v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x5f, 0x6d, 0x74, // excoord0.x + _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x2c, 0x20, // l_u.u_params.x, 
	0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, // in.v_texcoord0.y
	0x20, 0x2b, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, //  + _mtl_u.u_para
	0x6d, 0x73, 0x2e, 0x79, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x35, 0x30, 0x30, 0x30, // ms.y)) * 0.15000
	0x30, 0x30, 0x30, 0x35, 0x39, 0x36, 0x30, 0x34, 0x36, 0x34, 0x34, 0x37, 0x37, 0x35, 0x33, 0x39, // 0005960464477539
	0x30, 0x36, 0x32, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // 0625)) + (s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, // olor.sample(s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, // xColorSampler, f
	0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // loat2(in.v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, // ord0.x + (2.0 * 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, // _mtl_u.u_params.
	0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // x), in.v_texcoor
	0x64, 0x30, 0x2e, 0x79, 0x20, 0x2b, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, // d0.y + (2.0 * _m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x79, 0x29, // tl_u.u_params.y)
	0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x31, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x37, // )) * 0.119999997
	0x33, 0x31, 0x37, 0x37, 0x39, 0x30, 0x39, 0x38, 0x35, 0x31, 0x30, 0x37, 0x34, 0x32, 0x31, 0x38, // 3177909851074218
	0x37, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // 75)) + (s_texCol
	0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // or.sample(s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, // olorSampler, flo
	0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // at2(in.v_texcoor
	0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, // d0.x + (3.0 * _m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, // tl_u.u_params.x)
	0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // , in.v_texcoord0
	0x2e, 0x79, 0x20, 0x2b, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // .y + (3.0 * _mtl
	0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x79, 0x29, 0x29, 0x29, // _u.u_params.y)))
	0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, 0x39, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x35, 0x37, //  * 0.09000000357
	0x36, 0x32, 0x37, 0x38, 0x36, 0x38, 0x36, 0x35, 0x32, 0x33, 0x34, 0x33, 0x37, 0x35, 0x29, 0x29, // 62786865234375))
	0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, //  + (s_texColor.s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ample(s_texColor
	0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, // Sampler, float2(
	0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, // in.v_texcoord0.x
	0x20, 0x2b, 0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, //  + (4.0 * _mtl_u
	0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, // .u_params.x), in
	0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2b, // .v_texcoord0.y +
	0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, //  (4.0 * _mtl_u.u
	0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x79, 0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, // _params.y))) * 0
	0x2e, 0x30, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x37, 0x34, 0x35, 0x30, 0x35, 0x38, // .050000000745058
	0x30, 0x35, 0x39, 0x36, 0x39, 0x32, 0x33, 0x38, 0x32, 0x38, 0x31, 0x32, 0x35, 0x29, 0x29, 0x20, // 0596923828125)) 
	0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // * float4(_mtl_u.
	0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x7a, 0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // u_params.z, _mtl
	0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x7a, 0x2c, 0x20, 0x5f, // _u.u_params.z, _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x7a, // mtl_u.u_params.z
	0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // , _mtl_u.u_param
	0x73, 0x2e, 0x7a, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, // s.z * _mtl_u.u_p
	0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, // arams.w);.    re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x30, // turn out;.}....0
	0x00,                                                                                           // .
};
