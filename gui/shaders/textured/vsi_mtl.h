static const uint8_t OtTexturedVSI_mtl[1590] =
{
	0x56, 0x53, 0x48, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x82, 0x69, 0x6f, 0x4e, 0x05, 0x00, 0x12, 0x73, // VSH......ioN...s
	0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x6d, 0x61, 0x70, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // _shadowmapSample
	0x72, 0x01, 0x01, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x73, 0x5f, 0x73, 0x68, // r...........s_sh
	0x61, 0x64, 0x6f, 0x77, 0x6d, 0x61, 0x70, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x01, 0x01, // adowmapTexture..
	0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, // .........u_uv_tr
	0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x03, 0x01, 0x40, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ansform..@......
	0x00, 0x0e, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x78, // ..u_shadowMatrix
	0x04, 0x01, 0x70, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, 0x76, 0x69, 0x65, // ..p........u_vie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, // wProj...........
	0x05, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, // ...#include <met
	0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, // al_stdlib>.#incl
	0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, // ude <simd/simd.h
	0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, // >..using namespa
	0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, // ce metal;..struc
	0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // t _Global.{.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // float4x4 u_viewP
	0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x78, // roj;.    float3x
	0x33, 0x20, 0x75, 0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, // 3 u_uv_transform
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, // ;.    float4x4 u
	0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x3b, 0x0a, 0x7d, // _shadowMatrix;.}
	0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // ;..struct xlatMt
	0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, // lMain_out.{.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // float3 _entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // ntOutput_v_norma
	0x6c, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, // l [[user(locn0)]
	0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x65, // ];.    float4 _e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, // ntryPointOutput_
	0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, // v_position [[use
	0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // r(locn1)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, // float4 _entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, // ntOutput_v_shado
	0x77, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x32, 0x29, 0x5d, // w [[user(locn2)]
	0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x5f, 0x65, // ];.    float2 _e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, // ntryPointOutput_
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, // v_texcoord0 [[us
	0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x33, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, // er(locn3)]];.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, //  float4 gl_Posit
	0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, // ion [[position]]
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, // ;.};..struct xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // tMtlMain_in.{.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, //   float3 a_norma
	0x6c, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, // l [[attribute(0)
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, // ]];.    float3 a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, // _position [[attr
	0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // ibute(1)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // float2 a_texcoor
	0x64, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x32, // d0 [[attribute(2
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // )]];.    float4 
	0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, // i_data0 [[attrib
	0x75, 0x74, 0x65, 0x28, 0x33, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, // ute(3)]];.    fl
	0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x31, 0x20, 0x5b, 0x5b, 0x61, // oat4 i_data1 [[a
	0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x34, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, // ttribute(4)]];. 
	0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, //    float4 i_data
	0x32, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x35, 0x29, // 2 [[attribute(5)
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x69, // ]];.    float4 i
	0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, // _data3 [[attribu
	0x74, 0x65, 0x28, 0x36, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x76, 0x65, 0x72, // te(6)]];.};..ver
	0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, // tex xlatMtlMain_
	0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, // out xlatMtlMain(
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, // xlatMtlMain_in i
	0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, // n [[stage_in]], 
	0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, // constant _Global
	0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, // & _mtl_u [[buffe
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, // r(0)]]).{.    xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, // atMtlMain_out ou
	0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, // t = {};.    floa
	0x74, 0x34, 0x78, 0x34, 0x20, 0x5f, 0x33, 0x32, 0x35, 0x20, 0x3d, 0x20, 0x74, 0x72, 0x61, 0x6e, // t4x4 _325 = tran
	0x73, 0x70, 0x6f, 0x73, 0x65, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x28, 0x69, // spose(float4x4(i
	0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x30, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, // n.i_data0, in.i_
	0x64, 0x61, 0x74, 0x61, 0x31, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, // data1, in.i_data
	0x32, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x69, 0x5f, 0x64, 0x61, 0x74, 0x61, 0x33, 0x29, 0x29, 0x3b, // 2, in.i_data3));
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, // .    out.gl_Posi
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, // tion = _mtl_u.u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, // viewProj * (floa
	0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // t4(in.a_position
	0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x33, 0x32, 0x35, 0x29, 0x3b, 0x0a, // , 1.0) * _325);.
	0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, //     out._entryPo
	0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, // intOutput_v_norm
	0x61, 0x6c, 0x20, 0x3d, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, // al = (float4(in.
	0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x20, 0x2a, // a_normal, 0.0) *
	0x20, 0x5f, 0x33, 0x32, 0x35, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, //  _325).xyz;.    
	0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, // out._entryPointO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // utput_v_position
	0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, //  = float4(in.a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, // osition, 1.0) * 
	0x5f, 0x33, 0x32, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, // _325;.    out._e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, // ntryPointOutput_
	0x76, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // v_shadow = _mtl_
	0x75, 0x2e, 0x75, 0x5f, 0x73, 0x68, 0x61, 0x64, 0x6f, 0x77, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x78, // u.u_shadowMatrix
	0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, //  * float4(in.a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // osition, 1.0);. 
	0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, //    out._entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // ntOutput_v_texco
	0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, // ord0 = (_mtl_u.u
	0x5f, 0x75, 0x76, 0x5f, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x2a, 0x20, // _uv_transform * 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // float3(in.a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x3b, // oord0, 1.0)).xy;
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, // .    return out;
	0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x07, 0x02, 0x00, 0x01, 0x00, 0x10, 0x00, 0xff, 0xff, 0xff, 0xff, // .}..............
	0xff, 0xff, 0xff, 0xff, 0xd0, 0x00,                                                             // ......
};
