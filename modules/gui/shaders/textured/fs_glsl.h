static const uint8_t fs_textured_glsl[2098] =
{
	0x46, 0x53, 0x48, 0x0b, 0x11, 0xea, 0x0b, 0x46, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x75, // FSH....F.......u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x12, 0x13, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, // _light..........
	0x10, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // .s_textureSample
	0x72, 0x11, 0x01, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x73, 0x5f, 0x74, 0x65, // r...........s_te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x11, 0x01, 0xff, 0xff, // xtureTexture....
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // .......u_materia
	0x6c, 0x12, 0x04, 0x30, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x73, 0x5f, 0x74, 0x65, // l..0........s_te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xab, // xture...........
	0x07, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, // ...#include <met
	0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, // al_stdlib>.#incl
	0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, // ude <simd/simd.h
	0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, // >..using namespa
	0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ce metal;..struc
	0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // t _Global.{.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, // float4 u_light[1
	0x39, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, // 9];.    float4 u
	0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, // _material[4];.};
	0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // ..struct xlatMtl
	0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // Main_out.{.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // loat4 bgfx_FragD
	0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, // ata0 [[color(0)]
	0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, // ];.};..struct xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, // atMtlMain_in.{. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, //    float3 v_norm
	0x61, 0x6c, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, // al [[user(locn0)
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, // ]];.    float3 v
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, // _position [[user
	0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // (locn1)]];.    f
	0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // loat2 v_texcoord
	0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x32, 0x29, 0x5d, // 0 [[user(locn2)]
	0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, // ];.};..fragment 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, // xlatMtlMain_out 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, // xlatMtlMain(xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, // MtlMain_in in [[
	0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, // stage_in]], cons
	0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, // tant _Global& _m
	0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, // tl_u [[buffer(0)
	0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, // ]], texture2d<fl
	0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x5b, // oat> s_texture [
	0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, // [texture(0)]], s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, // ampler s_texture
	0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, // Sampler [[sample
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, // r(0)]]).{.    xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, // atMtlMain_out ou
	0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // t = {};.    floa
	0x74, 0x34, 0x20, 0x5f, 0x34, 0x31, 0x36, 0x20, 0x3d, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // t4 _416 = s_text
	0x75, 0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, // ure.sample(s_tex
	0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, // tureSampler, in.
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, // v_texcoord0);.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x33, 0x35, 0x31, 0x20, 0x3d, 0x20, //   float4 _351 = 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // _mtl_u.u_materia
	0x6c, 0x5b, 0x31, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x31, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, // l[1] * _416;.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x33, 0x35, 0x35, 0x20, 0x3d, 0x20, 0x5f, //  float4 _355 = _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // mtl_u.u_material
	0x5b, 0x32, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x31, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // [2] * _416;.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x35, 0x31, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, // float4 _517;.   
	0x20, 0x5f, 0x35, 0x31, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, //  _517 = (_mtl_u.
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x30, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, // u_light[0] * _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x30, // l_u.u_material[0
	0x5d, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x31, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // ]) * _416;.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x35, 0x32, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // loat4 _523;.    
	0x66, 0x6f, 0x72, 0x20, 0x28, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x35, 0x31, 0x36, 0x20, 0x3d, 0x20, // for (int _516 = 
	0x30, 0x3b, 0x20, 0x5f, 0x35, 0x31, 0x36, 0x20, 0x3c, 0x20, 0x34, 0x3b, 0x20, 0x5f, 0x35, 0x31, // 0; _516 < 4; _51
	0x37, 0x20, 0x3d, 0x20, 0x5f, 0x35, 0x32, 0x33, 0x2c, 0x20, 0x5f, 0x35, 0x31, 0x36, 0x2b, 0x2b, // 7 = _523, _516++
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // ).    {.        
	0x69, 0x66, 0x20, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // if (int(_mtl_u.u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x35, 0x31, 0x36, // _light[(4 * _516
	0x29, 0x20, 0x2b, 0x20, 0x33, 0x5d, 0x2e, 0x78, 0x29, 0x20, 0x21, 0x3d, 0x20, 0x69, 0x6e, 0x74, // ) + 3].x) != int
	0x28, 0x30, 0x75, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, // (0u)).        {.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, //             floa
	0x74, 0x33, 0x20, 0x5f, 0x34, 0x33, 0x37, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // t3 _437 = normal
	0x69, 0x7a, 0x65, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // ize(float3(_mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, // u.u_light[(4 * _
	0x35, 0x31, 0x36, 0x29, 0x20, 0x2b, 0x20, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2d, // 516) + 4].xyz) -
	0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x3b, //  in.v_position);
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, // .            flo
	0x61, 0x74, 0x20, 0x5f, 0x34, 0x34, 0x31, 0x20, 0x3d, 0x20, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, // at _441 = fast::
	0x6d, 0x61, 0x78, 0x28, 0x64, 0x6f, 0x74, 0x28, 0x5f, 0x34, 0x33, 0x37, 0x2c, 0x20, 0x69, 0x6e, // max(dot(_437, in
	0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, // .v_normal), 0.0)
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // ;.            fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x35, 0x31, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, // oat4 _519;.     
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x5f, 0x34, 0x34, 0x31, 0x20, //        if (_441 
	0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // > 0.0).         
	0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //    {.           
	0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x35, 0x31, 0x39, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, //      _519 = (_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, // l_u.u_light[(4 *
	0x20, 0x5f, 0x35, 0x31, 0x36, 0x29, 0x20, 0x2b, 0x20, 0x36, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x33, //  _516) + 6] * _3
	0x35, 0x35, 0x29, 0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, // 55) * pow(fast::
	0x6d, 0x61, 0x78, 0x28, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, // max(dot(normaliz
	0x65, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x2d, 0x69, 0x6e, 0x2e, // e(normalize(-in.
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x20, 0x2b, 0x20, 0x5f, 0x34, // v_position) + _4
	0x33, 0x37, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // 37), in.v_normal
	0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // ), 0.0), _mtl_u.
	0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x29, // u_material[3].x)
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, // ;.            }.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, //             else
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, // .            {. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, //                _
	0x35, 0x31, 0x39, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x30, 0x2e, 0x30, // 519 = float4(0.0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, // );.            }
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x35, 0x32, // .            _52
	0x33, 0x20, 0x3d, 0x20, 0x5f, 0x35, 0x31, 0x37, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x28, 0x5f, 0x6d, // 3 = _517 + (((_m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, // tl_u.u_light[(4 
	0x2a, 0x20, 0x5f, 0x35, 0x31, 0x36, 0x29, 0x20, 0x2b, 0x20, 0x35, 0x5d, 0x20, 0x2a, 0x20, 0x5f, // * _516) + 5] * _
	0x33, 0x35, 0x31, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x34, 0x31, 0x29, 0x20, 0x2b, 0x20, 0x5f, // 351) * _441) + _
	0x35, 0x31, 0x39, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, // 519);.        }.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, //         else.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //      {.         
	0x20, 0x20, 0x20, 0x5f, 0x35, 0x32, 0x33, 0x20, 0x3d, 0x20, 0x5f, 0x35, 0x31, 0x37, 0x3b, 0x0a, //    _523 = _517;.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, //         }.    }.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x35, 0x31, 0x38, 0x3b, //     float4 _518;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x5f, 0x6d, 0x74, // .    if (int(_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x78, // l_u.u_light[1].x
	0x29, 0x20, 0x21, 0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x30, 0x75, 0x29, 0x29, 0x0a, 0x20, 0x20, // ) != int(0u)).  
	0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x35, 0x31, 0x38, //   {.        _518
	0x20, 0x3d, 0x20, 0x6d, 0x69, 0x78, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, //  = mix(_mtl_u.u_
	0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x32, 0x5d, 0x2c, 0x20, 0x5f, 0x35, 0x31, 0x37, 0x2c, 0x20, // light[2], _517, 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x63, 0x6c, 0x61, // float4(fast::cla
	0x6d, 0x70, 0x28, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, // mp((_mtl_u.u_lig
	0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x28, 0x69, 0x6e, // ht[1].z - abs(in
	0x2e, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x7a, 0x29, 0x29, 0x20, // .v_position.z)) 
	0x2f, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, // / (_mtl_u.u_ligh
	0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // t[1].z - _mtl_u.
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x2c, 0x20, 0x30, // u_light[1].y), 0
	0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // .0, 1.0)));.    
	0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, // }.    else.    {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x35, 0x31, 0x38, 0x20, 0x3d, 0x20, // .        _518 = 
	0x5f, 0x35, 0x31, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, // _517;.    }.    
	0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // out.bgfx_FragDat
	0x61, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x35, 0x31, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, // a0 = _518;.    r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, // eturn out;.}....
	0x90, 0x01,                                                                                     // ..
};
