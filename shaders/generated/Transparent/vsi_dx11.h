static const uint8_t OtTransparentVSI_dx11[1551] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0xd3, 0xbe, 0x68, 0xc6, 0x02, 0x00, 0x07, 0x75, // VSH.......h....u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x01, 0x40, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // _model..@.......
	0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, // .u_viewProj.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x05, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, // .........#includ
	0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, // e <metal_stdlib>
	0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, // .#include <simd/
	0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, // simd.h>..using n
	0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, // amespace metal;.
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, // .struct _Global.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, // {.    float4x4 u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // _viewProj;.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, // loat4x4 u_model[
	0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // 32];.};..struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, // xlatMtlMain_out.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, // {.    float3 _en
	0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, // tryPointOutput_v
	0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, // _bitangent [[use
	0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // r(locn0)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // float3 _entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // ntOutput_v_norma
	0x6c, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, // l [[user(locn1)]
	0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, // ];.    float3 _e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, // ntryPointOutput_
	0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, // v_tangent [[user
	0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // (locn2)]];.    f
	0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, // loat2 _entryPoin
	0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // tOutput_v_texcoo
	0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x33, // rd0 [[user(locn3
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // )]];.    float4 
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, // gl_Position [[po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, // sition]];.};..st
	0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, // ruct xlatMtlMain
	0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, // _in.{.    float3
	0x20, 0x61, 0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x5b, 0x5b, 0x61, //  a_bitangent [[a
	0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, // ttribute(0)]];. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, //    float3 a_norm
	0x61, 0x6c, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, // al [[attribute(1
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, // )]];.    float3 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, // a_position [[att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, // ribute(2)]];.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, //  float3 a_tangen
	0x74, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x33, 0x29, // t [[attribute(3)
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x61, // ]];.    float2 a
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, // _texcoord0 [[att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x34, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, // ribute(4)]];.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x20, //  float4 i_data0 
	0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x35, 0x29, 0x5d, 0x5d, // [[attribute(5)]]
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, 0x64, // ;.    float4 i_d
	0x61, 0x74, 0x61, 0x31, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, // ata1 [[attribute
	0x28, 0x36, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // (6)]];.    float
	0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, // 4 i_data2 [[attr
	0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x37, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // ibute(7)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x20, 0x5b, // float4 i_data3 [
	0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x38, 0x29, 0x5d, 0x5d, 0x3b, // [attribute(8)]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, // .};..vertex xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // MtlMain_out xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, // MtlMain(xlatMtlM
	0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, // ain_in in [[stag
	0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, // e_in]], constant
	0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, //  _Global& _dx11_u
	0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, //  [[buffer(0)]]).
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // {.    xlatMtlMai
	0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, // n_out out = {};.
	0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x5f, 0x32, 0x33, //     float4x4 _23
	0x31, 0x20, 0x3d, 0x20, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x6f, 0x73, 0x65, 0x28, 0x66, 0x6c, // 1 = transpose(fl
	0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, // oat4x4(in.i_data
	0x30, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x2c, 0x20, 0x69, // 0, in.i_data1, i
	0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, // n.i_data2, in.i_
	0x64, 0x61, 0x74, 0x61, 0x33, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x70, // data3)) * transp
	0x6f, 0x73, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // ose(_dx11_u.u_mod
	0x65, 0x6c, 0x5b, 0x30, 0x5d, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, // el[0]);.    out.
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x66, 0x6c, // gl_Position = fl
	0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // oat4(in.a_positi
	0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x72, 0x61, 0x6e, // on, 1.0) * (tran
	0x73, 0x70, 0x6f, 0x73, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, // spose(_dx11_u.u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x32, 0x33, 0x31, 0x29, // iewProj) * _231)
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, // ;.    out._entry
	0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x62, 0x69, // PointOutput_v_bi
	0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, // tangent = (float
	0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, // 4(in.a_bitangent
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x32, 0x33, 0x31, 0x29, 0x2e, 0x78, // , 0.0) * _231).x
	0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, // yz;.    out._ent
	0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, // ryPointOutput_v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // normal = (float4
	0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x30, 0x2e, // (in.a_normal, 0.
	0x30, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x32, 0x33, 0x31, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, // 0) * _231).xyz;.
	0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, //     out._entryPo
	0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, // intOutput_v_tang
	0x65, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, // ent = (float4(in
	0x2e, 0x61, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, // .a_tangent, 0.0)
	0x20, 0x2a, 0x20, 0x5f, 0x32, 0x33, 0x31, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, //  * _231).xyz;.  
	0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, //   out._entryPoin
	0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // tOutput_v_texcoo
	0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // rd0 = in.a_texco
	0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, // ord0;.    return
	0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x09, 0x04, 0x00, 0x02, 0x00, 0x01, //  out;.}.........
	0x00, 0x03, 0x00, 0x10, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00,       // ...............
};
