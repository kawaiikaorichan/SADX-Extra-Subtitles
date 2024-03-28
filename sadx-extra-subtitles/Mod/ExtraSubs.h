#pragma once

enum DisplayConditions
{
	Menu,
	Gameplay,
	Cutscene
};

struct SubtitleData
{
	const char* Text;
	int Duration;
	DisplayConditions Condition;
};

struct SubtitleDataUTF16
{
	const wchar_t* Text;
	int Duration;
	DisplayConditions Condition;
};

const char* UTF16toSJIS(const wchar_t* text);
void InitExtraSubs();
void DisplaySubtitleOnFrame();