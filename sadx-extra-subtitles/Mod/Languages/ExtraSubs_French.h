#pragma once


const char* SkyChase1_French[] = { "\aC'est l'heure d'employer un tour de force comme je les aime !", "\aEgg Cannon pr�t !", "\aFEU !", "\aAah, on est touch�s !", "\aOuais ! Woaaaaaah !" };
const char* SkyChase2_French[] = { "\aTransformation, maintenant !", "\aWoaaah !", "\aFinissons-en !", NULL };
const char* WelcomeToTwinklePark_French[] = { "\aBienvenue � Twinkle Park !", NULL };

std::map<int, SubtitleData> ExtraSubs_French
{
	/* Menu voices */

	//Default voice

	{ 0, { "\aChoisissez une carte m�moire.", 90, Menu } },
	{ 1, { "\aChoisissez un fichier.", 60, Menu } },
	{ 2, { "\aCeci est le mode aventure.\nCommencez votre aventure ici.", 180, Menu } },
	{ 3, { "\aCeci est le mode �preuve.\nVous pouvez vous entra�ner ici.", 180, Menu } },
	{ 4, { "\aChoisissez un personnage.", 90, Menu } },
	{ 5, { "\aComment jouer avec Sonic.", 120, Menu } },
	{ 6, { "\aComment jouer avec Tails.", 120, Menu } },
	{ 7, { "\aComment jouer avec Knuckles.", 120, Menu } },
	{ 8, { "\aComment jouer avec Amy.", 120, Menu } },
	{ 9, { "\aComment jouer avec E-102.", 120, Menu } },
	{ 10, { "\aComment jouer avec Big.", 120, Menu } },
	{ 11, { "\aR�gles pour les niveaux d'action.", 120, Menu } },
	{ 12, { "\aChoisissez un niveau.", 90, Menu } },
	{ 13, { "\aChoisissez un jeu.", 90, Menu } },
	{ 14, { "\aOptions.\nVous pouvez customiser divers options.", 210, Menu } },
	{ 15, { "\aTest sonore.\nVous pouvez �couter divers musiques.", 240, Menu } },
	{ 16, { "\aLa carte m�moire n'est pas pr�te.", 120, Menu } },
	{ 17, { "\aIl n'y a pas assez de place\ndans la carte m�moire.", 150, Menu } },

	//Tikal (alternate)

	{ 18, { "\aChoisissez une carte m�moire.", 90, Menu } },
	{ 19, { "\aChoisissez un fichier.", 90, Menu } },
	{ 20, { "\aMode aventure.\nCommencez votre aventure ici.", 180, Menu } },
	{ 21, { "\aCeci est le mode �preuve.\nVous pouvez vous entra�ner ici.", 180, Menu } },
	{ 22, { "\aChoisissez un personnage.", 90, Menu } },
	{ 23, { "\aComment jouer avec Sonic.", 90, Menu } },
	{ 24, { "\aComment jouer avec Tails.", 90, Menu } },
	{ 25, { "\aComment jouer avec Knuckles.", 90, Menu } },
	{ 26, { "\aComment jouer avec Amy.", 90, Menu } },
	{ 27, { "\aComment jouer avec E-102.", 120, Menu } },
	{ 28, { "\aComment jouer avec Big.", 90, Menu } },
	{ 29, { "\aLes r�gles pour les niveaux d'action.\nN'oubliez pas de les retenir !", 240, Menu } },
	{ 30, { "\aQuel niveau voulez-vous faire ?", 120, Menu } },
	{ 31, { "\aQuel jeu voulez-vous faire ?", 120, Menu } },
	{ 32, { "\aOptions.\nVous pouvez customiser les options.", 180, Menu } },
	{ 33, { "\aTest sonore. Vous pouvez �couter\nles musiques qui se jouent dans le jeu.", 270, Menu } },
	{ 34, { "\aAucune carte m�moire n'est branch�e.", 120, Menu } },
	{ 35, { "\aVous n'avez pas assez de place\ndans votre carte m�moire.", 150, Menu } },

	//Sonic

	{ 36, { "\aChoisis une carte m�moire.", 90, Menu } },
	{ 37, { "\aChoisis un fichier.", 60, Menu } },
	{ 38, { "\aMode aventure.\nC'est ici que tu commences ton aventure.", 180, Menu } },
	{ 39, { "\aMode �preuve.\nTu peux jouer � un niveau.", 180, Menu } },
	{ 40, { "\aChoisis ton personnage.", 90, Menu } },
	{ 41, { "\aComment jouer avec moi, Sonic.", 120, Menu } },
	{ 42, { "\aComment jouer avec Tails.", 90, Menu } },
	{ 43, { "\aComment jouer avec Knuckles.", 90, Menu } },
	{ 44, { "\aComment jouer avec Amy.", 90, Menu } },
	{ 45, { "\aComment jouer avec E-102 Gamma", 150, Menu } },
	{ 46, { "\aComment jouer avec Big.", 90, Menu } },
	{ 47, { "\aComment terminer la partie. �a pourrait\n�tre difficile si tu ne sais pas tout.", 240, Menu } },
	{ 48, { "\aChoisis un niveau.", 90, Menu } },
	{ 49, { "\aChoisis un jeu.", 60, Menu } },
	{ 50, { "\aOptions.\nChoisis les options que tu veux �diter.", 180, Menu } },
	{ 51, { "\aTest sonore.\nTu peux y �couter des sons cool.", 180, Menu } },
	{ 52, { "\aEst-ce que ta carte m�moire est bien attach�e ?", 120, Menu } },
	{ 53, { "\aH� ! Tu n'as pas assez de place\ndans ta carte m�moire.", 180, Menu } },

	//Tails

	{ 54, { "\aChoisis une carte m�moire.", 90, Menu } },
	{ 55, { "\aChoisis un fichier.", 90, Menu } },
	{ 56, { "\aMode aventure.\nCommence ton aventure ici.", 180, Menu } },
	{ 57, { "\aMode �preuve.\nTu peux jouer � un niveau.", 150, Menu } },
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
	{ 68, { "\aOptions.\nChoisis les options que tu veux �diter.", 210, Menu } },
	{ 69, { "\aTest sonore.\nTu peux y �couter des sons cool.", 210, Menu } },
	{ 70, { "\aEst-ce que ta carte m�moire est bien attach�e ?", 120, Menu } },
	{ 71, { "\aTu n'as pas assez de place\ndans ta carte m�moire.", 150, Menu } },

	//Knuckles

	{ 72, { "\aChoisis une carte m�moire.", 90, Menu } },
	{ 73, { "\aChoisis un fichier.", 90, Menu } },
	{ 74, { "\aMode aventure.\nCommence ton aventure ici.", 180, Menu } },
	{ 75, { "\aMode �preuve.\nTu peux jouer � un niveau.", 210, Menu } },
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
	{ 86, { "\aOptions.\nChoisis les options que tu veux �diter.", 210, Menu } },
	{ 87, { "\aTest sonore.\n�coute des musiques cool.", 210, Menu } },
	{ 88, { "\aEst-ce que ta carte m�moire est bien attach�e ?", 120, Menu } },
	{ 89, { "\aTu n'as pas assez de place\ndans ta carte m�moire.", 150, Menu } },

	//Amy

	{ 90, { "\aChoisis une carte m�moire.", 120, Menu } },
	{ 91, { "\aChoisis un fichier.", 90, Menu } },
	{ 92, { "\aMode aventure.\nCommence ton aventure ici.", 180, Menu } },
	{ 93, { "\aMode �preuve.\nTu peux jouer � un niveau.", 210, Menu } },
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
	{ 104, { "\aOptions.\nTu peux y �diter divers options.", 210, Menu } },
	{ 105, { "\aTest sonore.\nTu peux �couter la musique du jeu ici.", 240, Menu } },
	{ 106, { "\aEst-ce que ta carte m�moire est bien attach�e ?", 120, Menu } },
	{ 107, { "\aTu n'as pas assez de place\ndans ta carte m�moire.", 150, Menu } },

	//Gamma

	{ 108, { "\aChoisissez une carte m�moire.", 120, Menu } },
	{ 109, { "\aChoisissez un fichier.", 90, Menu } },
	{ 110, { "\aMode aventure.\nCommencez votre aventure ici.", 210, Menu } },
	{ 111, { "\aMode �preuve.\nVous pouvez jouer � un niveau.", 210, Menu } },
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
	{ 122, { "\aOptions.\nChoisissez les options que vous souhaitez �diter.", 240, Menu } },
	{ 123, { "\aTest sonore.\nChoisissez une musique de fond � jouer.", 240, Menu } },
	{ 124, { "\aImpossible de trouver la carte m�moire.", 120, Menu } },
	{ 125, { "\aAttention ! Pas assez de place. Attention !", 210, Menu } },

	//Big

	{ 126, { "\aHuum... Quelle carte m�moire ?", 120, Menu } },
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
	{ 138, { "\aO� veux-tu jouer ?", 120, Menu } },
	{ 139, { "\aQue veux-tu jouer ?", 90, Menu } },
	{ 140, { "\aHuum... Options.\nChoisis les options que tu veux �diter.", 270, Menu } },
	{ 141, { "\aTest sonore.\n�coute les musiques cool du jeu.", 240, Menu } },
	{ 142, { "\aEst-ce que ta carte m�moire est bien attach�e ?", 150, Menu } },
	{ 143, { "\aTu n'as pas assez de place\ndans ta carte m�moire.", 180, Menu } },

	//Eggman

	{ 144, { "\aChoisis une carte m�moire.", 150, Menu } },
	{ 145, { "\aChoisis un fichier.", 120, Menu } },
	{ 146, { "\aMode aventure.\nCommence ton aventure ici.", 210, Menu } },
	{ 147, { "\aMode �preuve.\nTu peux jouer � un niveau.", 210, Menu } },
	{ 148, { "\aChoisis ton personnage.", 120, Menu } },
	{ 149, { "\aComment jouer avec ce h�risson.", 150, Menu } },
	{ 150, { "\aComment jouer avec ce renard � deux queues.", 180, Menu } },
	{ 151, { "\aComment jouer avec cet idiot.", 150, Menu } },
	{ 152, { "\aComment jouer avec cette gamine, Amy.", 180, Menu } },
	{ 153, { "\aComment jouer avec ma cr�ation,\nE-102 Gamma.", 240, Menu } },
	{ 154, { "\aComment jouer avec ce gros chat.", 150, Menu } },
	{ 155, { "\aComment terminer la partie.\nArr�te de lire et commence � jouer !", 300, Menu } },
	{ 156, { "\aAlors, quel niveau veux-tu faire ?", 180, Menu } },
	{ 157, { "\aAlors, quel jeu veux-tu faire ?", 180, Menu } },
	{ 158, { "\aOptions.\nFais donc, �dite-les comme tu le d�sires.", 240, Menu } },
	{ 159, { "\aTest sonore.\nTu peux �couter les musiques du jeu ici.", 270, Menu } },
	{ 160, { "\aEst-ce que ta carte m�moire est bien attach�e ?", 150, Menu } },
	{ 161, { "\aTu n'as pas assez de place\ndans ta carte m�moire.", 180, Menu } },


	/* Character select lines */

	{ 1837, { "\aChoppons-les !", 60, Menu } }, //Sonic
	{ 1800, { "\aMe voil�, Sonic !", 90, Menu } }, //Tails
	{ 1787, { "\aOK ! Allons-y !", 90, Menu } }, //Knuckles
	{ 1730, { "\aC'est � moi, maintenant !", 90, Menu } }, //Amy
	{ 1767, { "\aPr�parations compl�t�es.", 90, Menu } }, //Gamma
	{ 1744, { "\aAttends-moi, Froggy ! J'arrive !", 150, Menu } }, //Big


	/* Common idle lines */

	{ 390, { "\aIl vaudrait mieux bouger !", 60, Gameplay } }, //Sonic
	{ 392, { "\aJe devrais me d�p�cher !", 60, Gameplay } }, //Knuckles
	{ 393, { "\aJe n'en peux plus !", 90, Gameplay } }, //Amy
	{ 394, { "\aMode de combat engag�.", 120, Gameplay } }, //Gamma
	{ 395, { "\aH�, j'ai un petit creux.", 120, Gameplay } }, //Big


	/* Adventure fields idle lines */

	//Station Square - station area

	{ 288, { "\aCette gare doit �tre\nau centre de cette ville.", 120, Gameplay } }, //Sonic
	{ 289, { "\aLes trains c'est sympa aussi !", 90, Gameplay } }, //Tails
	{ 290, { "\aVoici donc Station Square ?", 120, Gameplay } }, //Knuckles
	{ 291, { "\aIl fait bon d'avoir un oc�an tout pr�s.", 120, Gameplay } }, //Amy
	{ 292, { "\aJe me demande s'il y a des poissons ici.", 150, Gameplay } }, //Big
	{ 293, { "\aRecherche dans Station Square...", 120, Gameplay } }, //Gamma

	//Station Square - city hall area

	{ 274, { "\aCet endroit a pas mal chang�.", 120, Gameplay } }, //Sonic
	{ 275, { "\aEh b�, j'ai faim.", 90, Gameplay } }, //Tails
	{ 276, { "\aJe d�teste les grandes villes.", 90, Gameplay } }, //Knuckles
	{ 277, { "\aQu'est-ce que j'aimerais faire les magasins !", 90, Gameplay } }, //Amy
	{ 278, { "\aTout le monde semble occup�.", 150, Gameplay } }, //Big
	{ 279, { "\aD�tection de multiples �tres vivants.", 150, Gameplay } }, //Gamma

	//Station Square - sewers

	{ 286, { "\aJ'ai l'impression d'�tre un rat ici.", 90, Gameplay } }, //Sonic
	{ 287, { "\aWoah, c'est sombre ici !", 120, Gameplay } }, //Big

	//Station Square - Twinkle Park entrance

	{ 300, { "\aJe n'aime pas trop ce genre d'endroit.", 150, Gameplay } }, //Sonic
	{ 301, { "\aHmm, je ne peux pas aller au parc !", 150, Gameplay } }, //Tails
	{ 302, { "\aC'est quoi cet endroit ?", 90, Gameplay } }, //Knuckles
	{ 303, { "\aJ'ai h�te !", 90, Gameplay } }, //Amy
	{ 304, { "\aTwinkle Park ?", 90, Gameplay } }, //Big
	{ 305, { "\aLieu des auto-tamponneuses confirm�.", 150, Gameplay } }, //Gamma

	//Station Square - hotel

	{ 294, { "\aH� h� ! C'est pas le moment de se reposer !", 120, Gameplay } }, //Sonic
	{ 295, { "\aCet h�tel est sympa !", 90, Gameplay } }, //Tails
	{ 296, { "\aG�nial, un h�tel de vacances.", 120, Gameplay } }, //Knuckles
	{ 297, { "\aJ'adorerais passer mes vacances ici !", 120, Gameplay } }, //Amy
	{ 298, { "\aQuelle grosse maison !", 120, Gameplay } }, //Big
	{ 299, { "\aMode combat d�sengag�.", 120, Gameplay } }, //Gamma

	//Station Square - casino area / station

	{ 280, { "\aC'est pas le moment de faire joujou !", 120, Gameplay } }, //Sonic
	{ 281, { "\aQuelle grande ville !", 90, Gameplay } }, //Tails
	{ 282, { "\aCet endroit est bruyant !", 90, Gameplay } }, //Knuckles
	{ 283, { "\aCette ville ne change jamais !", 120, Gameplay } }, //Amy
	{ 284, { "\aJe me demande o� est Froggy.", 120, Gameplay } }, //Big
	{ 285, { "\aTrain vers les Mystic Ruins confirm�.", 150, Gameplay } }, //Gamma

	//Mystic Ruins - station area

	{ 306, { "\aLe calme doit r�gner ici.", 90, Gameplay } }, //Sonic
	{ 307, { "\aCet endroit � quand m�me pas mal\nchang� depuis qu'ils ont contruit la gare.", 180, Gameplay } }, //Tails
	{ 308, { "\aIl faut que je retrouve l'�meraude M�re.", 180, Gameplay } }, //Knuckles
	{ 309, { "\aJe n'aime pas ce genre d'endroit.", 150, Gameplay } }, //Amy
	{ 310, { "\aFroggy, o� es-tu ?", 180, Gameplay } }, //Big
	{ 311, { "\aRecherche aux Mystic Ruins...", 120, Gameplay } }, //Gamma

	//Mystic Ruins - Angel Island

	{ 312, { "\aVoil� donc Angel Island !", 120, Gameplay } }, //Sonic
	{ 313, { "\aIl faut que je refasse\nvoler cette �le.", 150, Gameplay } }, //Knuckles
	{ 314, { "\aArriv� � Angel Island.", 120, Gameplay } }, //Gamma

	//Mystic Ruins - jungle

	{ 315, { "\aL� on peut parler !", 90, Gameplay } }, //Sonic
	{ 316, { "\aD'o� est-ce que je viens ?", 90, Gameplay } }, //Tails
	{ 317, { "\aCet endroit me donne\ndes sensations bien �tranges.", 180, Gameplay } }, //Knuckles
	{ 318, { "\aCet endroit est g�nial !", 90, Gameplay } }, //Amy
	{ 319, { "\aJe vais peut-�tre rentrer...", 120, Gameplay } }, //Big
	{ 320, { "\aAugmentation de la temp�rature.\nSyst�me de refroidissement activ�.", 210, Gameplay } }, //Gamma

	//Final Egg entrance

	{ 321, { "\a�a doit �tre la base de Robotnik !", 120, Gameplay } }, //Sonic
	{ 322, { "\aVoil� donc la forteresse de Robotnik !", 120, Gameplay } }, //Tails
	{ 323, { "\aLocalisation : lieu de cr�ation.", 120, Gameplay } }, //Knuckles, wtf?
	{ 324, { "\aJe vais faire de mon mieux, Sonic.", 120, Gameplay } }, //Amy
	{ 325, { "\aL'endroit o� j'ai �t� cr��.", 120, Gameplay } }, //Gamma

	//Past (normal)

	{ 326, { "\aQuel est cet endroit ?", 60, Gameplay } }, //Tails
	{ 327, { "\aO� suis-je ?", 60, Gameplay } }, //Knuckles
	{ 328, { "\aH� ! O� est-ce que je suis ?", 90, Gameplay } }, //Amy
	{ 329, { "\aHuum... O� suis-je ?", 120, Gameplay } }, //Big
	{ 330, { "\aDonn�es indisponibles.\nLieu actuel inconnu.", 210, Gameplay } }, //Gamma

	//Past (fire)

	{ 331, { "\aC'est pas bon !", 60, Gameplay } }, //Sonic
	{ 332, { "\aPourquoi ?", 60, Gameplay } }, //Knuckles

	//Egg Carrier - outside

	{ 333, { "\aCe vaisseau en fait trop !", 90, Gameplay } }, //Sonic
	{ 334, { "\aCe vaisseau est cool !", 90, Gameplay } }, //Tails
	{ 335, { "\aComment ce \"machin\" fait-il pour voler ?", 120, Gameplay } }, //Knuckles
	{ 336, { "\aJe me demande pourquoi ce bonhomme s'est emb�t�\n� faire les choses comme �a.", 210, Gameplay } }, //Amy
	{ 337, { "\aPoursuivre la mission.", 90, Gameplay } }, //Gamma
	{ 338, { "\aHuum... Comment fait ce vaisseau pour voler ?", 150, Gameplay } }, //Big

	//Egg Carrier - inside

	{ 339, { "\aCe vaisseau est bien trop bizarre !", 120, Gameplay } }, //Sonic
	{ 340, { "\aJ'aimerais faire un vaisseau comme celui-l� un jour !", 120, Gameplay } }, //Tails
	{ 341, { "\aO� est la sortie ?", 60, Gameplay } }, //Knuckles
	{ 342, { "\aMieux vaut traverser tout �a\ntranquillement si l'on ne veut pas qu'on nous entende.", 150, Gameplay } }, //Amy
	{ 343, { "\aPoursuivre la mission.", 90, Gameplay } }, //Gamma
	{ 344, { "\aHuum... Sortie ? Sortie ?", 150, Gameplay } }, //Big


	/* Action levels idle lines */

	//Emerald Coast

	{ 227, { "\aTout ce que j'ai � faire, c'est traverser cette plage !", 120, Gameplay } }, //Sonic
	{ 228, { "\aGrenouille d�tect�e.", 120, Gameplay } }, //Gamma
	{ 229, { "\aQuel bon vent !", 90, Gameplay } }, //Sonic
	{ 230, { "\aQuel grand lac !", 120, Gameplay } }, //Big

	//Windy Valley

	{ 231, { "\aJe peux entendre le vent au loin.", 120, Gameplay } }, //Sonic
	{ 232, { "\aE-103 d�tect�.", 120, Gameplay } }, //Gamma
	{ 233, { "\aJe ferais mieux de me tirer d'ici !", 90, Gameplay } }, //Sonic
	{ 234, { "\aWoah, c'est sacr�ment haut !", 90, Gameplay } }, //Sonic
	{ 235, { "\aJe me demande o� est Sonic.", 90, Gameplay } }, //Tails

	//Casinopolis

	{ 236, { "\aHmm, des flippers !", 90, Gameplay } }, //Sonic
	{ 237, { "\aQue c'est �clair� ici !", 90, Gameplay } }, //Knuckles
	{ 238, { "\aC'est quoi cette odeur ?\n�a pue !", 180, Gameplay } }, //Sonic

	//Icecap

	{ 239, { "\aIl commence � faire froid !", 60, Gameplay } }, //Sonic
	{ 240, { "\aEh b�, tout est glac� !", 120, Gameplay } }, //Sonic
	{ 241, { "\aLa glace a l'air plut�t bonne !", 120, Gameplay } }, //Big
	{ 242, { "\aMate et apprends !", 90, Gameplay } }, //Sonic
	{ 243, { "\aC'est l'heure de filer !", 60, Gameplay } }, //Tails

	//Twinkle Park

	{ 244, { "\a�a doit �tre l'entr�e qui m�ne\n� la zone des auto-tamponneuses.", 150, Gameplay } }, //Sonic
	{ 245, { "\aPersonne en vue", 90, Gameplay } }, //Sonic
	{ 246, { "\aJe me demande si les poissons mordent.", 150, Gameplay } }, //Big
	{ 247, { "\aJe me demande o� est parti Sonic.", 90, Gameplay } }, //Amy

	//Speed Highway

	{ 248, { "\aC'est l'heure d'y aller en vitesse supersonique !", 120, Gameplay } }, //Sonic
	{ 249, { "\aO� est Robotnik ?", 60, Gameplay } }, //Tails
	{ 250, { "\aH�, c'est pas le moment de se reposer !", 120, Gameplay } }, //Sonic
	{ 251, { "\aLes voitures sont si lentes !\nOn croirait qu'elles ne bougent pas.", 150, Gameplay } }, //Sonic
	{ 252, { "\aLes pi�ces de l'�meraude M�re\ndoivent se trouver quelque part en ville.", 210, Gameplay } }, //Knuckles

	//Red Mountain

	{ 253, { "\aO� est pass� l'Egg Carrier ?", 90, Gameplay } }, //Sonic
	{ 254, { "\aWoah ! Cette lave � l'air d'�tre vraiment tr�s chaude !", 150, Gameplay } }, //Sonic
	{ 255, { "\aE-104 d�tect�.", 120, Gameplay } }, //Gamma
	{ 256, { "\aJ'ai pas int�r�t � tomber !", 90, Gameplay } }, //Knuckles

	//Sky Deck

	{ 257, { "\aOh oh !\nIl vaut vraiment mieux pas que je tombe d'ici !", 180, Gameplay } }, //Sonic
	{ 258, { "\aC'est sacr�ment haut !\nMes jambes en tremblent !", 180, Gameplay } }, //Tails
	{ 259, { "\aZut ! Je d�teste ce vent !", 120, Gameplay } }, //Sonic
	{ 260, { "\aH�, qu'est-ce qui va pas avec ce vaisseau ?", 90, Gameplay } }, //Sonic
	{ 261, { "\aBien donc, o� est le tr�sor ?", 120, Gameplay } }, //Knuckles

	//Lost World

	{ 262, { "\aQu'est-ce que c'est calme ici.", 90, Gameplay } }, //Sonic
	{ 263, { "\aO� suis-je ?", 60, Gameplay } }, //Sonic
	{ 264, { "\aL'�meraude est quelque part dans cette pi�ce.", 150, Gameplay } }, //Knuckles

	//Final Egg

	{ 265, { "\a�a sent l'huile.", 90, Gameplay } }, //Sonic
	{ 266, { "\aH�, petit oiseau. Tu vas bien ?", 120, Gameplay } }, //Amy
	{ 267, { "\aO� est-ce que �a se termine ?", 60, Gameplay } }, //Sonic
	{ 268, { "\aTu n'as qu'� bien te tenir, Robotnik !", 90, Gameplay } }, //Sonic
	{ 269, { "\aH�risson bleu : ennemi.", 120, Gameplay } }, //Gamma

	//Hot Shelter

	{ 270, { "\aQu'est-ce que je d�teste Robotnik !", 90, Gameplay } }, //Amy
	{ 271, { "\aJe me demande si Froggy va bien.", 120, Gameplay } }, //Big
	{ 272, { "\aHuum... O� devrais-je aller ?", 120, Gameplay } }, //Amy
	{ 273, { "\aE-105 d�tect�.", 120, Gameplay } }, //Gamma


	/* Boss battle idle lines */

	//Sonic

	{ 368, { "\aIl ne peut pas �tre invincible, pas vrai ?", 120, Gameplay } }, //Chaos 0
	{ 369, { "\aTu ne fais pas le poids face � moi !", 90, Gameplay } }, //Egg Hornet
	{ 370, { "\aQu'est-ce qui va pas, Knuckles ?", 60, Gameplay } }, //vs Knuckles
	{ 371, { "\aH� ! Cette fois-ci, tu ne t'en sortiras pas !", 120, Gameplay } }, //Chaos 4
	{ 372, { "\aPas mal, pas mal du tout !", 120, Gameplay } }, //Gamma
	{ 373, { "\aO� peut bien �tre son point faible ?", 90, Gameplay } }, //Chaos 6
	{ 374, { "\aTu t'es bien amus�.\nMaintenant, c'est � moi !", 150, Gameplay } }, //Egg Viper

	//Tails

	{ 375, { "\aAllez, Tails ! Tu peux le faire !", 120, Gameplay } }, //Egg Hornet	
	{ 376, { "\aH-H�, attends une minute !", 120, Gameplay } }, //vs Knuckles
	{ 377, { "\aSale monstre liquide !", 120, Gameplay } }, //Chaos 4
	{ 378, { "\aCe robot semble diff�rent.", 150, Gameplay } }, //vs Gamma
	{ 379, { "\aJe sais que je peux m'en occuper moi-m�me !", 150, Gameplay } }, //Egg Walker

	//Knuckles

	{ 380, { "\aC'est bon ! J'en ai eu assez !", 120, Gameplay } }, //Chaos 2
	{ 381, { "\aDonne l'�meraude !", 60, Gameplay } }, //vs Sonic
	{ 382, { "\aQuand est-ce que tu vas comprendre ?", 90, Gameplay } }, //Chaos 4
	{ 383, { "\aCette fois-ci, c'est termin� pour toi !", 120, Gameplay } }, //Chaos 6

	//Amy

	{ 384, { "\aTu vas payer pour\nce que tu as fait !", 150, Gameplay } }, //Zero

	//Gamma

	{ 385, { "\aCible confirm�e.", 90, Gameplay } }, //E-101
	{ 386, { "\aH�risson bleu : ennemi.", 120, Gameplay } }, //vs Sonic
	{ 387, { "\aBeta !", 60, Gameplay } }, //E-101 mk.2

	//Super Sonic

	{ 388, { "\aJe vais te montrer de quoi sont\nr�ellement capables les �meraudes du Chaos !", 180, Gameplay } },
	{ 389, { "\aVoil� donc son c?ur !", 90, Gameplay } },


	/* Chao Garden idle lines */

	//Sonic

	{ 348, { "\aQuel endroit paisible !", 90, Gameplay } },
	{ 349, { "\aYo ! Vous allez bien, les gars ?", 90, Gameplay } },
	{ 350, { "\aN'oubliez pas, pas de bagarres !", 120, Gameplay } },

	//Tails

	{ 351, { "\aJe me sens vraiment � ma place ici !", 90, Gameplay } },
	{ 352, { "\aComment vous allez, les gars ?", 90, Gameplay } },
	{ 353, { "\aVous �tes les meilleurs !", 90, Gameplay } },

	//Knuckles

	{ 354, { "\aJe suppose qu'il n'y a aucune �meraude ici.", 120, Gameplay } },
	{ 355, { "\aJ'ai comme l'impression\nd'avoir d�j� vu ces gars quelque part.", 180, Gameplay } },
	{ 356, { "\aCet endroit me rapelle la maison.\nJe me demande pourquoi ?", 270, Gameplay } },

	//Amy

	{ 357, { "\aCet endroit est si relaxant !", 150, Gameplay } },
	{ 358, { "\aWaah... Je commence � avoir someille.", 150, Gameplay } },
	{ 359, { "\aJe ne veux pas vous voir vous battre !", 120, Gameplay } },
	{ 360, { "\aSi seulement Sonic �tait ici...", 120, Gameplay } },

	//Gamma

	{ 361, { "\aLocalisation : inconnue.", 120, Gameplay } },
	{ 362, { "\aMode combat d�sengag�.", 150, Gameplay } },
	{ 363, { "\aLes capteurs d�tectent de la vie.", 120, Gameplay } },

	//Big

	{ 364, { "\a�a va, copain ?", 90, Gameplay } },
	{ 365, { "\aVous allez bien ?", 90, Gameplay } },
	{ 366, { "\aH�, j'ai � nouveau faim.", 150, Gameplay } },
	{ 367, { "\aJ'ai envie d'aller p�cher !", 120, Gameplay } },


	/* Mini jeus idle lines */

	//Sand Hill

	{ 345, { "\aMince ! J'ai du sable dans les yeux !", 120, Gameplay } }, //Sonic
	{ 346, { "\aCe sable n'a pas l'air de tenir !", 90, Gameplay } }, //Tails

	//Hedgehog Hammer

	{ 347, { "\aOh, allez !", 60, Gameplay } }, //Amy


	/* Sky Chase sequences */

	//Sky Chase 1 - before Egg Cannon fires

	{ 491, { "\aOn a r�ussi !", 60, Gameplay } }, //Tails
	{ 716, { "\aOn a r�ussi !", 60, Gameplay } }, //Tails (duplicate?)
	{ 492, { "\aBien jou�, Tails !", 90, Gameplay } }, //Sonic	
	{ 717, { "\aBien jou�, Tails !", 90, Gameplay } }, //Sonic (duplicate?)

	//Sky Chase 2 - before transformation

	{ 765, { "\aHa ha ! Tout va bien pour le moment !", 150, Gameplay } },
	{ 766, { "\aJ'esp�re que tu sais ce que tu fais.", 90, Gameplay } },
	{ 767, { "\aBien s�r ! Mate �a !", 120, Gameplay } },

	//Sky Chase 2 - transformation sequence alternate lines (they also match the regular lines in Japanese)

	{ 530, { "\aTout a l'air d'aller, pour le moment !", 90, Gameplay } },
	{ 531, { "\aC'est reparti !", 60, Gameplay } },
	{ 532, { "\aT'inqui�te pas, je suis pr�t.", 90, Gameplay } },
	{ 533, { "\aMode de transformation : engag� !", 180, Gameplay } },
	{ 534, { "\aWooooah !", 90, Gameplay } },
	{ 535, { "\aPr�t ? On y va !", 150, Gameplay } },


	/* Action niveaus voices */

	//All Tails' niveaus except for Speed Highway (Sonic's voice)

	{ 205, { "\aAllez, Tails !", 60, Gameplay } },
	{ 206, { "\aHey hey hey !", 60, Gameplay } },
	{ 207, { "\aG�nial, Tails !", 90, Gameplay } },
	{ 208, { "\aH�, Tails !", 60, Gameplay } },
	{ 209, { "\aT'as r�ussi !", 60, Gameplay } },
	{ 210, { "\aAllez !", 60, Gameplay } },
	{ 211, { "\a� plus, Tails !", 90, Gameplay } },
	{ 212, { "\aD�p�che, Tails !", 60, Gameplay } },
	{ 213, { "\aHourra !", 60, Gameplay } },
	{ 214, { "\aJe l'ai !", 60, Gameplay } },
	{ 215, { "\aTu n'as pas de Rings, Tails.\nFais attention !", 150, Gameplay } },

	//Speed Highway (Eggman's voice)

	{ 216, { "\aTu penses pouvoir faire le poids face � moi ?", 120, Gameplay } },
	{ 217, { "\aJe t'ai eu, Tails !", 120, Gameplay } },
	{ 218, { "\aQuoi ? Il a rattrap� son retard !", 120, Gameplay } },
	{ 219, { "\aSale petit renard !", 120, Gameplay } },
	{ 220, { "\aTails ! Attends-moi !", 120, Gameplay } },
	{ 221, { "\aWhahahahahahahahaha !", 120, Gameplay } },
	{ 222, { "\aAdieu, Tails !", 90, Gameplay } },
	{ 223, { "\aJ'emporterai cette ville\ntoute enti�re avec moi !", 150, Gameplay } },
	{ 224, { "\aTu ne me battras jamais !", 120, Gameplay } },
	{ 225, { "\aJ'ai gagn� ! Whahahahahahahaha !", 180, Gameplay } },
	{ 226, { "\aAbandonne tout de suite, Tails !", 120, Gameplay } },

	//Final Egg

	{ 1588, { "\aUrgence ! Urgence !\nDisposez de tout intrus !", 300, Gameplay } }, //intercom
	{ 1589, { "\aUrgence ! Urgence !\nDisposez de tout intrus !", 300, Gameplay } },
	{ 1590, { "\aFinal Egg : mur d'isolation de niveau 2 ouvert.", 330, Gameplay } },
	{ 1591, { "\aFinal Egg : mur d'isolation de niveau 2 ouvert.", 330, Gameplay } },
	{ 1592, { "\aDestruis les cibles\npour gagner du temps.", 210, Gameplay } }, //Eggman to Gamma
	{ 1593, { "\aDestruis la cible Sonic.", 150, Gameplay } },


	/* Boss voices */

	//vs character

	{ 164, { "\aOh non !", 60, Gameplay } }, //Knuckles
	{ 165, { "\aOh non !", 60, Gameplay } }, //Sonic
	{ 166, { "\aFais de ton mieux !", 90, Gameplay } }, //Knuckles
	{ 167, { "\aJ'en ai assez !", 60, Gameplay } }, //Sonic
	{ 168, { "\aG�nial, montre-moi tes poings !", 90, Gameplay } }, //Knuckles
	{ 169, { "\aToute r�sistance est futile.", 90, Gameplay } }, //Gamma
	{ 170, { "\aOh non !", 60, Gameplay } }, //Sonic

	//Eggman bosses

	{ 171, { "\aTous les syst�mes - puissance maximale !", 150, Gameplay } },
	{ 172, { "\aAaah !", 60, Gameplay } },
	{ 173, { "\aAh ha !", 60, Gameplay } },
	{ 174, { "\aPrends �a !", 90, Gameplay } },
	{ 175, { "\aImpossible ! Je n'arrive pas � y croire !", 180, Gameplay } },
	{ 176, { "\aAaah !\nIl ne va pas s'en tirer comme �a !", 180, Gameplay } },
	{ 177, { "\aImpossible ! Je n'arrive pas � y croire !", 180, Gameplay } },
	{ 178, { "\aHo ho ! C'est inutile. Abandonne !", 180, Gameplay } },
	{ 1902, { "\aWhoohaha ! Vois si tu peux\nr�sister � �a, Sonic !", 210, Gameplay } }, //Egg Viper
	{ 1903, { "\aPrends �a !", 60, Gameplay } },


	/* Adventure fields announcers */

	//Station Square

	{ 1567, { "\aNous vous prions de monter � bord du train\net d'attendre le d�part.", 210, Gameplay } },
	{ 1568, { "\aNous vous prions de monter � bord du train\net d'attendre le d�part.", 210, Gameplay } },
	{ 1569, { "\aLe train en route pour les Mystic Ruins\nva bient�t partir.", 270, Gameplay } },
	{ 1570, { "\aLe train en route pour les Mystic Ruins\nva bient�t partir.", 270, Gameplay } },
	{ 1571, { "\aUn train devrait bient�t arriver.\nVeuillez vous �carter.", 270, Gameplay } },
	{ 1572, { "\aUn train devrait bient�t arriver.\nVeuillez vous �carter.", 270, Gameplay } },
	{ 1573, { "\aAucun train n'est actuellement en service.", 180, Gameplay } },
	{ 1574, { "\aAucun train n'est actuellement en service.", 180, Gameplay } },

	//Twinkle Park entrance

	{ 1575, { "\aBienvenue � Twinkle Park !", 90, Gameplay } },

	//Mystic Ruins

	{ 1654, { "\aNous demandons aux passagers d'attendre\n� l'int�rieur du train.", 210, Gameplay } },
	{ 1655, { "\aLe train en route pour Station Square\nva bient�t partir.", 270, Gameplay } },
	{ 1656, { "\aUn train devrait bient�t arriver.\nVeuillez vous �carter.", 300, Gameplay } },
	{ 1657, { "\aAucun train n'est actuellement en service.", 210, Gameplay } },


	/* Character specific jeuplay voices */

	//Sonic

	{ 1838, { "\aOuais !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1839, { "\aWouhou !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1840, { "\aOuais.", 60, Gameplay } }, //niveau clear
	{ 1841, { "\aH�, fais un effort !", 90, Gameplay } }, //bad clear
	{ 1842, { "\a*sifflement* Joli !", 90, Gameplay } }, //good clear
	{ 1843, { "\aH�, je jouerai avec toi un autre jour !", 120, Gameplay } }, //boss clear
	{ 1844, { "\aOuais, pas mal !", 60, Gameplay } }, //normal clear
	{ 1845, { "\aH�, l�che !", 60, Gameplay } }, //captured
	{ 1847, { "\aNon !", 60, Gameplay } }, //died with no rings

	//Tails

	{ 1801, { "\aWoou !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1802, { "\aG�nial !", 60, Gameplay } }, //Twinkle Circuit/Icecap jump
	{ 1803, { "\aOuaaais !", 90, Gameplay } }, //niveau clear
	{ 1804, { "\aPfiou ! Je suis arriv� � temps !", 120, Gameplay } }, //bad clear
	{ 1805, { "\aJ'ai r�ussi, Sonic !", 90, Gameplay } }, //good clear
	{ 1806, { "\aG�nial, j'ai r�ussi !", 90, Gameplay } }, //boss clear
	{ 1807, { "\aC'�tait pas si mal.", 90, Gameplay } }, //normal clear
	{ 1808, { "\aH� !", 60, Gameplay } }, //captured

	//Knuckles

	{ 1788, { "\aOuaaais !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1789, { "\aHol� !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1790, { "\aTrouv�es !", 60, Gameplay } }, //niveau clear
	{ 1791, { "\aJe peux faire mieux que �a.", 90, Gameplay } }, //bad clear
	{ 1792, { "\aC'�tait facile.", 90, Gameplay } }, //good clear
	{ 1793, { "\aC'est tout ce que t'as ?", 90, Gameplay } }, //boss clear
	{ 1794, { "\aHm. Pas mal.", 90, Gameplay } }, //normal clear
	{ 1795, { "\aOoh !", 60, Gameplay } }, //captured

	//Amy

	{ 1731, { "\aG�nial !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1732, { "\aOu��� !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1733, { "\aG�nial !", 90, Gameplay } }, //niveau clear
	{ 1734, { "\aPfiou... C'est pas pass� loin !", 150, Gameplay } }, //bad clear
	{ 1735, { "\aTu vois ? Je peux le faire !", 120, Gameplay } }, //boss clear
	{ 1736, { "\aJe suis libre !", 90, Gameplay } }, //normal clear
	{ 1737, { "\aWoah ! Je me d�brouille bien !", 120, Gameplay } }, //good clear
	{ 1738, { "\aH�, l�che-moi tout de suite !", 120, Gameplay } }, //captured

	//Big

	{ 1746, { "\aHmm !", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1334, { "\aOoh, qu'est-ce que je vais faire maintenant ?", 210, Gameplay } }, //niveau clear (Twinkle Park, Icecap)
	{ 1747, { "\aFroggy !", 90, Gameplay } }, //niveau clear (Emerald Coast, Hot Shelter)	
	{ 1748, { "\aPeut-�tre une prochaine fois.", 120, Gameplay } }, //bad clear
	{ 1749, { "\aQuelle prise !", 60, Gameplay } }, //good clear
	{ 1750, { "\aFroggy ! Tu vas bien ?", 150, Gameplay } }, //boss clear
	{ 1751, { "\aPas si mal !", 90, Gameplay } }, //normal clear
	{ 1758, { "\aJ'ai attrap� un poisson !", 90, Gameplay } }, //got fish
	{ 1759, { "\aQuelque chose mord !", 90, Gameplay } }, //hit

	//Gamma

	{ 1768, { "\aConduite termin�e.", 90, Gameplay } }, //Twinkle Circuit clear
	{ 1770, { "\aMission termin�e.", 90, Gameplay } }, //niveau clear
	{ 1771, { "\aE-101 Beta: sauvetage accompli.", 210, Gameplay } }, //Beta mk.2 clear
	{ 1772, { "\aCapture de la grenouille accomplie.", 120, Gameplay } }, //Emerald Coast clear
	{ 1773, { "\aE-105 Zeta: sauvetage accompli.", 210, Gameplay } }, //Hot Shelter clear
	{ 1774, { "\aE-104 Epsilon: sauvetage accompli.", 210, Gameplay } }, //Red Mountain clear
	{ 1775, { "\aE-103 Delta: sauvetage accompli.", 210, Gameplay } }, //Windy Valley clear
	{ 1777, { "\aImpossible de marcher.", 90, Gameplay } }, //captured
	{ 1778, { "\aMission �chou�e.", 90, Gameplay } }, //died
	{ 1786, { "\aActivit� interrompue.", 90, Gameplay } }, //time over


	/* Cutscene voices */

	//Before Egg Walker

	{ 816, { "\aOh non ! C'est Robotnik !", 30, Gameplay } },
	{ 818, { "\aFuyons !", 30, Gameplay } },

	//After Egg Walker

	{ 821, { "\aTu es le meilleur !", 20, Cutscene } },
	{ 823, { "\aNous t'en serons reconnaissant pour toujours !", 20, Cutscene } },
	{ 825, { "\aTu nous a tous sauv�s !", 20, Cutscene } },

	//After Emerald Coast (Gamma)

	{ 1223, { "\aCette grenouille est celle que nous voulons !", 20, Gameplay } },
	{ 1224, { "\aNon, voici la vraie !", 20, Gameplay } },
	{ 1225, { "\aMa grenouille est la bonne !", 20, Gameplay } },


	/* Beta restores */

	//Big's unused fishing lines

	{ 1763, { "\aMince, il est petit.", 90, Gameplay } }, //small fish
	{ 1761, { "\aBah. Il est pas si mal.", 120, Gameplay } }, //medium-sized fish
	{ 1745, { "\aWoah, il est �norme !", 120, Gameplay } }, //large fish
	{ 1753, { "\aOh non.", 60, Gameplay } }, //failed attempt
	{ 1756, { "\aOh non !", 90, Gameplay } }, //failed attempt
	{ 1876, { "\aBien ! On recommence !", 120, Gameplay } }, //try again
	{ 1877, { "\aJ'y �tais presque !\nBien, on recommence.", 180, Gameplay } }, //try again

	//Final Egg 1 (Sonic) intercom

	{ 1706, { "\aAlerte intrusion ! Alerte intrusion !\nEgg Keepers, veuillez-vous rendre au lieu de combat !", 360, Gameplay } },
	{ 1707, { "\aAlerte intrusion ! Alerte intrusion !\nEgg Keepers, veuillez-vous rendre au lieu de combat !", 360, Gameplay } },

	//Final Egg (Amy) Eggman's taunts

	{ 1984, { "\aHa ha ha ha ha ! Mauvais chemin.", 150, Gameplay } },
	{ 1985, { "\aHa ha ha ha ! Toujours pas le bon chemin.", 120, Gameplay } },
	{ 1986, { "\aWohaha ! Pourquoi n'abandonnerais-tu pas ?", 150, Gameplay } },

	//Sky Deck (probably) unused lines

	{ 1704, { "\aUrgence ! Urgence !\nDisposez de tout intrus !", 330, Gameplay } }, //intercom
	{ 1705, { "\aUrgence ! Urgence !\nDisposez de tout intrus !", 330, Gameplay } },
	{ 1727, { "\aAttention : vents violents en approche.", 210, Gameplay } },
	{ 1728, { "\aAlerte sur les vents violents annul�e.", 180, Gameplay } },
	{ 1723, { "\aDescente dans les nuages.\nRalentissez le vaisseau.", 360, Gameplay } }, //Eggman orders
	{ 1724, { "\aDescente dans les nuages.\nRalentissez le vaisseau.", 360, Gameplay } },
	{ 1725, { "\aMontez. En avant toute !", 300, Gameplay } },
	{ 1726, { "\aQuel h�risson t�tu !\nJe vais te faire d�coller.", 300, Gameplay } }, //Eggman ship tilt

	//vs E-101 mk.2 unused line

	{ 1681, { "\aTu dois arr�ter, Beta.", 90, Gameplay } },

	//characters taking damage with no rings

	{ 1809, { "\aSonic...", 60, Gameplay } }, //Tails
	{ 1796, { "\aJe suis fichu.", 90, Gameplay } }, //Knuckles
	{ 1740, { "\aOh non !", 60, Gameplay } }, //Amy
	{ 1755, { "\aOuf !", 60, Gameplay } }, //Big

	//Tails' levels alternate Sonic voices

	{ 1823, { "\aT'as r�ussi !", 60, Gameplay } },
	{ 1824, { "\aTu l'as eue !", 60, Gameplay } },
	{ 1825, { "\aJ'ai r�ussi !", 60, Gameplay } },
	{ 1826, { "\aJe l'ai eue !", 60, Gameplay } },
	{ 1827, { "\aC'est bien !", 60, Gameplay } },
	{ 1828, { "\aHey hey hey !", 60, Gameplay } },
	{ 1829, { "\aAllez !", 60, Gameplay } },
	{ 1830, { "\aJ'ai gagn� !", 60, Gameplay } },
	{ 1831, { "\aContinuons comme �a !", 60, Gameplay } },
	{ 1832, { "\aTiens bon !", 60, Gameplay } },
	{ 1833, { "\aAttends-ttends-ttends !", 60, Gameplay } },
	{ 1834, { "\aAttends !", 60, Gameplay } },
	{ 1835, { "\aHourra !", 60, Gameplay } },
	{ 1836, { "\aOki-doki !", 60, Gameplay } },

	//Perfect Chaos unused Tikal's cheers

	{ 1713, { "\aSonic ! C'est � vous de jouer maintenant.", 150, Gameplay } },
	{ 1714, { "\aSoyez brave, h�risson bleu.", 120, Gameplay } },
	{ 1716, { "\aPour rester Super Sonic,\nvous aurez besoin de Rings !", 180, Gameplay } },
};

std::map<int, SubtitleData> ExtraSubs_SE_French
{
	// Sonic

	{ SE_SV_CHARGED, { "\aPr�t !", 90, Gameplay } },
	{ SE_SV_LDASH, { "\aOn y va !", 60, Gameplay } },

	// Knuckles

	{ SE_KV_DAME, { "\aNon !", 60, Gameplay } },
	{ SE_KV_HAZURE, { "\aMince !", 60, Gameplay } },
	{ SE_KV_KAKERA1, { "\aEncore deux !", 90, Gameplay } },
	{ SE_KV_KAKERA2, { "\aPlus qu'une !", 90, Gameplay } },

	// Gamma

	{ SE_EV_PICK, { "\aPorter.", 60, Gameplay } },
	{ SE_EV_PUT, { "\aD�poser.", 60, Gameplay } },
	{ SE_EV_THROW, { "\aJeter.", 60, Gameplay } },
	{ SE_EV_PUSH, { "\aPousser.", 60, Gameplay } },
	{ SE_EV_PULL, { "\aTirer.", 60, Gameplay } },
	{ SE_EV_TRANSFORM, { "\aChangement de mode.", 120, Gameplay } },
	{ SE_EV_LIMIT, { "\aPlus de temps.", 120, Gameplay } },
	{ SE_EV_ITEM1, { "\aObjet obtenu.", 120, Gameplay } },
};
