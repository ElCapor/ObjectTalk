static const uint8_t OtColoredFS_mtl[2340] =
{
	0x46, 0x53, 0x48, 0x0b, 0xbb, 0x17, 0x8e, 0xa9, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x75, // FSH............u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x12, 0x13, 0x50, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, // _light..P.......
	0x0a, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x12, 0x05, 0x00, 0x00, 0x05, // .u_material.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x08, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, // .........#includ
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
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x33, 0x34, // ;.    float3 _34
	0x36, 0x20, 0x3d, 0x20, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, // 6 = fast::normal
	0x69, 0x7a, 0x65, 0x28, 0x2d, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // ize(-in.v_positi
	0x6f, 0x6e, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, // on);.    float3 
	0x5f, 0x34, 0x39, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, // _495;.    float3
	0x20, 0x5f, 0x34, 0x39, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x39, 0x36, 0x20, //  _496;.    _496 
	0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // = float3(0.0);. 
	0x20, 0x20, 0x20, 0x5f, 0x34, 0x39, 0x35, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, //    _495 = float3
	0x28, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // (0.0);.    float
	0x33, 0x20, 0x5f, 0x35, 0x30, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // 3 _504;.    floa
	0x74, 0x33, 0x20, 0x5f, 0x35, 0x30, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, // t3 _506;.    for
	0x20, 0x28, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x34, 0x39, 0x34, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20, //  (int _494 = 0; 
	0x5f, 0x34, 0x39, 0x34, 0x20, 0x3c, 0x20, 0x34, 0x3b, 0x20, 0x5f, 0x34, 0x39, 0x36, 0x20, 0x3d, // _494 < 4; _496 =
	0x20, 0x5f, 0x35, 0x30, 0x36, 0x2c, 0x20, 0x5f, 0x34, 0x39, 0x35, 0x20, 0x3d, 0x20, 0x5f, 0x35, //  _506, _495 = _5
	0x30, 0x34, 0x2c, 0x20, 0x5f, 0x34, 0x39, 0x34, 0x2b, 0x2b, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, // 04, _494++).    
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x5f, 0x33, // {.        int _3
	0x35, 0x34, 0x20, 0x3d, 0x20, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x39, 0x34, 0x29, 0x20, // 54 = (4 * _494) 
	0x2b, 0x20, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, // + 3;.        if 
	0x28, 0x28, 0x69, 0x73, 0x75, 0x6e, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x65, 0x64, 0x28, 0x5f, 0x6d, // ((isunordered(_m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x5f, 0x33, 0x35, // tl_u.u_light[_35
	0x34, 0x5d, 0x2e, 0x78, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, 0x7c, 0x7c, 0x20, 0x5f, 0x6d, // 4].x, 0.0) || _m
	0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x5f, 0x33, 0x35, // tl_u.u_light[_35
	0x34, 0x5d, 0x2e, 0x78, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x0a, 0x20, 0x20, // 4].x != 0.0)).  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //       {.        
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x34, 0x39, 0x38, 0x3b, //     float3 _498;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, // .            if 
	0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // (_mtl_u.u_light[
	0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x39, 0x34, 0x29, 0x20, 0x2b, 0x20, 0x34, 0x5d, 0x2e, // (4 * _494) + 4].
	0x77, 0x20, 0x3d, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // w == 0.0).      
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //       {.        
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x39, 0x38, 0x20, 0x3d, 0x20, 0x66, //         _498 = f
	0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x5f, // ast::normalize(_
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, // mtl_u.u_light[(4
	0x20, 0x2a, 0x20, 0x5f, 0x34, 0x39, 0x34, 0x29, 0x20, 0x2b, 0x20, 0x34, 0x5d, 0x2e, 0x78, 0x79, //  * _494) + 4].xy
	0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // z);.            
	0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, // }.            el
	0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, // se.            {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // .               
	0x20, 0x5f, 0x34, 0x39, 0x38, 0x20, 0x3d, 0x20, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6e, 0x6f, //  _498 = fast::no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // rmalize(_mtl_u.u
	0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, 0x34, 0x39, 0x34, // _light[(4 * _494
	0x29, 0x20, 0x2b, 0x20, 0x34, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x69, 0x6e, 0x2e, // ) + 4].xyz - in.
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, // v_position);.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, //          }.     
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x33, 0x38, //        float _38
	0x37, 0x20, 0x3d, 0x20, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6d, 0x61, 0x78, 0x28, 0x64, 0x6f, // 7 = fast::max(do
	0x74, 0x28, 0x5f, 0x34, 0x39, 0x38, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // t(_498, in.v_nor
	0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // mal), 0.0);.    
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, //         float3 _
	0x35, 0x30, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 507;.           
	0x20, 0x69, 0x66, 0x20, 0x28, 0x5f, 0x33, 0x38, 0x37, 0x20, 0x3e, 0x20, 0x30, 0x2e, 0x30, 0x29, //  if (_387 > 0.0)
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, // .            {. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, //                _
	0x35, 0x30, 0x37, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x39, 0x36, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x5f, // 507 = _496 + ((_
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, // mtl_u.u_light[(4
	0x20, 0x2a, 0x20, 0x5f, 0x34, 0x39, 0x34, 0x29, 0x20, 0x2b, 0x20, 0x36, 0x5d, 0x2e, 0x78, 0x79, //  * _494) + 6].xy
	0x7a, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, // z * _mtl_u.u_mat
	0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x33, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, // erial[3].xyz) * 
	0x70, 0x6f, 0x77, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6d, 0x61, 0x78, 0x28, 0x64, 0x6f, // pow(fast::max(do
	0x74, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, // t(fast::normaliz
	0x65, 0x28, 0x5f, 0x33, 0x34, 0x36, 0x20, 0x2b, 0x20, 0x5f, 0x34, 0x39, 0x38, 0x29, 0x2c, 0x20, // e(_346 + _498), 
	0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x30, 0x2e, // in.v_normal), 0.
	0x30, 0x29, 0x2c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, // 0), _mtl_u.u_mat
	0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x34, 0x5d, 0x2e, 0x78, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // erial[4].x));.  
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, //           }.    
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, //         else.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, //          {.     
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x35, 0x30, 0x37, 0x20, //            _507 
	0x3d, 0x20, 0x5f, 0x34, 0x39, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // = _496;.        
	0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //     }.          
	0x20, 0x20, 0x5f, 0x35, 0x30, 0x36, 0x20, 0x3d, 0x20, 0x5f, 0x35, 0x30, 0x37, 0x3b, 0x0a, 0x20, //   _506 = _507;. 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x35, 0x30, 0x34, 0x20, //            _504 
	0x3d, 0x20, 0x5f, 0x34, 0x39, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // = _495 + ((_mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x28, 0x34, 0x20, 0x2a, 0x20, 0x5f, // u.u_light[(4 * _
	0x34, 0x39, 0x34, 0x29, 0x20, 0x2b, 0x20, 0x35, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, // 494) + 5].xyz * 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, // _mtl_u.u_materia
	0x6c, 0x5b, 0x32, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x33, 0x38, 0x37, // l[2].xyz) * _387
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, // );.        }.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //      else.      
	0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, //   {.            
	0x5f, 0x35, 0x30, 0x36, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x39, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x20, // _506 = _496;.   
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x35, 0x30, 0x34, 0x20, 0x3d, 0x20, //          _504 = 
	0x5f, 0x34, 0x39, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, // _495;.        }.
	0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, //     }.    float4
	0x20, 0x5f, 0x34, 0x34, 0x37, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x28, //  _447 = float4((
	0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, // (_mtl_u.u_light[
	0x30, 0x5d, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // 0].xyz * _mtl_u.
	0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x79, // u_material[1].xy
	0x7a, 0x29, 0x20, 0x2b, 0x20, 0x5f, 0x34, 0x39, 0x35, 0x29, 0x20, 0x2b, 0x20, 0x5f, 0x34, 0x39, // z) + _495) + _49
	0x36, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, // 6, 1.0) * _mtl_u
	0x2e, 0x75, 0x5f, 0x6d, 0x61, 0x74, 0x65, 0x72, 0x69, 0x61, 0x6c, 0x5b, 0x30, 0x5d, 0x3b, 0x0a, // .u_material[0];.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x34, 0x39, 0x37, 0x3b, //     float4 _497;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x69, 0x73, 0x75, 0x6e, 0x6f, 0x72, // .    if ((isunor
	0x64, 0x65, 0x72, 0x65, 0x64, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, // dered(_mtl_u.u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, // ight[1].x, 0.0) 
	0x7c, 0x7c, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, // || _mtl_u.u_ligh
	0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x78, 0x20, 0x21, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x29, 0x0a, // t[1].x != 0.0)).
	0x20, 0x20, 0x20, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, //     {.        _4
	0x39, 0x37, 0x20, 0x3d, 0x20, 0x6d, 0x69, 0x78, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // 97 = mix(_mtl_u.
	0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x32, 0x5d, 0x2c, 0x20, 0x5f, 0x34, 0x34, 0x37, // u_light[2], _447
	0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x66, 0x61, 0x73, 0x74, 0x3a, 0x3a, 0x63, // , float4(fast::c
	0x6c, 0x61, 0x6d, 0x70, 0x28, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, // lamp((_mtl_u.u_l
	0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x61, 0x62, 0x73, 0x28, // ight[1].z - abs(
	0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x7a, 0x29, // in.v_position.z)
	0x29, 0x20, 0x2f, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, // ) / (_mtl_u.u_li
	0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x7a, 0x20, 0x2d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // ght[1].z - _mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x31, 0x5d, 0x2e, 0x79, 0x29, 0x2c, // u.u_light[1].y),
	0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  0.0, 1.0)));.  
	0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, //   }.    else.   
	0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x34, 0x39, 0x37, 0x20, //  {.        _497 
	0x3d, 0x20, 0x5f, 0x34, 0x34, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20, // = _447;.    }.  
	0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, //   out.bgfx_FragD
	0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x5f, 0x34, 0x39, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x20, // ata0 = _497;.   
	0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, //  return out;.}..
	0x00, 0x00, 0x80, 0x01,                                                                         // ....
};
