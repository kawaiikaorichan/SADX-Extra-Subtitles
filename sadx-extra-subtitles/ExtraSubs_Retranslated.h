#pragma once

#include "ExtraSubs.h"
#include <map>


//these are for testing purposes at this point

const char* SkyChase1_EnglishRetranslated[] = { "\aTime for a little power play of my own!\nRETRANSLATED", "\aEgg Cannon ready!", "\aFIRE!", "\aAah, we're hit!", "\aYeah! Woaaaaaah!" };
const char* SkyChase2_EnglishRetranslated[] = { "\aTransforming now!\nRETRANSLATED", "\aWoaaah!", "\aLet's do it!", NULL };

std::map<int, SubtitleData> ExtraSubs_EnglishRetranslated
{
	{ 1, { "\aSelect a file - retranslated", 60, Menu } },
	{ 40, { "\aSelect your character - retranslated", 90, Menu } },
};