#include "pch.h"
#include "Config.h"
#include "Include/Mod Loader Common/IniFile.hpp"


bool DisableMenuExtraSubs;
std::string SubtitlesMode;

bool MenuExtraSubsDisabled()
{
	return DisableMenuExtraSubs;
}

bool UseRetranslatedSubtitles()
{
	return SubtitlesMode == "AlwaysRetranslated" || SubtitlesMode == "Auto" && VoiceLanguage == Languages_Japanese;
}


void ReadConfig(const char* modPath)
{
	IniFile config(std::string(modPath) + "\\config.ini");

	DisableMenuExtraSubs = config.getBool("Options", "DisableMenuExtraSubs", false);
	SubtitlesMode = config.getString("Options", "SubtitlesMode", "Auto");
}