pushd "%~dp0"
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blendmapped/shader.vs -o blendmapped/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtBlendMappedVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blendmapped/shader.vs -o blendmapped/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtBlendMappedVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blendmapped/shader.fs -o blendmapped/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtBlendMappedFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blendmapped/shader.fs -o blendmapped/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtBlendMappedFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blendmapped/instancing.vs -o blendmapped/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtBlendMappedVSI_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blendmapped/instancing.vs -o blendmapped/vsi_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtBlendMappedVSI_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blit/shader.vs -o blit/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtBlitVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blit/shader.vs -o blit/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtBlitVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blit/shader.fs -o blit/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtBlitFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blit/shader.fs -o blit/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtBlitFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f bloom/shader.vs -o bloom/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtBloomVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f bloom/shader.vs -o bloom/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtBloomVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f bloom/shader.fs -o bloom/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtBloomFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f bloom/shader.fs -o bloom/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtBloomFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blur/shader.vs -o blur/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtBlurVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blur/shader.vs -o blur/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtBlurVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blur/shader.fs -o blur/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtBlurFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f blur/shader.fs -o blur/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtBlurFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f colored/shader.vs -o colored/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtColoredVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f colored/shader.vs -o colored/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtColoredVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f colored/shader.fs -o colored/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtColoredFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f colored/shader.fs -o colored/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtColoredFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f colored/instancing.vs -o colored/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtColoredVSI_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f colored/instancing.vs -o colored/vsi_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtColoredVSI_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f debug/shader.vs -o debug/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtDebugVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f debug/shader.vs -o debug/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtDebugVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f debug/shader.fs -o debug/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtDebugFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f debug/shader.fs -o debug/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtDebugFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f fixed/shader.vs -o fixed/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtFixedVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f fixed/shader.vs -o fixed/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtFixedVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f fixed/shader.fs -o fixed/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtFixedFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f fixed/shader.fs -o fixed/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtFixedFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f fixed/instancing.vs -o fixed/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtFixedVSI_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f fixed/instancing.vs -o fixed/vsi_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtFixedVSI_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f imgui/shader.vs -o imgui/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtImGuiVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f imgui/shader.vs -o imgui/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtImGuiVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f imgui/shader.fs -o imgui/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtImGuiFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f imgui/shader.fs -o imgui/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtImGuiFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f shadow/shader.vs -o shadow/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtShadowVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f shadow/shader.vs -o shadow/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtShadowVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f shadow/shader.fs -o shadow/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtShadowFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f shadow/shader.fs -o shadow/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtShadowFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f sky/shader.vs -o sky/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtSkyVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f sky/shader.vs -o sky/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtSkyVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f sky/shader.fs -o sky/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtSkyFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f sky/shader.fs -o sky/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtSkyFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f skybox/shader.vs -o skybox/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtSkyboxVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f skybox/shader.vs -o skybox/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtSkyboxVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f skybox/shader.fs -o skybox/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtSkyboxFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f skybox/shader.fs -o skybox/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtSkyboxFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f terrain/shader.vs -o terrain/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtTerrainVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f terrain/shader.vs -o terrain/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtTerrainVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f terrain/shader.fs -o terrain/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtTerrainFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f terrain/shader.fs -o terrain/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtTerrainFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f textured/shader.vs -o textured/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtTexturedVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f textured/shader.vs -o textured/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtTexturedVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f textured/shader.fs -o textured/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtTexturedFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f textured/shader.fs -o textured/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtTexturedFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f textured/instancing.vs -o textured/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtTexturedVSI_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f textured/instancing.vs -o textured/vsi_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtTexturedVSI_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f vectordisplay/shader.vs -o vectordisplay/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtVectorDisplayVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f vectordisplay/shader.vs -o vectordisplay/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtVectorDisplayVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f vectordisplay/shader.fs -o vectordisplay/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtVectorDisplayFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f vectordisplay/shader.fs -o vectordisplay/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtVectorDisplayFS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f water/shader.vs -o water/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c OtWaterVS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f water/shader.vs -o water/vs_dx11.h -i include --type vertex --platform windows -p vs_5_0 -O 3 --bin2c OtWaterVS_dx11
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f water/shader.fs -o water/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c OtWaterFS_dx9
%HOMEDRIVE%%HOMEPATH%\bin\shaderc -f water/shader.fs -o water/fs_dx11.h -i include --type fragment --platform windows -p ps_5_0 -O 3 --bin2c OtWaterFS_dx11
popd
