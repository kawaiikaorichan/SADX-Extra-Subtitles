#include "pch.h"

#include "include/IniFile.h"


bool DisableMenuExtraSubs;
std::string EnglishSubtitlesMode;

bool MenuExtraSubsDisabled()
{
	return DisableMenuExtraSubs;
}

bool UseRetranslatedSubtitles()
{
	return EnglishSubtitlesMode == "AlwaysRetranslated" || EnglishSubtitlesMode == "Auto" && VoiceLanguage == Languages_Japanese;
}


void ReadConfig(const char* modPath)
{
	IniFile config(std::string(modPath) + "\\config.ini");

	DisableMenuExtraSubs = config.getBool("Options", "DisableMenuExtraSubs", false);
	EnglishSubtitlesMode = config.getString("Options", "EnglishSubtitlesMode", "Auto");
}