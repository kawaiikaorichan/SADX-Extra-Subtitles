#pragma once


const char* SkyChase1_EnglishRetranslated[] = { "\aDon't you even think you've already won!", "\aEgg Cannon ready!", "\aAnd... FIRE!", "\aAah, we're hit!", "\aWoaaaaaah!" };
const char* SkyChase2_EnglishRetranslated[] = { "\aSystem mode: change!", "\aWhooooa!", "\aAll right! Here we go!", NULL };

std::map<int, SubtitleData> ExtraSubs_EnglishRetranslated
{
	/* Menu voices */

	//Default voice

	{ 0, { "\aSelect a memory card.", 120, Menu } },
	{ 1, { "\aSelect a file.", 90, Menu } },
	{ 2, { "\aThis is the Adventure mode\nwhere you can play through the story.", 180, Menu } },
	{ 3, { "\aThis is the Trial mode\nwhere you can play one stage at a time.", 180, Menu } },
	{ 4, { "\aSelect a character.", 90, Menu } },
	{ 5, { "\aHow to play as Sonic.", 120, Menu } },
	{ 6, { "\aHow to play as Tails.", 120, Menu } },
	{ 7, { "\aHow to play as Knuckles.", 120, Menu } },
	{ 8, { "\aHow to play as Amy.", 120, Menu } },
	{ 9, { "\aHow to play as E-102 Gamma.", 120, Menu } },
	{ 10, { "\aHow to play as Big.", 120, Menu } },
	{ 11, { "\aExplanation of the action stages rules.", 150, Menu } },
	{ 12, { "\aSelect a stage.", 90, Menu } },
	{ 13, { "\aSelect a mini game.", 90, Menu } },
	{ 14, { "\aThis is the Options screen.\nYou can change settings here.", 210, Menu } },
	{ 15, { "\aThis is the Sound Test.\nYou can listen to the background music.", 240, Menu } },
	{ 16, { "\aThe memory card is not ready.", 150, Menu } },
	{ 17, { "\aThere is no free space\nin the memory card.", 150, Menu } },

	//Tikal (alternate)

	{ 18, { "\aSelect a memory card.", 90, Menu } },
	{ 19, { "\aSelect a file.", 90, Menu } },
	{ 20, { "\aThis is the Adventure mode\nwhere you can play through the story.", 180, Menu } },
	{ 21, { "\aThis is the Trial mode\nwhere you can play one stage at a time.", 180, Menu } },
	{ 22, { "\aSelect a character.", 90, Menu } },
	{ 23, { "\aHow to play as Sonic.", 90, Menu } },
	{ 24, { "\aHow to play as Tails-kun.", 90, Menu } },
	{ 25, { "\aHow to play as Knuckles.", 90, Menu } },
	{ 26, { "\aHow to play as Amy-chan.", 90, Menu } },
	{ 27, { "\aHow to play as E-102 Gamma.", 120, Menu } },
	{ 28, { "\aHow to play as Big.", 90, Menu } },
	{ 29, { "\aExplanation of the action stages rules.\nDo your best to memorize them!", 210, Menu } },
	{ 30, { "\aWhat stage do you want to play?", 120, Menu } },
	{ 31, { "\aWhat mini game do you want to play?", 120, Menu } },
	{ 32, { "\aThis is the Options screen.\nYou can change various settings here.", 210, Menu } },
	{ 33, { "\aThis the Sound Test.\nYou can listen to the game tunes here.", 240, Menu } },
	{ 34, { "\aLooks like there's no memory card.", 120, Menu } },
	{ 35, { "\aThere's not enough free space\nin the memory card.", 150, Menu } },

	//Sonic

	{ 36, { "\aSELECT YOUR MEMORY CARD.", 90, Menu } }, //Sonic's Engrish will be in all caps
	{ 37, { "\aSELECT A FILE.", 90, Menu } },
	{ 38, { "\aADVENTURE MODE.\nYou can play through the story in this mode.", 210, Menu } },
	{ 39, { "\aTRIAL MODE.\nYou can play one stage at a time", 210, Menu } },
	{ 40, { "\aSELECT YOUR CHARACTER.", 90, Menu } },
	{ 41, { "\aHOW TO PLAY WITH ME, SONIC.", 120, Menu } },
	{ 42, { "\aHOW TO PLAY WITH TAILS.", 120, Menu } },
	{ 43, { "\aHOW TO PLAY WITH KNUCKLES.", 120, Menu } },
	{ 44, { "\aHOW TO PLAY WITH AMY.", 90, Menu } },
	{ 45, { "\aHOW TO PLAY WITH E-102 GAMMA.", 180, Menu } },
	{ 46, { "\aHOW TO PLAY WITH BIG.", 120, Menu } },
	{ 47, { "\aHOW TO CLEAR THE GAME.\nYou must know it, or you won't clear the game!", 270, Menu } },
	{ 48, { "\aSELECT A STAGE.", 90, Menu } },
	{ 49, { "\aSELECT A GAME.", 90, Menu } },
	{ 50, { "\aOPTIONS.\nChoose the features you want to edit.", 210, Menu } },
	{ 51, { "\aSOUND TEST.\nYou can listen to cool sounds here.", 240, Menu } },
	{ 52, { "\aMake sure your memory card\nis set correctly.", 120, Menu } },
	{ 53, { "\aHey! You don't have enough space\nin the memory card.", 180, Menu } },

	//Tails

	{ 54, { "\aSelect a memory card.", 90, Menu } },
	{ 55, { "\aNext, select a file.", 120, Menu } },
	{ 56, { "\aThis is the Adventure mode\nwhere you can play through the story.", 180, Menu } },
	{ 57, { "\aThis is the Trial mode\nwhere you can play one stage at a time.", 180, Menu } },
	{ 58, { "\aWho would you like to play as?", 90, Menu } },
	{ 59, { "\aHow to play as Sonic.", 120, Menu } },
	{ 60, { "\aHow to play as me.", 120, Menu } },
	{ 61, { "\aHow to play as Knuckles.", 120, Menu } },
	{ 62, { "\aHow to play as Amy.", 120, Menu } },
	{ 63, { "\aHow to play as E-102 Gamma.", 150, Menu } },
	{ 64, { "\aHow to play as Big.", 90, Menu } },
	{ 65, { "\aExplanation of the action stages rules.\nMake sure you memorize them!", 240, Menu } },
	{ 66, { "\aWhat stage are you going to play?", 90, Menu } },
	{ 67, { "\aWhat mini game are you going to play?", 90, Menu } },
	{ 68, { "\aOptions.\nYou can change various settings here.", 210, Menu } },
	{ 69, { "\aSound Test.\nYou can listen to the game tunes here.", 240, Menu } },
	{ 70, { "\aMake sure your memory card\nis set correctly.", 120, Menu } },
	{ 71, { "\aLooks like you don't have\nenough free space in the memory card.", 180, Menu } },

	//Knuckles

	{ 72, { "\aSelect a memory card.", 90, Menu } },
	{ 73, { "\aSelect a file.", 90, Menu } },
	{ 74, { "\aThis is the Adventure mode\nwhere you can play through the story.", 180, Menu } },
	{ 75, { "\aThis is the mode where you can\nplay one stage at a time.", 180, Menu } },
	{ 76, { "\aSelect a character to play.", 120, Menu } },
	{ 77, { "\aHow to play as Sonic.", 120, Menu } },
	{ 78, { "\aHow to play as Tails.", 120, Menu } },
	{ 79, { "\aHow to play as me.", 120, Menu } },
	{ 80, { "\aHow to play as Amy.", 120, Menu } },
	{ 81, { "\aHow to play as E-102 Gamma.", 150, Menu } },
	{ 82, { "\aHow to play as Big.", 90, Menu } },
	{ 83, { "\aExplanation of the action stages rules.\nRead them well, and you'll master the game.", 300, Menu } },
	{ 84, { "\aWhat stage are you going to play?", 90, Menu } },
	{ 85, { "\aWhat mini game are you going to play?", 90, Menu } },
	{ 86, { "\aOptions screen.\nYou can change various settings here.", 210, Menu } },
	{ 87, { "\aSound Test.\nYou can listen to the background music here.", 210, Menu } },
	{ 88, { "\aLooks like your memory card is not ready.", 150, Menu } },
	{ 89, { "\aLooks like you don't have\nenough free space in the memory card.", 150, Menu } },

	//Amy

	{ 90, { "\aSelect a memory card.", 120, Menu } },
	{ 91, { "\aSelect a file.", 90, Menu } },
	{ 92, { "\aThis is the Adventure mode\nwhere you can enjoy the story.", 180, Menu } },
	{ 93, { "\aThis is the Trial mode where\nyou can play one stage at a time.", 180, Menu } },
	{ 94, { "\aSelect a character.", 90, Menu } },
	{ 95, { "\aHow to play as my darling, Sonic.", 150, Menu } },
	{ 96, { "\aHow to play as Tails.", 120, Menu } },
	{ 97, { "\aHow to play as Knuckles.", 120, Menu } },
	{ 98, { "\aHow to play as me.", 120, Menu } },
	{ 99, { "\aHow to play as Mr. Robot.", 120, Menu } },
	{ 100, { "\aHow to play as Big.", 120, Menu } },
	{ 101, { "\aExplanation of the action stages rules.\nMake sure you memorize them!", 240, Menu } },
	{ 102, { "\aWhat stage do you want to play?", 120, Menu } },
	{ 103, { "\aWhat mini game do you want to play?", 120, Menu } },
	{ 104, { "\aOptions screen.\nYou can change various settings here.", 240, Menu } },
	{ 105, { "\aSound Test.\nYou can listen to the game tunes here.", 240, Menu } },
	{ 106, { "\aIs your memory card set correctly?", 150, Menu } },
	{ 107, { "\aYou don't have enough space\nin the memory card.", 150, Menu } },

	//Gamma

	{ 108, { "\aSelect a memory card.", 180, Menu } },
	{ 109, { "\aSelect a file.", 120, Menu } },
	{ 110, { "\aAdventure mode.", 120, Menu } },
	{ 111, { "\aTrial mode.", 90, Menu } },
	{ 112, { "\aSelect a character to play.", 150, Menu } },
	{ 113, { "\aGame instruction: Sonic.", 150, Menu } },
	{ 114, { "\aGame instruction: Tails.", 150, Menu } },
	{ 115, { "\aGame instruction: Knuckles.", 180, Menu } },
	{ 116, { "\aGame instruction: Amy.", 150, Menu } },
	{ 117, { "\aGame instruction: E-102 Gamma.", 270, Menu } },
	{ 118, { "\aGame instruction: Big.", 150, Menu } },
	{ 119, { "\aExplanation of the action stages rules.\nInput this information immediately.", 360, Menu} },
	{ 120, { "\aSelect a stage to play.", 150, Menu } },
	{ 121, { "\aSelect a mini game.", 150, Menu } },
	{ 122, { "\aOptions screen.\nSelect a setting.", 240, Menu } },
	{ 123, { "\aSound Test.\nBackground music can be selected.", 330, Menu } },
	{ 124, { "\aMemory card not found.", 210, Menu } },
	{ 125, { "\aWarning!\nInsufficient space in the memory card!", 300, Menu } },

	//Big

	{ 126, { "\aSelect a memory card.", 150, Menu } },
	{ 127, { "\aWhich file would you like to choose?", 150, Menu } },
	{ 128, { "\aThis is the mode where\nyou can play through the story.", 180, Menu } },
	{ 129, { "\aYou can play one stage at a time.", 180, Menu } },
	{ 130, { "\aWho would you like to play as?", 120, Menu } },
	{ 131, { "\aHow to play as the hedgehog.", 180, Menu } },
	{ 132, { "\aHow to play as the fox.", 180, Menu } },
	{ 133, { "\aHow to play as the echidna.", 180, Menu } },
	{ 134, { "\aHow to play as the girl.", 180, Menu } },
	{ 135, { "\aHow to play as the robot.", 180, Menu } },
	{ 136, { "\aHow to play as me.", 180, Menu } },
	{ 137, { "\aAction stages rules.\nMake sure you memorize them!", 330, Menu } },
	{ 138, { "\aWhere would you like to play?", 120, Menu } },
	{ 139, { "\aWhat would you like to play?", 120, Menu } },
	{ 140, { "\aOptions.\nLooks like you can change something.", 300, Menu } },
	{ 141, { "\aSound Test.\nYou can listen to the music.", 270, Menu } },
	{ 142, { "\aIs your memory card set correctly?", 210, Menu } },
	{ 143, { "\aYou don't have enough space\nin the memory card.", 210, Menu } },

	//Eggman

	{ 144, { "\aSelect a memory card.", 120, Menu } },
	{ 145, { "\aGood! Next, select a file.", 180, Menu } },
	{ 146, { "\aThis is the Adventure mode\nwhere you can fight against me.", 270, Menu } },
	{ 147, { "\aPractice in the Trial mode.", 210, Menu } },
	{ 148, { "\aWho would you like to play as?", 120, Menu } },
	{ 149, { "\aHow to play as that accursed Sonic.", 150, Menu } },
	{ 150, { "\aHow to play as that fox boy, Tails.", 150, Menu } },
	{ 151, { "\aHow to play as that fool, Knuckles.", 150, Menu } },
	{ 152, { "\aHow to play as that little girl, Amy.", 150, Menu } },
	{ 153, { "\aHow to play as my servant,\nE-102 Gamma.", 240, Menu } },
	{ 154, { "\aHow to play as that fat cat,\nBig or whatever.", 210, Menu } },
	{ 155, { "\aExplanation of the action stages rules.\nFinish reading and start the game already!", 480, Menu } },
	{ 156, { "\aWhat stage are you going to play?", 120, Menu } },
	{ 157, { "\aWhat mini game are you going to play?", 120, Menu } },
	{ 158, { "\aOptions screen.\nSo, change any setting you'd like.", 300, Menu } },
	{ 159, { "\aSound Test.\nYou can listen to various songs here.", 300, Menu } },
	{ 160, { "\aIs your memory card set correctly?", 150, Menu } },
	{ 161, { "\aThe memory in your memory card\nis used for something else.", 210, Menu } },


	/* Character select lines */

	{ 1837, { "\aLET'S GET THEM!", 120, Menu } }, //Sonic
	{ 1800, { "\aSonic! Here I come!", 120, Menu } }, //Tails
	{ 1787, { "\aAll right! Let's go!", 90, Menu } }, //Knuckles
	{ 1730, { "\aIt's my turn now!", 90, Menu } }, //Amy
	{ 1767, { "\aPreparations complete.", 150, Menu } }, //Gamma
	{ 1744, { "\aFroggy, wait for me!", 180, Menu } }, //Big


	/* Common idle lines */

	{ 390, { "\aGotta get going soon...", 90, Gameplay } }, //Sonic
	{ 392, { "\aI've gotta hurry!", 60, Gameplay } }, //Knuckles
	{ 393, { "\aAah, I'm so tired!", 90, Gameplay } }, //Amy
	{ 394, { "\aCombat preparations complete.", 180, Gameplay } }, //Gamma
	{ 395, { "\aI'm getting hungry.", 210, Gameplay } }, //Big


	/* Adventure fields idle lines */

	//Station Square - station area

	{ 288, { "\aSo this station is\nthe center of the city?", 180, Gameplay } }, //Sonic
	{ 289, { "\aRailroads are cool too!", 90, Gameplay } }, //Tails
	{ 290, { "\aSo this is Station Square?", 120, Gameplay } }, //Knuckles
	{ 291, { "\aA city with an ocean view\nis so awesome!", 180, Gameplay } }, //Amy
	{ 292, { "\aI wonder if there are\nany fish here too...", 210, Gameplay } }, //Big
	{ 293, { "\aExploring Station Square...", 180, Gameplay } }, //Gamma

	//Station Square - city hall area

	{ 274, { "\aThis area has changed a lot too...", 150, Gameplay } }, //Sonic
	{ 275, { "\aI'm hungry...", 90, Gameplay } }, //Tails
	{ 276, { "\aI feel uncomfortable in a city.", 120, Gameplay } }, //Knuckles
	{ 277, { "\aShould I go shopping?", 120, Gameplay } }, //Amy
	{ 278, { "\aEveryone seems so busy.", 180, Gameplay } }, //Big
	{ 279, { "\aHuman life form readings confirmed.", 210, Gameplay } }, //Gamma

	//Station Square - sewers

	{ 286, { "\aThis makes me feel like a rat.", 180, Gameplay } }, //Sonic
	{ 287, { "\aIt's so dark in here!", 120, Gameplay } }, //Big

	//Station Square - Twinkle Park entrance

	{ 300, { "\aPlaces like this are not really my thing.", 150, Gameplay } }, //Sonic
	{ 301, { "\aI don't think I can\nget into the amusement park.", 120, Gameplay } }, //Tails
	{ 302, { "\aWhat is this place?", 90, Gameplay } }, //Knuckles
	{ 303, { "\aI'm getting excited!", 120, Gameplay } }, //Amy
	{ 304, { "\aTwinkle Park?", 150, Gameplay } }, //Big
	{ 305, { "\aKart course discovered.", 150, Gameplay } }, //Gamma

	//Station Square - hotel

	{ 294, { "\aHey-hey! This is not the time to rest!", 180, Gameplay } }, //Sonic
	{ 295, { "\aThis hotel... I'm a little jealous.", 180, Gameplay } }, //Tails
	{ 296, { "\aHm, a resort hotel?", 120, Gameplay } }, //Knuckles
	{ 297, { "\aI'd love to stay at a hotel like this!", 210, Gameplay } }, //Amy
	{ 298, { "\aWhat a big house!", 150, Gameplay } }, //Big
	{ 299, { "\aCombat mode disengaged.", 150, Gameplay } }, //Gamma

	//Station Square - casino area / station

	{ 280, { "\aUh-oh! There's no time for\nplaying around in a place like this!", 210, Gameplay } }, //Sonic
	{ 281, { "\aWhat a big city!", 90, Gameplay } }, //Tails
	{ 282, { "\aWhat a lively city!", 90, Gameplay } }, //Knuckles
	{ 283, { "\aThis city never changes!", 150, Gameplay } }, //Amy
	{ 284, { "\aFroggy, where can you be?", 150, Gameplay } }, //Big
	{ 285, { "\aTrain heading to Mystic Ruins confirmed.", 210, Gameplay } }, //Gamma

	//Mystic Ruins - station area

	{ 306, { "\aThis place is so quiet...", 120, Gameplay } }, //Sonic
	{ 307, { "\aThis area sure has changed\nafter they built the station.", 180, Gameplay } }, //Tails
	{ 308, { "\aI've got to hurry\nand restore the Master Emerald.", 150, Gameplay } }, //Knuckles
	{ 309, { "\aI don't really like places like this...", 210, Gameplay } }, //Amy
	{ 310, { "\aI wonder where Froggy might be...", 180, Gameplay } }, //Big
	{ 311, { "\aExploring Mystic Ruins...", 180, Gameplay } }, //Gamma

	//Mystic Ruins - Angel Island

	{ 312, { "\aSo, this is Angel Island?", 120, Gameplay } }, //Sonic
	{ 313, { "\aI've got to hurry and bring\nthis island back to the sky...", 180, Gameplay } }, //Knuckles
	{ 314, { "\aLanding on Angel Island.", 120, Gameplay } }, //Gamma

	//Mystic Ruins - jungle

	{ 315, { "\aNow this is more like it!", 90, Gameplay } }, //Sonic
	{ 316, { "\aWhich way did I come from?", 120, Gameplay } }, //Tails
	{ 317, { "\aThis place...\nIt makes me feel nostalgic somehow.", 210, Gameplay } }, //Knuckles
	{ 318, { "\aThis place is awesome!", 120, Gameplay } }, //Amy
	{ 319, { "\aI should probably go home...", 150, Gameplay } }, //Big
	{ 320, { "\aTemperature increasing.\nForced cooling mode 1: start.", 360, Gameplay } }, //Gamma

	//Final Egg entrance

	{ 321, { "\aSo this is Eggman's base?", 120, Gameplay } }, //Sonic
	{ 322, { "\aSo this is Eggman's fortress!", 120, Gameplay } }, //Tails
	{ 323, { "\aThis is... his base?", 120, Gameplay } }, //Knuckles, wtf?
	{ 324, { "\aSonic, I'll do my best!", 150, Gameplay } }, //Amy
	{ 325, { "\aThe place I was created.", 120, Gameplay } }, //Gamma

	//Past (normal)

	{ 326, { "\aWhat is this place?", 90, Gameplay } }, //Tails
	{ 327, { "\aWhere... am I?", 120, Gameplay } }, //Knuckles
	{ 328, { "\aOh my... Where am I?", 180, Gameplay } }, //Amy
	{ 329, { "\aUmm... Where am I?", 210, Gameplay } }, //Big
	{ 330, { "\aCorresponding data not found.\nUnable to determine current location.", 330, Gameplay } }, //Gamma

	//Past (fire)

	{ 331, { "\aThis is terrible!", 60, Gameplay } }, //Sonic
	{ 332, { "\aWhy...?", 60, Gameplay } }, //Knuckles

	//Egg Carrier - outside

	{ 333, { "\aPhew! Astonishing!", 180, Gameplay } }, //Sonic
	{ 334, { "\aThis ship is incredible!", 120, Gameplay } }, //Tails
	{ 335, { "\aTo think that such a thing\ncould fly in the sky...", 180, Gameplay } }, //Knuckles
	{ 336, { "\aWhy would he create\nsomething like this...", 180, Gameplay } }, //Amy
	{ 337, { "\aContinuing mission...", 120, Gameplay } }, //Gamma
	{ 338, { "\aHow does this ship fly, I wonder?", 210, Gameplay } }, //Big

	//Egg Carrier - inside

	{ 339, { "\aGhh... He doesn't even try to hide\nhis tastes from the shipmates!", 240, Gameplay } }, //Sonic
	{ 340, { "\aSomeday I will create a ship like this too!", 120, Gameplay } }, //Tails
	{ 341, { "\aWhere's the exit?", 90, Gameplay } }, //Knuckles
	{ 342, { "\aLet's walk quietly\nso we don't get spotted.", 150, Gameplay } }, //Amy
	{ 343, { "\aContinuing mission...", 120, Gameplay } }, //Gamma
	{ 344, { "\aUmm... Exit? Exit? Umm...", 210, Gameplay } }, //Big


	/* Action stages idle lines */

	//Emerald Coast

	{ 227, { "\aGuess I should just\ngo along the coastline.", 150, Gameplay } }, //Sonic
	{ 228, { "\aFrog life form reading confirmed.", 180, Gameplay } }, //Gamma
	{ 229, { "\aThe wind feels good!", 120, Gameplay } }, //Sonic
	{ 230, { "\aWhat a big lake!", 150, Gameplay } }, //Big

	//Windy Valley

	{ 231, { "\aI can hear the wind in the distance.", 120, Gameplay } }, //Sonic
	{ 232, { "\aE-103's presence confirmed.", 240, Gameplay } }, //Gamma
	{ 233, { "\aGotta get outta here quickly!", 120, Gameplay } }, //Sonic
	{ 234, { "\aI got pretty high up!", 150, Gameplay } }, //Sonic
	{ 235, { "\aWhere did Sonic go?", 120, Gameplay } }, //Tails

	//Casinopolis

	{ 236, { "\aHuh... Pinball?", 150, Gameplay } }, //Sonic
	{ 237, { "\aWhat a flashy place!", 90, Gameplay } }, //Knuckles
	{ 238, { "\aWhat a terrible smell...\nIs this a garbage dump?", 210, Gameplay } }, //Sonic

	//Icecap

	{ 239, { "\aPhew... It's freezing cold here!", 150, Gameplay } }, //Sonic
	{ 240, { "\aIt's like a world of ice...", 120, Gameplay } }, //Sonic
	{ 241, { "\aThe ice looks tasty!", 150, Gameplay } }, //Big
	{ 242, { "\aGonna pull off some cool moves!", 150, Gameplay } }, //Sonic
	{ 243, { "\aTime to slide down, I guess.", 120, Gameplay } }, //Tails

	//Twinkle Park

	{ 244, { "\aThis must be the entrance\nto the kart course.", 150, Gameplay } }, //Sonic
	{ 245, { "\aLooks like there's nobody around here.", 120, Gameplay } }, //Sonic
	{ 246, { "\aI'm looking forward\nto seeing what I can fish out.", 180, Gameplay } }, //Big
	{ 247, { "\aI wonder where Sonic went...", 150, Gameplay } }, //Amy

	//Speed Highway

	{ 248, { "\aAll right... Full speed ahead!", 180, Gameplay } }, //Sonic
	{ 249, { "\aWhere's Eggman?", 90, Gameplay } }, //Tails
	{ 250, { "\aHey-hey, there's no time to play around!", 120, Gameplay } }, //Sonic
	{ 251, { "\aThe cars look like they're not moving!", 120, Gameplay } }, //Sonic
	{ 252, { "\aThe Emerald pieces must be\nsomewhere in this city.", 180, Gameplay } }, //Knuckles

	//Red Mountain

	{ 253, { "\aWhere did the Egg Carrier go?", 120, Gameplay } }, //Sonic
	{ 254, { "\aEeh... I'm finished if I fall into the lava.", 270, Gameplay } }, //Sonic
	{ 255, { "\aE-104's presence confirmed.", 120, Gameplay } }, //Gamma
	{ 256, { "\aIf I fall off this cliff, I'm a goner.", 150, Gameplay } }, //Knuckles

	//Sky Deck

	{ 257, { "\aPhew... If I fall off here, I'm finished.", 210, Gameplay } }, //Sonic
	{ 258, { "\aIt's so high...\nMy legs are feeling numb!", 180, Gameplay } }, //Tails
	{ 259, { "\aSHOOT! This wind is annoying!", 240, Gameplay } }, //Sonic
	{ 260, { "\aHey-hey, what the heck\nis up with this ship?", 180, Gameplay } }, //Sonic
	{ 261, { "\aWell... Where are the treasures?", 210, Gameplay } }, //Knuckles

	//Lost World

	{ 262, { "\aIt's mighty quiet here.", 150, Gameplay } }, //Sonic
	{ 263, { "\aWhat... is this place...?", 120, Gameplay } }, //Sonic
	{ 264, { "\aThe Emerald pieces\nshould be in this room.", 150, Gameplay } }, //Knuckles

	//Final Egg

	{ 265, { "\aEhh... What a terrible oil smell...", 180, Gameplay } }, //Sonic
	{ 266, { "\aBirdie, let's cheer up and go!", 150, Gameplay } }, //Amy
	{ 267, { "\aWhere does this lead?", 120, Gameplay } }, //Sonic
	{ 268, { "\aJust you wait, Eggman!", 90, Gameplay } }, //Sonic
	{ 269, { "\aBlue hedgehog: enemy.", 150, Gameplay } }, //Gamma

	//Hot Shelter

	{ 270, { "\aEggman, you're really the worst!", 150, Gameplay } }, //Amy
	{ 271, { "\aI wonder if Froggy is okay.", 210, Gameplay } }, //Big
	{ 272, { "\aMan... Which way should I go now?", 210, Gameplay } }, //Amy
	{ 273, { "\aE-105's presence confirmed.", 120, Gameplay } }, //Gamma


	/* Boss battle idle lines */

	//Sonic

	{ 368, { "\aWhat's up with this guy?\nIs he invincible?", 150, Gameplay } }, //Chaos 0
	{ 369, { "\aNo matter what you do, it's useless!", 120, Gameplay } }, //Egg Hornet
	{ 370, { "\aKnuckles? What's wrong?", 120, Gameplay } }, //vs Knuckles
	{ 371, { "\aHey! This time you're not getting away!", 120, Gameplay } }, //Chaos 4
	{ 372, { "\aNOT SO BAD! Not bad at all!", 180, Gameplay } }, //Gamma
	{ 373, { "\aWhere is his weak spot?", 90, Gameplay } }, //Chaos 6
	{ 374, { "\aPlaytime is over, Eggman!", 120, Gameplay } }, //Egg Viper

	//Tails

	{ 375, { "\aI'm not gonna lose!", 60, Gameplay } }, //Egg Hornet	
	{ 376, { "\aH-hold on!", 90, Gameplay } }, //vs Knuckles
	{ 377, { "\aYou liquid monster!", 90, Gameplay } }, //Chaos 4
	{ 378, { "\aSomething's different about this robot.", 150, Gameplay } }, //vs Gamma
	{ 379, { "\aI can do this by myself!", 120, Gameplay } }, //Egg Walker

	//Knuckles

	{ 380, { "\aI'm gonna return the favor!", 90, Gameplay } }, //Chaos 2
	{ 381, { "\aGimme back the Emerald!", 60, Gameplay } }, //vs Sonic
	{ 382, { "\aHe really doesn't know when to give up!", 120, Gameplay } }, //Chaos 4
	{ 383, { "\aThis time... I'll finish you off!", 180, Gameplay } }, //Chaos 6

	//Amy

	{ 384, { "\aI won't let you get away with this!", 120, Gameplay } }, //Zero

	//Gamma

	{ 385, { "\aTarget confirmed.", 120, Gameplay } }, //E-101
	{ 386, { "\aBlue hedgehog: enemy.", 150, Gameplay } }, //vs Sonic
	{ 387, { "\aBeta!", 60, Gameplay } }, //E-101 mk.2

	//Super Sonic

	{ 388, { "\aI'll show you\nthe true power of the Emeralds!", 210, Gameplay } },
	{ 389, { "\aIs that his core?", 90, Gameplay } },


	/* Chao Garden idle lines */

	//Sonic

	{ 348, { "\aWhat a peaceful place...", 150, Gameplay } },
	{ 349, { "\aYo! Have you guys been good?", 120, Gameplay } },
	{ 350, { "\aHEY GUYS! No fighting!", 150, Gameplay } },

	//Tails

	{ 351, { "\aI feel relieved when I come here.", 120, Gameplay } },
	{ 352, { "\aHow are you doing, guys?", 90, Gameplay } },
	{ 353, { "\aI love you all too!", 120, Gameplay } },

	//Knuckles

	{ 354, { "\aI guess there are no Emeralds here...", 150, Gameplay } },
	{ 355, { "\aI feel like...\nI've met these guys somewhere...", 210, Gameplay } },
	{ 356, { "\aBeing here reminds me of\nmy homeland for some reason...", 240, Gameplay } },

	//Amy

	{ 357, { "\aAaah... It feels so nice here...", 270, Gameplay } },
	{ 358, { "\a*yawn* I'm getting sleepy...", 360, Gameplay } },
	{ 359, { "\aGuys! No fighting please!", 150, Gameplay } },
	{ 360, { "\aIf only Sonic was here with me...", 180, Gameplay } },

	//Gamma

	{ 361, { "\aWhat is this place?", 60, Gameplay } },
	{ 362, { "\aCombat mode disengaged.", 150, Gameplay } },
	{ 363, { "\aDetecting readings from living beings.", 120, Gameplay } },

	//Big

	{ 364, { "\aFeeling really good.", 180, Gameplay } },
	{ 365, { "\aAre you guys doing good?", 120, Gameplay } },
	{ 366, { "\aI'm getting hungry...", 240, Gameplay } },
	{ 367, { "\aHmm... I wanna go fishing!", 210, Gameplay } },


	/* Mini games idle lines */

	//Sand Hill

	{ 345, { "\aSHOOT! I got sand in my eyes!", 120, Gameplay } }, //Sonic
	{ 346, { "\aThis sand is so soft\nand easy to slide on!", 150, Gameplay } }, //Tails

	//Hedgehog Hammer

	{ 347, { "\aE-eh, where am I?", 120, Gameplay } }, //Amy


	/* Sky Chase sequences */

	//Sky Chase 1 - before Egg Cannon fires

	{ 491, { "\aWe did it!", 60, Gameplay } }, //Tails
	{ 716, { "\aWe did it!", 60, Gameplay } }, //Tails (duplicate?)
	{ 492, { "\aPiece of cake!", 150, Gameplay } }, //Sonic	
	{ 717, { "\aPiece of cake!", 150, Gameplay } }, //Sonic (duplicate?)

	//Sky Chase 2 - before transformation

	{ 765, { "\aAll right, we managed to break through\nthe first line of defense!", 180, Gameplay } },
	{ 766, { "\aThere are more coming!", 90, Gameplay } },
	{ 767, { "\aYeah, I know!", 90, Gameplay } },

	//Sky Chase 2 - transformation sequence alternate lines (they also match the regular lines in Japanese)

	{ 530, { "\aAll right, we managed to break through\nthe first line of defense!", 180, Gameplay } },
	{ 531, { "\aThere are more coming!", 90, Gameplay } },
	{ 532, { "\aYeah, I know!", 90, Gameplay } },
	{ 533, { "\aSystem mode: change!", 120, Gameplay } },
	{ 534, { "\aWhooooa!", 90, Gameplay } },
	{ 535, { "\aAll right! Here we go!", 120, Gameplay } },


	/* Action stages voices */

	//All Tails' stages except for Speed Highway (Sonic's voice)

	{ 205, { "\aCOME ON, TAILS!", 60, Gameplay } },
	{ 206, { "\aHey-hey-hey!", 90, Gameplay } },
	{ 207, { "\aGood job, Tails! Keep it up!", 120, Gameplay } },
	{ 208, { "\aH-hey, Tails!", 90, Gameplay } },
	{ 209, { "\aYOU MADE IT!", 60, Gameplay } },
	{ 210, { "\aCOME ON!", 60, Gameplay } },
	{ 211, { "\aTails, I'm taking the lead!", 90, Gameplay } },
	{ 212, { "\aTails, hurry up!", 60, Gameplay } },
	{ 213, { "\aHOORAY!", 60, Gameplay } },
	{ 214, { "\aI GOT IT!", 60, Gameplay } },
	{ 215, { "\aTails, you have no rings!\nBe careful!", 120, Gameplay } },

	//Speed Highway (Eggman's voice)

	{ 216, { "\aYou think you can keep up with me?", 150, Gameplay } },
	{ 217, { "\aI've got you now, Tails!", 120, Gameplay } },
	{ 218, { "\aWhat? He's caught up?", 120, Gameplay } },
	{ 219, { "\aDamn you, little fox!", 120, Gameplay } },
	{ 220, { "\aTa... Tails-chan! Wait for meee!", 180, Gameplay } },
	{ 221, { "\aWha-ha-ha-ha-ha-ha-ha-ha-ha!", 120, Gameplay } },
	{ 222, { "\aFarewell, Tails!", 120, Gameplay } },
	{ 223, { "\aI'm going to destroy this whole city!", 150, Gameplay } },
	{ 224, { "\aYou're a hundred years too early\nto defeat me!", 180, Gameplay } },
	{ 225, { "\aIt's my victory!\nWha-ha-ha-ha-ha-ha-ha-ha!", 210, Gameplay } },
	{ 226, { "\aNow, surrender, Tails!", 180, Gameplay } },

	//Final Egg

	{ 1588, { "\aEmergency! Emergency!\nEliminate intruders immediately!", 420, Gameplay } }, //intercom
	{ 1589, { "\aEmergency! Emergency!\nEliminate intruders immediately!", 420, Gameplay } },
	{ 1590, { "\aFinal Egg: Level 2 bulkhead open.", 300, Gameplay } },
	{ 1591, { "\aFinal Egg: Level 2 bulkhead open.", 300, Gameplay } },
	{ 1592, { "\aDestroy the targets,\nand you'll get extra time.", 240, Gameplay } }, //Eggman to Gamma
	{ 1593, { "\aDestroy the Sonic target!", 210, Gameplay } },


	/* Boss voices */

	//vs character

	{ 166, { "\aNot bad, Sonic!", 60, Gameplay } }, //Knuckles
	{ 167, { "\aNot bad, Knuckles!", 90, Gameplay } }, //Sonic
	{ 168, { "\aNot bad, Tails!", 60, Gameplay } }, //Knuckles
	{ 169, { "\aThe orders are absolute.", 150, Gameplay } }, //Gamma
	{ 170, { "\aHe's... strong...", 120, Gameplay } }, //Sonic

	//Eggman bosses

	{ 171, { "\aAll systems - full power!", 90, Gameplay } },
	{ 172, { "\aOuch!", 30, Gameplay } },
	{ 174, { "\aTake this!", 60, Gameplay } },
	{ 176, { "\aWhy you little...!", 90, Gameplay } },
	{ 177, { "\aW-what the...?!", 60, Gameplay } },
	{ 1902, { "\aWhoo-ha-ha-ha-ha-ha-ha!\nSonic, try to reach me!", 270, Gameplay } }, //Egg Viper
	{ 1903, { "\aSonic, now take this one!", 210, Gameplay } },


	/* Adventure fields announcers */

	//Station Square

	{ 1567, { "\aDear passengers! Please take your seats\nand wait for departure.", 300, Gameplay } },
	{ 1568, { "\aDear passengers! Please take your seats\nand wait for departure.", 300, Gameplay } },
	{ 1569, { "\aThe train headed for the Mystic Ruins\nwill be departing soon.", 270, Gameplay } },
	{ 1570, { "\aThe train headed for the Mystic Ruins\nwill be departing soon.", 270, Gameplay } },
	{ 1571, { "\aA train will be arriving soon.\nPlease stand back!", 270, Gameplay } },
	{ 1572, { "\aA train will be arriving soon.\nPlease stand back!", 270, Gameplay } },
	{ 1573, { "\aNo trains are currently in service.", 180, Gameplay } },
	{ 1574, { "\aNo trains are currently in service.", 180, Gameplay } },

	//Twinkle Park entrance

	{ 1575, { "\aWelcome to Twinkle Park!", 90, Gameplay } },

	//Mystic Ruins

	{ 1654, { "\aDear passengers! Please take your seats\nand wait for departure.", 300, Gameplay } },
	{ 1655, { "\aThe train headed for Station Square\nwill be departing soon.", 270, Gameplay } },
	{ 1656, { "\aA train will be arriving soon.\nPlease stand back!", 300, Gameplay } },
	{ 1657, { "\aNo trains are currently in service.", 210, Gameplay } },


	/* Character specific gameplay voices */

	//Sonic

	{ 1838, { "\aYEEES!", 90, Gameplay } }, //Twinkle Circuit clear
	{ 1839, { "\aYahoo!", 90, Gameplay } }, //Twinkle Circuit jump
	{ 1840, { "\aYES!", 60, Gameplay } }, //stage clear
	{ 1841, { "\aHEY, PUMP IT UP!", 120, Gameplay } }, //bad clear
	{ 1842, { "\a*whistles* IT'S SWEET!", 180, Gameplay } }, //good clear
	{ 1843, { "\aHEY GUY!\nI'll play with you some other time!", 180, Gameplay } }, //boss clear
	{ 1844, { "\aYEAH! IT'S OKAY!", 120, Gameplay } }, //normal clear
	{ 1845, { "\aL-let me go!", 60, Gameplay } }, //captured
	{ 1847, { "\aNO!", 60, Gameplay } }, //died with no rings

	//Tails

	{ 1801, { "\aYeah!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1802, { "\aHyahoo!", 60, Gameplay } }, //Twinkle Circuit/Icecap jump
	{ 1803, { "\aYeah!", 60, Gameplay } }, //stage clear
	{ 1804, { "\aPhew, barely made it.", 120, Gameplay } }, //bad clear
	{ 1805, { "\aI did it, Sonic!", 90, Gameplay } }, //good clear
	{ 1806, { "\aI'm strong, you know!", 90, Gameplay } }, //boss clear
	{ 1807, { "\aWell, guess that's fine.", 90, Gameplay } }, //normal clear
	{ 1808, { "\aH-hey!", 60, Gameplay } }, //captured

	//Knuckles

	{ 1788, { "\aGreat!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1790, { "\aFound 'em!", 60, Gameplay } }, //stage clear
	{ 1791, { "\aHmph, it took a while.", 150, Gameplay } }, //bad clear
	{ 1792, { "\aThat was easy.", 60, Gameplay } }, //good clear
	{ 1793, { "\aHmph, all bark and no bite.", 150, Gameplay } }, //boss clear
	{ 1794, { "\aWell, that's fine.", 90, Gameplay } }, //normal clear
	{ 1795, { "\aDaaamn!", 60, Gameplay } }, //captured

	//Amy

	{ 1731, { "\aI did it!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1732, { "\aYaaay!", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1733, { "\aI did it!", 90, Gameplay } }, //stage clear
	{ 1734, { "\a*phew* That was close...", 120, Gameplay } }, //bad clear
	{ 1735, { "\aIf I do something,\nI take it seriously!", 150, Gameplay } }, //boss clear
	{ 1736, { "\aI'm saved!", 90, Gameplay } }, //normal clear
	{ 1737, { "\aYaaay! I'm the best!", 150, Gameplay } }, //good clear
	{ 1738, { "\aHey, let go of me!", 150, Gameplay } }, //captured

	//Big

	{ 1334, { "\aOoooh, he ran off again...", 240, Gameplay } }, //stage clear (Twinkle Park, Icecap)
	{ 1747, { "\aFroggy!", 90, Gameplay } }, //stage clear (Emerald Coast, Hot Shelter)	
	{ 1748, { "\aNext time I'll do my best.", 150, Gameplay } }, //bad clear
	{ 1749, { "\aBig catch! Big catch!", 90, Gameplay } }, //good clear
	{ 1750, { "\aAre you okay, Froggy?", 150, Gameplay } }, //boss clear
	{ 1751, { "\aIt was a nice fishing!", 150, Gameplay } }, //normal clear
	{ 1758, { "\aCaught it! Caught it!", 120, Gameplay } }, //got fish
	{ 1759, { "\aIt's here!", 60, Gameplay } }, //hit

	//Gamma

	{ 1768, { "\aDriving complete.", 150, Gameplay } }, //Twinkle Circuit clear
	{ 1770, { "\aMission complete.", 150, Gameplay } }, //stage clear
	{ 1771, { "\aE-101 Beta: rescue complete.", 300, Gameplay } }, //Beta mk.2 clear
	{ 1772, { "\aFrog capture complete.", 240, Gameplay } }, //Emerald Coast clear
	{ 1773, { "\aE-105 Zeta: rescue complete.", 300, Gameplay } }, //Hot Shelter clear
	{ 1774, { "\aE-104 Epsilon: rescue complete.", 300, Gameplay } }, //Red Mountain clear
	{ 1775, { "\aE-103 Delta: rescue complete.", 300, Gameplay } }, //Windy Valley clear
	{ 1777, { "\aUnable to escape.", 150, Gameplay } }, //captured
	{ 1778, { "\aMission failed.", 150, Gameplay } }, //died
	{ 1786, { "\aActivity ceased.", 150, Gameplay } }, //time over


	/* Cutscene voices */

	//Before Egg Walker

	{ 816, { "\aIt's Eggman!", 30, Gameplay } },
	{ 818, { "\aIs it gonna be okay?", 30, Gameplay } },

	//After Egg Walker

	{ 821, { "\aYou did it!", 20, Cutscene } },
	{ 822, { "\aGood job!", 20, Cutscene } },
	{ 823, { "\aYou saved us!", 20, Cutscene } },
	{ 824, { "\aYou're so cool!", 20, Cutscene } },
	{ 825, { "\aYou saved the day!", 20, Cutscene } },

	//After Emerald Coast (Gamma)

	{ 1223, { "\aThis frog is the one we want!", 20, Gameplay } },
	{ 1224, { "\aNo, here's the real one!", 20, Gameplay } },
	{ 1225, { "\aMy frog is the right one!", 20, Gameplay } },


	/* Beta restores */

	//Big's unused fishing lines

	{ 1763, { "\aIt's small...", 90, Gameplay } }, //small fish
	{ 1761, { "\aThis one is fine.", 120, Gameplay } }, //medium-sized fish
	{ 1745, { "\aA big one!", 150, Gameplay } }, //large fish
	{ 1753, { "\aNo good.", 90, Gameplay } }, //failed attempt
	{ 1756, { "\aNo good.", 90, Gameplay } }, //failed attempt
	{ 1876, { "\aOkay! One more time!", 210, Gameplay } }, //try again
	{ 1877, { "\aAlmost got it!\nOkay, once more.", 210, Gameplay } }, //try again

	//Final Egg 1 (Sonic) intercom

	{ 1706, { "\aIntruder alert! Intruder alert!\nEgg Keepers, report to battle stations!", 360, Gameplay } },
	{ 1707, { "\aIntruder alert! Intruder alert!\nEgg Keepers, report to battle stations!", 360, Gameplay } },

	//Final Egg (Amy) Eggman's taunts

	{ 1984, { "\aHa-ha-ha-ha-ha! Wrong way!", 150, Gameplay } },
	{ 1985, { "\aHa-ha-ha-ha! Wrong way again!", 180, Gameplay } },
	{ 1986, { "\aHa-ha-ha-ha-ha-ha! Give up already!", 210, Gameplay } },

	//Sky Deck (probably) unused lines

	{ 1704, { "\aEmergency! Emergency!\nEliminate intruders immediately!", 420, Gameplay } }, //intercom
	{ 1705, { "\aEmergency! Emergency!\nEliminate intruders immediately!", 420, Gameplay } },
	{ 1727, { "\aStrong wind approaching.\nStrong wind approaching.", 150, Gameplay } },
	{ 1728, { "\aStrong wind alert canceled.", 120, Gameplay } },
	{ 1723, { "\aDescending into the clouds.\nSlow the ship down.", 360, Gameplay } }, //Eggman orders
	{ 1724, { "\aDescending into the clouds.\nSlow the ship down.", 360, Gameplay } },
	{ 1725, { "\aGo up. Full speed ahead!", 300, Gameplay } },
	{ 1726, { "\aYou insolent hedgehog!\nI'll shake you off!", 300, Gameplay } }, //Eggman ship tilt

	//vs E-101 mk.2 unused line

	{ 1681, { "\aStop it, Beta.", 90, Gameplay } },

	//characters taking damage with no rings

	{ 1809, { "\aSonic...", 90, Gameplay } }, //Tails
	{ 1796, { "\aIs it over...?", 60, Gameplay } }, //Knuckles
	{ 1740, { "\aOh no!", 90, Gameplay } }, //Amy
	{ 1755, { "\aNo good!", 120, Gameplay } }, //Big

	//Tails' stages alternate Sonic voices

	{ 1823, { "\aYOU MADE IT!", 60, Gameplay } },
	{ 1824, { "\aYOU GOT IT!", 60, Gameplay } },
	{ 1825, { "\aI MADE IT!", 60, Gameplay } },
	{ 1826, { "\aI GOT IT!", 60, Gameplay } },
	{ 1827, { "\aGOOD GOING!", 60, Gameplay } },
	{ 1828, { "\aHey-hey-hey!", 60, Gameplay } },
	{ 1829, { "\aCOME ON!", 60, Gameplay } },
	{ 1830, { "\aI WIN!", 60, Gameplay } },
	{ 1831, { "\aLET'S GET GOING!", 60, Gameplay } },
	{ 1832, { "\aHANG IN THERE!", 60, Gameplay } },
	{ 1833, { "\aWAIT-WAIT-WAIT!", 60, Gameplay } },
	{ 1834, { "\aHOLD IT!", 60, Gameplay } },
	{ 1835, { "\aHOORAY!", 60, Gameplay } },
	{ 1836, { "\aOKEY-DOKEY!", 60, Gameplay } },

	//Perfect Chaos unused Tikal's cheers

	{ 1713, { "\aSonic...?\nI see...", 150, Gameplay } },
	{ 1714, { "\aI bet on your courage.", 120, Gameplay } },
	{ 1716, { "\aYou need rings to stay as Super Sonic.\nBe careful!", 210, Gameplay } },
};