static const uint8_t fs_colored_glsl[1759] =
{
	0x46, 0x53, 0x48, 0x0b, 0xbb, 0x17, 0x8e, 0xa9, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // FSH............u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x12, 0x13, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, // _light..........
	0x0a, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x12, 0x04, 0x30, 0x01, 0x04, // .u_material..0..
	0x00, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x06, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, // .........#includ
	0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, // e <metal_stdlib>
	0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, // .#include <simd/
	0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, // simd.h>..using n
	0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, // amespace metal;.
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, // .struct _Global.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6c, // {.    float4 u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x39, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // ight[19];.    fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, // oat4 u_material[
	0x34, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, // 4];.};..struct x
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
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x33, // ;.    float4 _43
	0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x33, 0x35, 0x20, 0x3d, 0x20, 0x5f, 0x6d, // 5;.    _435 = _m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x30, 0x5d, 0x20, // tl_u.u_light[0] 
	0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, // * _mtl_u.u_mater
	0x69, 0x61, 0x6c, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ial[0];.    floa
	0x74, 0x34, 0x20, 0x5f, 0x34, 0x34, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, // t4 _441;.    for
	0x20, 0x28, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x34, 0x33, 0x34, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20, //  (int _434 = 0; 
	0x5f, 0x34, 0x33, 0x34, 0x20, 0x3c, 0x20, 0x34, 0x3b, 0x20, 0x5f, 0x34, 0x33, 0x35, 0x20, 0x3d, // _434 < 4; _435 =
	0x20, 0x5f, 0x34, 0x34, 0x31, 0x2c, 0x20, 0x5f, 0x34, 0x33, 0x34, 0x2b, 0x2b, 0x29, 0x0a, 0x20, //  _441, _434++). 
	0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, //    {.        if 
	0x28, 0x69, 0x6e, 0x74, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, // (int(_mtl_u.u_li
	0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x33, 0x34, 0x29, 0x20, 0x2b, // ght[(4 * _434) +
	0x20, 0x33, 0x5d, 0x2e, 0x78, 0x29, 0x20, 0x21, 0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x30, 0x75, //  3].x) != int(0u
	0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, // )).        {.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, //          float3 
	0x5f, 0x33, 0x35, 0x39, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, // _359 = normalize
	0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // (float3(_mtl_u.u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x33, 0x34, // _light[(4 * _434
	0x29, 0x20, 0x2b, 0x20, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2d, 0x20, 0x69, 0x6e, // ) + 4].xyz) - in
	0x2e, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x3b, 0x0a, 0x20, 0x20, // .v_position);.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, //           float 
	0x5f, 0x33, 0x36, 0x33, 0x20, 0x3d, 0x20, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6d, 0x61, 0x78, // _363 = fast::max
	0x28, 0x64, 0x6f, 0x74, 0x28, 0x5f, 0x33, 0x35, 0x39, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // (dot(_359, in.v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // normal), 0.0);. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //            float
	0x34, 0x20, 0x5f, 0x34, 0x33, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 4 _437;.        
	0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x5f, 0x33, 0x36, 0x33, 0x20, 0x3e, 0x20, 0x30, //     if (_363 > 0
	0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // .0).            
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // {.              
	0x20, 0x20, 0x5f, 0x34, 0x33, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, //   _437 = (_mtl_u
	0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, // .u_light[(4 * _4
	0x33, 0x34, 0x29, 0x20, 0x2b, 0x20, 0x36, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // 34) + 6] * _mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x32, 0x5d, 0x29, // u.u_material[2])
	0x20, 0x2a, 0x20, 0x70, 0x6f, 0x77, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6d, 0x61, 0x78, //  * pow(fast::max
	0x28, 0x64, 0x6f, 0x74, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x6e, // (dot(normalize(n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x2d, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x70, // ormalize(-in.v_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x20, 0x2b, 0x20, 0x5f, 0x33, 0x35, 0x39, 0x29, // osition) + _359)
	0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, // , in.v_normal), 
	0x30, 0x2e, 0x30, 0x29, 0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, // 0.0), _mtl_u.u_m
	0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, // aterial[3].x);. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, //            }.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, //          else.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, //           {.    
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x33, 0x37, //             _437
	0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, //  = float4(0.0);.
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, //             }.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x34, 0x31, 0x20, 0x3d, //           _441 =
	0x20, 0x5f, 0x34, 0x33, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, //  _435 + (((_mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, // u.u_light[(4 * _
	0x34, 0x33, 0x34, 0x29, 0x20, 0x2b, 0x20, 0x35, 0x5d, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // 434) + 5] * _mtl
	0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, // _u.u_material[1]
	0x29, 0x20, 0x2a, 0x20, 0x5f, 0x33, 0x36, 0x33, 0x29, 0x20, 0x2b, 0x20, 0x5f, 0x34, 0x33, 0x37, // ) * _363) + _437
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, // );.        }.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //      else.      
	0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //   {.            
	0x5f, 0x34, 0x34, 0x31, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x33, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, // _441 = _435;.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, //      }.    }.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x33, 0x36, 0x3b, 0x0a, 0x20, 0x20, //  float4 _436;.  
	0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x69, 0x6e, 0x74, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, //   if (int(_mtl_u
	0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x29, 0x20, 0x21, // .u_light[1].x) !
	0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x30, 0x75, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, // = int(0u)).    {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x33, 0x36, 0x20, 0x3d, 0x20, // .        _436 = 
	0x6d, 0x69, 0x78, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, // mix(_mtl_u.u_lig
	0x68, 0x74, 0x5b, 0x32, 0x5d, 0x2c, 0x20, 0x5f, 0x34, 0x33, 0x35, 0x2c, 0x20, 0x66, 0x6c, 0x6f, // ht[2], _435, flo
	0x61, 0x74, 0x34, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x28, // at4(fast::clamp(
	0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // (_mtl_u.u_light[
	0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x28, 0x69, 0x6e, 0x2e, 0x76, 0x5f, // 1].z - abs(in.v_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x7a, 0x29, 0x29, 0x20, 0x2f, 0x20, 0x28, // position.z)) / (
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, // _mtl_u.u_light[1
	0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, // ].z - _mtl_u.u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, // ight[1].y), 0.0,
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, //  1.0)));.    }. 
	0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, //    else.    {.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x33, 0x36, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x33, //       _436 = _43
	0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, // 5;.    }.    out
	0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, // .bgfx_FragData0 
	0x3d, 0x20, 0x5f, 0x34, 0x33, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, // = _436;.    retu
	0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x70, 0x01,       // rn out;.}....p.
};
