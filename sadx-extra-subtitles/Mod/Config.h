#pragma once

class Config
{
public:
	static bool DisableMenuExtraSubs;
	static std::string SubtitlesMode;

	static void Read(const char* modPath);
};
