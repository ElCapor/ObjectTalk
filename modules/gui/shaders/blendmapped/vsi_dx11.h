static const uint8_t vsi_blendmapped_dx11[1439] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x92, 0x1b, 0x2b, 0xe2, 0x03, 0x00, 0x06, 0x75, // VSH.......+....u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, // _view...........
	0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x03, 0x01, // u_uv_transform..
	0x80, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // .........u_viewP
	0x72, 0x6f, 0x6a, 0x04, 0x01, 0x40, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x05, 0x00, // roj..@.......<..
	0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, 0x6c, // .#include <metal
	0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, // _stdlib>.#includ
	0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, 0x0a, // e <simd/simd.h>.
	0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, // .using namespace
	0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, //  metal;..struct 
	0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // _Global.{.    fl
	0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x20, // oat4x4 u_view;. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, //    float4x4 u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // ewProj;.    floa
	0x74, 0x33, 0x78, 0x33, 0x20, 0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, // t3x3 u_uv_transf
	0x6f, 0x72, 0x6d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // orm;.};..struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, // xlatMtlMain_out.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, // {.    float3 _en
	0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, // tryPointOutput_v
	0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, // _normal [[user(l
	0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, // ocn0)]];.    flo
	0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, // at3 _entryPointO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // utput_v_position
	0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, //  [[user(locn1)]]
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x5f, 0x65, 0x6e, // ;.    float2 _en
	0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, // tryPointOutput_v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, // _texcoord0 [[use
	0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x32, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // r(locn2)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, // float4 gl_Positi
	0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, // on [[position]];
	0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // .};..struct xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, // MtlMain_in.{.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, //  float3 a_normal
	0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, 0x5d, //  [[attribute(0)]
	0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, // ];.    float3 a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, // position [[attri
	0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // bute(1)]];.    f
	0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // loat2 a_texcoord
	0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x32, 0x29, // 0 [[attribute(2)
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, // ]];.    float4 i
	0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, // _data0 [[attribu
	0x74, 0x65, 0x28, 0x33, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, // te(3)]];.    flo
	0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x20, 0x5b, 0x5b, 0x61, 0x74, // at4 i_data1 [[at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x34, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // tribute(4)]];.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, //   float4 i_data2
	0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x35, 0x29, 0x5d, //  [[attribute(5)]
	0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, // ];.    float4 i_
	0x64, 0x61, 0x74, 0x61, 0x33, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, // data3 [[attribut
	0x65, 0x28, 0x36, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x76, 0x65, 0x72, 0x74, // e(6)]];.};..vert
	0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, // ex xlatMtlMain_o
	0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, // ut xlatMtlMain(x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, // latMtlMain_in in
	0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, //  [[stage_in]], c
	0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, // onstant _Global&
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, //  _mtl_u [[buffer
	0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, // (0)]]).{.    xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, // tMtlMain_out out
	0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  = {};.    float
	0x34, 0x78, 0x34, 0x20, 0x5f, 0x33, 0x31, 0x36, 0x20, 0x3d, 0x20, 0x74, 0x72, 0x61, 0x6e, 0x73, // 4x4 _316 = trans
	0x70, 0x6f, 0x73, 0x65, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x28, 0x69, 0x6e, // pose(float4x4(in
	0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, 0x64, // .i_data0, in.i_d
	0x61, 0x74, 0x61, 0x31, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x32, // ata1, in.i_data2
	0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x29, 0x29, 0x3b, 0x0a, // , in.i_data3));.
	0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, //     out.gl_Posit
	0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, // ion = _mtl_u.u_v
	0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, // iewProj * (float
	0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, // 4(in.a_position,
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x33, 0x31, 0x36, 0x29, 0x3b, 0x0a, 0x20, //  1.0) * _316);. 
	0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, //    out._entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // ntOutput_v_norma
	0x6c, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // l = float3(norma
	0x6c, 0x69, 0x7a, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, // lize(_mtl_u.u_vi
	0x65, 0x77, 0x20, 0x2a, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, // ew * (float4(in.
	0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, 0x2a, // a_normal, 0.0) *
	0x20, 0x5f, 0x33, 0x31, 0x36, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  _316)).xyz);.  
	0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, //   out._entryPoin
	0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // tOutput_v_positi
	0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x28, 0x5f, 0x6d, 0x74, // on = float3((_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x28, 0x66, 0x6c, // l_u.u_view * (fl
	0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // oat4(in.a_positi
	0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x33, 0x31, 0x36, 0x29, // on, 1.0) * _316)
	0x29, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, // ).xyz);.    out.
	0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, // _entryPointOutpu
	0x74, 0x5f, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, // t_v_texcoord0 = 
	0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, // (_mtl_u.u_uv_tra
	0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, // nsform * float3(
	0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2c, 0x20, // in.a_texcoord0, 
	0x31, 0x2e, 0x30, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, // 1.0)).xy;.    re
	0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x07, 0x02, // turn out;.}.....
	0x00, 0x01, 0x00, 0x10, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x00,       // ...............
};
