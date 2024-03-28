#include "pch.h"

#include "Config.h"
#include "ExtraSubs.h"
#include "Languages/ExtraSubs_English.h"
#include "Languages/ExtraSubs_English_Retranslated.h"
#include "Languages/ExtraSubs_French.h"
#include "Languages/ExtraSubs_French_Retranslated.h"
#include "Languages/ExtraSubs_Japanese.h"
#include "../Include/Mod Loader Common/TextConv.hpp"

#include <map>


FunctionPointer(void, sub_40BC80, (), 0x40BC80);

const int ShiftJIS = 932;
const char* Buffer[] = { NULL, NULL };
const char* TextBuffer = NULL;
int SubtitleDisplayFrameCount = 0;
int SubtitleDuration = 0;
int EggCannonFrameCount = 0;


const char* UTF16toSJIS(const wchar_t* text)
{
	return UTF16toMBS(text, ShiftJIS);
}


std::map<int, SubtitleData> ExtraSubs_Japanese;

void ConvertJapaneseExtraSubs()
{
	for (auto& entry : ExtraSubs_Japanese_UTF16)
	{
		int id = entry.first;
		const char* text = UTF16toSJIS(entry.second.Text);
		int duration = entry.second.Duration;
		DisplayConditions condition = entry.second.Condition;

		ExtraSubs_Japanese.insert({ id, { text, duration, condition } });
	}
}


const char** SkyChase1[]
{
	SkyChase1_Japanese,
	SkyChase1_English,
	SkyChase1_French,
	NULL, //Spanish
	NULL, //German
};

const char** SkyChase2[]
{
	SkyChase2_Japanese,
	SkyChase2_English,
	SkyChase2_French,
	NULL, //Spanish
	NULL, //German
};

const char** WelcomeToTwinkleParkCutscene[]
{
	WelcomeToTwinklePark_Japanese,
	WelcomeToTwinklePark_English,
	WelcomeToTwinklePark_French,
	NULL, //Spanish
	NULL, //German
};


std::map<int, SubtitleData>* ExtraSubs[]
{
	&ExtraSubs_Japanese,
	&ExtraSubs_English,
	&ExtraSubs_French,
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

void DisplayCutsceneSubtitle(int id) //for post-Egg Walker cutscene specifically
{
	if (VoiceLanguage == Languages_English && (id == 822 || id == 824)) return; //voice language can only be English or Japanese
	
	EV_Msg(ExtraSubs[TextLanguage]->at(id).Text);

	if (id == 823)
	{
		EV_Wait(ExtraSubs[TextLanguage]->at(id).Duration);
		EV_MsgClose();
	}
}

void SetUpSkyChase1Subtitles()
{
	if (SkyChase1[TextLanguage] != NULL)
	{
		EggCannonFrameCount = 1;
	}
}

void DisplaySkyChase2Subtitles()
{
	if (SkyChase2[TextLanguage] != NULL)
	{
		DisplayHintText(SkyChase2[TextLanguage], 270);
	}
}

void SetSubtitlesMode() //this will be a single option for multiple languages
{
	if (TextLanguage == Languages_Japanese) return; //this obviously doesn't have a retranslated version
	
	if (UseRetranslatedSubtitles())
	{
		ExtraSubs[Languages_English] = &ExtraSubs_EnglishRetranslated;
		SkyChase1[Languages_English] = SkyChase1_EnglishRetranslated;
		SkyChase2[Languages_English] = SkyChase2_EnglishRetranslated;

		ExtraSubs[Languages_French] = &ExtraSubs_FrenchRetranslated;
		SkyChase1[Languages_French] = SkyChase1_FrenchRetranslated;
		SkyChase2[Languages_French] = SkyChase2_FrenchRetranslated;
	}
	else
	{
		ExtraSubs[Languages_English] = &ExtraSubs_English;
		SkyChase1[Languages_English] = SkyChase1_English;
		SkyChase2[Languages_English] = SkyChase2_English;

		ExtraSubs[Languages_French] = &ExtraSubs_French;
		SkyChase1[Languages_French] = SkyChase1_French;
		SkyChase2[Languages_French] = SkyChase2_French;
	}
}


void DisplaySubtitle(int id)
{
	SetSubtitlesMode();

	if (id == 187) //Sky Chase 1 Egg Cannon sequence
	{
		SetUpSkyChase1Subtitles();
	}
	if (id == 2025) //Sky Chase 2 Tornado transformation sequence
	{
		DisplaySkyChase2Subtitles();
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
	else if (ExtraSubs[TextLanguage]->at(id).Condition == Cutscene)
	{
		DisplayCutsceneSubtitle(id);
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
	ConvertJapaneseExtraSubs();
	WriteJump((void*)0x425710, PlayVoice_ExtraSub);
	WriteData((char*)0x40BC9A, (char)52); //changing the text box height for menu screens, so two lines would fit properly
	WriteData((int*)0x40BCA1, 384); //changing the y coordinate of the text box to match menu and gameplay display methods
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
