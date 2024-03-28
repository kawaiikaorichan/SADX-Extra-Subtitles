#include "pch.h"

#include "ExtraSubs.h"
#include "Config.h"


extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		ReadConfig(path);
		InitExtraSubs();
	}

	__declspec(dllexport) void OnFrame()
	{
		DisplaySubtitleOnFrame();
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}