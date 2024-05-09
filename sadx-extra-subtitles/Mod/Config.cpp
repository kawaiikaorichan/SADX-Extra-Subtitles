#include "pch.h"
#include "Config.h"
#include "Include/Mod Loader Common/IniFile.hpp"


std::string Config::SubtitlesMode;
bool Config::DisableMenuExtraSubs;
bool Config::DisplaySESubtitles;


void Config::Read(const char* modPath)
{
	IniFile config(std::string(modPath) + "\\config.ini");

	SubtitlesMode = config.getString("Options", "SubtitlesMode", "Auto");
	DisableMenuExtraSubs = config.getBool("Options", "DisableMenuExtraSubs", false);
	DisplaySESubtitles = config.getBool("Options", "DisplaySESubtitles", false);
}