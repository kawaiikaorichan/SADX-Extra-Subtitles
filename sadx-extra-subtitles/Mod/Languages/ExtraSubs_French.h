#pragma once


const char* SkyChase1_French[] = { "\aC'est l'heure d'employer un tour de force comme je les aime !", "\aEgg Cannon prêt !", "\aFEU !", "\aAah, on est touchés !", "\aOuais ! Woaaaaaah !" };
const char* SkyChase2_French[] = { "\aTransformation maintenant !", "\aWoaaah !", "\aFinissons-en !", NULL };
const char* WelcomeToTwinklePark_French[] = { "\aBienvenue à Twinkle Park !", NULL };

std::map<int, SubtitleData> ExtraSubs_French
{
	/* Menu voices */

	//Default voice

	{ 0, { "\aChoisissez une carte mémoire.", 90, Menu } },
	{ 1, { "\aChoisissez un fichier.", 60, Menu } },
	{ 2, { "\aCeci est le mode aventure.\nCommencez votre aventure ici.", 180, Menu } },
	{ 3, { "\aCeci est le mode épreuve.\nVous pouvez vous entraîner ici.", 180, Menu } },
	{ 4, { "\aChoisissez un personnage.", 90, Menu } },
	{ 5, { "\aComment jouer avec Sonic.", 120, Menu } },
	{ 6, { "\aComment jouer avec Tails.", 120, Menu } },
	{ 7, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 8, { "\aComment jouer avec Amy.", 120, Menu } },
	{ 9, { "\aComment jouer avec E-102.", 120, Menu } },
	{ 10, { "\aComment jouer avec Big.", 120, Menu } },
	{ 11, { "\aRègles pour les niveaux d'actions.", 120, Menu } },
	{ 12, { "\aChoisissez un niveau.", 90, Menu } },
	{ 13, { "\aChoisissez un jeu.", 90, Menu } },
	{ 14, { "\aOptions.\nVous pouvez customiser divers options.", 210, Menu } },
	{ 15, { "\aTest sonore.\nVous pouvez écouter divers musiques.", 240, Menu } },
	{ 16, { "\aLa carte mémoire n'est pas prête.", 120, Menu } },
	{ 17, { "\aIl n'y a pas assez de place\ndans la carte mémoire.", 150, Menu } },

	//Tikal (alternate)

	{ 18, { "\aChoisissez une carte mémoire.", 90, Menu } },
	{ 19, { "\aChoisissez un fichier.", 90, Menu } },
	{ 20, { "\aMode aventure.\nCommencez votre aventure ici.", 180, Menu } },
	{ 21, { "\aCeci est le mode épreuve.\nVous pouvez vous entraîner ici.", 180, Menu } },
	{ 22, { "\aChoisissez un personnage.", 90, Menu } },
	{ 23, { "\aComment jouer avec Sonic.", 90, Menu } },
	{ 24, { "\aComment jouer avec Tails.", 90, Menu } },
	{ 25, { "\aComment jouer avec Knuckles.", 90, Menu } },
	{ 26, { "\aComment jouer avec Amy.", 90, Menu } },
	{ 27, { "\aComment jouer avec E-102.", 120, Menu } },
	{ 28, { "\aComment jouer avec Big.", 90, Menu } },
	{ 29, { "\aLes règles pour les niveaux d'action.\nN'oubliez pas de les retenir !", 240, Menu } },
	{ 30, { "\aQuel niveau voulez-vous faire ?", 120, Menu } },
	{ 31, { "\aQuel jeu voulez-vous faire ?", 120, Menu } },
	{ 32, { "\aOptions.\nVous pouvez customiser les options.", 180, Menu } },
	{ 33, { "\aTest sonore. Vous pouvez écouter\nles musiques qui se jouent dans le jeu.", 270, Menu } },
	{ 34, { "\aAucune carte mémoire n'est branchée.", 120, Menu } },
	{ 35, { "\aVous n'avez pas assez de place\ndans votre carte mémoire.", 150, Menu } },

	//Sonic

	{ 36, { "\aChoisis une carte mémoire.", 90, Menu } },
	{ 37, { "\aChoisis un fichier.", 60, Menu } },
	{ 38, { "\aMode aventure.\nC'est ici que tu commences ton aventure.", 180, Menu } },
	{ 39, { "\aMode épreuve.\nTu peux jouer à un niveau.", 180, Menu } },
	{ 40, { "\aChoisis ton personnage.", 90, Menu } },
	{ 41, { "\aComment jouer avec moi, Sonic.", 120, Menu } },
	{ 42, { "\aComment jouer avec Tails.", 90, Menu } },
	{ 43, { "\aComment jouer avec Knuckles.", 90, Menu } },
	{ 44, { "\aComment jouer avec Amy.", 90, Menu } },
	{ 45, { "\aComment jouer avec E-102 Gamma", 150, Menu } },
	{ 46, { "\aComment jouer avec Big.", 90, Menu } },
	{ 47, { "\aComment terminer la partie.\nÇa pourrait être difficile si tu ne sais pas tout.", 240, Menu } },
	{ 48, { "\aChoisis un niveau.", 90, Menu } },
	{ 49, { "\aChoisis un jeu.", 60, Menu } },
	{ 50, { "\aOptions.\nChoisis les options que tu veux éditer.", 180, Menu } },
	{ 51, { "\aTest sonore.\nTu peux y écouter des sons cool.", 180, Menu } },
	{ 52, { "\aEst-ce que ta carte mémoire est bien attachée ?", 120, Menu } },
	{ 53, { "\aHé ! Tu n'as pas assez de place\ndans ta carte mémoire.", 180, Menu } },

	//Tails

	{ 54, { "\aChoisis une carte mémoire.", 90, Menu } },
	{ 55, { "\aChoisis un fichier.", 90, Menu } },
	{ 56, { "\aMode aventure.\nCommence ton aventure ici.", 180, Menu } },
	{ 57, { "\aMode épreuve.\nTu peux jouer à un niveau.", 150, Menu } },
	{ 58, { "\aChoisis ton personnage.", 90, Menu } },
	{ 59, { "\aComment jouer avec Sonic.", 90, Menu } },
	{ 60, { "\aComment jouer avec moi, Tails.", 120, Menu } },
	{ 61, { "\aComment jouer avec Knuckles.", 90, Menu } },
	{ 62, { "\aComment jouer avec Amy.", 90, Menu } },
	{ 63, { "\aComment jouer avec E-102 Gamma.", 150, Menu } },
	{ 64, { "\aComment jouer avec Big.", 90, Menu } },
	{ 65, { "\aComment terminer la partie.\nEssaye de le retenir.", 180, Menu } },
	{ 66, { "\aChoisis un niveau.", 90, Menu } },
	{ 67, { "\aChoisis un jeu.", 90, Menu } },
	{ 68, { "\aOptions.\nChoisis les options que tu veux éditer.", 210, Menu } },
	{ 69, { "\aTest sonore.\nTu peux y écouter des sons cool.", 210, Menu } },
	{ 70, { "\aEst-ce que ta carte mémoire est bien attachée ?", 120, Menu } },
	{ 71, { "\aTu n'as pas assez de place\ndans ta carte mémoire.", 150, Menu } },

	//Knuckles

	{ 72, { "\aChoisis une carte mémoire.", 90, Menu } },
	{ 73, { "\aChoisis un fichier.", 90, Menu } },
	{ 74, { "\aMode aventure.\nCommence ton aventure ici.", 180, Menu } },
	{ 75, { "\aMode épreuve.\nTu peux jouer à un niveau.", 210, Menu } },
	{ 76, { "\aChoisis ton personnage.", 90, Menu } },
	{ 77, { "\aComment jouer avec Sonic.", 90, Menu } },
	{ 78, { "\aComment jouer avec Tails.", 90, Menu } },
	{ 79, { "\aComment jouer avec moi, Knuckles.", 150, Menu } },
	{ 80, { "\aComment jouer avec Amy.", 90, Menu } },
	{ 81, { "\aComment jouer avec E-102 Gamma.", 150, Menu } },
	{ 82, { "\aComment jouer avec Big.", 90, Menu } },
	{ 83, { "\aComment terminer la partie.\nTu ferais bien d'y faire attention.", 180, Menu } },
	{ 84, { "\aChoisis un niveau.", 60, Menu } },
	{ 85, { "\aChoisis un jeu.", 60, Menu } },
	{ 86, { "\aOptions.\nChoisis les options que tu veux éditer.", 210, Menu } },
	{ 87, { "\aTest sonore.\nÉcoute des musiques cool.", 210, Menu } },
	{ 88, { "\aEst-ce que ta carte mémoire est bien attachée ?", 120, Menu } },
	{ 89, { "\aTu n'as pas assez de place\ndans ta carte mémoire.", 150, Menu } },

	//Amy

	{ 90, { "\aChoisis une carte mémoire.", 120, Menu } },
	{ 91, { "\aChoisis un fichier.", 90, Menu } },
	{ 92, { "\aMode aventure.\nCommence ton aventure ici.", 180, Menu } },
	{ 93, { "\aMode épreuve.\nTu peux jouer à un niveau.", 210, Menu } },
	{ 94, { "\aChoisis ton personnage.", 90, Menu } },
	{ 95, { "\aComment jouer avec Sonic.", 90, Menu } },
	{ 96, { "\aComment jouer avec Tails.", 90, Menu } },
	{ 97, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 98, { "\aComment jouer avec moi, Amy.", 120, Menu } },
	{ 99, { "\aComment jouer avec E-102 Gamma.", 150, Menu } },
	{ 100, { "\aComment jouer avec Big.", 90, Menu } },
	{ 101, { "\aComment terminer la partie.\nAssure-toi de bien tout lire.", 210, Menu } },
	{ 102, { "\aChoisis un niveau.", 90, Menu } },
	{ 103, { "\aChoisis un jeu.", 90, Menu } },
	{ 104, { "\aOptions.\nTu peux y éditer divers options.", 210, Menu } },
	{ 105, { "\aTest sonore.\nTu peux écouter la musique du jeu ici.", 240, Menu } },
	{ 106, { "\aEst-ce que ta carte mémoire est bien attachée ?", 120, Menu } },
	{ 107, { "\aTu n'as pas assez de place\ndans ta carte mémoire.", 150, Menu } },

	//Gamma

	{ 108, { "\aChoisissez une carte mémoire.", 120, Menu } },
	{ 109, { "\aChoisissez un fichier.", 90, Menu } },
	{ 110, { "\aMode aventure.\nCommencez votre aventure ici.", 210, Menu } },
	{ 111, { "\aMode épreuve.\nVous pouvez jouer à un niveau.", 210, Menu } },
	{ 112, { "\aChoisissez votre personnage.", 120, Menu } },
	{ 113, { "\aComment jouer avec Sonic.", 120, Menu } },
	{ 114, { "\aComment jouer avec Tails.", 120, Menu } },
	{ 115, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 116, { "\aComment jouer avec Amy.", 120, Menu } },
	{ 117, { "\aComment jouer avec moi, E-102 Gamma.", 210, Menu } },
	{ 118, { "\aComment jouer avec Big.", 120, Menu } },
	{ 119, { "\aComment terminer la partie.\nVeuillez noter ces informations.", 300, Menu} },
	{ 120, { "\aChoisissez un niveau.", 120, Menu } },
	{ 121, { "\aChoisissez un jeu.", 120, Menu } },
	{ 122, { "\aOptions.\nChoisissez les options que vous souhaitez éditer.", 240, Menu } },
	{ 123, { "\aTest sonore.\nChoisissez une musique de fond à jouer.", 240, Menu } },
	{ 124, { "\aImpossible de trouver la carte mémoire.", 120, Menu } },
	{ 125, { "\aAttention ! Pas assez de place. Attention !", 210, Menu } },

	//Big

	{ 126, { "\aHuum... Quelle carte mémoire ?", 120, Menu } },
	{ 127, { "\aHuum... Quel fichier ?", 120, Menu } },
	{ 128, { "\aTu peux commencer ton aventure ici.", 150, Menu } },
	{ 129, { "\aTu peux jouer un niveau.", 120, Menu } },
	{ 130, { "\aHuum... Quel personnage ?", 120, Menu } },
	{ 131, { "\aComment jouer avec Sonic.", 120, Menu } },
	{ 132, { "\aComment jouer avec Tails.", 120, Menu } },
	{ 133, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 134, { "\aComment jouer avec Amy.", 120, Menu } },
	{ 135, { "\aComment jouer avec E-102 Gamma.", 180, Menu } },
	{ 136, { "\aComment jouer avec moi, Big.", 150, Menu } },
	{ 137, { "\aComment terminer la partie.\nHuum... Lis bien, d'accord ?", 270, Menu } },
	{ 138, { "\aOù veux-tu jouer ?", 120, Menu } },
	{ 139, { "\aQue veux-tu jouer ?", 90, Menu } },
	{ 140, { "\aHuum... Options.\nChoisis les options que tu veux éditer.", 270, Menu } },
	{ 141, { "\aTest sonore.\nÉcoute les musiques cool du jeu.", 240, Menu } },
	{ 142, { "\aEst-ce que ta carte mémoire est bien attachée ?", 150, Menu } },
	{ 143, { "\aTu n'as pas assez de place\ndans ta carte mémoire.", 180, Menu } },

	//Eggman

	{ 144, { "\aChoisis une carte mémoire.", 150, Menu } },
	{ 145, { "\aChoisis un fichier.", 120, Menu } },
	{ 146, { "\aMode aventure.\nCommence ton aventure ici.", 210, Menu } },
	{ 147, { "\aMode épreuve.\nTu peux jouer à un niveau.", 210, Menu } },
	{ 148, { "\aChoisis ton personnage.", 120, Menu } },
	{ 149, { "\aComment jouer avec ce hérisson.", 150, Menu } },
	{ 150, { "\aComment jouer avec ce renard à deux queues.", 180, Menu } },
	{ 151, { "\aComment jouer avec cet idiot.", 150, Menu } },
	{ 152, { "\aComment jouer avec cette gamine, Amy.", 180, Menu } },
	{ 153, { "\aComment jouer avec ma création,\nE-102 Gamma.", 240, Menu } },
	{ 154, { "\aComment jouer avec ce gros chat.", 150, Menu } },
	{ 155, { "\aComment terminer la partie.\nArrête de lire et commence à jouer !", 300, Menu } },
	{ 156, { "\aAlors, quel niveau veux-tu faire ?", 180, Menu } },
	{ 157, { "\aAlors, quel jeu veux-tu faire ?", 180, Menu } },
	{ 158, { "\aOptions.\nFais donc, édite-les comme tu le désires.", 240, Menu } },
	{ 159, { "\aTest sonore.\nTu peux écouter les musiques du jeu ici.", 270, Menu } },
	{ 160, { "\aEst-ce que ta carte mémoire est bien attachée ?", 150, Menu } },
	{ 161, { "\aTu n'as pas assez de place\ndans ta carte mémoire.", 180, Menu } },


	/* Character select lines */

	{ 1837, { "\aChoppons-les !", 60, Menu } }, //Sonic
	{ 1800, { "\aMe voilà, Sonic !", 90, Menu } }, //Tails
	{ 1787, { "\aOK ! Allons-y !", 90, Menu } }, //Knuckles
	{ 1730, { "\aC'est à moi, maintenant !", 90, Menu } }, //Amy
	{ 1767, { "\aPréparations complétées.", 90, Menu } }, //Gamma
	{ 1744, { "\aAttends-moi, Froggy ! J'arrive !", 150, Menu } }, //Big


	/* Common idle lines */

	{ 390, { "\aIl vaudrait mieux bouger !", 60, Gameplay } }, //Sonic
	{ 392, { "\aJe devrais me dépêcher !", 60, Gameplay } }, //Knuckles
	{ 393, { "\aJe n'en peux plus !", 90, Gameplay } }, //Amy
	{ 394, { "\aMode de combat engagé.", 120, Gameplay } }, //Gamma
	{ 395, { "\aHé, j'ai un petit creux.", 120, Gameplay } }, //Big


	/* Adventure fields idle lines */

	//Station Square - station area

	{ 288, { "\aCette gare doit être\nau centre de cette ville.", 120, Gameplay } }, //Sonic
	{ 289, { "\aLes trains c'est sympa aussi !", 90, Gameplay } }, //Tails
	{ 290, { "\aVoici donc Station Square ?", 120, Gameplay } }, //Knuckles
	{ 291, { "\aIl fait bon d'avoir un océan tout près.", 120, Gameplay } }, //Amy
	{ 292, { "\aJe me demande s'il y a des poissons ici.", 150, Gameplay } }, //Big
	{ 293, { "\aRecherche dans Station Square...", 120, Gameplay } }, //Gamma

	//Station Square - city hall area

	{ 274, { "\aCet endroit a pas mal changé.", 120, Gameplay } }, //Sonic
	{ 275, { "\aEh bé, j'ai faim.", 90, Gameplay } }, //Tails
	{ 276, { "\aJe déteste les grandes villes.", 90, Gameplay } }, //Knuckles
	{ 277, { "\aQu'est-ce que j'aimerais faire les magasins !", 90, Gameplay } }, //Amy
	{ 278, { "\aTout le monde semble occupé.", 150, Gameplay } }, //Big
	{ 279, { "\aDétection de multiples êtres vivants.", 150, Gameplay } }, //Gamma

	//Station Square - sewers

	{ 286, { "\aJ'ai l'impression d'être un rat ici.", 90, Gameplay } }, //Sonic
	{ 287, { "\aWoah, c'est sombre ici !", 120, Gameplay } }, //Big

	//Station Square - Twinkle Park entrance

	{ 300, { "\aJe n'aime pas trop ce genre d'endroit.", 150, Gameplay } }, //Sonic
	{ 301, { "\aHmm, je ne peux pas aller au parc !", 150, Gameplay } }, //Tails
	{ 302, { "\aC'est quoi cet endroit ?", 90, Gameplay } }, //Knuckles
	{ 303, { "\aJ'ai hâte !", 90, Gameplay } }, //Amy
	{ 304, { "\aTwinkle Park ?", 90, Gameplay } }, //Big
	{ 305, { "\aLieu des auto-tamponneuses confirmé.", 150, Gameplay } }, //Gamma

	//Station Square - hotel

	{ 294, { "\aHé-hé ! C'est pas le moment de se reposer !", 120, Gameplay } }, //Sonic
	{ 295, { "\aCet hôtel est sympa !", 90, Gameplay } }, //Tails
	{ 296, { "\aGénial, un hôtel de vacances.", 120, Gameplay } }, //Knuckles
	{ 297, { "\aJ'adorerais passer mes vacances ici !", 120, Gameplay } }, //Amy
	{ 298, { "\aQuelle grosse maison !", 120, Gameplay } }, //Big
	{ 299, { "\aMode combat désengagé.", 120, Gameplay } }, //Gamma

	//Station Square - casino area / station

	{ 280, { "\aC'est pas le moment de faire joujou !", 120, Gameplay } }, //Sonic
	{ 281, { "\aQuelle grande ville !", 90, Gameplay } }, //Tails
	{ 282, { "\aCet endroit est bruyant !", 90, Gameplay } }, //Knuckles
	{ 283, { "\aCette ville ne change jamais !", 120, Gameplay } }, //Amy
	{ 284, { "\aJe me demande où est Froggy.", 120, Gameplay } }, //Big
	{ 285, { "\aTrain vers les Mystic Ruins confirmé.", 150, Gameplay } }, //Gamma

	//Mystic Ruins - station area

	{ 306, { "\aLe calme doit régner ici.", 90, Gameplay } }, //Sonic
	{ 307, { "\aCet endroit à quand même pas mal\nchangé depuis qu'ils ont contruit la gare.", 180, Gameplay } }, //Tails
	{ 308, { "\aIl faut que je retrouve l'Émeraude Mère.", 180, Gameplay } }, //Knuckles
	{ 309, { "\aJe n'aime pas ce genre d'endroit.", 150, Gameplay } }, //Amy
	{ 310, { "\aFroggy, où es-tu ?", 180, Gameplay } }, //Big
	{ 311, { "\aRecherche aux Mystic Ruins...", 120, Gameplay } }, //Gamma

	//Mystic Ruins - Angel Island

	{ 312, { "\aVoilà donc Angel Island !", 120, Gameplay } }, //Sonic
	{ 313, { "\aIl faut que je refasse\nvoler cette île.", 150, Gameplay } }, //Knuckles
	{ 314, { "\aArrivé à Angel Island.", 120, Gameplay } }, //Gamma

	//Mystic Ruins - jungle

	{ 315, { "\aLà on peut parler !", 90, Gameplay } }, //Sonic
	{ 316, { "\aD'où est-ce que je viens ?", 90, Gameplay } }, //Tails
	{ 317, { "\aCet endroit me donne\ndes sensations bien étranges.", 180, Gameplay } }, //Knuckles
	{ 318, { "\aCet endroit est génial !", 90, Gameplay } }, //Amy
	{ 319, { "\aJe vais peut-être rentrer...", 120, Gameplay } }, //Big
	{ 320, { "\aAugmentation de la température.\nSystème de refroidissement activé.", 210, Gameplay } }, //Gamma

	//Final Egg entrance

	{ 321, { "\aÇa doit être la base de Robotnik !", 120, Gameplay } }, //Sonic
	{ 322, { "\aVoilà donc la forteresse de Robotnik !", 120, Gameplay } }, //Tails
	{ 323, { "\aLocalisation : lieu de création.", 120, Gameplay } }, //Knuckles, wtf?
	{ 324, { "\aJe vais faire de mon mieux, Sonic.", 120, Gameplay } }, //Amy
	{ 325, { "\aL'endroit où j'ai été créé.", 120, Gameplay } }, //Gamma

	//Past (normal)

	{ 326, { "\aQuel est cet endroit ?", 60, Gameplay } }, //Tails
	{ 327, { "\aOù suis-je ?", 60, Gameplay } }, //Knuckles
	{ 328, { "\aHé ! Où est-ce que je suis ?", 90, Gameplay } }, //Amy
	{ 329, { "\aHuum... Où suis-je ?", 120, Gameplay } }, //Big
	{ 330, { "\aDonnées indisponibles.\nLieu actuel inconnu.", 210, Gameplay } }, //Gamma

	//Past (fire)

	{ 331, { "\aC'est pas bon !", 60, Gameplay } }, //Sonic
	{ 332, { "\aPourquoi ?", 60, Gameplay } }, //Knuckles

	//Egg Carrier - outside

	{ 333, { "\aCe vaisseau en fait trop !", 90, Gameplay } }, //Sonic
	{ 334, { "\aCe vaisseau est cool !", 90, Gameplay } }, //Tails
	{ 335, { "\aComment ce 'machin' fait-il pour voler ?", 120, Gameplay } }, //Knuckles
	{ 336, { "\aJe me demande pourquoi ce bonhomme s'est embêté\nà faire les choses comme ça.", 210, Gameplay } }, //Amy
	{ 337, { "\aPoursuivre la mission.", 90, Gameplay } }, //Gamma
	{ 338, { "\aHuum... Comment fait ce vaisseau pour voler ?", 150, Gameplay } }, //Big

	//Egg Carrier - inside

	{ 339, { "\aCe vaisseau est bien trop bizarre !", 120, Gameplay } }, //Sonic
	{ 340, { "\aJ'aimerais faire un vaisseau comme celui-là un jour !", 120, Gameplay } }, //Tails
	{ 341, { "\aOù est la sortie ?", 60, Gameplay } }, //Knuckles
	{ 342, { "\aMieux vaut traverser tout ça\ntranquillement si l'on ne veut pas qu'on nous entende.", 150, Gameplay } }, //Amy
	{ 343, { "\aPoursuivre la mission.", 90, Gameplay } }, //Gamma
	{ 344, { "\aHuum... Sorties ? Sorties ?", 150, Gameplay } }, //Big


	/* Action levels idle lines */

	//Emerald Coast

	{ 227, { "\aTout ce que j'ai à faire, c'est traverser cette plage !", 120, Gameplay } }, //Sonic
	{ 228, { "\aGrenouille détectée.", 120, Gameplay } }, //Gamma
	{ 229, { "\aQuel bon vent !", 90, Gameplay } }, //Sonic
	{ 230, { "\aQuel grand lac !", 120, Gameplay } }, //Big

	//Windy Valley

	{ 231, { "\aJe peux entendre le vent au loin.", 120, Gameplay } }, //Sonic
	{ 232, { "\aE-103 détecté.", 120, Gameplay } }, //Gamma
	{ 233, { "\aJe ferais mieux de me tirer d'ici !", 90, Gameplay } }, //Sonic
	{ 234, { "\aWoah, c'est sacrément haut !", 90, Gameplay } }, //Sonic
	{ 235, { "\aJe me demande où est Sonic.", 90, Gameplay } }, //Tails

	//Casinopolis

	{ 236, { "\aHmm, des flippers !", 90, Gameplay } }, //Sonic
	{ 237, { "\aQue c'est éclairé ici !", 90, Gameplay } }, //Knuckles
	{ 238, { "\aC'est quoi cette odeur ?\nÇa pue !", 180, Gameplay } }, //Sonic

	//Icecap

	{ 239, { "\aIl commence à faire froid !", 60, Gameplay } }, //Sonic
	{ 240, { "\aEh bé, tout est glacé !", 120, Gameplay } }, //Sonic
	{ 241, { "\aLa glace a l'air plutôt bonne !", 120, Gameplay } }, //Big
	{ 242, { "\aMate et apprends !", 90, Gameplay } }, //Sonic
	{ 243, { "\aC'est l'heure de filer !", 60, Gameplay } }, //Tails

	//Twinkle Park

	{ 244, { "\aÇa doit être l'entrée qui mène\nà la zone des auto-tamponneuses.", 150, Gameplay } }, //Sonic
	{ 245, { "\aPersonne en vue", 90, Gameplay } }, //Sonic
	{ 246, { "\aJe me demande si les poissons mordent.", 150, Gameplay } }, //Big
	{ 247, { "\aJe me demande où est parti Sonic.", 90, Gameplay } }, //Amy

	//Speed Highway

	{ 248, { "\aC'est l'heure d'y aller en vitesse supersonique !", 120, Gameplay } }, //Sonic
	{ 249, { "\aOù est Robotnik ?", 60, Gameplay } }, //Tails
	{ 250, { "\aHé, c'est pas le moment de se reposer !", 120, Gameplay } }, //Sonic
	{ 251, { "\aLes voitures sont si lentes !\nOn croirait qu'elles ne bougent pas.", 150, Gameplay } }, //Sonic
	{ 252, { "\aLes pièces de l'Émeraude Mère\ndoivent se trouver quelque part en ville.", 210, Gameplay } }, //Knuckles

	//Red Mountain

	{ 253, { "\aOù est passé l'Egg Carrier ?", 90, Gameplay } }, //Sonic
	{ 254, { "\aWoah ! Cette lave à l'air d'être vraiment très chaude !", 150, Gameplay } }, //Sonic
	{ 255, { "\aE-104 détecté.", 120, Gameplay } }, //Gamma
	{ 256, { "\aJ'ai pas intérêt à tomber !", 90, Gameplay } }, //Knuckles

	//Sky Deck

	{ 257, { "\aHo ho !\nIl vaut vraiment mieux pas que je tombe d'ici !", 180, Gameplay } }, //Sonic
	{ 258, { "\aC'est sacrément haut !\nMes jambes en tremblent !", 180, Gameplay } }, //Tails
	{ 259, { "\aZut ! Je déteste ce vent !", 120, Gameplay } }, //Sonic
	{ 260, { "\aHé, qu'est-ce qui va pas avec ce vaisseau ?", 90, Gameplay } }, //Sonic
	{ 261, { "\aBien donc, où est le trésor ?", 120, Gameplay } }, //Knuckles

	//Lost World

	{ 262, { "\aQu'est-ce que c'est calme ici.", 90, Gameplay } }, //Sonic
	{ 263, { "\aOù suis-je ?", 60, Gameplay } }, //Sonic
	{ 264, { "\aL'Émeraude est quelque part dans cette pièce.", 150, Gameplay } }, //Knuckles

	//Final Egg

	{ 265, { "\aÇa sent l'huile.", 90, Gameplay } }, //Sonic
	{ 266, { "\aHé, petit oiseau. Tu vas bien ?", 120, Gameplay } }, //Amy
	{ 267, { "\aOù est-ce que ça se termine ?", 60, Gameplay } }, //Sonic
	{ 268, { "\aTu n'as qu'à bien te tenir, Robotnik !", 90, Gameplay } }, //Sonic
	{ 269, { "\aHérisson bleu : ennemi.", 120, Gameplay } }, //Gamma

	//Hot Shelter

	{ 270, { "\aQu'est-ce que je déteste Robotnik !", 90, Gameplay } }, //Amy
	{ 271, { "\aJe me demande si Froggy va bien.", 120, Gameplay } }, //Big
	{ 272, { "\aHuum... Où devrais-je aller ?", 120, Gameplay } }, //Amy
	{ 273, { "\aE-105 détecté.", 120, Gameplay } }, //Gamma


	/* Boss battle idle lines */

	//Sonic

	{ 368, { "\aIl ne peut pas être invincible, pas vrai ?", 120, Gameplay } }, //Chaos 0
	{ 369, { "\aTu ne fais pas le poids face à moi !", 90, Gameplay } }, //Egg Hornet
	{ 370, { "\aQu'est-ce qui va pas, Knuckles ?", 60, Gameplay } }, //vs Knuckles
	{ 371, { "\aHé ! Cette fois-ci, tu ne t'en sortiras pas !", 120, Gameplay } }, //Chaos 4
	{ 372, { "\aPas mal, pas mal du tout !", 120, Gameplay } }, //Gamma
	{ 373, { "\aOù peut bien être son point faible ?", 90, Gameplay } }, //Chaos 6
	{ 374, { "\aTu t'es bien amusé.\nMaintenant c'est à moi !", 150, Gameplay } }, //Egg Viper

	//Tails

	{ 375, { "\aAllez, Tails ! Tu peux le faire !", 120, Gameplay } }, //Egg Hornet	
	{ 376, { "\aH-Hé, attends une minute !", 120, Gameplay } }, //vs Knuckles
	{ 377, { "\aSale monstre liquide !", 120, Gameplay } }, //Chaos 4
	{ 378, { "\aCe robot semble différent.", 150, Gameplay } }, //vs Gamma
	{ 379, { "\aJe sais que je peux m'en occuper moi-même !", 150, Gameplay } }, //Egg Walker

	//Knuckles

	{ 380, { "\aC'est bon ! J'en ai eu assez !", 120, Gameplay } }, //Chaos 2
	{ 381, { "\aDonne l'Émeraude !", 60, Gameplay } }, //vs Sonic
	{ 382, { "\aQuand est-ce que tu vas comprendre ?", 90, Gameplay } }, //Chaos 4
	{ 383, { "\aCette fois-ci, c'est terminé pour toi !", 120, Gameplay } }, //Chaos 6

	//Amy

	{ 384, { "\aTu vas payer pour\nce que tu as fait !", 150, Gameplay } }, //Zero

	//Gamma

	{ 385, { "\aCible confirmée.", 90, Gameplay } }, //E-101
	{ 386, { "\aHérisson bleu : ennemi.", 120, Gameplay } }, //vs Sonic
	{ 387, { "\aBeta !", 60, Gameplay } }, //E-101 mk.2

	//Super Sonic

	{ 388, { "\aJe vais te montrer de quoi sont\nréellement capables les Émeraudes du Chaos !", 180, Gameplay } },
	{ 389, { "\aDonc, voici son cœur !", 90, Gameplay } },


	/* Chao Garden idle lines */

	//Sonic

	{ 348, { "\aQuel endroit paisible !", 90, Gameplay } },
	{ 349, { "\aYo ! Vous allez bien les gars ?", 90, Gameplay } },
	{ 350, { "\aN'oubliez pas, pas de bagarres !", 120, Gameplay } },

	//Tails

	{ 351, { "\aJe me sens vraiment à ma place ici !", 90, Gameplay } },
	{ 352, { "\aComment vous allez, les gars ?", 90, Gameplay } },
	{ 353, { "\aVous êtes les meilleurs !", 90, Gameplay } },

	//Knuckles

	{ 354, { "\aJe suppose qu'il n'y a aucune Émeraude ici.", 120, Gameplay } },
	{ 355, { "\aJ'ai comme l'impression\nd'avoir déjà vu ces gars quelque part.", 180, Gameplay } },
	{ 356, { "\aCet endroit me rapelle la maison.\nJe me demande pourquoi ?", 270, Gameplay } },

	//Amy

	{ 357, { "\aCet endroit est si relaxant !", 150, Gameplay } },
	{ 358, { "\a*baille* Je commence à avoir someille.", 150, Gameplay } },
	{ 359, { "\aJe ne veux pas vous voir vous battre !", 120, Gameplay } },
	{ 360, { "\aSi seulement Sonic était ici...", 120, Gameplay } },

	//Gamma

	{ 361, { "\aLocalisation : inconnue.", 120, Gameplay } },
	{ 362, { "\aMode combat désengagé.", 150, Gameplay } },
	{ 363, { "\aLes capteurs détectent de la vie.", 120, Gameplay } },

	//Big

	{ 364, { "\aÇa va, copain ?", 90, Gameplay } },
	{ 365, { "\aVous allez bien ?", 90, Gameplay } },
	{ 366, { "\aHé, j'ai à nouveau faim.", 150, Gameplay } },
	{ 367, { "\aJ'ai envie d'aller pêcher !", 120, Gameplay } },


	/* Mini jeus idle lines */

	//Sand Hill

	{ 345, { "\aMince ! J'ai du sable dans les yeux !", 120, Gameplay } }, //Sonic
	{ 346, { "\aCe sable n'a pas l'air de tenir !", 90, Gameplay } }, //Tails

	//Hedgehog Hammer

	{ 347, { "\aOh, allez !", 60, Gameplay } }, //Amy


	/* Sky Chase sequences */

	//Sky Chase 1 - before Egg Cannon fires

	{ 491, { "\aOn a réussi !", 60, Gameplay } }, //Tails
	{ 716, { "\aOn a réussi !", 60, Gameplay } }, //Tails (duplicate?)
	{ 492, { "\aBien joué, Tails !", 90, Gameplay } }, //Sonic	
	{ 717, { "\aBien joué, Tails !", 90, Gameplay } }, //Sonic (duplicate?)

	//Sky Chase 2 - before transformation

	{ 765, { "\aHa-ha ! Tout va bien pour le moment !", 150, Gameplay } },
	{ 766, { "\aJ'espère que tu sais ce que tu fais.", 90, Gameplay } },
	{ 767, { "\aBien sûr ! Mate ça !", 120, Gameplay } },

	//Sky Chase 2 - transformation sequence alternate lines (they also match the regular lines in Japanese)

	{ 530, { "\aTout a l'air d'aller pour le moment !", 90, Gameplay } },
	{ 531, { "\aC'est reparti !", 60, Gameplay } },
	{ 532, { "\aT'inquiète pas, je suis prêt.", 90, Gameplay } },
	{ 533, { "\aMode de transformation : engagé !", 180, Gameplay } },
	{ 534, { "\aWooooah !", 90, Gameplay } },
	{ 535, { "\aPrêt ? On y va !", 150, Gameplay } },


	/* Action niveaus voices */

	//All Tails' niveaus except for Speed Highway (Sonic's voice)

	{ 205, { "\aAllez, Tails !", 60, Gameplay } },
	{ 206, { "\aHey-hey-hey !", 60, Gameplay } },
	{ 207, { "\aGénial, Tails !", 90, Gameplay } },
	{ 208, { "\aHé, Tails !", 60, Gameplay } },
	{ 209, { "\aT'as réussi !", 60, Gameplay } },
	{ 210, { "\aAllez !", 60, Gameplay } },
	{ 211, { "\aÀ plus, Tails !", 90, Gameplay } },
	{ 212, { "\aDépêche, Tails !", 60, Gameplay } },
	{ 213, { "\aHourra !", 60, Gameplay } },
	{ 214, { "\aJe l'ai !", 60, Gameplay } },
	{ 215, { "\aTu n'as pas de Rings, Tails.\nFais attention !", 150, Gameplay } },

	//Speed Highway (Eggman's voice)

	{ 216, { "\aTu penses pouvoir faire le poids face à moi ?", 120, Gameplay } },
	{ 217, { "\aJe t'ai eu, Tails!", 120, Gameplay } },
	{ 218, { "\aQuoi ? Il a rattrapé son retard !", 120, Gameplay } },
	{ 219, { "\aSale petit renard !", 120, Gameplay } },
	{ 220, { "\aTails ! Attends-moi !", 120, Gameplay } },
	{ 221, { "\aWhahahahahahahahaha !", 120, Gameplay } },
	{ 222, { "\aAdieu, Tails !", 90, Gameplay } },
	{ 223, { "\aJ'emporterai leur ville toute entière avec moi !", 150, Gameplay } },
	{ 224, { "\aTu ne me battras jamais !", 120, Gameplay } },
	{ 225, { "\aJ'ai gagné ! Wha-ha-ha-ha-ha-ha-ha-ha !", 180, Gameplay } },
	{ 226, { "\aAbandonne tout de suite, Tails !", 120, Gameplay } },

	//Final Egg

	{ 1588, { "\aUrgence ! Urgence !\nDisposer de tout intrus !", 300, Gameplay } }, //intercom
	{ 1589, { "\aUrgence ! Urgence !\nDisposer de tout intrus !", 300, Gameplay } },
	{ 1590, { "\aFinal Egg : mur d'isolation de niveau 2 ouvert.", 330, Gameplay } },
	{ 1591, { "\aFinal Egg : mur d'isolation de niveau 2 ouvert.", 330, Gameplay } },
	{ 1592, { "\aDestruis les cibles,\net tu gagneras du temps.", 210, Gameplay } }, //Eggman to Gamma
	{ 1593, { "\aDestruis la cible Sonic.", 150, Gameplay } },


	/* Boss voices */

	//vs character

	{ 164, { "\aOh non !", 60, Gameplay } }, //Knuckles
	{ 165, { "\aOh non !", 60, Gameplay } }, //Sonic
	{ 166, { "\aFais de ton mieux !", 90, Gameplay } }, //Knuckles
	{ 167, { "\aJ'en ai assez !", 60, Gameplay } }, //Sonic
	{ 168, { "\aGénial, lève les poings !", 90, Gameplay } }, //Knuckles
	{ 169, { "\aToute résistance est futile.", 90, Gameplay } }, //Gamma
	{ 170, { "\aOh non !", 60, Gameplay } }, //Sonic

	//Eggman bosses

	{ 171, { "\aTous les systèmes - puissance maximale !", 150, Gameplay } },
	{ 172, { "\aAaah !", 60, Gameplay } },
	{ 173, { "\aAh-ha !", 60, Gameplay } },
	{ 174, { "\aPrends ça !", 90, Gameplay } },
	{ 175, { "\aImpossible ! Je n'arrive pas à y croire !", 180, Gameplay } },
	{ 176, { "\aAaah !\nIl ne va pas s'en tirer comme ça !", 180, Gameplay } },
	{ 177, { "\aImpossible ! Je n'arrive pas à y croire !", 180, Gameplay } },
	{ 178, { "\aHo-ho ! C'est inutile. Abandonne !", 180, Gameplay } },
	{ 1902, { "\aWhoo-ha-ha ! Vois si tu peux\nrésister à ça, Sonic !", 210, Gameplay } }, //Egg Viper
	{ 1903, { "\aPrends ça !", 60, Gameplay } },


	/* Adventure fields announcers */

	//Station Square

	{ 1567, { "\aNous vous prions de monter à bord du train\net d'attendre le départ.", 210, Gameplay } },
	{ 1568, { "\aNous vous prions de monter à bord du train\net d'attendre le départ.", 210, Gameplay } },
	{ 1569, { "\aLe train en route pour les Mystic Ruins\nva bientôt partir.", 270, Gameplay } },
	{ 1570, { "\aLe train en route pour les Mystic Ruins\nva bientôt partir.", 270, Gameplay } },
	{ 1571, { "\aUn train devrait bientôt arriver.\nVeuillez vous écarter.", 270, Gameplay } },
	{ 1572, { "\aUn train devrait bientôt arriver.\nVeuillez vous écarter.", 270, Gameplay } },
	{ 1573, { "\aAucun train n'est actuellement en service.", 180, Gameplay } },
	{ 1574, { "\aAucun train n'est actuellement en service.", 180, Gameplay } },

	//Twinkle Park entrance

	{ 1575, { "\aBienvenue à Twinkle Park !", 90, Gameplay } },

	//Mystic Ruins

	{ 1654, { "\aNous demandons aux passagers d'attendre\nà l'intérieur du train.", 210, Gameplay } },
	{ 1655, { "\aLe train en route pour Station Square\nva bientôt partir.", 270, Gameplay } },
	{ 1656, { "\aUn train devrait bientôt arriver.\nVeuillez vous écarter.", 300, Gameplay } },
	{ 1657, { "\aAucun train n'est actuellement en service.", 210, Gameplay } },


	/* Character specific jeuplay voices */

	//Sonic

	{ 1838, { "\aOuais !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1839, { "\aWouhou !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1840, { "\aOuais.", 60, Gameplay } }, //niveau clear
	{ 1841, { "\aHé, fais un effort !", 90, Gameplay } }, //bad clear
	{ 1842, { "\a*sifflement* Joli !", 90, Gameplay } }, //good clear
	{ 1843, { "\aHé, je jouerai avec toi un autre jour !", 120, Gameplay } }, //boss clear
	{ 1844, { "\aOuais, pas mal !", 60, Gameplay } }, //normal clear
	{ 1845, { "\aHé, lâche !", 60, Gameplay } }, //captured
	{ 1847, { "\aNon !", 60, Gameplay } }, //died with no rings

	//Tails

	{ 1801, { "\aWoou !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1802, { "\aGénial !", 60, Gameplay } }, //Twinkle Circuit/Icecap jump
	{ 1803, { "\aOuaaais !", 90, Gameplay } }, //niveau clear
	{ 1804, { "\aPfiou ! Je suis arrivé à temps !", 120, Gameplay } }, //bad clear
	{ 1805, { "\aJ'ai réussi, Sonic !", 90, Gameplay } }, //good clear
	{ 1806, { "\aGénial, j'ai réussi !", 90, Gameplay } }, //boss clear
	{ 1807, { "\aC'était pas si mal.", 90, Gameplay } }, //normal clear
	{ 1808, { "\aHé !", 60, Gameplay } }, //captured

	//Knuckles

	{ 1788, { "\aOuaaais !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1789, { "\aHolà !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1790, { "\aTrouvées !", 60, Gameplay } }, //niveau clear
	{ 1791, { "\aJe peux faire mieux que ça.", 90, Gameplay } }, //bad clear
	{ 1792, { "\aC'était facile.", 90, Gameplay } }, //good clear
	{ 1793, { "\aC'est tout ce que t'as ?", 90, Gameplay } }, //boss clear
	{ 1794, { "\aHm. Pas mal.", 90, Gameplay } }, //normal clear
	{ 1795, { "\aOoh !", 60, Gameplay } }, //captured

	//Amy

	{ 1731, { "\aGénial !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1732, { "\aOuééé !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1733, { "\aGénial !", 90, Gameplay } }, //niveau clear
	{ 1734, { "\a*pfiou* C'est pas passé loin !", 150, Gameplay } }, //bad clear
	{ 1735, { "\aTu vois ? Je peux le faire !", 120, Gameplay } }, //boss clear
	{ 1736, { "\aJe suis libre !", 90, Gameplay } }, //normal clear
	{ 1737, { "\aWoah ! Je me débrouille bien !", 120, Gameplay } }, //good clear
	{ 1738, { "\aHé, lâche-moi tout de suite !", 120, Gameplay } }, //captured

	//Big

	{ 1746, { "\aHmm !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1334, { "\aOoh, qu'est-ce que je vais faire maintenant ?", 210, Gameplay } }, //niveau clear (Twinkle Park, Icecap)
	{ 1747, { "\aFroggy !", 90, Gameplay } }, //niveau clear (Emerald Coast, Hot Shelter)	
	{ 1748, { "\aPeut-être une prochaine fois.", 120, Gameplay } }, //bad clear
	{ 1749, { "\aQuelle prise !", 60, Gameplay } }, //good clear
	{ 1750, { "\aFroggy ! Tu vas bien ?", 150, Gameplay } }, //boss clear
	{ 1751, { "\aPas si mal !", 90, Gameplay } }, //normal clear
	{ 1758, { "\aJ'ai attrapé un poisson !", 90, Gameplay } }, //got fish
	{ 1759, { "\aQuelque chose mord !", 90, Gameplay } }, //hit

	//Gamma

	{ 1768, { "\aConduite terminée.", 90, Gameplay } }, //Twinkle Circuit clear
	{ 1770, { "\aMission terminée.", 90, Gameplay } }, //niveau clear
	{ 1771, { "\aE-101 Beta: sauvetage complété.", 210, Gameplay } }, //Beta mk.2 clear
	{ 1772, { "\aCapture de la grenouille complétée.", 120, Gameplay } }, //Emerald Coast clear
	{ 1773, { "\aE-105 Zeta: sauvetage complété.", 210, Gameplay } }, //Hot Shelter clear
	{ 1774, { "\aE-104 Epsilon: sauvetage complété.", 210, Gameplay } }, //Red Mountain clear
	{ 1775, { "\aE-103 Delta: sauvetage complété.", 210, Gameplay } }, //Windy Valley clear
	{ 1777, { "\aImpossible de marcher.", 90, Gameplay } }, //captured
	{ 1778, { "\aMission échouée.", 90, Gameplay } }, //died
	{ 1786, { "\aActivité interrompue.", 90, Gameplay } }, //time over


	/* Cutscene voices */

	//Before Egg Walker

	{ 816, { "\aOh non ! C'est Robotnik !", 30, Gameplay } },
	{ 818, { "\aFuyons !", 30, Gameplay } },

	//After Egg Walker

	{ 821, { "\aTu es le meilleur !", 20, Cutscene } },
	{ 823, { "\aNous t'en serons reconnaissant pour toujours !", 20, Cutscene } },
	{ 825, { "\aTu as sauvé cette journée !", 20, Cutscene } },

	//After Emerald Coast (Gamma)

	{ 1223, { "\aCette grenouille est celle que nous voulons !", 20, Gameplay } },
	{ 1224, { "\aNon, voici la vraie !", 20, Gameplay } },
	{ 1225, { "\aMa grenouille est la bonne !", 20, Gameplay } },


	/* Beta restores */

	//Big's unused fishing lines

	{ 1763, { "\aMince, il est petit.", 90, Gameplay } }, //small fish
	{ 1761, { "\aBah. Il est pas si mal.", 120, Gameplay } }, //medium-sized fish
	{ 1745, { "\aWoah, il est énorme !", 120, Gameplay } }, //large fish
	{ 1753, { "\aOh non.", 60, Gameplay } }, //failed attempt
	{ 1756, { "\aOh non !", 90, Gameplay } }, //failed attempt
	{ 1876, { "\aBien ! On recommence !", 120, Gameplay } }, //try again
	{ 1877, { "\aJ'y étais presque !\nBien, on recommence.", 180, Gameplay } }, //try again

	//Final Egg 1 (Sonic) intercom

	{ 1706, { "\aAlerte intrusion ! Alerte intrusion !\nEgg Keepers, veuillez-vous rendre au lieu de combat !", 360, Gameplay } },
	{ 1707, { "\aAlerte intrusion ! Alerte intrusion !\nEgg Keepers, veuillez-vous rendre au lieu de combat !", 360, Gameplay } },

	//Final Egg (Amy) Eggman's taunts

	{ 1984, { "\aHa ha ha ha ha ! Mauvais chemin.", 150, Gameplay } },
	{ 1985, { "\aHa ha ha ha ! Toujours pas le bon chemin.", 120, Gameplay } },
	{ 1986, { "\aWhohaha ! Pourquoi n'abandonnerais-tu pas ?", 150, Gameplay } },

	//Sky Deck (probably) unused lines

	{ 1704, { "\aUrgence ! Urgence !\nDisposez de tout intrus !", 330, Gameplay } }, //intercom
	{ 1705, { "\aUrgence ! Urgence !\nDisposez de tout intrus !", 330, Gameplay } },
	{ 1727, { "\aAttention : vents violents en approche.", 210, Gameplay } },
	{ 1728, { "\aAlerte sur les vents violents annulée.", 180, Gameplay } },
	{ 1723, { "\aDescente dans les nuages.\nRalentissez le vaisseau.", 360, Gameplay } }, //Eggman orders
	{ 1724, { "\aDescente dans les nuages.\nRalentissez le vaisseau.", 360, Gameplay } },
	{ 1725, { "\aMontez. En avant toute !", 300, Gameplay } },
	{ 1726, { "\aQuel hérisson têtu !\nJe vais te faire décoller.", 300, Gameplay } }, //Eggman ship tilt

	//vs E-101 mk.2 unused line

	{ 1681, { "\aTu dois arrêter, Beta.", 90, Gameplay } },

	//characters taking damage with no rings

	{ 1809, { "\aSonic...", 60, Gameplay } }, //Tails
	{ 1796, { "\aJe suis fichu.", 90, Gameplay } }, //Knuckles
	{ 1740, { "\aOh non !", 60, Gameplay } }, //Amy
	{ 1755, { "\aOuf !", 60, Gameplay } }, //Big

	//Tails' levels alternate Sonic voices

	{ 1823, { "\aT'as réussi !", 60, Gameplay } },
	{ 1824, { "\aTu l'as eue !", 60, Gameplay } },
	{ 1825, { "\aJ'ai réussi !", 60, Gameplay } },
	{ 1826, { "\aJe l'ai eue !", 60, Gameplay } },
	{ 1827, { "\aC'est bien !", 60, Gameplay } },
	{ 1828, { "\aHey-hey-hey !", 60, Gameplay } },
	{ 1829, { "\aAllez !", 60, Gameplay } },
	{ 1830, { "\aJ'ai gagné !", 60, Gameplay } },
	{ 1831, { "\aContinuons comme ça !", 60, Gameplay } },
	{ 1832, { "\aTiens bon !", 60, Gameplay } },
	{ 1833, { "\aAttends-ttends-ttends !", 60, Gameplay } },
	{ 1834, { "\aAttends !", 60, Gameplay } },
	{ 1835, { "\aHourra !", 60, Gameplay } },
	{ 1836, { "\aOki-doki !", 60, Gameplay } },

	//Perfect Chaos unused Tikal's cheers

	{ 1713, { "\aSonic ! C'est à vous de jouer maintenant.", 150, Gameplay } },
	{ 1714, { "\aSoyez brave, hérisson bleu.", 120, Gameplay } },
	{ 1716, { "\aPour rester Super Sonic,\nvous aurez besoin de Rings !", 180, Gameplay } },
};