static const uint8_t fs_blur_mtl[2124] =
{
	0x46, 0x53, 0x48, 0x0b, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x10, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x11, // _textureSampler.
	0x01, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // ..........s_text
	0x75, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x11, 0x01, 0xff, 0xff, 0x01, 0x00, // ureTexture......
	0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x12, 0x01, 0x00, 0x00, 0x01, // .....u_blur.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x10, // ......s_texture.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0x07, 0x00, 0x00, 0x23, 0x69, 0x6e, // .............#in
	0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, // clude <metal_std
	0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, // lib>.#include <s
	0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, // imd/simd.h>..usi
	0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, // ng namespace met
	0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, // al;..struct _Glo
	0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // bal.{.    float4
	0x20, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, //  u_blur;.};..str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // uct xlatMtlMain_
	0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // out.{.    float4
	0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, //  bgfx_FragData0 
	0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, // [[color(0)]];.};
	0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // ..struct xlatMtl
	0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // Main_in.{.    fl
	0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // oat2 v_texcoord0
	0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, //  [[user(locn0)]]
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, // ;.};..fragment x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, // latMtlMain_out x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, // latMtlMain(xlatM
	0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, // tlMain_in in [[s
	0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, // tage_in]], const
	0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, // ant _Global& _mt
	0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, // l_u [[buffer(0)]
	0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, // ], texture2d<flo
	0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x5b, 0x5b, // at> s_texture [[
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, // texture(0)]], sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, // mpler s_textureS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // ampler [[sampler
	0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, // (0)]]).{.    xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, // tMtlMain_out out
	0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, //  = {};.    out.b
	0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, // gfx_FragData0 = 
	0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, // (((((((((s_textu
	0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // re.sample(s_text
	0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ureSampler, floa
	0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // t2(in.v_texcoord
	0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, // 0.x - (4.0 * _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, // l_u.u_blur.x), i
	0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, // n.v_texcoord0.y 
	0x2d, 0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // - (4.0 * _mtl_u.
	0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, // u_blur.y))) * 0.
	0x30, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x37, 0x34, 0x35, 0x30, 0x35, 0x38, 0x30, // 0500000007450580
	0x35, 0x39, 0x36, 0x39, 0x32, 0x33, 0x38, 0x32, 0x38, 0x31, 0x32, 0x35, 0x29, 0x20, 0x2b, 0x20, // 596923828125) + 
	0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, // (s_texture.sampl
	0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, // e(s_textureSampl
	0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // er, float2(in.v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, 0x33, // texcoord0.x - (3
	0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, // .0 * _mtl_u.u_bl
	0x75, 0x72, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ur.x), in.v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2a, // oord0.y - (3.0 *
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, //  _mtl_u.u_blur.y
	0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, 0x39, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, // ))) * 0.09000000
	0x33, 0x35, 0x37, 0x36, 0x32, 0x37, 0x38, 0x36, 0x38, 0x36, 0x35, 0x32, 0x33, 0x34, 0x33, 0x37, // 3576278686523437
	0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // 5)) + (s_texture
	0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // .sample(s_textur
	0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, // eSampler, float2
	0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, // (in.v_texcoord0.
	0x78, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // x - (2.0 * _mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, // u.u_blur.x), in.
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, // v_texcoord0.y - 
	0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, // (2.0 * _mtl_u.u_
	0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x31, // blur.y))) * 0.11
	0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x37, 0x33, 0x31, 0x37, 0x37, 0x39, 0x30, 0x39, 0x38, 0x35, // 9999997317790985
	0x31, 0x30, 0x37, 0x34, 0x32, 0x31, 0x38, 0x37, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, // 107421875)) + (s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, // _texture.sample(
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // s_textureSampler
	0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, // , float2(in.v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // xcoord0.x - _mtl
	0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x78, 0x2c, 0x20, 0x69, 0x6e, 0x2e, // _u.u_blur.x, in.
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2d, 0x20, // v_texcoord0.y - 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, // _mtl_u.u_blur.y)
	0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x35, 0x39, // ) * 0.1500000059
	0x36, 0x30, 0x34, 0x36, 0x34, 0x34, 0x37, 0x37, 0x35, 0x33, 0x39, 0x30, 0x36, 0x32, 0x35, 0x29, // 604644775390625)
	0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, // ) + (s_texture.s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, // ample(s_textureS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, // ampler, in.v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x35, 0x39, 0x39, // coord0) * 0.1599
	0x39, 0x39, 0x39, 0x39, 0x36, 0x34, 0x32, 0x33, 0x37, 0x32, 0x31, 0x33, 0x31, 0x33, 0x34, 0x37, // 9999642372131347
	0x36, 0x35, 0x36, 0x32, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, // 65625)) + (s_tex
	0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, // ture.sample(s_te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, // xtureSampler, fl
	0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // oat2(in.v_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // rd0.x + _mtl_u.u
	0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x78, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, // _blur.x, in.v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2b, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // xcoord0.y + _mtl
	0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, 0x29, 0x20, 0x2a, 0x20, // _u.u_blur.y)) * 
	0x30, 0x2e, 0x31, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x35, 0x39, 0x36, 0x30, 0x34, 0x36, // 0.15000000596046
	0x34, 0x34, 0x37, 0x37, 0x35, 0x33, 0x39, 0x30, 0x36, 0x32, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, // 44775390625)) + 
	0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, // (s_texture.sampl
	0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, // e(s_textureSampl
	0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // er, float2(in.v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x32, // texcoord0.x + (2
	0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, // .0 * _mtl_u.u_bl
	0x75, 0x72, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ur.x), in.v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2b, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, // oord0.y + (2.0 *
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, //  _mtl_u.u_blur.y
	0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x31, 0x31, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, // ))) * 0.11999999
	0x37, 0x33, 0x31, 0x37, 0x37, 0x39, 0x30, 0x39, 0x38, 0x35, 0x31, 0x30, 0x37, 0x34, 0x32, 0x31, // 7317790985107421
	0x38, 0x37, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, // 875)) + (s_textu
	0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // re.sample(s_text
	0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ureSampler, floa
	0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // t2(in.v_texcoord
	0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, // 0.x + (3.0 * _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, // l_u.u_blur.x), i
	0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, // n.v_texcoord0.y 
	0x2b, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // + (3.0 * _mtl_u.
	0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, // u_blur.y))) * 0.
	0x30, 0x39, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x33, 0x35, 0x37, 0x36, 0x32, 0x37, 0x38, 0x36, // 0900000035762786
	0x38, 0x36, 0x35, 0x32, 0x33, 0x34, 0x33, 0x37, 0x35, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x28, 0x73, // 865234375)) + (s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, // _texture.sample(
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // s_textureSampler
	0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, // , float2(in.v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x34, 0x2e, 0x30, // xcoord0.x + (4.0
	0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, //  * _mtl_u.u_blur
	0x2e, 0x78, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // .x), in.v_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2b, 0x20, 0x28, 0x34, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x5f, // rd0.y + (4.0 * _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x79, 0x29, 0x29, // mtl_u.u_blur.y))
	0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x37, // ) * 0.0500000007
	0x34, 0x35, 0x30, 0x35, 0x38, 0x30, 0x35, 0x39, 0x36, 0x39, 0x32, 0x33, 0x38, 0x32, 0x38, 0x31, // 4505805969238281
	0x32, 0x35, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x5f, 0x6d, // 25)) * float4(_m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x7a, 0x2c, 0x20, 0x5f, // tl_u.u_blur.z, _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x7a, 0x2c, 0x20, // mtl_u.u_blur.z, 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x7a, 0x2c, // _mtl_u.u_blur.z,
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, 0x2e, 0x7a, //  _mtl_u.u_blur.z
	0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x62, 0x6c, 0x75, 0x72, //  * _mtl_u.u_blur
	0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, // .w);.    return 
	0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x30, 0x00,                         // out;.}....0.
};
