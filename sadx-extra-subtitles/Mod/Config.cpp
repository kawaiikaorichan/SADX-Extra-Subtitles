#include "pch.h"
#include "Config.h"
#include "Include/Mod Loader Common/IniFile.hpp"


bool Config::DisableMenuExtraSubs;
std::string Config::SubtitlesMode;


void Config::Read(const char* modPath)
{
	IniFile config(std::string(modPath) + "\\config.ini");

	DisableMenuExtraSubs = config.getBool("Options", "DisableMenuExtraSubs", false);
	SubtitlesMode = config.getString("Options", "SubtitlesMode", "Auto");
}