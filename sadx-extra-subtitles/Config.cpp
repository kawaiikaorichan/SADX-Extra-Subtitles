#include "pch.h"

#include "include/IniFile.h"


bool DisableMenuExtraSubs;

bool MenuExtraSubsDisabled()
{
	return DisableMenuExtraSubs;
}

void ReadConfig(const char* modPath)
{
	IniFile config(std::string(modPath) + "\\config.ini");

	DisableMenuExtraSubs = config.getBool("Options", "DisableMenuExtraSubs", false);
}