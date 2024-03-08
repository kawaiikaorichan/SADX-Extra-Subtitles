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

void InitExtraSubs();
void DisplaySubtitleOnFrame();