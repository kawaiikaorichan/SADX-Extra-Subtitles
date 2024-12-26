#pragma once


const char* SkyChase1_FrenchRetranslated[] = { "\aNe pensez pas avoir d�j� gagn� !", "\aEgg Cannon pr�t !", "\aEt... FEU !", "\aAah, on est touch�s !", "\aWoaaaaaah !" };
const char* SkyChase2_FrenchRetranslated[] = { "\aSystem mode : change !", "\aWooooah !", "\aBien ! Nous revoil� !", NULL };

std::map<int, SubtitleData> ExtraSubs_FrenchRetranslated
{
	/* Menu voices */

	//Default voice

	{ 0, { "\aChoisissez une carte m�moire.", 120, Menu } },
	{ 1, { "\aChoisissez un fichier.", 90, Menu } },
	{ 2, { "\aCeci est le mode aventure\no� vous pouvez faire l'histoire.", 180, Menu } },
	{ 3, { "\aCeci est le mode �preuve\no� vous pouvez jouer au niveau de votre choix.", 180, Menu } },
	{ 4, { "\aChoisissez un personnage.", 90, Menu } },
	{ 5, { "\aComment jouer avec Sonic.", 120, Menu } },
	{ 6, { "\aComment jouer avec Tails.", 120, Menu } },
	{ 7, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 8, { "\aComment jouer avec Amy.", 120, Menu } },
	{ 9, { "\aComment jouer avec E-102 Gamma.", 120, Menu } },
	{ 10, { "\aComment jouer avec Big.", 120, Menu } },
	{ 11, { "\aExplication des r�gles des niveaux d'action.", 150, Menu } },
	{ 12, { "\aChoisissez un niveau.", 90, Menu } },
	{ 13, { "\aChoisissez un mini-jeu.", 90, Menu } },
	{ 14, { "\aCeci est le menu des options.\nVous pouvez y changer les param�tres.", 210, Menu } },
	{ 15, { "\aCeci est le menu du test sonore.\nVous pouvez y �couter les musiques de fond.", 240, Menu } },
	{ 16, { "\aLa carte m�moire n'est pas pr�te.", 150, Menu } },
	{ 17, { "\aIl n'y a pas d'espace libre\ndans la carte m�moire.", 150, Menu } },

	//Tikal (alternate)

	{ 18, { "\aChoisissez une carte m�moire.", 90, Menu } },
	{ 19, { "\aChoisissez un fichier.", 90, Menu } },
	{ 20, { "\aCeci est le mode aventure\no� vous pouvez faire l'histoire.", 180, Menu } },
	{ 21, { "\aCeci est le mode �preuve\no� vous pouvez jouer au niveau de votre choix.", 180, Menu } },
	{ 22, { "\aChoisissez un personnage.", 90, Menu } },
	{ 23, { "\aComment jouer avec Sonic.", 90, Menu } },
	{ 24, { "\aComment jouer avec ce cher Tails.", 90, Menu } },
	{ 25, { "\aComment jouer avec Knuckles.", 90, Menu } },
	{ 26, { "\aComment jouer avec cette ch�re Amy.", 90, Menu } },
	{ 27, { "\aComment jouer avec E-102 Gamma.", 120, Menu } },
	{ 28, { "\aComment jouer avec Big.", 90, Menu } },
	{ 29, { "\aExplication des r�gles des niveaux d'action.\nFaites de votre mieux pour les m�moriser !", 210, Menu } },
	{ 30, { "\aQuel niveau voulez-vous jouer ?", 120, Menu } },
	{ 31, { "\aQuel mini-jeu voulez-vous jouer ?", 120, Menu } },
	{ 32, { "\aCeci est le menu des options.\nVous pouvez y changer divers options.", 210, Menu } },
	{ 33, { "\aCeci est le menu du test sonore.\nVous pouvez y �couter les sons du jeu.", 240, Menu } },
	{ 34, { "\aIl semblerait qu'il n'y ait pas de carte m�moire.", 120, Menu } },
	{ 35, { "\aIl n'y a pas assez de place\ndans la carte m�moire.", 150, Menu } },

	//Sonic

	{ 36, { "\aSelect your memory card.", 90, Menu } },
	{ 37, { "\aSelect a file.", 90, Menu } },
	{ 38, { "\aAdventure Mode.\nTu peux faire l'histoire dans ce mode.", 210, Menu } },
	{ 39, { "\aTrial Mode.\nTu peux jouer � un niveau de ton choix", 210, Menu } },
	{ 40, { "\aSelect your character.", 90, Menu } },
	{ 41, { "\aHow to play with me, Sonic.", 120, Menu } },
	{ 42, { "\aHow to play with Tails.", 120, Menu } },
	{ 43, { "\aHow to play with Knuckles.", 120, Menu } },
	{ 44, { "\aHow to play with Amy.", 90, Menu } },
	{ 45, { "\aHow to play with E-102 Gamma.", 180, Menu } },
	{ 46, { "\aHow to play with Big.", 120, Menu } },
	{ 47, { "\aHow to clear the game. Tu dois le savoir,\nsinon tu ne pourras pas finir le jeu !", 270, Menu } },
	{ 48, { "\aSelect a stage.", 90, Menu } },
	{ 49, { "\aSelect a game.", 90, Menu } },
	{ 50, { "\aOptions.\nChoisis les options que tu veux modifier.", 210, Menu } },
	{ 51, { "\aSound Test.\nTu peux y �couter des sons cools.", 240, Menu } },
	{ 52, { "\aFais bien attention � ce que ta carte m�moire\nsoit correctement positionn�e.", 120, Menu } },
	{ 53, { "\aH� ! Tu n'as pas assez d'espace\ndans ta carte m�moire.", 180, Menu } },

	//Tails

	{ 54, { "\aChoisis une carte m�moire.", 90, Menu } },
	{ 55, { "\aEnsuite, choisis un fichier.", 120, Menu } },
	{ 56, { "\aCeci est le mode aventure\no� tu peux faire l'histoire.", 180, Menu } },
	{ 57, { "\aCeci est le mode �preuve\no� tu peux jouer au niveau de ton choix.", 180, Menu } },
	{ 58, { "\aAvec qui voudrais-tu jouer ?", 90, Menu } },
	{ 59, { "\aComment jouer avec Sonic.", 120, Menu } },
	{ 60, { "\aComment jouer avec moi.", 120, Menu } },
	{ 61, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 62, { "\aComment jouer avec Amy.", 120, Menu } },
	{ 63, { "\aComment jouer avec E-102 Gamma.", 150, Menu } },
	{ 64, { "\aComment jouer avec Big.", 90, Menu } },
	{ 65, { "\aExplication des r�gles des niveaux d'action.\nFais bien attention � les retenir !", 240, Menu } },
	{ 66, { "\aQuel niveau vas-tu faire ?", 90, Menu } },
	{ 67, { "\aQuel mini-jeu vas-tu faire ?", 90, Menu } },
	{ 68, { "\aOptions.\nTu peux changer divers param�tres ici.", 210, Menu } },
	{ 69, { "\aTest sonore.\nTu peux �couter les sons du jeu ici.", 240, Menu } },
	{ 70, { "\aFais attention � ce que ta carte m�moire\nsoit plac�e correctement.", 120, Menu } },
	{ 71, { "\aIl semblerait que tu n'aies pas assez\nd'espace dans ta carte m�moire.", 180, Menu } },

	//Knuckles

	{ 72, { "\aChoisis une carte m�moire.", 90, Menu } },
	{ 73, { "\aChoisis un fichier.", 90, Menu } },
	{ 74, { "\aCeci est le mode aventure\no� tu peux faire l'histoire.", 180, Menu } },
	{ 75, { "\aCeci est le mode o� tu peux\nfaire un niveau au choix.", 180, Menu } },
	{ 76, { "\aChoisis un personnage � jouer.", 120, Menu } },
	{ 77, { "\aComment jouer avec Sonic.", 120, Menu } },
	{ 78, { "\aComment jouer avec Tails.", 120, Menu } },
	{ 79, { "\aComment jouer avec moi.", 120, Menu } },
	{ 80, { "\aComment jouer avec Amy.", 120, Menu } },
	{ 81, { "\aComment jouer avec E-102 Gamma.", 150, Menu } },
	{ 82, { "\aComment jouer avec Big.", 90, Menu } },
	{ 83, { "\aExplication des r�gles des niveaux d'action.\nLis-les bien, et tu deviendras un ma�tre � ce jeu.", 300, Menu } },
	{ 84, { "\aQuel niveau vas-tu jouer ?", 90, Menu } },
	{ 85, { "\aQuel mini-jeu vas-tu jouer ?", 90, Menu } },
	{ 86, { "\a�cran des options.\nTu peux y changer divers param�tres.", 210, Menu } },
	{ 87, { "\aTest sonore.\nTu peux y �couter les musiques de fond.", 210, Menu } },
	{ 88, { "\aIl semblerait que ta carte m�moire ne soit pas pr�te.", 150, Menu } },
	{ 89, { "\aIl semblerait que tu n'aies pas\nassez d'espace dans ta carte m�moire.", 150, Menu } },

	//Amy

	{ 90, { "\aChoisis une carte m�moire.", 120, Menu } },
	{ 91, { "\aChoisis un fichier.", 90, Menu } },
	{ 92, { "\aCeci est le mode aventure\no� tu peux profiter de l'histoire.", 180, Menu } },
	{ 93, { "\aCeci est le mode �preuve o�\ntu peux jouer � un niveau.", 180, Menu } },
	{ 94, { "\aChoisis un personnage.", 90, Menu } },
	{ 95, { "\aComment jouer avec mon amour, Sonic.", 150, Menu } },
	{ 96, { "\aComment jouer avec Tails.", 120, Menu } },
	{ 97, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 98, { "\aComment jouer avec moi.", 120, Menu } },
	{ 99, { "\aComment jouer avec M. Robot.", 120, Menu } },
	{ 100, { "\aComment jouer avec Big.", 120, Menu } },
	{ 101, { "\aExplication des r�gles des niveaux d'action.\nFais attention � bien les m�moriser !", 240, Menu } },
	{ 102, { "\aQuel niveau veux-tu jouer ?", 120, Menu } },
	{ 103, { "\aQuel mini-jeu veux-tu jouer ?", 120, Menu } },
	{ 104, { "\a�cran des options.\nTu peux y changer divers param�tres.", 240, Menu } },
	{ 105, { "\aTest sonore.\nTu peux �couter la musique du jeu ici.", 240, Menu } },
	{ 106, { "\aTa carte m�moire est-elle plac�e correctement ?", 150, Menu } },
	{ 107, { "\aTu n'as pas assez d'espace\nsur ta carte m�moire.", 150, Menu } },

	//Gamma

	{ 108, { "\aChoisis une carte m�moire.", 180, Menu } },
	{ 109, { "\aChoisis un fichier.", 120, Menu } },
	{ 110, { "\aMode aventure.", 120, Menu } },
	{ 111, { "\aMode �preuve.", 90, Menu } },
	{ 112, { "\aChoisis un personnage � jouer.", 150, Menu } },
	{ 113, { "\aInstructions de jeu : Sonic.", 150, Menu } },
	{ 114, { "\aInstructions de jeu : Tails.", 150, Menu } },
	{ 115, { "\aInstructions de jeu : Knuckles.", 180, Menu } },
	{ 116, { "\aInstructions de jeu : Amy.", 150, Menu } },
	{ 117, { "\aInstructions de jeu : E-102 Gamma.", 270, Menu } },
	{ 118, { "\aInstructions de jeu : Big.", 150, Menu } },
	{ 119, { "\aExplication des r�gles des niveaux d'action.\nPrenez imm�diatement note de ces informations.", 360, Menu} },
	{ 120, { "\aChoisis un niveau � jouer.", 150, Menu } },
	{ 121, { "\aChoisissez un mini-jeu.", 150, Menu } },
	{ 122, { "\a�cran d'options.\nChoisissez un param�tre.", 240, Menu } },
	{ 123, { "\aTest sonore.\nDe la musique de fond peut �tre s�lectionn�e ici.", 330, Menu } },
	{ 124, { "\aCarte m�moire introuvable.", 210, Menu } },
	{ 125, { "\aAttention !\nEspace insuffisant dans la carte m�moire !", 300, Menu } },

	//Big

	{ 126, { "\aChoisis une carte m�moire.", 150, Menu } },
	{ 127, { "\aQuel fichier voudrais-tu choisir ?", 150, Menu } },
	{ 128, { "\aCeci est le mode o�\ntu peux faire l'histoire.", 180, Menu } },
	{ 129, { "\aTu peux faire un niveau au choix.", 180, Menu } },
	{ 130, { "\aAvec qui voudrais-tu jouer ?", 120, Menu } },
	{ 131, { "\aComment jouer avec le h�risson.", 180, Menu } },
	{ 132, { "\aComment jouer avec le renard.", 180, Menu } },
	{ 133, { "\aComment jouer avec l'�chidn�.", 180, Menu } },
	{ 134, { "\aComment jouer avec la fille.", 180, Menu } },
	{ 135, { "\aComment jouer avec le robot.", 180, Menu } },
	{ 136, { "\aComment jouer avec moi.", 180, Menu } },
	{ 137, { "\aR�gles des niveaux d'action.\nAssure-toi de les m�moriser !", 330, Menu } },
	{ 138, { "\aO� voudrais-tu jouer ?", 120, Menu } },
	{ 139, { "\aQu'est-ce que tu voudrais jouer ?", 120, Menu } },
	{ 140, { "\aOptions.\nIl semblerait que tu puisses changer des choses.", 300, Menu } },
	{ 141, { "\aTest sonore.\nTu peux �couter de la musique.", 270, Menu } },
	{ 142, { "\aTa carte m�moire est-elle plac�e correctement ?", 210, Menu } },
	{ 143, { "\aTu n'as pas assez d'espace dans\nta carte m�moire.", 210, Menu } },

	//Eggman

	{ 144, { "\aChoisis une carte m�moire.", 120, Menu } },
	{ 145, { "\aBien ! Maintenant, choisis un fichier.", 180, Menu } },
	{ 146, { "\aCeci est le mode aventure\no� tu peux te mesurer � moi.", 270, Menu } },
	{ 147, { "\aEntra�ne-toi dans le mode �preuve.", 210, Menu } },
	{ 148, { "\aAvec qui voudrais-tu jouer ?", 120, Menu } },
	{ 149, { "\aComment jouer avec ce maudit Sonic.", 150, Menu } },
	{ 150, { "\aComment jouer avec ce gamin renard, Tails.", 150, Menu } },
	{ 151, { "\aComment jouer avec ce cr�tin, Knuckles.", 150, Menu } },
	{ 152, { "\aComment jouer avec cette petite fille, Amy.", 150, Menu } },
	{ 153, { "\aComment jouer avec mon serviteur,\nE-102 Gamma.", 240, Menu } },
	{ 154, { "\aComment jouer avec ce gros chat,\nBig machin-chose.", 210, Menu } },
	{ 155, { "\aExplication des r�gles des niveaux d'action.\nFinis ta lecture et grouille-toi de commencer une partie !", 480, Menu } },
	{ 156, { "\aQuel niveau vas-tu faire ?", 120, Menu } },
	{ 157, { "\aQuel mini-jeu vas-tu faire ?", 120, Menu } },
	{ 158, { "\a�cran des options.\nDonc, change n'importe quelle option que tu veux.", 300, Menu } },
	{ 159, { "\aTest sonore.\nTu peux �couter divers musiques ici.", 300, Menu } },
	{ 160, { "\aTa carte m�moire est-elle plac�e correctement ?", 150, Menu } },
	{ 161, { "\aLa m�moire de ta carte m�moire\nest d�j� remplie par autre chose.", 210, Menu } },


	/* Character select lines */

	{ 1837, { "\aLet's get them !", 120, Menu } }, //Sonic
	{ 1800, { "\aSonic ! Me voil� !", 120, Menu } }, //Tails
	{ 1787, { "\aTr�s bien ! On y va !", 90, Menu } }, //Knuckles
	{ 1730, { "\aC'est � moi maintenant !", 90, Menu } }, //Amy
	{ 1767, { "\aPr�parations compl�t�es.", 150, Menu } }, //Gamma
	{ 1744, { "\aFroggy, attends-moi !", 180, Menu } }, //Big


	/* Common idle lines */

	{ 390, { "\aIl va bient�t falloir y aller...", 90, Gameplay } }, //Sonic
	{ 392, { "\aJe dois me d�p�cher !", 60, Gameplay } }, //Knuckles
	{ 393, { "\aWaah, je suis si fatigu�e !", 90, Gameplay } }, //Amy
	{ 394, { "\aPr�parations au combat compl�t�es.", 180, Gameplay } }, //Gamma
	{ 395, { "\aJe commence � avoir faim.", 210, Gameplay } }, //Big


	/* Adventure fields idle lines */

	//Station Square - station area

	{ 288, { "\aCette gare est donc\nle centre de la ville ?", 180, Gameplay } }, //Sonic
	{ 289, { "\aLes chemins de fer sont cools, eux aussi !", 90, Gameplay } }, //Tails
	{ 290, { "\aVoici donc Station Square ?", 120, Gameplay } }, //Knuckles
	{ 291, { "\aUne ville avec vue sur\nl'oc�an, c'est tellement g�nial !", 180, Gameplay } }, //Amy
	{ 292, { "\aJe me demande s'il y a des poissons,\nici...", 210, Gameplay } }, //Big
	{ 293, { "\aExploration de Station Square en cours...", 180, Gameplay } }, //Gamma

	//Station Square - city hall area

	{ 274, { "\aCet endroit a pas mal chang�, lui aussi...", 150, Gameplay } }, //Sonic
	{ 275, { "\aJ'ai faim...", 90, Gameplay } }, //Tails
	{ 276, { "\aJe ne me sens pas � ma place, dans une ville.", 120, Gameplay } }, //Knuckles
	{ 277, { "\aDevrais-je faire les magasins ?", 120, Gameplay } }, //Amy
	{ 278, { "\aTout le monde a l'air d'�tre occup�.", 180, Gameplay } }, //Big
	{ 279, { "\aD�tection d'�tres humains.", 210, Gameplay } }, //Gamma

	//Station Square - sewers

	{ 286, { "\aJ'ai l'impression d'�tre un rat.", 180, Gameplay } }, //Sonic
	{ 287, { "\aC'est tellement sombre, ici !", 120, Gameplay } }, //Big

	//Station Square - Twinkle Park entrance

	{ 300, { "\aCes endroits ne sont pas trop mon truc.", 150, Gameplay } }, //Sonic
	{ 301, { "\aJe ne pense pas pouvoir aller\nau parc d'attraction.", 120, Gameplay } }, //Tails
	{ 302, { "\aQuel est cet endroit ?", 90, Gameplay } }, //Knuckles
	{ 303, { "\aJ'ai le c?ur qui bat la chamade !", 120, Gameplay } }, //Amy
	{ 304, { "\aTwinkle Park ?", 150, Gameplay } }, //Big
	{ 305, { "\aCircuit de karts d�tect�.", 150, Gameplay } }, //Gamma

	//Station Square - hotel

	{ 294, { "\aHey hey ! C'est pas le moment de se reposer !", 180, Gameplay } }, //Sonic
	{ 295, { "\aCet h�tel... J'envie ceux qui s'y reposent.", 180, Gameplay } }, //Tails
	{ 296, { "\aHm, un h�tel pour les vacanciers ?", 120, Gameplay } }, //Knuckles
	{ 297, { "\aJ'adorerais rester � un h�tel comme celui-ci !", 210, Gameplay } }, //Amy
	{ 298, { "\aQuelle grande maison !", 150, Gameplay } }, //Big
	{ 299, { "\aMode combat d�sengag�.", 150, Gameplay } }, //Gamma

	//Station Square - casino area / station

	{ 280, { "\aOh oh ! Je n'ai pas le temps de jouer\ndans un endroit pareil !", 210, Gameplay } }, //Sonic
	{ 281, { "\aQuelle grande ville !", 90, Gameplay } }, //Tails
	{ 282, { "\aQuelle ville pleine de vie !", 90, Gameplay } }, //Knuckles
	{ 283, { "\aCette ville ne change jamais !", 150, Gameplay } }, //Amy
	{ 284, { "\aFroggy, o� peux-tu �tre ?", 150, Gameplay } }, //Big
	{ 285, { "\aTrain se dirigeant vers les Mystic Ruins confirm�.", 210, Gameplay } }, //Gamma

	//Mystic Ruins - station area

	{ 306, { "\aCet endroit est calme...", 120, Gameplay } }, //Sonic
	{ 307, { "\aCet endroit a quand m�me pas mal\nchang� depuis qu'ils ont construit la gare.", 180, Gameplay } }, //Tails
	{ 308, { "\aJe dois me d�p�cher\net restaurer l'�meraude M�re.", 150, Gameplay } }, //Knuckles
	{ 309, { "\aJe n'aime pas sp�cialement ce genre d'endroit...", 210, Gameplay } }, //Amy
	{ 310, { "\aJe me demande bien o� peut �tre Froggy...", 180, Gameplay } }, //Big
	{ 311, { "\aExploration des Mystic Ruins...", 180, Gameplay } }, //Gamma

	//Mystic Ruins - Angel Island

	{ 312, { "\aDonc, c'est Angel Island ?", 120, Gameplay } }, //Sonic
	{ 313, { "\aIl faut que je me d�p�che\npour faire remonter cette �le dans le ciel...", 180, Gameplay } }, //Knuckles
	{ 314, { "\aAtterrissage sur Angel Island.", 120, Gameplay } }, //Gamma

	//Mystic Ruins - jungle

	{ 315, { "\aL� on peut parler !", 90, Gameplay } }, //Sonic
	{ 316, { "\aD'o� est-ce que je viens ?", 120, Gameplay } }, //Tails
	{ 317, { "\aCet endroit...\nIl me rend nostalgique, �trangement.", 210, Gameplay } }, //Knuckles
	{ 318, { "\aCet endroit est g�nial !", 120, Gameplay } }, //Amy
	{ 319, { "\aJe devrais peut-�tre rentrer...", 150, Gameplay } }, //Big
	{ 320, { "\aAugmentation de la temp�rature.\nMode de refroidissement forc� 1 : enclench�.", 360, Gameplay } }, //Gamma

	//Final Egg entrance

	{ 321, { "\aVoici donc la base d'Eggman ?", 120, Gameplay } }, //Sonic
	{ 322, { "\aVoici donc la forteresse d'Eggman !", 120, Gameplay } }, //Tails
	{ 323, { "\aC'est... sa base ?", 120, Gameplay } }, //Knuckles, wtf?
	{ 324, { "\aSonic, je ferai de mon mieux !", 150, Gameplay } }, //Amy
	{ 325, { "\aL'endroit o� j'ai �t� cr��.", 120, Gameplay } }, //Gamma

	//Past (normal)

	{ 326, { "\aQuel est cet endroit ?", 90, Gameplay } }, //Tails
	{ 327, { "\aO�... suis-je ?", 120, Gameplay } }, //Knuckles
	{ 328, { "\aOuh l�... Je suis o� ?", 180, Gameplay } }, //Amy
	{ 329, { "\aHuum... O� suis-je ?", 210, Gameplay } }, //Big
	{ 330, { "\aDonn�es correspondantes introuvables.\nImpossible de d�terminer la position actuelle.", 330, Gameplay } }, //Gamma

	//Past (fire)

	{ 331, { "\aC'est horrible !", 60, Gameplay } }, //Sonic
	{ 332, { "\aPourquoi... ?", 60, Gameplay } }, //Knuckles

	//Egg Carrier - outside

	{ 333, { "\aPfiou ! Magnifique !", 180, Gameplay } }, //Sonic
	{ 334, { "\aCe vaisseau est incroyable !", 120, Gameplay } }, //Tails
	{ 335, { "\aEt dire qu'une telle chose\npeut voler...", 180, Gameplay } }, //Knuckles
	{ 336, { "\aPourquoi voudrait-il\ncr�er une chose pareille...", 180, Gameplay } }, //Amy
	{ 337, { "\aPoursuite de la mission...", 120, Gameplay } }, //Gamma
	{ 338, { "\aComment ce vaisseau fait-il pour voler ?", 210, Gameplay } }, //Big

	//Egg Carrier - inside

	{ 339, { "\aGhh... Il n'essaye m�me pas de cacher\nses go�ts � ses compagnons de voyage !", 240, Gameplay } }, //Sonic
	{ 340, { "\aUn jour, je cr�erai un vaisseau comme celui-ci !", 120, Gameplay } }, //Tails
	{ 341, { "\aO� est la sortie ?", 90, Gameplay } }, //Knuckles
	{ 342, { "\aMarchons doucement pour ne pas\nnous faire rep�rer.", 150, Gameplay } }, //Amy
	{ 343, { "\aPoursuite de la mission...", 120, Gameplay } }, //Gamma
	{ 344, { "\aHuum... Sortie ? Sortie ? Huum...", 210, Gameplay } }, //Big


	/* Action stages idle lines */

	//Emerald Coast

	{ 227, { "\aJ'imagine que je n'ai qu'�\nlonger le bord de mer.", 150, Gameplay } }, //Sonic
	{ 228, { "\aD�tection de grenouilles.", 180, Gameplay } }, //Gamma
	{ 229, { "\aLe vent fait du bien !", 120, Gameplay } }, //Sonic
	{ 230, { "\aWQuel grand lac !", 150, Gameplay } }, //Big

	//Windy Valley

	{ 231, { "\aJe peux entendre le vent, au loin.", 120, Gameplay } }, //Sonic
	{ 232, { "\aPr�sence d'E-103 confirm�e.", 240, Gameplay } }, //Gamma
	{ 233, { "\aMieux vaut sortir d'ici rapidement !", 120, Gameplay } }, //Sonic
	{ 234, { "\aJ'ai atterri assez haut !", 150, Gameplay } }, //Sonic
	{ 235, { "\aO� est pass� Sonic ?", 120, Gameplay } }, //Tails

	//Casinopolis

	{ 236, { "\aHein... Des flippers ?", 150, Gameplay } }, //Sonic
	{ 237, { "\aQue c'est brillant, ici !", 90, Gameplay } }, //Knuckles
	{ 238, { "\aQuelle horrible odeur...\nC'est un vide-ordures ?", 210, Gameplay } }, //Sonic

	//Icecap

	{ 239, { "\aPfiou... Il fait froid � en geler, ici !", 150, Gameplay } }, //Sonic
	{ 240, { "\aC'est comme un royaume de glace...", 120, Gameplay } }, //Sonic
	{ 241, { "\aLa glace semble d�licieuse !", 150, Gameplay } }, //Big
	{ 242, { "\aJe vais faire des figures de malade !", 150, Gameplay } }, //Sonic
	{ 243, { "\aJ'imagine qu'il va falloir descendre.", 120, Gameplay } }, //Tails

	//Twinkle Park

	{ 244, { "\a�a doit �tre l'entr�e de la\ncourse de karts.", 150, Gameplay } }, //Sonic
	{ 245, { "\aIl n'y a pas l'air d'y avoir des personnes ici.", 120, Gameplay } }, //Sonic
	{ 246, { "\aJ'ai h�te de voir ce que\nje vais pouvoir p�cher.", 180, Gameplay } }, //Big
	{ 247, { "\aJe me demande o� est pass� Sonic...", 150, Gameplay } }, //Amy

	//Speed Highway

	{ 248, { "\aOK... � fond les bananes !", 180, Gameplay } }, //Sonic
	{ 249, { "\aO� est Eggman ?", 90, Gameplay } }, //Tails
	{ 250, { "\aHey hey, c'est pas le moment de faire joujou !", 120, Gameplay } }, //Sonic
	{ 251, { "\aLes voitures ne semblent pas bouger !", 120, Gameplay } }, //Sonic
	{ 252, { "\aLes pi�ces de l'�meraude doivent\n�tre quelque part dans cette ville.", 180, Gameplay } }, //Knuckles

	//Red Mountain

	{ 253, { "\aO� est pass� l'Egg Carrier ?", 120, Gameplay } }, //Sonic
	{ 254, { "\aOuh l�... S'en est fini de\nmoi si je tombe dans la lave.", 270, Gameplay } }, //Sonic
	{ 255, { "\aPr�sence d'E-104 confirm�e.", 120, Gameplay } }, //Gamma
	{ 256, { "\aSi je tombe de cette falaise, s'en est fini de moi.", 150, Gameplay } }, //Knuckles

	//Sky Deck

	{ 257, { "\aPfiou... Si je tombe ici, c'est termin� pour moi.", 210, Gameplay } }, //Sonic
	{ 258, { "\aC'est si haut...\nMes jambes commencent � faiblir !", 180, Gameplay } }, //Tails
	{ 259, { "\aShoot ! Que ce vent est p�nible !", 240, Gameplay } }, //Sonic
	{ 260, { "\aHey hey, c'est quoi le\nprobl�me de ce vaisseau ?", 180, Gameplay } }, //Sonic
	{ 261, { "\aBien... O� sont les tr�sors ?", 210, Gameplay } }, //Knuckles

	//Lost World

	{ 262, { "\aQu'est-ce que c'est calme ici.", 150, Gameplay } }, //Sonic
	{ 263, { "\aC'est quoi... cet endroit...?", 120, Gameplay } }, //Sonic
	{ 264, { "\aLes pi�ces de l'�meraude\ndevraient �tre � cet endroit.", 150, Gameplay } }, //Knuckles

	//Final Egg

	{ 265, { "\aBeurk... Quelle horrible odeur d'huile...", 180, Gameplay } }, //Sonic
	{ 266, { "\aPetit oiseau, reprenons-nous et partons !", 150, Gameplay } }, //Amy
	{ 267, { "\aO� est-ce que �a va ?", 120, Gameplay } }, //Sonic
	{ 268, { "\aAttends pour voir, Eggman !", 90, Gameplay } }, //Sonic
	{ 269, { "\aH�risson bleu : ennemi.", 150, Gameplay } }, //Gamma

	//Hot Shelter

	{ 270, { "\aEggman, t'es vraiment affreux !", 150, Gameplay } }, //Amy
	{ 271, { "\aJe me demande si Froggy va bien.", 210, Gameplay } }, //Big
	{ 272, { "\aRooh... O� est-ce que je devrais aller ?", 210, Gameplay } }, //Amy
	{ 273, { "\aPr�sence d'E-105 confirm�e.", 120, Gameplay } }, //Gamma


	/* Boss battle idle lines */

	//Sonic

	{ 368, { "\aC'est quoi le probl�me de ce type ?\nIl n'est pas invincible, quand m�me ?", 150, Gameplay } }, //Chaos 0
	{ 369, { "\aJe sais pas ce que t'as en t�te,\nmais �a ne sert � rien !", 120, Gameplay } }, //Egg Hornet
	{ 370, { "\aKnuckles ? Qu'est-ce qui ne va pas ?", 120, Gameplay } }, //vs Knuckles
	{ 371, { "\aH� ! Cette fois-ci, tu ne t'�chapperas pas !", 120, Gameplay } }, //Chaos 4
	{ 372, { "\aNot so bad ! Pas mal du tout !", 180, Gameplay } }, //Gamma
	{ 373, { "\aO� est son point faible ?", 90, Gameplay } }, //Chaos 6
	{ 374, { "\aFini de jouer, Eggman !", 120, Gameplay } }, //Egg Viper

	//Tails

	{ 375, { "\aJe ne vais pas perdre !", 60, Gameplay } }, //Egg Hornet	
	{ 376, { "\aA-Attends !", 90, Gameplay } }, //vs Knuckles
	{ 377, { "\aSale monstre liquide !", 90, Gameplay } }, //Chaos 4
	{ 378, { "\aIl y a quelque chose de diff�rent chez ce robot.", 150, Gameplay } }, //vs Gamma
	{ 379, { "\aJe peux le faire par mes propres moyens !", 120, Gameplay } }, //Egg Walker

	//Knuckles

	{ 380, { "\aJe vais te retourner la faveur !", 90, Gameplay } }, //Chaos 2
	{ 381, { "\aRedonne-moi l'�meraude !", 60, Gameplay } }, //vs Sonic
	{ 382, { "\aIl ne sait jamais quand s'arr�ter !", 120, Gameplay } }, //Chaos 4
	{ 383, { "\aCette fois-ci... Je vais en finir avec toi !", 180, Gameplay } }, //Chaos 6

	//Amy

	{ 384, { "\aJe ne te laisserai pas t'en tirer comme �a !", 120, Gameplay } }, //Zero

	//Gamma

	{ 385, { "\aCible confirm�e.", 120, Gameplay } }, //E-101
	{ 386, { "\aH�risson bleu : ennemi.", 150, Gameplay } }, //vs Sonic
	{ 387, { "\aBeta !", 60, Gameplay } }, //E-101 mk.2

	//Super Sonic

	{ 388, { "\aJe te montrerai le\nvrai pouvoir des �meraudes !", 210, Gameplay } },
	{ 389, { "\aEst-ce que c'est son c?ur ?", 90, Gameplay } },


	/* Chao Garden idle lines */

	//Sonic

	{ 348, { "\aQuel endroit tranquille...", 150, Gameplay } },
	{ 349, { "\aYo ! Vous allez bien, les gars ?", 120, Gameplay } },
	{ 350, { "\aHey guys ! Pas de bagarre !", 150, Gameplay } },

	//Tails

	{ 351, { "\aJe me sens d�tendu quand je viens ici.", 120, Gameplay } },
	{ 352, { "\aComment vous allez, les gars ?", 90, Gameplay } },
	{ 353, { "\aJe vous aime, moi aussi !", 120, Gameplay } },

	//Knuckles

	{ 354, { "\aJe suppose qu'il n'y a pas d'�meraudes ici...", 150, Gameplay } },
	{ 355, { "\aJ'ai l'impression...\nd'avoir d�j� rencontr� ces gars quelque part...", 210, Gameplay } },
	{ 356, { "\a�tre ici me rappelle ma contr�e\npour d'�tranges raisons...", 240, Gameplay } },

	//Amy

	{ 357, { "\aAaah... C'est si tranquille, ici...", 270, Gameplay } },
	{ 358, { "\a*baille* Je commence � avoir sommeil...", 360, Gameplay } },
	{ 359, { "\aLes gars ! Ne vous battez pas s'il vous pla�t !", 150, Gameplay } },
	{ 360, { "\aSi seulement Sonic �tait l� avec moi...", 180, Gameplay } },

	//Gamma

	{ 361, { "\aQuel est cet endroit ?", 60, Gameplay } },
	{ 362, { "\aMode combat d�sengag�.", 150, Gameplay } },
	{ 363, { "\aD�tection d'�tres vivants.", 120, Gameplay } },

	//Big

	{ 364, { "\aJe me sens vraiment bien.", 180, Gameplay } },
	{ 365, { "\aVous allez bien ?", 120, Gameplay } },
	{ 366, { "\aJe commence � avoir faim...", 240, Gameplay } },
	{ 367, { "\aHmm... J'ai envie d'aller faire de la p�che !", 210, Gameplay } },


	/* Mini games idle lines */

	//Sand Hill

	{ 345, { "\aShoot ! J'ai du sable dans les yeux !", 120, Gameplay } }, //Sonic
	{ 346, { "\aCe sable est si doux\net il est si facile de glisser dessus !", 150, Gameplay } }, //Tails

	//Hedgehog Hammer

	{ 347, { "\aH-H�, o� suis-je ?", 120, Gameplay } }, //Amy


	/* Sky Chase sequences */

	//Sky Chase 1 - before Egg Cannon fires

	{ 491, { "\aOn a r�ussi !", 60, Gameplay } }, //Tails
	{ 716, { "\aOn a r�ussi !", 60, Gameplay } }, //Tails (duplicate?)
	{ 492, { "\aC'�tait du g�teau !", 150, Gameplay } }, //Sonic	
	{ 717, { "\aC'�tait du g�teau !", 150, Gameplay } }, //Sonic (duplicate?)

	//Sky Chase 2 - before transformation

	{ 765, { "\aBien, on a r�ussi � passer la\npremi�re ligne de d�fense !", 180, Gameplay } },
	{ 766, { "\aIl y en a d'autres qui viennent !", 90, Gameplay } },
	{ 767, { "\aOui, je sais !", 90, Gameplay } },

	//Sky Chase 2 - transformation sequence alternate lines (they also match the regular lines in Japanese)

	{ 530, { "\aBien, on a r�ussi � passer la\npremi�re ligne de d�fense !", 180, Gameplay } },
	{ 531, { "\aIl y en a d'autres qui viennent !", 90, Gameplay } },
	{ 532, { "\aOui, je sais !", 90, Gameplay } },
	{ 533, { "\aSystem mode : change !", 120, Gameplay } },
	{ 534, { "\aWooooah !", 90, Gameplay } },
	{ 535, { "\aTr�s bien ! On y va !", 120, Gameplay } },


	/* Action stages voices */

	//All Tails' stages except for Speed Highway (Sonic's voice)

	{ 205, { "\aCome on, Tails !", 60, Gameplay } },
	{ 206, { "\aHey hey hey !", 90, Gameplay } },
	{ 207, { "\aBien jou�, Tails ! Continue comme �a !", 120, Gameplay } },
	{ 208, { "\aH-H�, Tails !", 90, Gameplay } },
	{ 209, { "\aYou made it !", 60, Gameplay } },
	{ 210, { "\aCome on !", 60, Gameplay } },
	{ 211, { "\aTails, je pars devant !", 90, Gameplay } },
	{ 212, { "\aTails, d�p�che-toi !", 60, Gameplay } },
	{ 213, { "\aHooray !", 60, Gameplay } },
	{ 214, { "\aI got it !", 60, Gameplay } },
	{ 215, { "\aTails, tu n'as plus de Rings !\nSois prudent !", 120, Gameplay } },

	//Speed Highway (Eggman's voice)

	{ 216, { "\aTu penses pouvoir me tenir t�te ?", 150, Gameplay } },
	{ 217, { "\aJe t'ai eu, Tails !", 120, Gameplay } },
	{ 218, { "\aQuoi ? Il a rattrap� son retard ?", 120, Gameplay } },
	{ 219, { "\aMaudit petit renard !", 120, Gameplay } },
	{ 220, { "\aMo... Mon petit Tails ! Attends-mooooi !", 180, Gameplay } },
	{ 221, { "\aWhahahahahahahahaha !", 120, Gameplay } },
	{ 222, { "\aAdieux, Tails !", 120, Gameplay } },
	{ 223, { "\aJe vais d�truire cette ville toute enti�re !", 150, Gameplay } },
	{ 224, { "\aIl te manque 100 ans\npour pouvoir me battre !", 180, Gameplay } },
	{ 225, { "\aLa victoire me revient !\nWhahahahahahahaha !", 210, Gameplay } },
	{ 226, { "\aMaintenant, rends-toi, Tails !", 180, Gameplay } },

	//Final Egg

	{ 1588, { "\aUrgence ! Urgence !\n�liminez les intrus imm�diatement !", 420, Gameplay } }, //intercom
	{ 1589, { "\aUrgence ! Urgence !\n�liminez les intrus imm�diatement !", 420, Gameplay } },
	{ 1590, { "\aFinal Egg : cloison de niveau 2 ouverte.", 300, Gameplay } },
	{ 1591, { "\aFinal Egg : cloison de niveau 2 ouverte.", 300, Gameplay } },
	{ 1592, { "\aD�truis les cibles\net tu gagneras du temps en plus.", 240, Gameplay } }, //Eggman to Gamma
	{ 1593, { "\aD�truis la cible Sonic !", 210, Gameplay } },


	/* Boss voices */

	//vs character

	{ 166, { "\aPas mal, Sonic !", 60, Gameplay } }, //Knuckles
	{ 167, { "\aPas mal, Knuckles !", 90, Gameplay } }, //Sonic
	{ 168, { "\aPas mal, Tails !", 60, Gameplay } }, //Knuckles
	{ 169, { "\aLes ordres sont absolus.", 150, Gameplay } }, //Gamma
	{ 170, { "\aIl est... fort...", 120, Gameplay } }, //Sonic

	//Eggman bosses

	{ 171, { "\aTous les syst�mes - puissance maximale !", 90, Gameplay } },
	{ 172, { "\aOuille !", 30, Gameplay } },
	{ 174, { "\aPrends �a !", 60, Gameplay } },
	{ 176, { "\aEsp�ce de...!", 90, Gameplay } },
	{ 177, { "\aQ-Qu'est-ce que...?!", 60, Gameplay } },
	{ 1902, { "\aWhoohahahahahaha !\nSonic, essaye de m'atteindre !", 270, Gameplay } }, //Egg Viper
	{ 1903, { "\aSonic, maintenant, prends �a !", 210, Gameplay } },


	/* Adventure fields announcers */

	//Station Square

	{ 1567, { "\aChers passagers ! Veuillez prendre vos places\net attendre le d�part.", 300, Gameplay } },
	{ 1568, { "\aChers passagers ! Veuillez prendre vos places\net attendre le d�part.", 300, Gameplay } },
	{ 1569, { "\aLe train en destination des Mystic Ruins\nva bient�t partir.", 270, Gameplay } },
	{ 1570, { "\aLe train en destination des Mystic Ruins\nva bient�t partir.", 270, Gameplay } },
	{ 1571, { "\aUn train devrait bient�t arriver.\nVeuillez-vous �carter !", 270, Gameplay } },
	{ 1572, { "\aUn train devrait bient�t arriver.\nVeuillez-vous �carter !", 270, Gameplay } },
	{ 1573, { "\aAucun train n'est actuellement en service.", 180, Gameplay } },
	{ 1574, { "\aAucun train n'est actuellement en service.", 180, Gameplay } },

	//Twinkle Park entrance

	{ 1575, { "\aWelcome to Twinkle Park !", 90, Gameplay } },

	//Mystic Ruins

	{ 1654, { "\aChers passagers ! Veuillez prendre vos places\net attendre le d�part.", 300, Gameplay } },
	{ 1655, { "\aLe train en destination de Station Square\nva bient�t partir.", 270, Gameplay } },
	{ 1656, { "\aUn train devrait bient�t arriver.\nVeuillez-vous �carter!", 300, Gameplay } },
	{ 1657, { "\aAucun train n'est actuellement en service.", 210, Gameplay } },


	/* Character specific gameplay voices */

	//Sonic

	{ 1838, { "\aYeeees !", 90, Gameplay } }, //Twinkle Circuit clear
	{ 1839, { "\aYahou !", 90, Gameplay } }, //Twinkle Circuit jump
	{ 1840, { "\aYes !", 60, Gameplay } }, //stage clear
	{ 1841, { "\aHey, pump it up !", 120, Gameplay } }, //bad clear
	{ 1842, { "\a*sifflement* It's sweet !", 180, Gameplay } }, //good clear
	{ 1843, { "\aHey guy !\nJe m'amuserai avec toi une autre fois !", 180, Gameplay } }, //boss clear
	{ 1844, { "\aYeah ! It's okay !", 120, Gameplay } }, //normal clear
	{ 1845, { "\aL-Laisse-moi partir !", 60, Gameplay } }, //captured
	{ 1847, { "\aNo !", 60, Gameplay } }, //died with no rings

	//Tails

	{ 1801, { "\aOuais !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1802, { "\aYahou !", 60, Gameplay } }, //Twinkle Circuit/Icecap jump
	{ 1803, { "\aOuais !", 60, Gameplay } }, //stage clear
	{ 1804, { "\aPfiou, c'est pas pass� loin.", 120, Gameplay } }, //bad clear
	{ 1805, { "\aJ'ai r�ussi, Sonic !", 90, Gameplay } }, //good clear
	{ 1806, { "\aJe suis plus fort que tu ne le crois !", 90, Gameplay } }, //boss clear
	{ 1807, { "\aBah, je suppose que c'est pas si mal.", 90, Gameplay } }, //normal clear
	{ 1808, { "\aH-H� !", 60, Gameplay } }, //captured

	//Knuckles

	{ 1788, { "\aG�nial !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1790, { "\aTrouv�es !", 60, Gameplay } }, //stage clear
	{ 1791, { "\aHmph, �a m'a pris du temps.", 150, Gameplay } }, //bad clear
	{ 1792, { "\aC'�tait facile.", 60, Gameplay } }, //good clear
	{ 1793, { "\aHmph, de belles paroles dans le vide.", 150, Gameplay } }, //boss clear
	{ 1794, { "\aBah, �a passe.", 90, Gameplay } }, //normal clear
	{ 1795, { "\aMiiince !", 60, Gameplay } }, //captured

	//Amy

	{ 1731, { "\aJ'ai r�ussi !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1732, { "\aYoupi !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1733, { "\aJ'ai r�ussi !", 90, Gameplay } }, //stage clear
	{ 1734, { "\aPfiou... C'est pas pass� loin...", 120, Gameplay } }, //bad clear
	{ 1735, { "\aQuand je fais quelque chose,\nje ne le fais pas � moiti� !", 150, Gameplay } }, //boss clear
	{ 1736, { "\aJe suis sauv�e !", 90, Gameplay } }, //normal clear
	{ 1737, { "\aTrop bien ! Je suis la meilleure !", 150, Gameplay } }, //good clear
	{ 1738, { "\aH�, laisse-moi partir !", 150, Gameplay } }, //captured

	//Big

	{ 1334, { "\aOoooh, il est reparti...", 240, Gameplay } }, //stage clear (Twinkle Park, Icecap)
	{ 1747, { "\aFroggy !", 90, Gameplay } }, //stage clear (Emerald Coast, Hot Shelter)	
	{ 1748, { "\aJe ferai de mon mieux, la prochaine fois.", 150, Gameplay } }, //bad clear
	{ 1749, { "\aGrosse prise ! Grosse prise !", 90, Gameplay } }, //good clear
	{ 1750, { "\aTu vas bien, Froggy ?", 150, Gameplay } }, //boss clear
	{ 1751, { "\aC'�tait une bonne p�che !", 150, Gameplay } }, //normal clear
	{ 1758, { "\aAttrap� ! Attrap� !", 120, Gameplay } }, //got fish
	{ 1759, { "\a�a mord !", 60, Gameplay } }, //hit

	//Gamma

	{ 1768, { "\aConduite compl�t�e.", 150, Gameplay } }, //Twinkle Circuit clear
	{ 1770, { "\aMission accomplie.", 150, Gameplay } }, //stage clear
	{ 1771, { "\aE-101 Beta : sauvetage accompli.", 300, Gameplay } }, //Beta mk.2 clear
	{ 1772, { "\aCapture de la grenouille accomplie.", 240, Gameplay } }, //Emerald Coast clear
	{ 1773, { "\aE-105 Zeta : sauvetage accompli.", 300, Gameplay } }, //Hot Shelter clear
	{ 1774, { "\aE-104 Epsilon : sauvetage accompli.", 300, Gameplay } }, //Red Mountain clear
	{ 1775, { "\aE-103 Delta : sauvetage accompli.", 300, Gameplay } }, //Windy Valley clear
	{ 1777, { "\aImpossible de s'�chapper.", 150, Gameplay } }, //captured
	{ 1778, { "\aMission �chou�e.", 150, Gameplay } }, //died
	{ 1786, { "\aActivit� interrompue.", 150, Gameplay } }, //time over


	/* Cutscene voices */

	//Before Egg Walker

	{ 816, { "\aC'est Eggman !", 30, Gameplay } },
	{ 818, { "\aEst-ce que �a va bien se passer ?", 30, Gameplay } },

	//After Egg Walker

	{ 821, { "\aTu as r�ussi !", 20, Cutscene } },
	{ 822, { "\aBien jou� !", 20, Cutscene } },
	{ 823, { "\aTu nous as sauv�s !", 20, Cutscene } },
	{ 824, { "\aTu es tellement cool !", 20, Cutscene } },
	{ 825, { "\aTu nous as tous sauv�s !", 20, Cutscene } },

	//After Emerald Coast (Gamma)

	{ 1223, { "\aCette grenouille est celle que nous cherchons !", 20, Gameplay } },
	{ 1224, { "\aNon, voici la vraie !", 20, Gameplay } },
	{ 1225, { "\aMa grenouille est la bonne !", 20, Gameplay } },


	/* Beta restores */

	//Big's unused fishing lines

	{ 1763, { "\aIl est petit...", 90, Gameplay } }, //small fish
	{ 1761, { "\aCelui-l� est pas mal.", 120, Gameplay } }, //medium-sized fish
	{ 1745, { "\aUn gros !", 150, Gameplay } }, //large fish
	{ 1753, { "\aPas bon.", 90, Gameplay } }, //failed attempt
	{ 1756, { "\aPas bon.", 90, Gameplay } }, //failed attempt
	{ 1876, { "\aOK ! On recommence !", 210, Gameplay } }, //try again
	{ 1877, { "\aPresque !\nOK, on recommence.", 210, Gameplay } }, //try again

	//Final Egg 1 (Sonic) intercom

	{ 1706, { "\aAlerte intrusion ! Alerte intrusion !\nEgg Keepers, rejoignez la zone de combat !", 360, Gameplay } },
	{ 1707, { "\aAlerte intrusion ! Alerte intrusion !\nEgg Keepers, rejoignez la zone de combat !", 360, Gameplay } },

	//Final Egg (Amy) Eggman's taunts

	{ 1984, { "\aHa ha ha ha ha ! Mauvais chemin !", 150, Gameplay } },
	{ 1985, { "\aHa ha ha ha ! Encore rat� !", 180, Gameplay } },
	{ 1986, { "\aHa ha ha ha ha ha ! Abandonne !", 210, Gameplay } },

	//Sky Deck (probably) unused lines

	{ 1704, { "\aUrgence ! Urgence !\n�liminer les intrus imm�diatement !", 420, Gameplay } }, //intercom
	{ 1705, { "\aUrgence ! Urgence !\n�liminer les intrus imm�diatement !", 420, Gameplay } },
	{ 1727, { "\aVents violents en approche.\nVents violents en approche.", 150, Gameplay } },
	{ 1728, { "\aAlerte de vents violents termin�e.", 120, Gameplay } },
	{ 1723, { "\aDescente dans les nuages.\nRalentissez le vaisseau.", 360, Gameplay } }, //Eggman orders
	{ 1724, { "\aDescente dans les nuages.\nRalentissez le vaisseau.", 360, Gameplay } },
	{ 1725, { "\aMontez. Vitesse maximale !", 300, Gameplay } },
	{ 1726, { "\aSale h�risson insolent !\nJe vais te virer d'ici !", 300, Gameplay } }, //Eggman ship tilt

	//vs E-101 mk.2 unused line

	{ 1681, { "\aArr�te, Beta.", 90, Gameplay } },

	//characters taking damage with no rings

	{ 1809, { "\aSonic...", 90, Gameplay } }, //Tails
	{ 1796, { "\aEst-ce que c'est la fin...?", 60, Gameplay } }, //Knuckles
	{ 1740, { "\aOh non !", 90, Gameplay } }, //Amy
	{ 1755, { "\aPas bon !", 120, Gameplay } }, //Big

	//Tails' stages alternate Sonic voices

	{ 1823, { "\aYou made it !", 60, Gameplay } },
	{ 1824, { "\aYou got it !", 60, Gameplay } },
	{ 1825, { "\aI made it !", 60, Gameplay } },
	{ 1826, { "\aI got it !", 60, Gameplay } },
	{ 1827, { "\aGood going !", 60, Gameplay } },
	{ 1828, { "\aHey hey hey !", 60, Gameplay } },
	{ 1829, { "\aCome on !", 60, Gameplay } },
	{ 1830, { "\aI win !", 60, Gameplay } },
	{ 1831, { "\aLet's get going !", 60, Gameplay } },
	{ 1832, { "\aHang in there !", 60, Gameplay } },
	{ 1833, { "\aWait-wait-wait !", 60, Gameplay } },
	{ 1834, { "\aHold it !", 60, Gameplay } },
	{ 1835, { "\aHooray !", 60, Gameplay } },
	{ 1836, { "\aOkey-Dokey !", 60, Gameplay } },

	//Perfect Chaos unused Tikal's cheers

	{ 1713, { "\aSonic...?\nJe vois...", 150, Gameplay } },
	{ 1714, { "\aJe vais tout miser sur votre courage.", 120, Gameplay } },
	{ 1716, { "\aVous avez besoin de Rings pour rester Super Sonic.\nSoyez prudent !", 210, Gameplay } },
};
