cd /D "%~dp0"
%HOMEPATH%\bin\shaderc -f background/shader.vs -o background/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_background_dx9
%HOMEPATH%\bin\shaderc -f background/shader.vs -o background/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_background_dx11
%HOMEPATH%\bin\shaderc -f background/shader.fs -o background/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_background_dx9
%HOMEPATH%\bin\shaderc -f background/shader.fs -o background/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_background_dx11
%HOMEPATH%\bin\shaderc -f blendmapped/shader.vs -o blendmapped/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_blendmapped_dx9
%HOMEPATH%\bin\shaderc -f blendmapped/shader.vs -o blendmapped/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_blendmapped_dx11
%HOMEPATH%\bin\shaderc -f blendmapped/shader.fs -o blendmapped/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_blendmapped_dx9
%HOMEPATH%\bin\shaderc -f blendmapped/shader.fs -o blendmapped/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_blendmapped_dx11
%HOMEPATH%\bin\shaderc -f blendmapped/instancing.vs -o blendmapped/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vsi_blendmapped_dx9
%HOMEPATH%\bin\shaderc -f blendmapped/instancing.vs -o blendmapped/vsi_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vsi_blendmapped_dx11
%HOMEPATH%\bin\shaderc -f blit/shader.vs -o blit/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_blit_dx9
%HOMEPATH%\bin\shaderc -f blit/shader.vs -o blit/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_blit_dx11
%HOMEPATH%\bin\shaderc -f blit/shader.fs -o blit/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_blit_dx9
%HOMEPATH%\bin\shaderc -f blit/shader.fs -o blit/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_blit_dx11
%HOMEPATH%\bin\shaderc -f bloom/shader.vs -o bloom/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_bloom_dx9
%HOMEPATH%\bin\shaderc -f bloom/shader.vs -o bloom/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_bloom_dx11
%HOMEPATH%\bin\shaderc -f bloom/shader.fs -o bloom/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_bloom_dx9
%HOMEPATH%\bin\shaderc -f bloom/shader.fs -o bloom/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_bloom_dx11
%HOMEPATH%\bin\shaderc -f blur/shader.vs -o blur/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_blur_dx9
%HOMEPATH%\bin\shaderc -f blur/shader.vs -o blur/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_blur_dx11
%HOMEPATH%\bin\shaderc -f blur/shader.fs -o blur/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_blur_dx9
%HOMEPATH%\bin\shaderc -f blur/shader.fs -o blur/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_blur_dx11
%HOMEPATH%\bin\shaderc -f colored/shader.vs -o colored/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_colored_dx9
%HOMEPATH%\bin\shaderc -f colored/shader.vs -o colored/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_colored_dx11
%HOMEPATH%\bin\shaderc -f colored/shader.fs -o colored/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_colored_dx9
%HOMEPATH%\bin\shaderc -f colored/shader.fs -o colored/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_colored_dx11
%HOMEPATH%\bin\shaderc -f colored/instancing.vs -o colored/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vsi_colored_dx9
%HOMEPATH%\bin\shaderc -f colored/instancing.vs -o colored/vsi_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vsi_colored_dx11
%HOMEPATH%\bin\shaderc -f fixed/shader.vs -o fixed/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_fixed_dx9
%HOMEPATH%\bin\shaderc -f fixed/shader.vs -o fixed/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_fixed_dx11
%HOMEPATH%\bin\shaderc -f fixed/shader.fs -o fixed/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_fixed_dx9
%HOMEPATH%\bin\shaderc -f fixed/shader.fs -o fixed/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_fixed_dx11
%HOMEPATH%\bin\shaderc -f fixed/instancing.vs -o fixed/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vsi_fixed_dx9
%HOMEPATH%\bin\shaderc -f fixed/instancing.vs -o fixed/vsi_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vsi_fixed_dx11
%HOMEPATH%\bin\shaderc -f imgui/shader.vs -o imgui/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_imgui_dx9
%HOMEPATH%\bin\shaderc -f imgui/shader.vs -o imgui/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_imgui_dx11
%HOMEPATH%\bin\shaderc -f imgui/shader.fs -o imgui/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_imgui_dx9
%HOMEPATH%\bin\shaderc -f imgui/shader.fs -o imgui/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_imgui_dx11
%HOMEPATH%\bin\shaderc -f sky/shader.vs -o sky/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_sky_dx9
%HOMEPATH%\bin\shaderc -f sky/shader.vs -o sky/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_sky_dx11
%HOMEPATH%\bin\shaderc -f sky/shader.fs -o sky/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_sky_dx9
%HOMEPATH%\bin\shaderc -f sky/shader.fs -o sky/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_sky_dx11
%HOMEPATH%\bin\shaderc -f skybox/shader.vs -o skybox/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_skybox_dx9
%HOMEPATH%\bin\shaderc -f skybox/shader.vs -o skybox/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_skybox_dx11
%HOMEPATH%\bin\shaderc -f skybox/shader.fs -o skybox/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_skybox_dx9
%HOMEPATH%\bin\shaderc -f skybox/shader.fs -o skybox/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_skybox_dx11
%HOMEPATH%\bin\shaderc -f terrain/shader.vs -o terrain/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_terrain_dx9
%HOMEPATH%\bin\shaderc -f terrain/shader.vs -o terrain/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_terrain_dx11
%HOMEPATH%\bin\shaderc -f terrain/shader.fs -o terrain/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_terrain_dx9
%HOMEPATH%\bin\shaderc -f terrain/shader.fs -o terrain/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_terrain_dx11
%HOMEPATH%\bin\shaderc -f textured/shader.vs -o textured/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_textured_dx9
%HOMEPATH%\bin\shaderc -f textured/shader.vs -o textured/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_textured_dx11
%HOMEPATH%\bin\shaderc -f textured/shader.fs -o textured/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_textured_dx9
%HOMEPATH%\bin\shaderc -f textured/shader.fs -o textured/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_textured_dx11
%HOMEPATH%\bin\shaderc -f textured/instancing.vs -o textured/vsi_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vsi_textured_dx9
%HOMEPATH%\bin\shaderc -f textured/instancing.vs -o textured/vsi_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vsi_textured_dx11
%HOMEPATH%\bin\shaderc -f vectordisplay/shader.vs -o vectordisplay/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_vectordisplay_dx9
%HOMEPATH%\bin\shaderc -f vectordisplay/shader.vs -o vectordisplay/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_vectordisplay_dx11
%HOMEPATH%\bin\shaderc -f vectordisplay/shader.fs -o vectordisplay/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_vectordisplay_dx9
%HOMEPATH%\bin\shaderc -f vectordisplay/shader.fs -o vectordisplay/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_vectordisplay_dx11
%HOMEPATH%\bin\shaderc -f water/shader.vs -o water/vs_dx9.h -i include --type vertex --platform windows -p vs_3_0 -O 3 --bin2c vs_water_dx9
%HOMEPATH%\bin\shaderc -f water/shader.vs -o water/vs_dx11.h -i include --type vertex --platform windows -p vs_4_0 -O 3 --bin2c vs_water_dx11
%HOMEPATH%\bin\shaderc -f water/shader.fs -o water/fs_dx9.h -i include --type fragment --platform windows -p ps_3_0 -O 3 --bin2c fs_water_dx9
%HOMEPATH%\bin\shaderc -f water/shader.fs -o water/fs_dx11.h -i include --type fragment --platform windows -p ps_4_0 -O 3 --bin2c fs_water_dx11
