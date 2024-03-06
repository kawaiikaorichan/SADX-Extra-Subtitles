﻿#include "pch.h"

#include "Config.h"
#include "ExtraSubs.h"
#include "ExtraSubs_English.h"
#include "ExtraSubs_Retranslated.h"

#include <map>


FunctionPointer(void, sub_40BC80, (), 0x40BC80);

const char* Buffer[] = { NULL, NULL };
const char* TextBuffer = NULL;
int SubtitleDisplayFrameCount = 0;
int SubtitleDuration = 0;
int EggCannonFrameCount = 0;


const char** SkyChase1[]
{
	NULL, //Japanese
	SkyChase1_English,
	NULL, //French
	NULL, //Spanish
	NULL, //German
};

const char** SkyChase2[]
{
	NULL, //Japanese
	SkyChase2_English,
	NULL, //French
	NULL, //Spanish
	NULL, //German
};

const char** WelcomeToTwinkleParkCutscene[]
{
	NULL, //Japanese
	WelcomeToTwinklePark_English,
	NULL, //French
	NULL, //Spanish
	NULL, //German
};


std::map<int, SubtitleData>* ExtraSubs[]
{
	NULL, //Japanese
	&ExtraSubs_English,
	NULL, //French
	NULL, //Spanish
	NULL, //German
};


void DisplayGameplaySubtitle(int id)
{
	Buffer[0] = ExtraSubs[TextLanguage]->at(id).Text;
	DisplayHintText(Buffer, ExtraSubs[TextLanguage]->at(id).Duration);
}

void SetUpMenuSubtitle(int id)
{
	TextBuffer = ExtraSubs[TextLanguage]->at(id).Text;
	SubtitleDisplayFrameCount = 1;
	SubtitleDuration = ExtraSubs[TextLanguage]->at(id).Duration;
}

void SetEnglishSubtitlesMode()
{
	if (UseRetranslatedSubtitles())
	{
		ExtraSubs[Languages_English] = &ExtraSubs_EnglishRetranslated;
		SkyChase1[Languages_English] = SkyChase1_EnglishRetranslated;
		SkyChase2[Languages_English] = SkyChase2_EnglishRetranslated;
	}
	else
	{
		ExtraSubs[Languages_English] = &ExtraSubs_English;
		SkyChase1[Languages_English] = SkyChase1_English;
		SkyChase2[Languages_English] = SkyChase2_English;
	}
}


void DisplaySubtitle(int id)
{
	SetEnglishSubtitlesMode();
	
	if (id == 187) //Sky Chase 1 Egg Cannon sequence
	{
		EggCannonFrameCount = 1;
	}
	else if (id == 2025) //Sky Chase 2 Tornado transformation sequence
	{
		if (SkyChase2[TextLanguage] != NULL)
		{
			DisplayHintText(SkyChase2[TextLanguage], 270);
		}		
	}

	if (id == 1575 && CurrentCutsceneID == 20) //for cutscene after Twinkle Park (Sonic) to prevent this subtitle overriding a cutscene one
	{
		if (WelcomeToTwinkleParkCutscene[TextLanguage] != NULL)
		{
			DisplayHintText(WelcomeToTwinkleParkCutscene[TextLanguage], 30);
		}		
		return;
	}

	if (ExtraSubs[TextLanguage] == NULL) return;
	if (!ExtraSubs[TextLanguage]->count(id)) return;
	
	if (ExtraSubs[TextLanguage]->at(id).Condition == Menu)
	{
		if (!MenuExtraSubsDisabled())
		{
			SetUpMenuSubtitle(id);
		}		
	}
	else
	{
		DisplayGameplaySubtitle(id);
	}
}


void __cdecl PlayVoice_ExtraSub(int id)
{
	if (VoicesEnabled)
	{
		CurrentVoiceNumber = id;
	}

	DisplaySubtitle(id);
}


void InitExtraSubs()
{
	WriteJump((void*)0x425710, PlayVoice_ExtraSub);
	WriteData((char*)0x40BC9A, (char)54); //changing the text box height for menu screens so two lines would fit properly
}


/* OnFrame stuff */

void DisplaySubtitleForOneFrame()
{
	sub_40BC80();
	DoSomethingRelatedToText_(TextBuffer);
	SubtitleDisplayFrameCount++;
}

void ClearSubtitle()
{
	SubtitleDisplayFrameCount = 0;
	EggCannonFrameCount = 0;
	SubtitleDuration = 0;
}

void DisplayEggCannonSubtitles()
{
	if (SkyChase1[TextLanguage] == NULL)
	{
		EggCannonFrameCount = 0;
		return;
	}
	
	sub_40BC80();
	if (EggCannonFrameCount <= 180)
	{
		DoSomethingRelatedToText_(SkyChase1[TextLanguage][0]);
	}
	else if (EggCannonFrameCount <= 270)
	{
		DoSomethingRelatedToText_(SkyChase1[TextLanguage][1]);
	}
	else if (EggCannonFrameCount > 360 && EggCannonFrameCount <= 480)
	{
		DoSomethingRelatedToText_(SkyChase1[TextLanguage][2]);
	}
	else if (EggCannonFrameCount > 660 && EggCannonFrameCount <= 780)
	{
		DoSomethingRelatedToText_(SkyChase1[TextLanguage][3]);
	}
	else if (EggCannonFrameCount > 780)
	{
		DoSomethingRelatedToText_(SkyChase1[TextLanguage][4]);
	}
	EggCannonFrameCount++;
}


void DisplaySubtitleOnFrame()
{
	if (SubtitleDisplayFrameCount > 0 && SubtitleDisplayFrameCount <= SubtitleDuration)
	{
		DisplaySubtitleForOneFrame();
	}

	if (EggCannonFrameCount > 0)
	{
		DisplayEggCannonSubtitles();
	}
	
	if (SubtitleDisplayFrameCount > SubtitleDuration || EggCannonFrameCount > 960)
	{
		ClearSubtitle();
	}	
}