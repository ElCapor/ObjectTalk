static const uint8_t fs_land_dx11[2495] =
{
	0x46, 0x53, 0x48, 0x0b, 0xbb, 0x17, 0x8e, 0xa9, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // FSH............u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x12, 0x13, 0x50, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, // _light..P.......
	0x0a, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x12, 0x05, 0x00, 0x00, 0x05, // .u_material.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x09, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, // .........#includ
	0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, // e <metal_stdlib>
	0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, // .#include <simd/
	0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, // simd.h>..using n
	0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, // amespace metal;.
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, // .struct _Global.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, // {.    float4 u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x35, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // aterial[5];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, // float4 u_light[1
	0x39, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, // 9];.};..struct x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, // latMtlMain_out.{
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, 0x66, 0x78, // .    float4 bgfx
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, 0x6f, 0x6c, // _FragData0 [[col
	0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, // or(0)]];.};..str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // uct xlatMtlMain_
	0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, // in.{.    float3 
	0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, // v_normal [[user(
	0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // locn0)]];.    fl
	0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, // oat3 v_position 
	0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, // [[user(locn1)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, // .};..fragment xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, // atMtlMain_out xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // atMtlMain(xlatMt
	0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, // lMain_in in [[st
	0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, // age_in]], consta
	0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // nt _Global& _mtl
	0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, // _u [[buffer(0)]]
	0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, // ).{.    xlatMtlM
	0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, // ain_out out = {}
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x33, 0x32, // ;.    float3 _32
	0x36, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x2d, 0x69, // 6 = normalize(-i
	0x6e, 0x2e, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x3b, 0x0a, 0x20, // n.v_position);. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x36, 0x33, 0x3b, 0x0a, //    float4 _463;.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x36, 0x34, 0x3b, //     float4 _464;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x36, 0x34, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, // .    _464 = floa
	0x74, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x36, // t4(0.0);.    _46
	0x33, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x29, 0x3b, // 3 = float4(0.0);
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x37, 0x33, // .    float4 _473
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x37, // ;.    float4 _47
	0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x69, 0x6e, 0x74, 0x20, // 5;.    for (int 
	0x5f, 0x34, 0x36, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20, 0x5f, 0x34, 0x36, 0x32, 0x20, 0x3c, // _462 = 0; _462 <
	0x20, 0x34, 0x3b, 0x20, 0x5f, 0x34, 0x36, 0x34, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x37, 0x35, 0x2c, //  4; _464 = _475,
	0x20, 0x5f, 0x34, 0x36, 0x33, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x37, 0x33, 0x2c, 0x20, 0x5f, 0x34, //  _463 = _473, _4
	0x36, 0x32, 0x2b, 0x2b, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // 62++).    {.    
	0x20, 0x20, 0x20, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x33, 0x33, 0x34, 0x20, 0x3d, 0x20, 0x28, //     int _334 = (
	0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x36, 0x32, 0x29, 0x20, 0x2b, 0x20, 0x33, 0x3b, 0x0a, 0x20, // 4 * _462) + 3;. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x73, 0x75, 0x6e, //        if ((isun
	0x6f, 0x72, 0x64, 0x65, 0x72, 0x65, 0x64, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // ordered(_mtl_u.u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x5f, 0x33, 0x33, 0x34, 0x5d, 0x2e, 0x78, 0x2c, 0x20, // _light[_334].x, 
	0x30, 0x2e, 0x30, 0x29, 0x20, 0x7c, 0x7c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // 0.0) || _mtl_u.u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x5f, 0x33, 0x33, 0x34, 0x5d, 0x2e, 0x78, 0x20, 0x21, // _light[_334].x !
	0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // = 0.0)).        
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // {.            fl
	0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x34, 0x36, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, // oat3 _467;.     
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, //        if (_mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, // u.u_light[(4 * _
	0x34, 0x36, 0x32, 0x29, 0x20, 0x2b, 0x20, 0x34, 0x5d, 0x2e, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, // 462) + 4].w == 0
	0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // .0).            
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // {.              
	0x20, 0x20, 0x5f, 0x34, 0x36, 0x37, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, //   _467 = normali
	0x7a, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, // ze(_mtl_u.u_ligh
	0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x36, 0x32, 0x29, 0x20, 0x2b, 0x20, 0x34, // t[(4 * _462) + 4
	0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // ].xyz);.        
	0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //     }.          
	0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //   else.         
	0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //    {.           
	0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x36, 0x37, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, //      _467 = norm
	0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, // alize(_mtl_u.u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x36, 0x32, 0x29, 0x20, // ight[(4 * _462) 
	0x2b, 0x20, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // + 4].xyz - in.v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, // position);.     
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //        }.       
	0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x33, 0x36, 0x37, 0x20, //      float _367 
	0x3d, 0x20, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6d, 0x61, 0x78, 0x28, 0x64, 0x6f, 0x74, 0x28, // = fast::max(dot(
	0x5f, 0x34, 0x36, 0x37, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // _467, in.v_norma
	0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // l), 0.0);.      
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x37, //       float4 _47
	0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, // 6;.            i
	0x66, 0x20, 0x28, 0x5f, 0x33, 0x36, 0x37, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, // f (_367 > 0.0). 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, //            {.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x37, //              _47
	0x36, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x36, 0x34, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x28, 0x5f, 0x6d, // 6 = _464 + (((_m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, // tl_u.u_light[(4 
	0x2a, 0x20, 0x5f, 0x34, 0x36, 0x32, 0x29, 0x20, 0x2b, 0x20, 0x36, 0x5d, 0x20, 0x2a, 0x20, 0x5f, // * _462) + 6] * _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, // mtl_u.u_material
	0x5b, 0x33, 0x5d, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, // [3]) * _mtl_u.u_
	0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x30, 0x5d, 0x29, 0x20, 0x2a, 0x20, 0x70, // material[0]) * p
	0x6f, 0x77, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6d, 0x61, 0x78, 0x28, 0x64, 0x6f, 0x74, // ow(fast::max(dot
	0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x5f, 0x33, 0x32, 0x36, 0x20, // (normalize(_326 
	0x2b, 0x20, 0x5f, 0x34, 0x36, 0x37, 0x29, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, // + _467), in.v_no
	0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x2c, 0x20, 0x5f, 0x6d, 0x74, // rmal), 0.0), _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, // l_u.u_material[4
	0x5d, 0x2e, 0x78, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // ].x));.         
	0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //    }.           
	0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //  else.          
	0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //   {.            
	0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x37, 0x36, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x36, 0x34, 0x3b, //     _476 = _464;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, // .            }. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x37, 0x35, 0x20, //            _475 
	0x3d, 0x20, 0x5f, 0x34, 0x37, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // = _476;.        
	0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x37, 0x33, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x36, 0x33, 0x20, //     _473 = _463 
	0x2b, 0x20, 0x28, 0x28, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, // + (((_mtl_u.u_li
	0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x36, 0x32, 0x29, 0x20, 0x2b, // ght[(4 * _462) +
	0x20, 0x35, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, //  5] * _mtl_u.u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x6d, // aterial[2]) * _m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, // tl_u.u_material[
	0x30, 0x5d, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x33, 0x36, 0x37, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, // 0]) * _367);.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, //      }.        e
	0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, // lse.        {.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x37, 0x35, 0x20, 0x3d, //           _475 =
	0x20, 0x5f, 0x34, 0x36, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //  _464;.         
	0x20, 0x20, 0x20, 0x5f, 0x34, 0x37, 0x33, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x36, 0x33, 0x3b, 0x0a, //    _473 = _463;.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, //         }.    }.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x32, 0x30, 0x20, //     float4 _420 
	0x3d, 0x20, 0x28, 0x28, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, // = (((_mtl_u.u_li
	0x67, 0x68, 0x74, 0x5b, 0x30, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // ght[0] * _mtl_u.
	0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x29, 0x20, 0x2a, // u_material[1]) *
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, //  _mtl_u.u_materi
	0x61, 0x6c, 0x5b, 0x30, 0x5d, 0x29, 0x20, 0x2b, 0x20, 0x5f, 0x34, 0x36, 0x33, 0x29, 0x20, 0x2b, // al[0]) + _463) +
	0x20, 0x5f, 0x34, 0x36, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  _464;.    float
	0x34, 0x20, 0x5f, 0x34, 0x36, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, // 4 _465;.    if (
	0x5f, 0x34, 0x32, 0x30, 0x2e, 0x77, 0x20, 0x3e, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, // _420.w > 1.0).  
	0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, //   {.        floa
	0x74, 0x34, 0x20, 0x5f, 0x34, 0x36, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x32, 0x30, 0x3b, 0x0a, // t4 _460 = _420;.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x36, 0x30, 0x2e, 0x77, 0x20, 0x3d, //         _460.w =
	0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, //  1.0;.        _4
	0x36, 0x35, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x36, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, // 65 = _460;.    }
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, // .    else.    {.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x36, 0x35, 0x20, 0x3d, 0x20, 0x5f, //         _465 = _
	0x34, 0x32, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // 420;.    }.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x36, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // loat4 _466;.    
	0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x73, 0x75, 0x6e, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x65, 0x64, // if ((isunordered
	0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // (_mtl_u.u_light[
	0x31, 0x5d, 0x2e, 0x78, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, 0x7c, 0x7c, 0x20, 0x5f, 0x6d, // 1].x, 0.0) || _m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, // tl_u.u_light[1].
	0x78, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, // x != 0.0)).    {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x36, 0x36, 0x20, 0x3d, 0x20, // .        _466 = 
	0x6d, 0x69, 0x78, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, // mix(_mtl_u.u_lig
	0x68, 0x74, 0x5b, 0x32, 0x5d, 0x2c, 0x20, 0x5f, 0x34, 0x36, 0x35, 0x2c, 0x20, 0x66, 0x6c, 0x6f, // ht[2], _465, flo
	0x61, 0x74, 0x34, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x28, // at4(fast::clamp(
	0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // (_mtl_u.u_light[
	0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // 1].z - abs(in.v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x7a, 0x29, 0x29, 0x20, 0x2f, 0x20, 0x28, // position.z)) / (
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, // _mtl_u.u_light[1
	0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, // ].z - _mtl_u.u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, // ight[1].y), 0.0,
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, //  1.0)));.    }. 
	0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, //    else.    {.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x36, 0x36, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x36, //       _466 = _46
	0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, // 5;.    }.    out
	0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, // .bgfx_FragData0 
	0x3d, 0x20, 0x5f, 0x34, 0x36, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, // = _466;.    retu
	0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x80, 0x01,       // rn out;.}......
};
