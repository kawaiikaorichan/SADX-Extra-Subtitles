#include "pch.h"

#include "Config.h"
#include <map>


FunctionPointer(void, sub_40BC80, (), 0x40BC80);

const char* Buffer[] = { NULL, NULL };
char TextBuffer[1000];
int SubtitleDisplayFrameCount = 0;
int SubtitleDuration = 0;


enum DisplayConditions
{
	Menu,
	Gameplay
};

struct SubtitleData
{
	const char* Text;
	int Duration;
	DisplayConditions Condition;
};


std::map<int, SubtitleData> ExtraSubs
{
	/* Menu voices */
	
	//Default voice
	
	{ 0, { "\aSelect a memory card.", 90, Menu } },
	{ 1, { "\aSelect a file.", 60, Menu } },
	{ 2, { "\aThis is the adventure mode.\nStart your adventure here.", 180, Menu } },
	{ 3, { "\aThis is the trial mode.\nYou can practice here.", 180, Menu } },
	{ 4, { "\aSelect a character.", 90, Menu } },
	{ 5, { "\aHow to play as Sonic.", 120, Menu } },
	{ 6, { "\aHow to play as Tails.", 120, Menu } },
	{ 7, { "\aHow to play as Knuckles.", 120, Menu } },
	{ 8, { "\aHow to play as Amy.", 120, Menu } },
	{ 9, { "\aHow to play as E-102.", 120, Menu } },
	{ 10, { "\aHow to play as Big.", 120, Menu } },
	{ 11, { "\aThe rules for the action stages.", 120, Menu } },
	{ 12, { "\aSelect a stage.", 90, Menu } },
	{ 13, { "\aSelect a game.", 90, Menu } },
	{ 14, { "\aOptions.\nYou can customize various options.", 210, Menu } },
	{ 15, { "\aSound Test.\nYou can listen to various music tracks.", 240, Menu } },
	{ 16, { "\aThe memory card is not ready.", 120, Menu } },
	{ 17, { "\aThere is not enough memory\nin the memory card.", 150, Menu } },

	//Tikal (alternate)

	{ 18, { "\aSelect a memory card.", 90, Menu } },
	{ 19, { "\aSelect a file.", 90, Menu } },
	{ 20, { "\aAdventure mode.\nStart your adventure here.", 180, Menu } },
	{ 21, { "\aThis is the trial mode.\nYou can practice here.", 180, Menu } },
	{ 22, { "\aSelect a character.", 90, Menu } },
	{ 23, { "\aHow to play as Sonic.", 90, Menu } },
	{ 24, { "\aHow to play as Tails.", 90, Menu } },
	{ 25, { "\aHow to play as Knuckles.", 90, Menu } },
	{ 26, { "\aHow to play as Amy.", 90, Menu } },
	{ 27, { "\aHow to play as E-102.", 120, Menu } },
	{ 28, { "\aHow to play as Big.", 90, Menu } },
	{ 29, { "\aThe rules for the action stages.\nDon't forget to memorize it!", 240, Menu } },
	{ 30, { "\aWhich stage do you want to play?", 120, Menu } },
	{ 31, { "\aWhich game do you want to play?", 120, Menu } },
	{ 32, { "\aOptions.\nYou get to customize the features.", 180, Menu } },
	{ 33, { "\aSound Test. You get to listen\nto the music playing during the game.", 270, Menu } },
	{ 34, { "\aYou don't have a memory card set.", 120, Menu } },
	{ 35, { "\aYou don't have enough memory\nin the memory card.", 150, Menu } },

	//Sonic

	{ 36, { "\aSelect a memory card.", 90, Menu } },
	{ 37, { "\aSelect a file.", 60, Menu } },
	{ 38, { "\aAdventure mode.\nYou start your adventure here.", 180, Menu } },
	{ 39, { "\aTrial mode.\nYou get to play one stage.", 180, Menu } },
	{ 40, { "\aSelect your character.", 90, Menu } },
	{ 41, { "\aHow to play as me, Sonic.", 120, Menu } },
	{ 42, { "\aHow to play as Tails.", 90, Menu } },
	{ 43, { "\aHow to play as Knuckles.", 90, Menu } },
	{ 44, { "\aHow to play as Amy.", 90, Menu } },
	{ 45, { "\aHow to play as E-102 Gamma", 150, Menu } },
	{ 46, { "\aHow to play as Big.", 90, Menu } },
	{ 47, { "\aHow to clear the game.\nIt might be tough unless you know everything.", 240, Menu } },
	{ 48, { "\aSelect a stage.", 90, Menu } },
	{ 49, { "\aSelect a game.", 60, Menu } },
	{ 50, { "\aOptions.\nChoose the feature you want to edit.", 180, Menu } },
	{ 51, { "\aSound Test.\nYou get to listen to cool sounds.", 180, Menu } },
	{ 52, { "\aIs your memory card set correctly?", 120, Menu } },
	{ 53, { "\aHey! You don't have enough memory\nin the memory card.", 180, Menu } },

	//Tails

	{ 54, { "\aSelect a memory card.", 90, Menu } },
	{ 55, { "\aSelect a file.", 90, Menu } },
	{ 56, { "\aAdventure mode.\nStart your adventure here.", 180, Menu } },
	{ 57, { "\aTrial mode.\nYou get to play one stage.", 150, Menu } },
	{ 58, { "\aSelect your character.", 90, Menu } },
	{ 59, { "\aHow to play as Sonic.", 90, Menu } },
	{ 60, { "\aHow to play as me, Tails.", 120, Menu } },
	{ 61, { "\aHow to play as Knuckles.", 90, Menu } },
	{ 62, { "\aHow to play as Amy.", 90, Menu } },
	{ 63, { "\aHow to play as E-102 Gamma.", 150, Menu } },
	{ 64, { "\aHow to play as Big.", 90, Menu } },
	{ 65, { "\aHow to clear the game.\nTry to memorize it.", 180, Menu } },
	{ 66, { "\aSelect a stage.", 90, Menu } },
	{ 67, { "\aSelect a game.", 90, Menu } },
	{ 68, { "\aOptions.\nChoose the feature you want to edit.", 210, Menu } },
	{ 69, { "\aSound Test.\nYou get to listen to cool sounds.", 210, Menu } },
	{ 70, { "\aIs your memory card set correctly?", 120, Menu } },
	{ 71, { "\aYou don't have enough memory\nin the memory card.", 150, Menu } },

	//Knuckles

	{ 72, { "\aSelect a memory card.", 90, Menu } },
	{ 73, { "\aSelect a file.", 90, Menu } },
	{ 74, { "\aAdventure mode.\nStart your adventure here.", 180, Menu } },
	{ 75, { "\aTrial mode.\nYou get to play one stage.", 210, Menu } },
	{ 76, { "\aSelect your character.", 90, Menu } },
	{ 77, { "\aHow to play as Sonic.", 90, Menu } },
	{ 78, { "\aHow to play as Tails.", 90, Menu } },
	{ 79, { "\aHow to play as me, Knuckles.", 150, Menu } },
	{ 80, { "\aHow to play as Amy.", 90, Menu } },
	{ 81, { "\aHow to play as E-102 Gamma.", 150, Menu } },
	{ 82, { "\aHow to play as Big.", 90, Menu } },
	{ 83, { "\aHow to clear the game.\nBetter read it carefully.", 180, Menu } },
	{ 84, { "\aSelect a stage.", 60, Menu } },
	{ 85, { "\aSelect a game.", 60, Menu } },
	{ 86, { "\aOptions.\nChoose the feature you want to edit.", 210, Menu } },
	{ 87, { "\aSound Test.\nListen to some cool music.", 210, Menu } },
	{ 88, { "\aIs your memory card set correctly?", 120, Menu } },
	{ 89, { "\aYou don't have enough memory\nin the memory card.", 150, Menu } },

	//Amy

	{ 90, { "\aSelect a memory card.", 120, Menu } },
	{ 91, { "\aSelect a file.", 90, Menu } },
	{ 92, { "\aAdventure mode.\nStart your adventure here.", 180, Menu } },
	{ 93, { "\aTrial mode.\nYou get to play one stage.", 210, Menu } },
	{ 94, { "\aSelect your character.", 90, Menu } },
	{ 95, { "\aHow to play as Sonic.", 90, Menu } },
	{ 96, { "\aHow to play as Tails.", 90, Menu } },
	{ 97, { "\aHow to play as Knuckles.", 120, Menu } },
	{ 98, { "\aHow to play as me, Amy.", 120, Menu } },
	{ 99, { "\aHow to play as E-102 Gamma.", 150, Menu } },
	{ 100, { "\aHow to play as Big.", 90, Menu } },
	{ 101, { "\aHow to clear the game.\nMake sure you read it well.", 210, Menu } },
	{ 102, { "\aSelect a stage.", 90, Menu } },
	{ 103, { "\aSelect a game.", 90, Menu } },
	{ 104, { "\aOptions.\nYou get to edit different features.", 210, Menu } },
	{ 105, { "\aSound Test.\nYou can listen to the game music here.", 240, Menu } },
	{ 106, { "\aIs your memory card set correctly?", 120, Menu } },
	{ 107, { "\aYou don't have enough memory\nin the memory card.", 150, Menu } },

	//Gamma

	{ 108, { "\aSelect a memory card.", 120, Menu } },
	{ 109, { "\aSelect a file.", 90, Menu } },
	{ 110, { "\aAdventure mode.\nStart your adventure here.", 210, Menu } },
	{ 111, { "\aTrial mode.\nYou get to play one stage.", 210, Menu } },
	{ 112, { "\aSelect your character.", 120, Menu } },
	{ 113, { "\aHow to play as Sonic.", 120, Menu } },
	{ 114, { "\aHow to play as Tails.", 120, Menu } },
	{ 115, { "\aHow to play as Knuckles.", 120, Menu } },
	{ 116, { "\aHow to play as Amy.", 120, Menu } },
	{ 117, { "\aHow to play as me, E-102 Gamma.", 210, Menu } },
	{ 118, { "\aHow to play as Big.", 120, Menu } },
	{ 119, { "\aHow to clear the game.\nPlease input this information.", 300, Menu} },
	{ 120, { "\aSelect a stage.", 120, Menu } },
	{ 121, { "\aSelect a game.", 120, Menu } },
	{ 122, { "\aOptions.\nChoose the feature you wish to edit.", 240, Menu } },
	{ 123, { "\aSound Test.\nSelect to play background music.", 240, Menu } },
	{ 124, { "\aCannot find memory card.", 120, Menu } },
	{ 125, { "\aWarning! Not enough memory. Warning!", 210, Menu } },

	//Big

	{ 126, { "\aUmm... Which memory card?", 120, Menu } },
	{ 127, { "\aUmm... Which file?", 120, Menu } },
	{ 128, { "\aYou can start your adventure here.", 150, Menu } },
	{ 129, { "\aYou can play one stage.", 120, Menu } },
	{ 130, { "\aUmm... Which character?", 120, Menu } },
	{ 131, { "\aHow to play as Sonic.", 120, Menu } },
	{ 132, { "\aHow to play as Tails.", 120, Menu } },
	{ 133, { "\aHow to play as Knuckles.", 120, Menu } },
	{ 134, { "\aHow to play as Amy.", 120, Menu } },
	{ 135, { "\aHow to play as E-102 Gamma.", 180, Menu } },
	{ 136, { "\aHow to play as me, Big.", 150, Menu } },
	{ 137, { "\aHow to clear the game.\nUmm... Read it, okay?", 270, Menu } },
	{ 138, { "\aWhere do you want to play?", 120, Menu } },
	{ 139, { "\aWhat do you want to play?", 90, Menu } },
	{ 140, { "\aUmm... Options.\nChoose the feature you want to edit.", 270, Menu } },
	{ 141, { "\aSound Test.\nListen to the cool game music.", 240, Menu } },
	{ 142, { "\aIs your memory card set correctly?", 150, Menu } },
	{ 143, { "\aYou don't have enough memory\nin the memory card.", 180, Menu } },

	//Eggman

	{ 144, { "\aSelect a memory card.", 150, Menu } },
	{ 145, { "\aSelect a file.", 120, Menu } },
	{ 146, { "\aAdventure mode.\nStart your adventure here.", 210, Menu } },
	{ 147, { "\aTrial mode.\nYou get to play one stage.", 210, Menu } },
	{ 148, { "\aSelect your character.", 120, Menu } },
	{ 149, { "\aHow to play as that hedgehog.", 150, Menu } },
	{ 150, { "\aHow to play as that two-tailed fox.", 180, Menu } },
	{ 151, { "\aHow to play as that knucklehead.", 150, Menu } },
	{ 152, { "\aHow to play as that kid, Amy.", 180, Menu } },
	{ 153, { "\aHow to play as my creation,\nE-102 Gamma.", 240, Menu } },
	{ 154, { "\aHow to play as that fat cat.", 150, Menu } },
	{ 155, { "\aHow to clear the game.\nStop reading and start the game!", 300, Menu } },
	{ 156, { "\aSo, what stage do you want to play?", 180, Menu } },
	{ 157, { "\aSo, what game do you want to play?", 180, Menu } },
	{ 158, { "\aOptions.\nGo ahead, edit it the way you want.", 240, Menu } },
	{ 159, { "\aSound Test.\nYou can listen to the game music here.", 270, Menu } },
	{ 160, { "\aIs your memory card set correctly?", 150, Menu } },
	{ 161, { "\aYou don't have enough memory\nin the memory card.", 180, Menu } },


	/* Character select lines */

	{ 1837, { "\aLet's get 'em!", 60, Menu } }, //Sonic
	{ 1800, { "\aHere I come, Sonic!", 90, Menu } }, //Tails
	{ 1787, { "\aOkay! Let's go!", 90, Menu } }, //Knuckles
	{ 1730, { "\aIt's my turn now!", 90, Menu } }, //Amy
	{ 1767, { "\aPreparation complete.", 90, Menu } }, //Gamma
	{ 1744, { "\aHold on, Froggy! I'm coming!", 150, Menu } }, //Big


	/* Common idle lines */

	{ 390, { "\aBetter get going!", 60, Gameplay } }, //Sonic
	{ 392, { "\aI’d better hurry!", 60, Gameplay } }, //Knuckles
	{ 393, { "\aI'm so tired!", 90, Gameplay } }, //Amy
	{ 394, { "\aCombat system activated.", 120, Gameplay } }, //Gamma
	{ 395, { "\aHey, I'm kinda hungry.", 120, Gameplay } }, //Big


	/* Adventure fields idle lines */
	
	//Station Square - station area

	{ 288, { "\aThis station must be\nthe center of the city.", 120, Gameplay } }, //Sonic
	{ 289, { "\aTrains are cool too!", 90, Gameplay } }, //Tails
	{ 290, { "\aSo this is Station Square?", 120, Gameplay } }, //Knuckles
	{ 291, { "\aIt's nice to have an ocean nearby.", 120, Gameplay } }, //Amy
	{ 292, { "\aI wonder if there are any fish here.", 150, Gameplay } }, //Big
	{ 293, { "\aSearching Station Square...", 120, Gameplay } }, //Gamma

	//Station Square - city hall area

	{ 274, { "\aThis area has sure changed a lot.", 120, Gameplay } }, //Sonic
	{ 275, { "\aBoy, I'm hungry.", 90, Gameplay } }, //Tails
	{ 276, { "\aI hate big cities.", 90, Gameplay } }, //Knuckles
	{ 277, { "\aI wanna go shopping!", 90, Gameplay } }, //Amy
	{ 278, { "\aEveryone seems very busy.", 150, Gameplay } }, //Big
	{ 279, { "\aMultiple life form readings detected.", 150, Gameplay } }, //Gamma

	//Station Square - sewers

	{ 286, { "\aThis makes me feel like a rat.", 90, Gameplay } }, //Sonic
	{ 287, { "\aWow, it's dark in here!", 120, Gameplay } }, //Big

	//Station Square - Twinkle Park entrance

	{ 300, { "\aI'm not too fond of places like this.", 150, Gameplay } }, //Sonic
	{ 301, { "\aHmm, I can't get into the park!", 150, Gameplay } }, //Tails
	{ 302, { "\aWhat is this place?", 90, Gameplay } }, //Knuckles
	{ 303, { "\aI'm getting excited!", 90, Gameplay } }, //Amy
	{ 304, { "\aTwinkle Park?", 90, Gameplay } }, //Big
	{ 305, { "\aBumper car area confirmed.", 150, Gameplay } }, //Gamma

	//Station Square - hotel

	{ 294, { "\aHey-hey! There's no time to rest!", 120, Gameplay } }, //Sonic
	{ 295, { "\aThis hotel is nice!", 90, Gameplay } }, //Tails
	{ 296, { "\aGreat, a resort hotel.", 120, Gameplay } }, //Knuckles
	{ 297, { "\aI'd love to vacation here!", 120, Gameplay } }, //Amy
	{ 298, { "\aWhat a huge house!", 120, Gameplay } }, //Big
	{ 299, { "\aCombat system disengaged.", 120, Gameplay } }, //Gamma

	//Station Square - casino area / station

	{ 280, { "\aThere's no time for playing around!", 120, Gameplay } }, //Sonic
	{ 281, { "\aWhat a big city!", 90, Gameplay } }, //Tails
	{ 282, { "\aThis place is noisy!", 90, Gameplay } }, //Knuckles
	{ 283, { "\aThis city never changes!", 120, Gameplay } }, //Amy
	{ 284, { "\aI wonder where Froggy is.", 120, Gameplay } }, //Big
	{ 285, { "\aTrain to Mystic Ruins confirmed.", 150, Gameplay } }, //Gamma

	//Mystic Ruins - station area

	{ 306, { "\aIt must get pretty lonely here.", 90, Gameplay } }, //Sonic
	{ 307, { "\aThis area sure has changed\nafter they built this station.", 180, Gameplay } }, //Tails
	{ 308, { "\aI've got to find the Master Emerald.", 180, Gameplay } }, //Knuckles
	{ 309, { "\aI don't like places like this.", 150, Gameplay } }, //Amy
	{ 310, { "\aFroggy, where are you?", 180, Gameplay } }, //Big
	{ 311, { "\aSearching Mystic Ruins...", 120, Gameplay } }, //Gamma

	//Mystic Ruins - Angel Island

	{ 312, { "\aSo, this is Angel Island!", 120, Gameplay } }, //Sonic
	{ 313, { "\aI've got to get this island\nairborne again.", 150, Gameplay } }, //Knuckles
	{ 314, { "\aArriving at Angel Island.", 120, Gameplay } }, //Gamma

	//Mystic Ruins - jungle

	{ 315, { "\aNow this is more like it!", 90, Gameplay } }, //Sonic
	{ 316, { "\aWhich way did I come from?", 90, Gameplay } }, //Tails
	{ 317, { "\aThis place gives me\nthe strangest feeling.", 180, Gameplay } }, //Knuckles
	{ 318, { "\aThis place is great!", 90, Gameplay } }, //Amy
	{ 319, { "\aMaybe I'll go home...", 120, Gameplay } }, //Big
	{ 320, { "\aTemperature increasing.\nCooling system activated.", 210, Gameplay } }, //Gamma

	//Final Egg entrance

	{ 321, { "\aThis must be Robotnik's base!", 120, Gameplay } }, //Sonic
	{ 322, { "\aSo this is Robotnik's fortress!", 120, Gameplay } }, //Tails
	{ 323, { "\aLocation: place of creation.", 120, Gameplay } }, //Knuckles, wtf?
	{ 324, { "\aI'm going to do my best, Sonic.", 120, Gameplay } }, //Amy
	{ 325, { "\aThe place I was created.", 120, Gameplay } }, //Gamma

	//Past (normal)

	{ 326, { "\aWhat is this place?", 60, Gameplay } }, //Tails
	{ 327, { "\aWhere am I?", 60, Gameplay } }, //Knuckles
	{ 328, { "\aHey! Where am I?", 90, Gameplay } }, //Amy
	{ 329, { "\aUmm... Where am I?", 120, Gameplay } }, //Big
	{ 330, { "\aData not available.\nCurrent location unknown.", 210, Gameplay } }, //Gamma

	//Past (fire)

	{ 331, { "\aThat's bad!", 60, Gameplay } }, //Sonic
	{ 332, { "\aWhy?", 60, Gameplay } }, //Knuckles

	//Egg Carrier - outside

	{ 333, { "\aThis ship is too much!", 90, Gameplay } }, //Sonic
	{ 334, { "\aThis ship's cool!", 90, Gameplay } }, //Tails
	{ 335, { "\aHow does this 'thing' fly?", 120, Gameplay } }, //Knuckles
	{ 336, { "\aI wonder why that man bothered\nmaking things like this.", 210, Gameplay } }, //Amy
	{ 337, { "\aContinuing mission.", 90, Gameplay } }, //Gamma
	{ 338, { "\aUmm... How does this ship fly?", 150, Gameplay } }, //Big

	//Egg Carrier - inside

	{ 339, { "\aThis ship is just too weird!", 120, Gameplay } }, //Sonic
	{ 340, { "\aI wanna make a ship like this one day!", 120, Gameplay } }, //Tails
	{ 341, { "\aWhere's the exit?", 60, Gameplay } }, //Knuckles
	{ 342, { "\aBetter tread lightly\nso they don't hear us.", 150, Gameplay } }, //Amy
	{ 343, { "\aContinuing mission.", 90, Gameplay } }, //Gamma
	{ 344, { "\aUmm... Exits? Exits?", 150, Gameplay } }, //Big


	/* Action stages idle lines */

	//Emerald Coast

	{ 227, { "\aAll I have to do is cruise this coast!", 120, Gameplay } }, //Sonic
	{ 228, { "\aFrog life form detected.", 120, Gameplay } }, //Gamma
	{ 229, { "\aWhat a nice breeze!", 90, Gameplay } }, //Sonic
	{ 230, { "\aWhat a big lake!", 120, Gameplay } }, //Big

	//Windy Valley

	{ 231, { "\aI can hear the wind in the distance.", 120, Gameplay } }, //Sonic
	{ 232, { "\aE-103 detected.", 120, Gameplay } }, //Gamma
	{ 233, { "\aI'd better get outta here!", 90, Gameplay } }, //Sonic
	{ 234, { "\aWow, it's pretty high up!", 90, Gameplay } }, //Sonic
	{ 235, { "\aI wonder where Sonic is.", 90, Gameplay } }, //Tails

	//Casinopolis

	{ 236, { "\aHmm, pinball!", 90, Gameplay } }, //Sonic
	{ 237, { "\aIs so bright here!", 90, Gameplay } }, //Knuckles
	{ 238, { "\aWhat's this smell?\nSmells like trash!", 180, Gameplay } }, //Sonic

	//Icecap

	{ 239, { "\aIt's getting cold!", 60, Gameplay } }, //Sonic
	{ 240, { "\aMan, everything's frozen!", 120, Gameplay } }, //Sonic
	{ 241, { "\aThe ice looks kinda tasty!", 120, Gameplay } }, //Big
	{ 242, { "\aWatch and learn!", 90, Gameplay } }, //Sonic
	{ 243, { "\aTime to jam!", 60, Gameplay } }, //Tails

	//Twinkle Park

	{ 244, { "\aThis must be the entrance\nto the bumper car area.", 150, Gameplay } }, //Sonic
	{ 245, { "\aLooks like nobody's around.", 90, Gameplay } }, //Sonic
	{ 246, { "\aI wonder if the fish are biting.", 150, Gameplay } }, //Big
	{ 247, { "\aI wonder where Sonic went.", 90, Gameplay } }, //Amy

	//Speed Highway

	{ 248, { "\aTime for some supersonic speed!", 120, Gameplay } }, //Sonic
	{ 249, { "\aWhere's Robotnik?", 60, Gameplay } }, //Tails
	{ 250, { "\aHey, there's no time to relax!", 120, Gameplay } }, //Sonic
	{ 251, { "\aThe cars are so slow!\nThey look like they're not moving.", 150, Gameplay } }, //Sonic
	{ 252, { "\aThe pieces for the Master Emerald\nmust be somewhere in this city.", 210, Gameplay } }, //Knuckles

	//Red Mountain

	{ 253, { "\aWhere did the Egg Carrier go?", 90, Gameplay } }, //Sonic
	{ 254, { "\aWhoa! That lava looks really, really hot!", 150, Gameplay } }, //Sonic
	{ 255, { "\aE-104 detected.", 120, Gameplay } }, //Gamma
	{ 256, { "\aI sure don't wanna fall off!", 90, Gameplay } }, //Knuckles

	//Sky Deck

	{ 257, { "\aWhoa-whoa!\nI sure don't wanna fall off from here!", 180, Gameplay } }, //Sonic
	{ 258, { "\aIt's pretty high!\nMy legs are shaking!", 180, Gameplay } }, //Tails
	{ 259, { "\aShoot! I hate this wind!", 120, Gameplay } }, //Sonic
	{ 260, { "\aHey, what's up with this ship?", 90, Gameplay } }, //Sonic
	{ 261, { "\aOkay now, where's the treasure?", 120, Gameplay } }, //Knuckles

	//Lost World

	{ 262, { "\aIt's mighty quiet here.", 90, Gameplay } }, //Sonic
	{ 263, { "\aWhere am I?", 60, Gameplay } }, //Sonic
	{ 264, { "\aThe Emerald is somewhere in this room.", 150, Gameplay } }, //Knuckles

	//Final Egg

	{ 265, { "\aI smell oil.", 90, Gameplay } }, //Sonic
	{ 266, { "\aHey, little birdie. Are you okay?", 120, Gameplay } }, //Amy
	{ 267, { "\aWhere does this end?", 60, Gameplay } }, //Sonic
	{ 268, { "\aJust you wait, Robotnik!", 90, Gameplay } }, //Sonic
	{ 269, { "\aBlue hedgehog: enemy.", 120, Gameplay } }, //Gamma

	//Hot Shelter

	{ 270, { "\aI really hate Robotnik!", 90, Gameplay } }, //Amy
	{ 271, { "\aI wonder if Froggy's okay.", 120, Gameplay } }, //Big
	{ 272, { "\aUmm... Which way do I go now?", 120, Gameplay } }, //Amy
	{ 273, { "\aE-105 detected.", 120, Gameplay } }, //Gamma


	/* Boss battle idle lines */

	//Sonic

	{ 368, { "\aHe can't be invincible, can he?", 120, Gameplay } }, //Chaos 0
	{ 369, { "\aYou're no match for me!", 90, Gameplay } }, //Egg Hornet
	{ 370, { "\aWhat's up, Knuckles?", 60, Gameplay } }, //vs Knuckles
	{ 371, { "\aHey! This time you're not getting away!", 120, Gameplay } }, //Chaos 4
	{ 372, { "\aNot bad, not bad at all!", 120, Gameplay } }, //Gamma
	{ 373, { "\aWhere can his weak spot be?", 90, Gameplay } }, //Chaos 6
	{ 374, { "\aYou've had your fun.\nNow it's my turn!", 150, Gameplay } }, //Egg Viper

	//Tails

	{ 375, { "\aCome on, Tails! You can do it!", 120, Gameplay } }, //Egg Hornet	
	{ 376, { "\aH-hey, wait a minute!", 120, Gameplay } }, //vs Knuckles
	{ 377, { "\aYou liquid monster!", 120, Gameplay } }, //Chaos 4
	{ 378, { "\aSomething's different about this robot.", 150, Gameplay } }, //vs Gamma
	{ 379, { "\aI know I can do it by myself!", 150, Gameplay } }, //Egg Walker

	//Knuckles

	{ 380, { "\aThat's it! I've had enough!", 120, Gameplay } }, //Chaos 2
	{ 381, { "\aHand over the Emerald!", 60, Gameplay } }, //vs Sonic
	{ 382, { "\aWhen will you ever learn?", 90, Gameplay } }, //Chaos 4
	{ 383, { "\aThis time, you're finished!", 120, Gameplay } }, //Chaos 6

	//Amy

	{ 384, { "\aYou're gonna pay\nfor what you've done!", 150, Gameplay } }, //Zero

	//Gamma

	{ 385, { "\aTarget confirmed.", 90, Gameplay } }, //E-101
	{ 386, { "\aBlue hedgehog: enemy.", 120, Gameplay } }, //vs Sonic
	{ 387, { "\aBeta!", 60, Gameplay } }, //E-101 mk.2

	//Super Sonic

	{ 388, { "\aI'll show you what\nthe Chaos Emeralds can really do!", 180, Gameplay } },
	{ 389, { "\aSo, that's his core!", 90, Gameplay } },


	/* Chao Garden idle lines */

	//Sonic

	{ 348, { "\aWhat a peaceful place!", 90, Gameplay } },
	{ 349, { "\aYo! You guys been good?", 90, Gameplay } },
	{ 350, { "\aJust remember, no fighting!", 120, Gameplay } },

	//Tails

	{ 351, { "\aI really feel at home here!", 90, Gameplay } },
	{ 352, { "\aHow's it goin' guys?", 90, Gameplay } },
	{ 353, { "\aYou guys are the best!", 90, Gameplay } },

	//Knuckles

	{ 354, { "\aI guess there are no Emeralds here.", 120, Gameplay } },
	{ 355, { "\aI have this feeling\nI've met these guys somewhere.", 180, Gameplay } },
	{ 356, { "\aThis place reminds me of home.\nWonder why?", 270, Gameplay } },

	//Amy

	{ 357, { "\aThis place is so relaxing!", 150, Gameplay } },
	{ 358, { "\a*yawn* I'm getting sleepy.", 150, Gameplay } },
	{ 359, { "\aI don't wanna see you guys fighting!", 120, Gameplay } },
	{ 360, { "\aIf only Sonic were here...", 120, Gameplay } },

	//Gamma

	{ 361, { "\aLocation: unknown.", 120, Gameplay } },
	{ 362, { "\aCombat system disengaged.", 150, Gameplay } },
	{ 363, { "\aSensors detecting life.", 120, Gameplay } },

	//Big

	{ 364, { "\aLooking good, buddy?", 90, Gameplay } },
	{ 365, { "\aAre you guys okay?", 90, Gameplay } },
	{ 366, { "\aHey, I'm gettin' hungry again.", 150, Gameplay } },
	{ 367, { "\aI wanna go fishing!", 120, Gameplay } },


	/* Mini games idle lines */

	//Sand Hill

	{ 345, { "\aShoot! I got sand in my eye!", 120, Gameplay } }, //Sonic
	{ 346, { "\aThis sand is kinda loose!", 90, Gameplay } }, //Tails

	//Hedgehog Hammer

	{ 347, { "\aHey, come on!", 60, Gameplay } }, //Amy


	/* Sky Chase sequences */

	//Sky Chase 1 - before Egg Cannon fires
	
	{ 491, { "\aWe did it!", 60, Gameplay } }, //Tails
	{ 716, { "\aWe did it!", 60, Gameplay } }, //Tails (duplicate?)
	{ 492, { "\aWay to go, Tails!", 90, Gameplay } }, //Sonic	
	{ 717, { "\aWay to go, Tails!", 90, Gameplay } }, //Sonic (duplicate?)

	//Sky Chase 2 - before transformation

	{ 765, { "\aHa-ha! So far so good!", 150, Gameplay } },
	{ 766, { "\aHope you know what you're doing.", 90, Gameplay } },
	{ 767, { "\aYou bet! Watch this!", 120, Gameplay } },

	//Sky Chase 2 - transformation sequence alternate lines (they also match the regular lines in Japanese)

	{ 530, { "\aIt's looking good so far!", 90, Gameplay } },
	{ 531, { "\aHere it comes again!", 60, Gameplay } },
	{ 532, { "\aDon't worry, I'm ready.", 90, Gameplay } },
	{ 533, { "\aTransformation mode: engaged!", 180, Gameplay } },
	{ 534, { "\aWhooooa!", 90, Gameplay } },
	{ 535, { "\aReady? Let's go!", 150, Gameplay } },


	/* Action stages voices */

	//All Tails' stages except for Speed Highway (Sonic's voice)

	{ 205, { "\aCome on, Tails!", 60, Gameplay } },
	{ 206, { "\aHey-hey-hey!", 60, Gameplay } },
	{ 207, { "\aAll right, Tails!", 90, Gameplay } },
	{ 208, { "\aHey, Tails!", 60, Gameplay } },
	{ 209, { "\aYou made it!", 60, Gameplay } },
	{ 210, { "\aCome on!", 60, Gameplay } },
	{ 211, { "\aSee you later, Tails!", 90, Gameplay } },
	{ 212, { "\aHurry up, Tails!", 60, Gameplay } },
	{ 213, { "\aHooray!", 60, Gameplay } },
	{ 214, { "\aI got it!", 60, Gameplay } },
	{ 215, { "\aYou don't have any rings, Tails.\nWatch out!", 150, Gameplay } },

	//Speed Highway (Eggman's voice)

	{ 216, { "\aYou think you can keep up with me?", 120, Gameplay } },
	{ 217, { "\aI've got you now, Tails!", 120, Gameplay } },
	{ 218, { "\aWhat? He's caught up!", 120, Gameplay } },
	{ 219, { "\aYou little fox!", 120, Gameplay } },
	{ 220, { "\aTails! Wait for me!", 120, Gameplay } },
	{ 221, { "\aWha-ha-ha-ha-ha-ha-ha-ha-ha!", 120, Gameplay } },
	{ 222, { "\aGoodbye, Tails!", 90, Gameplay } },
	{ 223, { "\aI'll take their whole city with me!", 150, Gameplay } },
	{ 224, { "\aYou'll never defeat me!", 120, Gameplay } },
	{ 225, { "\aI win! Wha-ha-ha-ha-ha-ha-ha-ha!", 180, Gameplay } },
	{ 226, { "\aGive up now, Tails!", 120, Gameplay } },

	//Final Egg

	{ 1588, { "\aEmergency! Emergency!\nDispose of any intruders!", 300, Gameplay } }, //intercom
	{ 1589, { "\aEmergency! Emergency!\nDispose of any intruders!", 300, Gameplay } },
	{ 1590, { "\aFinal Egg: Level 2 isolation wall open.", 330, Gameplay } },
	{ 1591, { "\aFinal Egg: Level 2 isolation wall open.", 330, Gameplay } },
	{ 1592, { "\aDestroy the targets,\nand you'll get extra time.", 210, Gameplay } }, //Eggman to Gamma
	{ 1593, { "\aDestroy the Sonic target.", 150, Gameplay } },


	/* Boss voices */

	//vs character

	{ 164, { "\aOh no!", 60, Gameplay } }, //Knuckles
	{ 165, { "\aOh no!", 60, Gameplay } }, //Sonic
	{ 166, { "\aGive it your best shot!", 90, Gameplay } }, //Knuckles
	{ 167, { "\aI've had enough!", 60, Gameplay } }, //Sonic
	{ 168, { "\aAll right, put 'em up!", 90, Gameplay } }, //Knuckles
	{ 169, { "\aResistance is futile.", 90, Gameplay } }, //Gamma
	{ 170, { "\aOh no!", 60, Gameplay } }, //Sonic

	//Eggman bosses

	{ 171, { "\aAll systems - full power!", 150, Gameplay } },
	{ 172, { "\aAhhh!", 60, Gameplay } },
	{ 173, { "\aAh-ha!", 60, Gameplay } },
	{ 174, { "\aGet a load of this!", 90, Gameplay } },
	{ 175, { "\aNo way! I can't believe this!", 180, Gameplay } },
	{ 176, { "\aAhhh!\nHe's not gonna get away with this!", 180, Gameplay } },
	{ 177, { "\aNo way! I can't believe this!", 180, Gameplay } },
	{ 178, { "\aHo-ho! It's no use. Give up!", 180, Gameplay } },
	{ 1902, { "\aWhoo-ha-ha! See if you can\nmake it through here, Sonic!", 210, Gameplay } }, //Egg Viper
	{ 1903, { "\aTake this!", 60, Gameplay } },


	/* Adventure fields announcers */

	//Station Square

	{ 1567, { "\aPlease board the train\nand wait for departure.", 210, Gameplay } },
	{ 1568, { "\aPlease board the train\nand wait for departure.", 210, Gameplay } },
	{ 1569, { "\aThe train headed for the Mystic Ruins\nwill be departing soon.", 270, Gameplay } },
	{ 1570, { "\aThe train headed for the Mystic Ruins\nwill be departing soon.", 270, Gameplay } },
	{ 1571, { "\aA train will be arriving soon.\nPlease stand back.", 270, Gameplay } },
	{ 1572, { "\aA train will be arriving soon.\nPlease stand back.", 270, Gameplay } },
	{ 1573, { "\aNo trains are currently in service.", 180, Gameplay } },
	{ 1574, { "\aNo trains are currently in service.", 180, Gameplay } },

	//Twinkle Park entrance

	{ 1575, { "\aWelcome to Twinkle Park!", 150, Gameplay } },

	//Mystic Ruins

	{ 1654, { "\aPassengers are requested\nto wait onboard the train.", 210, Gameplay } },
	{ 1655, { "\aThe train headed for Station Square\nwill be departing soon.", 270, Gameplay } },
	{ 1656, { "\aA train will be arriving soon.\nPlease stand back.", 300, Gameplay } },
	{ 1657, { "\aNo trains are currently in service.", 210, Gameplay } },


	/* Character specific gameplay voices */

	//Sonic
	
	{ 1838, { "\aYes!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1839, { "\aWoohoo!", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1840, { "\aYes.", 60, Gameplay } }, //stage clear
	{ 1841, { "\aHey, pump it up!", 90, Gameplay } }, //bad clear
	{ 1842, { "\a*whistles* Sweet!", 90, Gameplay } }, //good clear
	{ 1843, { "\aHey, I'll play with you some other time!", 120, Gameplay } }, //boss clear
	{ 1844, { "\aYeah, not bad!", 60, Gameplay } }, //normal clear
	{ 1845, { "\aHey, let go!", 60, Gameplay } }, //captured

	//Tails

	{ 1801, { "\aWooo!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1802, { "\aAll right!", 60, Gameplay } }, //Twinkle Circuit/Icecap jump
	{ 1803, { "\aYeeaah!", 90, Gameplay } }, //stage clear
	{ 1804, { "\aPhew! I made it in time!", 120, Gameplay } }, //bad clear
	{ 1805, { "\aI did it, Sonic!", 90, Gameplay } }, //good clear
	{ 1806, { "\aAll right, I did it!", 90, Gameplay } }, //boss clear
	{ 1807, { "\aThat wasn't too bad.", 90, Gameplay } }, //normal clear
	{ 1808, { "\aHey!", 60, Gameplay } }, //captured

	//Knuckles

	{ 1788, { "\aYeeah!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1789, { "\aWhoa!", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1790, { "\aFound it!", 60, Gameplay } }, //stage clear
	{ 1791, { "\aI can do better than that.", 90, Gameplay } }, //bad clear
	{ 1792, { "\aThat was easy.", 90, Gameplay } }, //good clear
	{ 1793, { "\aIs that all you've got?", 90, Gameplay } }, //boss clear
	{ 1794, { "\aHuh. Good enough.", 90, Gameplay } }, //normal clear
	{ 1795, { "\aOhh!", 60, Gameplay } }, //captured
	
	//Amy

	{ 1731, { "\aAll right!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1732, { "\aYaaay!", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1733, { "\aAll right!", 90, Gameplay } }, //stage clear
	{ 1734, { "\a*phew* That was close!", 150, Gameplay } }, //bad clear
	{ 1735, { "\aSee? I can do this!", 120, Gameplay } }, //boss clear
	{ 1736, { "\aI'm free!", 90, Gameplay } }, //normal clear
	{ 1737, { "\aWow! I'm good!", 120, Gameplay } }, //good clear
	{ 1738, { "\aHey, let go of me!", 120, Gameplay } }, //captured

	//Big

	{ 1746, { "\aHmm!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1747, { "\aFroggy!", 90, Gameplay } }, //stage clear
	{ 1748, { "\aMaybe next time.", 120, Gameplay } }, //bad clear
	{ 1749, { "\aWhat a get!", 60, Gameplay } }, //good clear
	{ 1750, { "\aFroggy! Are you okay?", 150, Gameplay } }, //boss clear
	{ 1751, { "\aNot too bad!", 90, Gameplay } }, //normal clear
	{ 1758, { "\aI got a fish!", 90, Gameplay } }, //got fish
	{ 1759, { "\aSomething's biting!", 90, Gameplay } }, //hit

	//Gamma

	{ 1768, { "\aDriving complete.", 90, Gameplay } }, //Twinkle Circuit clear
	{ 1770, { "\aMission complete.", 90, Gameplay } }, //stage clear
	{ 1771, { "\aE-101 Beta: rescue complete.", 210, Gameplay } }, //Beta mk.2 clear
	{ 1772, { "\aFrog capture complete.", 120, Gameplay } }, //Emerald Coast clear
	{ 1773, { "\aE-105 Zeta: rescue complete.", 210, Gameplay } }, //Hot Shelter clear
	{ 1774, { "\aE-104 Epsilon: rescue complete.", 210, Gameplay } }, //Red Mountain clear
	{ 1775, { "\aE-103 Delta: rescue complete.", 210, Gameplay } }, //Windy Valley clear
	{ 1777, { "\aRunning impossible.", 90, Gameplay } }, //captured
	{ 1778, { "\aMission failed.", 90, Gameplay } }, //died
	{ 1786, { "\aActivity ceased.", 90, Gameplay } }, //time over


	/* Beta restores */

	//Big's unused fishing lines

	{ 1763, { "\aGeez, it's small.", 90, Menu } }, //small fish
	{ 1761, { "\aOh well. It's okay.", 120, Menu } }, //medium-sized fish
	{ 1745, { "\aWow, it's big!", 120, Menu } }, //large fish
	{ 1753, { "\aOh no.", 60, Menu } }, //failed attempt
	{ 1756, { "\aOh no!", 90, Menu } }, //failed attempt
	{ 1876, { "\aOkay! One more time!", 120, Menu } }, //try again
	{ 1877, { "\aAlmost got it!\nOkay, once more.", 180, Menu } }, //try again

	//Final Egg 1 (Sonic) intercom

	{ 1706, { "\aIntruder alert! Intruder alert!\nEgg Keepers, report to battle stations!", 360, Menu } },
	{ 1707, { "\aIntruder alert! Intruder alert!\nEgg Keepers, report to battle stations!", 360, Menu } },

	//Final Egg (Amy) Eggman's taunts

	{ 1984, { "\aHa-ha-ha-ha-ha... Wrong way.", 150, Gameplay } },
	{ 1985, { "\aHa-ha-ha-ha... Wrong again.", 120, Gameplay } },
	{ 1986, { "\aWho-ha-ha! Why don't you give up?", 150, Gameplay } },

	//Sky Deck (probably) unused lines

	{ 1704, { "\aEmergency! Emergency!\nDispose of any intruders!", 330, Gameplay } }, //intercom
	{ 1705, { "\aEmergency! Emergency!\nDispose of any intruders!", 330, Gameplay } },
	{ 1727, { "\aWarning: strong winds approaching.", 210, Gameplay } },
	{ 1728, { "\aStrong wind alert canceled.", 180, Gameplay } },
	{ 1723, { "\aDescending into the clouds.\nSlow the ship down.", 360, Gameplay } }, //Eggman orders
	{ 1724, { "\aDescending into the clouds.\nSlow the ship down.", 360, Gameplay } },
	{ 1725, { "\aGo up. Full speed ahead!", 300, Gameplay } },
	{ 1726, { "\aWhat a persistent hedgehog!\nI'll shake you off.", 300, Gameplay } }, //Eggman ship tilt

	//vs E-101 mk.2 unused line

	{ 1681, { "\aYou must stop, Beta.", 90, Gameplay } },

	//characters taking damage with no rings

	{ 1809, { "\aSonic...", 60, Gameplay } }, //Tails
	{ 1796, { "\aI'm a goner.", 90, Gameplay } }, //Knuckles
	{ 1740, { "\aOh no!", 60, Gameplay } }, //Amy
	{ 1755, { "\aOof!", 60, Gameplay } }, //Big

	//Icecap (Tails) alternate snowboarding voices

	{ 1823, { "\aYou made it!", 60, Gameplay } },
	{ 1824, { "\aYou got it!", 60, Gameplay } },
	{ 1825, { "\aI made it!", 60, Gameplay } },
	{ 1826, { "\aI got it!", 60, Gameplay } },
	{ 1827, { "\aGood going!", 60, Gameplay } },
	{ 1828, { "\aHey-hey-hey!", 60, Gameplay } },
	{ 1829, { "\aCome on!", 60, Gameplay } },
	{ 1830, { "\aI win!", 60, Gameplay } },
	{ 1831, { "\aLet's get going!", 60, Gameplay } },
	{ 1832, { "\aHang in there!", 60, Gameplay } },
	{ 1833, { "\aWait-wait-wait!", 60, Gameplay } },
	{ 1834, { "\aHold it!", 60, Gameplay } },
	{ 1835, { "\aHooray!", 60, Gameplay } },
	{ 1836, { "\aOkey-dokey!", 60, Gameplay } },

	//Perfect Chaos unused Tikal's cheers

	{ 1713, { "\aSonic! It's up to you now.", 150, Gameplay } },
	{ 1714, { "\aBe brave, blue hedgehog.", 120, Gameplay } },
	{ 1716, { "\aIn order to stay as Super Sonic,\nyou'll need rings!", 180, Gameplay } },
};

const char* SkyChase1EggCannon[] = { "\aTime for a little power play of my own!\nEgg Cannon ready... FIRE!", "\aAah, we're hit!\nYeah! Woaaaaaah!", NULL }; //id 187
const char* SkyChase2Transformation[] = { "\aTransforming now!", "\aWoaaah!", "\aLet's do it!", NULL }; //id 2025


void DisplayGameplaySubtitle(int id)
{
	Buffer[0] = ExtraSubs[id].Text;
	DisplayHintText(Buffer, ExtraSubs[id].Duration);
}

void SetUpMenuSubtitle(int id)
{
	strcpy_s(TextBuffer, ExtraSubs[id].Text);
	SubtitleDisplayFrameCount = 1;
	SubtitleDuration = ExtraSubs[id].Duration;
}


void DisplaySubtitle(int id)
{
	if (id == 187)
	{
		DisplayHintText(SkyChase1EggCannon, 660);
	}
	else if (id == 2025)
	{
		DisplayHintText(SkyChase2Transformation, 270);
	}
	
	if (!ExtraSubs.count(id)) return;
	
	if (ExtraSubs[id].Condition == Menu)
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

	if (TextLanguage == Languages_English)
	{
		DisplaySubtitle(id);
	}
}


void InitExtraSubs()
{
	WriteJump((void*)0x425710, PlayVoice_ExtraSub);
	WriteData((char*)0x40BC9A, (char)54); //changing the text box height for menu screens so two lines would fit properly
}


/* OnFrame stuff */

void DisplayMenuSubtitleForOneFrame()
{
	if (SubtitleDisplayFrameCount > 0 && SubtitleDisplayFrameCount <= SubtitleDuration)
	{
		sub_40BC80();
		DoSomethingRelatedToText_(TextBuffer);
		SubtitleDisplayFrameCount++;
	}
}

void ClearSubtitle()
{
	if (SubtitleDisplayFrameCount > SubtitleDuration)
	{
		SubtitleDisplayFrameCount = 0;
		SubtitleDuration = 0;
	}
}


void DisplaySubtitleOnFrame()
{
	DisplayMenuSubtitleForOneFrame();
	ClearSubtitle();
}