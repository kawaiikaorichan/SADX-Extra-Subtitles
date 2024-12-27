#pragma once


const char* SkyChase1_SpanishDub[] = { "\a�Jum! �No crean que ganaron!", "\a�Egg Cannon listo!", "\a�Fuego!", "\a�Ah, nos dieron!", "\a�Ah...!" };
const char* SkyChase2_SpanishDub[] = { "\a�Cambio de forma!", "\a�Guau...!", "\a�Bien, aqu� vamos!", NULL };
const char* WelcomeToTwinklePark_SpanishDub[] = { "\a�Bienvenidos a Parque Destello!", NULL };

std::map<int, SubtitleData> ExtraSubs_SpanishDub
{
	/* Menu voices */

	//Default voice

	{ 0, { "\aElige una tarjeta de memoria.", 90, Menu } },
	{ 1, { "\aElige un archivo.", 60, Menu } },
	{ 2, { "\aEste es el modo aventura.\nInicia tu aventura aqu�.", 180, Menu } },
	{ 3, { "\aEste es el modo de prueba.\nPuedes practicar aqu�.", 180, Menu } },
	{ 4, { "\aElige un personaje.", 90, Menu } },
	{ 5, { "\aC�mo jugar con Sonic.", 120, Menu } },
	{ 6, { "\aC�mo jugar con Tails.", 120, Menu } },
	{ 7, { "\aC�mo jugar con Knuckles.", 120, Menu } },
	{ 8, { "\aC�mo jugar con Amy.", 120, Menu } },
	{ 9, { "\aC�mo jugar con E-102.", 120, Menu } },
	{ 10, { "\aC�mo jugar con Big.", 120, Menu } },
	{ 11, { "\aReglas para las etapas de acci�n.", 120, Menu } },
	{ 12, { "\aElige un nivel.", 90, Menu } },
	{ 13, { "\aElige un juego.", 90, Menu } },
	{ 14, { "\aOpciones.\nPuedes personalizar varias opciones.", 210, Menu } },
	{ 15, { "\aPrueba de sonido.\nPuedes o�r varias pistas de audio.", 240, Menu } },
	{ 16, { "\aLa tarjeta de memoria no est� lista.", 120, Menu } },
	{ 17, { "\aNo hay suficiente espacio\nen la tarjeta de memoria.", 150, Menu } },

	//Tikal (alternate)

	{ 18, { "\aElige una tarjeta de memoria.", 90, Menu } },
	{ 19, { "\aElige un archivo.", 90, Menu } },
	{ 20, { "\aModo aventura.\nInicia tu aventura aqu�.", 180, Menu } },
	{ 21, { "\aEste es el modo de prueba.\nPuedes practicar aqu�.", 180, Menu } },
	{ 22, { "\aEligue un personaje.", 90, Menu } },
	{ 23, { "\aC�mo jugar con Sonic.", 90, Menu } },
	{ 24, { "\aC�mo jugar con Tails.", 90, Menu } },
	{ 25, { "\aC�mo jugar con Knuckles.", 90, Menu } },
	{ 26, { "\aC�mo jugar con Amy.", 90, Menu } },
	{ 27, { "\aC�mo jugar con E-102.", 120, Menu } },
	{ 28, { "\aC�mo jugar con Big.", 90, Menu } },
	{ 29, { "\aReglas para las etapas de acci�n.\n�No olvides aprenderlas!", 240, Menu } },
	{ 30, { "\a�Qu� nivel quieres jugar?", 120, Menu } },
	{ 31, { "\a�Qu� juegos quieres jugar?", 120, Menu } },
	{ 32, { "\aOpciones.\nPuedes personalizar las caracter�sticas.", 180, Menu } },
	{ 33, { "\aPrueba de sonido. Puedes o�r\nla m�sica que suena durante el juego.", 270, Menu } },
	{ 34, { "\aNo tienes una tarjeta de memoria.", 120, Menu } },
	{ 35, { "\aNo tienes suficiente espacio en la tarjeta de memoria.", 150, Menu } },

	//Sonic

	{ 36, { "\aElige una tarjeta de memoria.", 90, Menu } },
	{ 37, { "\aElige un archivo.", 60, Menu } },
	{ 38, { "\aModo aventura.\nInicia tu aventura aqu�.", 180, Menu } },
	{ 39, { "\aModo de prueba.\nPara jugar un nivel.", 180, Menu } },
	{ 40, { "\aElige tu personaje.", 90, Menu } },
	{ 41, { "\aC�mo jugar conmigo, Sonic.", 120, Menu } },
	{ 42, { "\aC�mo jugar con Tails.", 90, Menu } },
	{ 43, { "\aC�mo jugar con Knuckles.", 90, Menu } },
	{ 44, { "\aC�mo jugar con Amy.", 90, Menu } },
	{ 45, { "\aC�mo jugar con E-102 Gamma", 150, Menu } },
	{ 46, { "\aC�mo jugar con Big.", 90, Menu } },
	{ 47, { "\aC�mo pasar el juego.\nPodr�a ser dif�cil si no lo sabes todo.", 240, Menu } },
	{ 48, { "\aElige un nivel.", 90, Menu } },
	{ 49, { "\aElige un juego.", 60, Menu } },
	{ 50, { "\aOpciones.\nElige la caracter�stica que quieres editar.", 180, Menu } },
	{ 51, { "\aPrueba de sonido.\nPuedes o�r sonidos geniales.", 180, Menu } },
	{ 52, { "\a�Pusiste bien tu tarjeta de memoria?", 120, Menu } },
	{ 53, { "\a�Oye! Le falta memoria\na tu tarjeta de memoria.", 180, Menu } },

	//Tails

	{ 54, { "\aElige una tarjeta de memoria.", 90, Menu } },
	{ 55, { "\aElige un archivo.", 90, Menu } },
	{ 56, { "\aModo aventura.\nInicia tu aventura aqu�.", 180, Menu } },
	{ 57, { "\aModo de prueba.\nPara jugar un nivel.", 150, Menu } },
	{ 58, { "\aElige tu personaje.", 90, Menu } },
	{ 59, { "\aC�mo jugar con Sonic.", 90, Menu } },
	{ 60, { "\aC�mo jugar conmigo, Tails.", 120, Menu } },
	{ 61, { "\aC�mo jugar con Knuckles.", 90, Menu } },
	{ 62, { "\aC�mo jugar con Amy.", 90, Menu } },
	{ 63, { "\aC�mo jugar con E-102 Gamma.", 150, Menu } },
	{ 64, { "\aC�mo jugar con Big.", 90, Menu } },
	{ 65, { "\aC�mo pasar el juego.\nIntenta recordarlo.", 180, Menu } },
	{ 66, { "\aElige un nivel.", 90, Menu } },
	{ 67, { "\aElige un juego.", 90, Menu } },
	{ 68, { "\aOpciones.\nElige la caracter�stica que quieres editar.", 210, Menu } },
	{ 69, { "\aPrueba de sonido.\nPuedes o�r sonidos geniales.", 210, Menu } },
	{ 70, { "\a�Pusiste bien tu tarjeta de memoria?", 120, Menu } },
	{ 71, { "\aLe falta memoria\na tu tarjeta de memoria.", 150, Menu } },

	//Knuckles

	{ 72, { "\aElige una tarjeta de memoria.", 90, Menu } },
	{ 73, { "\aElige un archivo.", 90, Menu } },
	{ 74, { "\aModo aventura.\nInicia tu aventura aqu�.", 180, Menu } },
	{ 75, { "\aModo de prueba.\nPara jugar un nivel.", 210, Menu } },
	{ 76, { "\aElige tu personaje.", 90, Menu } },
	{ 77, { "\aC�mo jugar con Sonic.", 90, Menu } },
	{ 78, { "\aC�mo jugar con Tails.", 90, Menu } },
	{ 79, { "\aC�mo jugar conmigo, Knuckles.", 150, Menu } },
	{ 80, { "\aC�mo jugar con Amy.", 90, Menu } },
	{ 81, { "\aC�mo jugar con E-102 Gamma.", 150, Menu } },
	{ 82, { "\aC�mo jugar con Big.", 90, Menu } },
	{ 83, { "\aC�mo pasar el juego.\nL�elo con cuidado.", 180, Menu } },
	{ 84, { "\aElige un nivel.", 60, Menu } },
	{ 85, { "\aElige un juego.", 60, Menu } },
	{ 86, { "\aOpciones.\nElige la caracter�stica que quieres editar.", 210, Menu } },
	{ 87, { "\aPrueba de sonido.\nEscucha m�sica genial.", 210, Menu } },
	{ 88, { "\a�Pusiste bien tu tarjeta de memoria?", 120, Menu } },
	{ 89, { "\aLe falta memoria a tu tarjeta de memoria.", 150, Menu } },

	//Amy

	{ 90, { "\aElige una tarjeta de memoria.", 120, Menu } },
	{ 91, { "\aElige un archivo.", 90, Menu } },
	{ 92, { "\aModo aventura.\nInicia tu aventura aqu�.", 180, Menu } },
	{ 93, { "\aModo de prueba.\nPara jugar un nivel.", 210, Menu } },
	{ 94, { "\aElige tu personaje.", 90, Menu } },
	{ 95, { "\aC�mo jugar con Sonic.", 90, Menu } },
	{ 96, { "\aC�mo jugar con Tails.", 90, Menu } },
	{ 97, { "\aC�mo jugar con Knuckles.", 120, Menu } },
	{ 98, { "\aC�mo jugar conmigo, Amy.", 120, Menu } },
	{ 99, { "\aC�mo jugar con E-102 Gamma.", 150, Menu } },
	{ 100, { "\aC�mo jugar con Big.", 90, Menu } },
	{ 101, { "\aC�mo pasar el juego.\nAseg�rate de leerlo bien.", 210, Menu } },
	{ 102, { "\aElige un nivel.", 90, Menu } },
	{ 103, { "\aElige un juego.", 90, Menu } },
	{ 104, { "\aOpciones.\nPuedes editar las caracter�sticas.", 210, Menu } },
	{ 105, { "\aPrueba de sonido.\nPuedes o�r la m�sica del juego aqu�.", 240, Menu } },
	{ 106, { "\a�Pusiste bien tu tarjeta de memoria?", 120, Menu } },
	{ 107, { "\aLe falta memoria\na tu tarjeta de memoria.", 150, Menu } },

	//Gamma

	{ 108, { "\aElige una tarjeta de memoria.", 120, Menu } },
	{ 109, { "\aElige un archivo.", 90, Menu } },
	{ 110, { "\aModo aventura.\nInicia tu aventura aqu�.", 210, Menu } },
	{ 111, { "\aModo de prueba.\nPara jugar un nivel.", 210, Menu } },
	{ 112, { "\aElige tu personaje.", 120, Menu } },
	{ 113, { "\aC�mo jugar con Sonic.", 120, Menu } },
	{ 114, { "\aC�mo jugar con Tails.", 120, Menu } },
	{ 115, { "\aC�mo jugar con Knuckles.", 120, Menu } },
	{ 116, { "\aC�mo jugar con Amy.", 120, Menu } },
	{ 117, { "\aC�mo jugar conmigo, E-102 Gamma.", 210, Menu } },
	{ 118, { "\aC�mo jugar con Big.", 120, Menu } },
	{ 119, { "\aC�mo pasar el juego.\nFavor de comprender esta informaci�n.", 300, Menu} },
	{ 120, { "\aElige un nivel.", 120, Menu } },
	{ 121, { "\aElige un juego.", 120, Menu } },
	{ 122, { "\aOpciones.\nElige la caracter�stica a editar.", 240, Menu } },
	{ 123, { "\Prueba de sonido.\nElegir para escuchar la m�sica de fondo.", 240, Menu } },
	{ 124, { "\aNo se encuentra la tarjeta de memoria.", 120, Menu } },
	{ 125, { "\a�Advertencia! Memoria insuficiente. �Advertencia!", 210, Menu } },

	//Big

	{ 126, { "\aAh... �Cu�l tarjeta de memoria?", 120, Menu } },
	{ 127, { "\aAh... �Cu�l archivo?", 120, Menu } },
	{ 128, { "\aPuedes empezar tu aventura aqu�.", 150, Menu } },
	{ 129, { "\aPuedes jugar un nivel.", 120, Menu } },
	{ 130, { "\aAh... �Cu�l personaje?", 120, Menu } },
	{ 131, { "\aC�mo jugar con Sonic.", 120, Menu } },
	{ 132, { "\aC�mo jugar con Tails.", 120, Menu } },
	{ 133, { "\aC�mo jugar con Knuckles.", 120, Menu } },
	{ 134, { "\aC�mo jugar con Amy.", 120, Menu } },
	{ 135, { "\aC�mo jugar con E-102 Gamma.", 180, Menu } },
	{ 136, { "\aC�mo jugar conmigo, Big.", 150, Menu } },
	{ 137, { "\aC�mo pasar el juego.\nAh... l�elo, �OK?", 270, Menu } },
	{ 138, { "\a�En d�nde quieres jugar?", 120, Menu } },
	{ 139, { "\a�Qu� quieres jugar?", 90, Menu } },
	{ 140, { "\aAh... Opciones.\nElige la caracter�stica que quieres editar.", 270, Menu } },
	{ 141, { "\aPrueba de sonido.\nOye la m�sica genial del juego.", 240, Menu } },
	{ 142, { "\a�Pusiste bien tu tarjeta de memoria?", 150, Menu } },
	{ 143, { "\aLe falta memoria \na tu tarjeta de memoria.", 180, Menu } },

	//Eggman

	{ 144, { "\aElige una tarjeta de memoria.", 150, Menu } },
	{ 145, { "\aElige un archivo.", 120, Menu } },
	{ 146, { "\aModo aventura.\nInicia tu aventura aqu�.", 210, Menu } },
	{ 147, { "\aModo de prueba.\nPara jugar un nivel.", 210, Menu } },
	{ 148, { "\aElige tu personaje.", 120, Menu } },
	{ 149, { "\aC�mo jugar con el erizo.", 150, Menu } },
	{ 150, { "\aC�mo jugar con el zorro de dos colas.", 180, Menu } },
	{ 151, { "\aC�mo jugar con el cabeza hueca.", 150, Menu } },
	{ 152, { "\aC�mo jugar con esa ni�a, Amy.", 180, Menu } },
	{ 153, { "\aC�mo jugar con mi creaci�n,\nE-102 Gamma.", 240, Menu } },
	{ 154, { "\aC�mo jugar con ese gato gordo.", 150, Menu } },
	{ 155, { "\aC�mo pasar el juego.\n�Deja de leer y ponte a jugar!", 300, Menu } },
	{ 156, { "\aBien, �qu� nivel quieres jugar?", 180, Menu } },
	{ 157, { "\aBien, �cu�l juego quieres jugar?", 180, Menu } },
	{ 158, { "\aOpciones.\nAdelante, ed�talo como quieras.", 240, Menu } },
	{ 159, { "\aPrueba de sonido.\nPuedes escuchar la m�sica del juego aqu�.", 270, Menu } },
	{ 160, { "\a�Pusiste bien tu tarjeta de memoria?", 150, Menu } },
	{ 161, { "\aLe falta memoria\na tu tarjeta de memoria.", 180, Menu } },


	/* Character select lines */

	{ 1837, { "\a�Aqu� vamos!", 60, Menu } }, //Sonic
	{ 1800, { "\a�Aqu� voy, Sonic!", 90, Menu } }, //Tails
	{ 1787, { "\a�Bien! �Vamos!", 90, Menu } }, //Knuckles
	{ 1730, { "\a�Ya es mi turno!", 90, Menu } }, //Amy
	{ 1767, { "\aPreparativos completados.", 90, Menu } }, //Gamma
	{ 1744, { "\a�Froggy voy por t�!", 150, Menu } }, //Big


	/* Common idle lines */

	{ 390, { "\a�Hora de irse!", 60, Gameplay } }, //Sonic
	{ 392, { "\a�Debo darme prisa!", 60, Gameplay } }, //Knuckles
	{ 393, { "\a�Ah, estoy cansada!", 90, Gameplay } }, //Amy
	{ 394, { "\aSistema de combate activado.", 120, Gameplay } }, //Gamma
	{ 395, { "\aOh, me est� dando hambre.", 120, Gameplay } }, //Big


	/* Adventure fields idle lines */

	//Station Square - station area

	{ 288, { "\aLa estaci�n debe ser\nel centro de la ciudad.", 120, Gameplay } }, //Sonic
	{ 289, { "\a�Los trenes tambi�n son geniales!", 90, Gameplay } }, //Tails
	{ 290, { "\aAs� que esta es Ciudad Estaci�n", 120, Gameplay } }, //Knuckles
	{ 291, { "\aEs lindo tener cerca el mar.", 120, Gameplay } }, //Amy
	{ 292, { "\aMe pregunta si hay paces aqu�.", 150, Gameplay } }, //Big
	{ 293, { "\aExplorando Ciudad Estaci�n...", 120, Gameplay } }, //Gamma

	//Station Square - city hall area

	{ 274, { "\aEste lugar ha cambiado mucho.", 120, Gameplay } }, //Sonic
	{ 275, { "\aAh, tengo hambre.", 90, Gameplay } }, //Tails
	{ 276, { "\aNo me gustan las ciudades.", 90, Gameplay } }, //Knuckles
	{ 277, { "\a�Hay que ir de compras!", 90, Gameplay } }, //Amy
	{ 278, { "\aTodos parecen ocupados.", 150, Gameplay } }, //Big
	{ 279, { "\aM�ltiples formas de vida detectadas.", 150, Gameplay } }, //Gamma

	//Station Square - sewers

	{ 286, { "\aMe siento como rata de alcantarilla.", 90, Gameplay } }, //Sonic
	{ 287, { "\a�Qu� oscuro est� aqu�!", 120, Gameplay } }, //Big

	//Station Square - Twinkle Park entrance

	{ 300, { "\aNo me gustan mucho estos lugares.", 150, Gameplay } }, //Sonic
	{ 301, { "\a�Parece que no puedo entrar al parque!", 150, Gameplay } }, //Tails
	{ 302, { "\a�Qu� es este lugar?", 90, Gameplay } }, //Knuckles
	{ 303, { "\a�Qu� emoci�n!", 90, Gameplay } }, //Amy
	{ 304, { "\a�Parque Destello?", 90, Gameplay } }, //Big
	{ 305, { "\aCarritos chocones detectados.", 150, Gameplay } }, //Gamma

	//Station Square - hotel

	{ 294, { "\a�Hey, hey! �No hay tiempo de descansar!", 120, Gameplay } }, //Sonic
	{ 295, { "\aUn hotel, �eh? Me siento celoso.", 90, Gameplay } }, //Tails
	{ 296, { "\aBien, un hotel cinco estrellas.", 120, Gameplay } }, //Knuckles
	{ 297, { "\a�Me gustar�a hospedarme aqu�!", 120, Gameplay } }, //Amy
	{ 298, { "\a�Qu� casa tan grande!", 120, Gameplay } }, //Big
	{ 299, { "\aSistema de combate desactivado.", 120, Gameplay } }, //Gamma

	//Station Square - casino area / station

	{ 280, { "\a�No es hora de perder el tiempo!", 120, Gameplay } }, //Sonic
	{ 281, { "\a�Qu� gran ciudad!", 90, Gameplay } }, //Tails
	{ 282, { "\a�Qu� ciudad tan bulliciosa!", 90, Gameplay } }, //Knuckles
	{ 283, { "\a�Esta ciudad nunca cambia!", 120, Gameplay } }, //Amy
	{ 284, { "\a�D�nde estar� Froggy?", 120, Gameplay } }, //Big
	{ 285, { "\aTren a Ruinas M�sticas detectado.", 150, Gameplay } }, //Gamma

	//Mystic Ruins - station area

	{ 306, { "\aEste lugar se ha vuelto muy solitario.", 90, Gameplay } }, //Sonic
	{ 307, { "\aEste lugar cambi� mucho\ndesde que construyeron la estaci�n.", 180, Gameplay } }, //Tails
	{ 308, { "\aDebo restaurar la Esmeralda Maestra.", 180, Gameplay } }, //Knuckles
	{ 309, { "\aNo me gustan los lugares as�.", 150, Gameplay } }, //Amy
	{ 310, { "\a�D�nde estar� Froggy?", 180, Gameplay } }, //Big
	{ 311, { "\aExplorando Ruinas M�sticas...", 120, Gameplay } }, //Gamma

	//Mystic Ruins - Angel Island

	{ 312, { "\a�As� que esta es Isla �ngel!", 120, Gameplay } }, //Sonic
	{ 313, { "\aDebo devolver r�pido esta\nisla al cielo.", 150, Gameplay } }, //Knuckles
	{ 314, { "\aLlegando a Isla �ngel.", 120, Gameplay } }, //Gamma

	//Mystic Ruins - jungle

	{ 315, { "\a�Esto s� me gusta!", 90, Gameplay } }, //Sonic
	{ 316, { "\a�Por d�nde vine?", 90, Gameplay } }, //Tails
	{ 317, { "\aEste lugar me causa\ncierta nostalgia.", 180, Gameplay } }, //Knuckles
	{ 318, { "\a�Este lugar est� incre�ble!", 90, Gameplay } }, //Amy
	{ 319, { "\aDeber�a ir a casa...", 120, Gameplay } }, //Big
	{ 320, { "\aTemperatura ambiental elevada.\nIniciar modo de refrigeraci�n.", 210, Gameplay } }, //Gamma

	//Final Egg entrance

	{ 321, { "\a�Debe ser la base de Robotnik!", 120, Gameplay } }, //Sonic
	{ 322, { "\a�Parece ser la base de Robotnik!", 120, Gameplay } }, //Tails
	{ 323, { "\a�Esta es su base!", 120, Gameplay } }, //Knuckles, wtf?
	{ 324, { "\aDar� lo mejor, Sonic.", 120, Gameplay } }, //Amy
	{ 325, { "\aLugar en donde fui creado.", 120, Gameplay } }, //Gamma

	//Past (normal)

	{ 326, { "\a�Qu� es este lugar?", 60, Gameplay } }, //Tails
	{ 327, { "\a�D�nde estoy?", 60, Gameplay } }, //Knuckles
	{ 328, { "\aCielos, �D�nde estoy?", 90, Gameplay } }, //Amy
	{ 329, { "\aAh... �D�nde estoy?", 120, Gameplay } }, //Big
	{ 330, { "\aInformaci�n no disponible.\nUbicaci�n actual desconocida.", 210, Gameplay } }, //Gamma

	//Past (fire)

	{ 331, { "\a�Qu� horror!", 60, Gameplay } }, //Sonic
	{ 332, { "\a�Por qu�?", 60, Gameplay } }, //Knuckles

	//Egg Carrier - outside

	{ 333, { "\a�Esta nave se la vol�!", 90, Gameplay } }, //Sonic
	{ 334, { "\a�Esta nave es incre�ble!", 90, Gameplay } }, //Tails
	{ 335, { "\a�C�mo vuela esta 'cosa'?", 120, Gameplay } }, //Knuckles
	{ 336, { "\a�Por qu� ese hombre se molesta\nen hacer cosas as�?", 210, Gameplay } }, //Amy
	{ 337, { "\aContinuando misi�n.", 90, Gameplay } }, //Gamma
	{ 338, { "\aAh... �C�mo vuela esta nave?", 150, Gameplay } }, //Big

	//Egg Carrier - inside

	{ 339, { "\a�Una nave tan rara como Robotnik!", 120, Gameplay } }, //Sonic
	{ 340, { "\a�Un d�a intentar� hacer una nave as�!", 120, Gameplay } }, //Tails
	{ 341, { "\a�D�nde est� la salida?", 60, Gameplay } }, //Knuckles
	{ 342, { "\a�Vuela quedito\npara que no nos oigan!", 150, Gameplay } }, //Amy
	{ 343, { "\aContinuando misi�n.", 90, Gameplay } }, //Gamma
	{ 344, { "\aAh... �Salida? �Salida?", 150, Gameplay } }, //Big


	/* Action stages idle lines */

	//Emerald Coast

	{ 227, { "\a�Solo debo cruzar la costa!", 120, Gameplay } }, //Sonic
	{ 228, { "\aDetectada forma de vida amfibia.", 120, Gameplay } }, //Gamma
	{ 229, { "\a�Qu� bien se siente esta brisa!", 90, Gameplay } }, //Sonic
	{ 230, { "\a�Este estanque es grande!", 120, Gameplay } }, //Big

	//Windy Valley

	{ 231, { "\aSe oye el viento a lo lejos.", 120, Gameplay } }, //Sonic
	{ 232, { "\aE-103 detectado.", 120, Gameplay } }, //Gamma
	{ 233, { "\a�Debo salir r�pido de aqu�!", 90, Gameplay } }, //Sonic
	{ 234, { "\a�Guau, s� que est� alto!", 90, Gameplay } }, //Sonic
	{ 235, { "\a�D�nde estar� Sonic?", 90, Gameplay } }, //Tails

	//Casinopolis

	{ 236, { "\a�Mmm, pinball!", 90, Gameplay } }, //Sonic
	{ 237, { "\a�Qu� sitio tan luminoso!", 90, Gameplay } }, //Knuckles
	{ 238, { "\aHuele feo, �no?\n�Es el basurero!", 180, Gameplay } }, //Sonic

	//Icecap

	{ 239, { "\aUf... �hace fr�o!", 60, Gameplay } }, //Sonic
	{ 240, { "\a�Es un mundo de hielo!", 120, Gameplay } }, //Sonic
	{ 241, { "\a�El hielo se ve rico!", 120, Gameplay } }, //Big
	{ 242, { "\a�Ve c�mo se hace!", 90, Gameplay } }, //Sonic
	{ 243, { "\a�Hora de bajar!!", 60, Gameplay } }, //Tails

	//Twinkle Park

	{ 244, { "\aDebe ser la entrada\na los carritos chocones.", 150, Gameplay } }, //Sonic
	{ 245, { "\aParece que no hay nadie aqu�.", 90, Gameplay } }, //Sonic
	{ 246, { "\aEspero pescar algo aqu�.", 150, Gameplay } }, //Big
	{ 247, { "\a�A d�nde habr� ido Sonic?", 90, Gameplay } }, //Amy

	//Speed Highway

	{ 248, { "\a�Hora de la velocidad supers�nica!", 120, Gameplay } }, //Sonic
	{ 249, { "\a�Y Robotnik?", 60, Gameplay } }, //Tails
	{ 250, { "\a�Hey, no tengo tiempo que perder!", 120, Gameplay } }, //Sonic
	{ 251, { "\a�Los carros son tan lentos\nque no parecen moverse!", 150, Gameplay } }, //Sonic
	{ 252, { "\aLas piezas de la Esmeralda Maestra\ndeben estar en esta ciudad.", 210, Gameplay } }, //Knuckles

	//Red Mountain

	{ 253, { "\a�A d�nde fue el Egg Carrier?", 90, Gameplay } }, //Sonic
	{ 254, { "\a�Guau! �Mejor no me caigo en esa lava hirviendo!", 150, Gameplay } }, //Sonic
	{ 255, { "\aE-104 detectado.", 120, Gameplay } }, //Gamma
	{ 256, { "\a�Si caigo de aqu� es mi fin!", 90, Gameplay } }, //Knuckles

	//Sky Deck

	{ 257, { "\a�Oh, guau!\n�Seguro que no quiero caer de aqu�!", 180, Gameplay } }, //Sonic
	{ 258, { "\a�Es muy alto!\n�No me dan las piernas!", 180, Gameplay } }, //Tails
	{ 259, { "\a�Rayos! �Qu� viento tan molesto!", 120, Gameplay } }, //Sonic
	{ 260, { "\aHey, �qu� onda con esta nave?", 90, Gameplay } }, //Sonic
	{ 261, { "\aBien, �d�nde est� el tesoro?", 120, Gameplay } }, //Knuckles

	//Lost World

	{ 262, { "\aEste lugar es muy sereno.", 90, Gameplay } }, //Sonic
	{ 263, { "\a�D�nde estoy?", 60, Gameplay } }, //Sonic
	{ 264, { "\aLas Esmeraldas deben estar en esta habitaci�n.", 150, Gameplay } }, //Knuckles

	//Final Egg

	{ 265, { "\aAgh... este lugar apesta a aceite.", 90, Gameplay } }, //Sonic
	{ 266, { "\aAn�mate, Pajarito, aqu� vamos.", 120, Gameplay } }, //Amy
	{ 267, { "\a�Hasta d�nde llega esto?", 60, Gameplay } }, //Sonic
	{ 268, { "\a�Solo espera, Robotnik!", 90, Gameplay } }, //Sonic
	{ 269, { "\aErizo azul: enemigo..", 120, Gameplay } }, //Gamma

	//Hot Shelter

	{ 270, { "\a�Robotnik es de lo peor!", 90, Gameplay } }, //Amy
	{ 271, { "\a�Froggy estar� bien?", 120, Gameplay } }, //Big
	{ 272, { "\a�Dios, �ahora por d�nde voy?!", 120, Gameplay } }, //Amy
	{ 273, { "\aE-105 detectado.", 120, Gameplay } }, //Gamma


	/* Boss battle idle lines */

	//Sonic

	{ 368, { "\aEste tipo no puede ser invencible, �o s�?", 120, Gameplay } }, //Chaos 0
	{ 369, { "\a�No importa qu� hagas, siempre fallas!", 90, Gameplay } }, //Egg Hornet
	{ 370, { "\a�Qu� pasa, Knuckles?", 60, Gameplay } }, //vs Knuckles
	{ 371, { "\a�Hey, esta vez no escapar�s!", 120, Gameplay } }, //Chaos 4
	{ 372, { "\a�Nada mal, en serio nada mal!", 120, Gameplay } }, //Gamma
	{ 373, { "\a�D�nde est� su punto d�bil?", 90, Gameplay } }, //Chaos 6
	{ 374, { "\a�Se acab� el juego,\n Eggman!", 150, Gameplay } }, //Egg Viper

	//Tails

	{ 375, { "\a�Vamos, Tails, puedes hacerlo!", 120, Gameplay } }, //Egg Hornet	
	{ 376, { "\a�O-Oye, un momento!", 120, Gameplay } }, //vs Knuckles
	{ 377, { "\a�Maldito monstruo l�quido!", 120, Gameplay } }, //Chaos 4
	{ 378, { "\aEste robot tiene algo diferente.", 150, Gameplay } }, //vs Gamma
	{ 379, { "\a�S� que puedo hacerlo solo!", 150, Gameplay } }, //Egg Walker

	//Knuckles

	{ 380, { "\aMuy bien, �ya me hart�!", 120, Gameplay } }, //Chaos 2
	{ 381, { "\aEntrega la Esmeralda.", 60, Gameplay } }, //vs Sonic
	{ 382, { "\aEste nunca aprende.", 90, Gameplay } }, //Chaos 4
	{ 383, { "\a�Esta vez te aniquilar�!", 120, Gameplay } }, //Chaos 6

	//Amy

	{ 384, { "\a�Pagar�s\n�por lo que hiciste!", 150, Gameplay } }, //Zero

	//Gamma

	{ 385, { "\aBlanco confirmado.", 90, Gameplay } }, //E-101
	{ 386, { "\aErizo azul: enemigo.", 120, Gameplay } }, //vs Sonic
	{ 387, { "\aBeta.", 60, Gameplay } }, //E-101 mk.2

	//Super Sonic

	{ 388, { "\a�Te mostrar� el verdadero poder de las Esmeraldas Caos!", 180, Gameplay } },
	{ 389, { "\aBien, ese es su n�cleo.", 90, Gameplay } },


	/* Chao Garden idle lines */

	//Sonic

	{ 348, { "\a�Qu� lugar tan pac�fico!", 90, Gameplay } },
	{ 349, { "\a�Hola! �Se han portado bien, ni�os?", 90, Gameplay } },
	{ 350, { "\a�Recuerden, nada de pelear!", 120, Gameplay } },

	//Tails

	{ 351, { "\a�Me siento como en casa aqu�!", 90, Gameplay } },
	{ 352, { "\a�Se han portado bien todos?", 90, Gameplay } },
	{ 353, { "\a�Los quiero a todos!", 90, Gameplay } },

	//Knuckles

	{ 354, { "\aParece que no hay Esmeraldas aqu�.", 120, Gameplay } },
	{ 355, { "\aSiento que he visto\na estos chicos antes.", 180, Gameplay } },
	{ 356, { "\a�Por qu� este lugar.\nme recuerda a casa?", 270, Gameplay } },

	//Amy

	{ 357, { "\a�Qu� lugar tan relajante!", 150, Gameplay } },
	{ 358, { "\a*bostezo* Tengo sue�ito.", 150, Gameplay } },
	{ 359, { "\a�Oigan, no peleen!", 120, Gameplay } },
	{ 360, { "\aQuisiera que Sonic estuviera aqu�...", 120, Gameplay } },

	//Gamma

	{ 361, { "\aUbicaci�n desconocida.", 120, Gameplay } },
	{ 362, { "\aSistema de combate desactivado.", 150, Gameplay } },
	{ 363, { "\aSensores detectando formas de vida.", 120, Gameplay } },

	//Big

	{ 364, { "\a�Qu� bonito lugar!", 90, Gameplay } },
	{ 365, { "\a�Han estado bien?", 90, Gameplay } },
	{ 366, { "\aOh, me est� dando hambre.", 150, Gameplay } },
	{ 367, { "\a�Quiero ir a pescar!", 120, Gameplay } },


	/* Mini games idle lines */

	//Sand Hill

	{ 345, { "\a�Rayos, me entr� arena al ojo!", 120, Gameplay } }, //Sonic
	{ 346, { "\a�Esta arena es suave y fina al tacto!", 90, Gameplay } }, //Tails

	//Hedgehog Hammer

	{ 347, { "\a�Ah, �y este lugar?!", 60, Gameplay } }, //Amy


	/* Sky Chase sequences */

	//Sky Chase 1 - before Egg Cannon fires

	{ 491, { "\a�Lo hicimos!", 60, Gameplay } }, //Tails
	{ 716, { "\a�Lo hicimos!", 60, Gameplay } }, //Tails (duplicate?)
	{ 492, { "\a�Fue muy sencillo!", 90, Gameplay } }, //Sonic	
	{ 717, { "\a�Fue muy sencillo!!", 90, Gameplay } }, //Sonic (duplicate?)

	//Sky Chase 2 - before transformation

	{ 765, { "\a�Bien, esa fue la primera l�nea de defensa!", 150, Gameplay } },
	{ 766, { "\a�A�n queda por hacer!", 90, Gameplay } },
	{ 767, { "\a�Ya lo s�!", 120, Gameplay } },

	//Sky Chase 2 - transformation sequence alternate lines (they also match the regular lines in Japanese)

	{ 530, { "\a�Bien, esa fue la primera l�nea de defensa!", 90, Gameplay } },
	{ 531, { "\a�A�n queda por hacer!", 60, Gameplay } },
	{ 532, { "\a�Ya lo s�!", 90, Gameplay } },
	{ 533, { "\a�Cambio de forma!", 180, Gameplay } },
	{ 534, { "\a�Guau...!", 90, Gameplay } },
	{ 535, { "\a�Bien, aqu� vamos!", 150, Gameplay } },


	/* Action stages voices */

	//All Tails' stages except for Speed Highway (Sonic's voice)

	{ 205, { "\a�Vamos, Tails!", 60, Gameplay } },
	{ 206, { "\a�Hey, hey, hey!", 60, Gameplay } },
	{ 207, { "\a�As� se hace, Tails!", 90, Gameplay } },
	{ 208, { "\a�Oye, Tails!", 60, Gameplay } },
	{ 209, { "\a�Lo hiciste!", 60, Gameplay } },
	{ 210, { "\a�Vamos!", 60, Gameplay } },
	{ 211, { "\a�Nos vemos, Tails!", 90, Gameplay } },
	{ 212, { "\a�De prisa, Tails!", 60, Gameplay } },
	{ 213, { "\a�Urra!", 60, Gameplay } },
	{ 214, { "\a�Lo hice!", 60, Gameplay } },
	{ 215, { "\a�Tails, no tienes anillos!\n�Cuidado!", 150, Gameplay } },

	//Speed Highway (Eggman's voice)

	{ 216, { "\a�Crees poder seguirme el paso?", 120, Gameplay } },
	{ 217, { "\aYa te tengo, Tails.", 120, Gameplay } },
	{ 218, { "\a�Qu�? �Ya me alcanz�!", 120, Gameplay } },
	{ 219, { "\a�Mierda! �Maldito zorro!", 120, Gameplay } },
	{ 220, { "\a�Tails, esp�rame!", 120, Gameplay } },
	{ 221, { "\a�Ajajajajajaja!", 120, Gameplay } },
	{ 222, { "\a�Nos vemos, Tails!", 90, Gameplay } },
	{ 223, { "\a�Me llevar� toda la ciudad conmigo!", 150, Gameplay } },
	{ 224, { "\a�Nunca podr�s vencerme!", 120, Gameplay } },
	{ 225, { "\a�Yo gano! �Ajajajajajaja!", 180, Gameplay } },
	{ 226, { "\a�R�ndete ya, Tails!", 120, Gameplay } },

	//Final Egg

	{ 1588, { "\a�Emergencia! �Emergencia!\n�Erradiquen a los intrusos!", 300, Gameplay } }, //intercom
	{ 1589, { "\a�Emergencia! �Emergencia!\n�Erradiquen a los intrusos!", 300, Gameplay } },
	{ 1590, { "\aFinal Egg: muro de aislamiento del nivel 2 abierto.", 330, Gameplay } },
	{ 1591, { "\aFinal Egg: muro de aislamiento del nivel 2 abierto.", 330, Gameplay } },
	{ 1592, { "\aDestruye los blancos,\ny obtendr�s tiempo extra.", 210, Gameplay } }, //Eggman to Gamma
	{ 1593, { "\aDestruye a tu blanco: Sonic. ", 150, Gameplay } },


	/* Boss voices */

	//vs character

	{ 164, { "\a�Oh no!", 60, Gameplay } }, //Knuckles
	{ 165, { "\a�Ay, no!", 60, Gameplay } }, //Sonic
	{ 166, { "\a�Eso es todo, Sonic?", 90, Gameplay } }, //Knuckles
	{ 167, { "\a�Eso es todo, Knuckles?", 60, Gameplay } }, //Sonic
	{ 168, { "\a�Eso es todo, Tails", 90, Gameplay } }, //Knuckles
	{ 169, { "\aResistance es in�til.", 90, Gameplay } }, //Gamma
	{ 170, { "\a�Este tipo... es fuerte!", 60, Gameplay } }, //Sonic

	//Eggman bosses

	{ 171, { "\a�Sistemas... a m�xima potencia!", 150, Gameplay } },
	{ 172, { "\a�Agh!", 60, Gameplay } },
	{ 173, { "\a�Aj�!", 60, Gameplay } },
	{ 174, { "\a�Toma esto!", 90, Gameplay } },
	{ 175, { "\a�No...!", 180, Gameplay } },
	{ 176, { "\a�No te funcionar�,\ncretino!", 180, Gameplay } },
	{ 177, { "\a�Imposible! �No puedo creerlo!", 180, Gameplay } },
	{ 178, { "\a�Toma, toma, toma, toma...!", 180, Gameplay } },
	{ 1902, { "\a�Jajajajaja! �A ver si  \nllegas ac�, Sonic!", 210, Gameplay } }, //Egg Viper
	{ 1903, { "\a�Toma esto! ", 60, Gameplay } },


	/* Adventure fields announcers */

	//Station Square

	{ 1567, { "\aAborden el tren\ny esperen su partida.", 210, Gameplay } },
	{ 1568, { "\aAborden el tren\n�y esperen su partida.", 210, Gameplay } },
	{ 1569, { "\aEl tren a Ruinas M�sticas\npartir� pronto.", 270, Gameplay } },
	{ 1570, { "\aEl tren a Ruinas M�sticas\npartir� pronto.", 270, Gameplay } },
	{ 1571, { "\aPronto llegar� un tren.\nAp�rtense de las v�as.", 270, Gameplay } },
	{ 1572, { "\aPronto llegar� un tren.\nAp�rtense de las v�as.", 270, Gameplay } },
	{ 1573, { "\aPor el momento no hay trenes en servicio.", 180, Gameplay } },
	{ 1574, { "\aPor el momento no hay trenes en servicio.", 180, Gameplay } },

	//Twinkle Park entrance

	{ 1575, { "\a�Bienvenidos a Parque Destello!", 90, Gameplay } },

	//Mystic Ruins

	{ 1654, { "\aSe pide a los pasajeros\nque esperen al bordo del tren.", 210, Gameplay } },
	{ 1655, { "\aEl tren a Ciudad Estaci�n\npartir� pronto.", 270, Gameplay } },
	{ 1656, { "\aPronto llegar� un tren.\nAp�rtense de las v�as.", 300, Gameplay } },
	{ 1657, { "\aPor el momento no hay trenes en servicio.", 210, Gameplay } },


	/* Character specific gameplay voices */

	//Sonic

	{ 1838, { "\a�S�!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1839, { "\a�Ya-j�! !", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1840, { "\aS�.", 60, Gameplay } }, //stage clear
	{ 1841, { "\a�Oye, m�tele galleta!", 90, Gameplay } }, //bad clear
	{ 1842, { "\a*silba* �Bien!", 90, Gameplay } }, //good clear
	{ 1843, { "\a�Oye, juguemos de nuevo pronto!", 120, Gameplay } }, //boss clear
	{ 1844, { "\a�S�, nada mal!", 60, Gameplay } }, //normal clear
	{ 1845, { "\a�Oye, d�jame ir!", 60, Gameplay } }, //captured
	{ 1847, { "\a�No!", 60, Gameplay } }, //died with no rings

	//Tails

	{ 1801, { "\a�Lo hice!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1802, { "\a�Muy bien!", 60, Gameplay } }, //Twinkle Circuit/Icecap jump
	{ 1803, { "\a�S�!", 90, Gameplay } }, //stage clear
	{ 1804, { "\a�Uf, llegu� a tiempo!", 120, Gameplay } }, //bad clear
	{ 1805, { "\a�Lo hice, Sonic!", 90, Gameplay } }, //good clear
	{ 1806, { "\a�Muy bien, lo hice!", 90, Gameplay } }, //boss clear
	{ 1807, { "\aNo estuvo tan mal.", 90, Gameplay } }, //normal clear
	{ 1808, { "\a�Oye!", 60, Gameplay } }, //captured

	//Knuckles

	{ 1788, { "\a�S�...!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1789, { "\a�Rayos!", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1790, { "\a�Las encontr�!", 60, Gameplay } }, //stage clear
	{ 1791, { "\aPuedo hacerlo mejor.", 90, Gameplay } }, //bad clear
	{ 1792, { "\aFue f�cil", 90, Gameplay } }, //good clear
	{ 1793, { "\a�Eso fue todo?", 90, Gameplay } }, //boss clear
	{ 1794, { "\aJe, nada mal.", 90, Gameplay } }, //normal clear
	{ 1795, { "\a�Mierda!", 60, Gameplay } }, //captured

	//Amy

	{ 1731, { "\a�Muy bien!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1732, { "\a�S�!", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1733, { "\a�Muy bien!", 90, Gameplay } }, //stage clear
	{ 1734, { "\aUf... �Estuvo cerca!", 150, Gameplay } }, //bad clear
	{ 1735, { "\a�Ya viste que s� puedo hacerlo?", 120, Gameplay } }, //boss clear
	{ 1736, { "\a�Soy libre!", 90, Gameplay } }, //normal clear
	{ 1737, { "\a�S�, soy la mejor!", 120, Gameplay } }, //good clear
	{ 1738, { "\a�Oye, su�ltame!", 120, Gameplay } }, //captured

	//Big

	{ 1746, { "\a�Mmm!", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1334, { "\aAh... se fue de nuevo...", 210, Gameplay } }, //stage clear (Twinkle Park, Icecap)
	{ 1747, { "\a�Froggy!", 90, Gameplay } }, //stage clear (Emerald Coast, Hot Shelter)	
	{ 1748, { "\aPara la pr�xima.", 120, Gameplay } }, //bad clear
	{ 1749, { "\a�Qu� bien sali�!", 60, Gameplay } }, //good clear
	{ 1750, { "\a�Est�s bien, Froggy?", 150, Gameplay } }, //boss clear
	{ 1751, { "\a�No estuvo mal!", 90, Gameplay } }, //normal clear
	{ 1758, { "\a�Tengo un pez!", 90, Gameplay } }, //got fish
	{ 1759, { "\a�Algo pic�!", 90, Gameplay } }, //hit

	//Gamma

	{ 1768, { "\aConducci�n terminada.", 90, Gameplay } }, //Twinkle Circuit clear
	{ 1770, { "\aMisi�n cumplida.", 90, Gameplay } }, //stage clear
	{ 1771, { "\aE-101 Beta: rescate completado.", 210, Gameplay } }, //Beta mk.2 clear
	{ 1772, { "\aCaptura de rana completada.", 120, Gameplay } }, //Emerald Coast clear
	{ 1773, { "\aE-105 Zeta: rescate completado.", 210, Gameplay } }, //Hot Shelter clear
	{ 1774, { "\aE-104 �psilon: rescate completado. ", 210, Gameplay } }, //Red Mountain clear
	{ 1775, { "\aE-103 Delta: rescate completado.", 210, Gameplay } }, //Windy Valley clear
	{ 1777, { "\aImposible correr.", 90, Gameplay } }, //captured
	{ 1778, { "\aMisi�n fallida.", 90, Gameplay } }, //died
	{ 1786, { "\aActividad cesada.", 90, Gameplay } }, //time over


	/* Cutscene voices */

	//Before Egg Walker

	{ 816, { "\a�E-Es Eggman!", 30, Gameplay } },
	{ 818, { "\a�V�monos de aqu�!", 30, Gameplay } },

	//After Egg Walker

	{ 821, { "\a�Eres el mejor!", 20, Cutscene } },
	{ 823, { "\a�Salvaste el d�a! ", 20, Cutscene } },
	{ 825, { "\a�Lo hizo,lo hizo!", 20, Cutscene } },

	//After Emerald Coast (Gamma)

	{ 1223, { "\aLa m�a es la verdadera.", 20, Gameplay } },
	{ 1224, { "\aNo, la m�a.", 20, Gameplay } },
	{ 1225, { "\aLa m�a tiene mejor color.", 20, Gameplay } },


	/* Beta restores */

	//Big's unused fishing lines

	{ 1763, { "\aQu� peque�o.", 90, Gameplay } }, //small fish
	{ 1761, { "\aBueno, est� bien.", 120, Gameplay } }, //medium-sized fish
	{ 1745, { "\a�Guau, es grande!", 120, Gameplay } }, //large fish
	{ 1753, { "\aOh, no.", 60, Gameplay } }, //failed attempt
	{ 1756, { "\a�Ay, no!", 90, Gameplay } }, //failed attempt
	{ 1876, { "\a�Bien, una vez m�s!", 120, Gameplay } }, //try again
	{ 1877, { "\a�Casi lo ten�a!\nBien, otra vez.", 180, Gameplay } }, //try again

	//Final Egg 1 (Sonic) intercom

	{ 1706, { "\a�Alerta de intrusos! �Alerta de intrusos!\nEgg Keepers, a sus puestos de combate!", 360, Gameplay } },
	{ 1707, { "\a�Alerta de intrusos! �Alerta de intrusos!\nEgg Keepers, a sus puestos de combate!!", 360, Gameplay } },

	//Final Egg (Amy) Eggman's taunts

	{ 1984, { "\aJajajaja... Te equivocaste.", 150, Gameplay } },
	{ 1985, { "\aJajajaja... Mal otra vez.", 120, Gameplay } },
	{ 1986, { "\a�Jajaja! �Por qu� no te rindes?", 150, Gameplay } },

	//Sky Deck (probably) unused lines

	{ 1704, { "\a�Emergencia! �Emergencia!\n�Erradiquen a los intrusos!", 330, Gameplay } }, //intercom
	{ 1705, { "\a�Emergencia! �Emergencia!\n�Erradiquen a los intrusos!", 330, Gameplay } },
	{ 1727, { "\aAdvertencia: fuertes vientos se aproximan.", 210, Gameplay } },
	{ 1728, { "\aAlerta de viento cancelada.", 180, Gameplay } },
	{ 1723, { "\aDescendiendo hacia las nubes.\nDesaceleren la nave.", 360, Gameplay } }, //Eggman orders
	{ 1724, { "\aDescendiendo hacia las nubes.\nDesaceleren la nave.", 360, Gameplay } },
	{ 1725, { "\aHacia arriba. �A toda marcha!", 300, Gameplay } },
	{ 1726, { "\a�Qu� erizo tan latoso!. \nSacud�moste un poco", 300, Gameplay } }, //Eggman ship tilt

	//vs E-101 mk.2 unused line

	{ 1681, { "\aDetente, Beta.", 90, Gameplay } },

	//characters taking damage with no rings

	{ 1809, { "\aSonic...", 60, Gameplay } }, //Tails
	{ 1796, { "\aHasta aqu� llego.", 90, Gameplay } }, //Knuckles
	{ 1740, { "\a�Ya basta...!", 60, Gameplay } }, //Amy
	{ 1755, { "\a�Uf!", 60, Gameplay } }, //Big

	//Tails' stages alternate Sonic voices

	{ 1823, { "\a�Lo hiciste!", 60, Gameplay } },
	{ 1824, { "\a�As� se hace!", 60, Gameplay } },
	{ 1825, { "\a�Lo hice!", 60, Gameplay } },
	{ 1826, { "\a�Lo tengo!", 60, Gameplay } },
	{ 1827, { "\a�Muy bien!", 60, Gameplay } },
	{ 1828, { "\a�Hey; hey; hey! ", 60, Gameplay } },
	{ 1829, { "\a�Vamos!", 60, Gameplay } },
	{ 1830, { "\a�Gan�!", 60, Gameplay } },
	{ 1831, { "\a�En marcha!", 60, Gameplay } },
	{ 1832, { "\a�Espera ah�!", 60, Gameplay } },
	{ 1833, { "\a�Alto, alto, alto!", 60, Gameplay } },
	{ 1834, { "\a�Aguarda!", 60, Gameplay } },
	{ 1835, { "\a�Urra!", 60, Gameplay } },
	{ 1836, { "\a�Okidoki!", 60, Gameplay } },

	//Perfect Chaos unused Tikal's cheers

	{ 1713, { "\a�Ahora depende de ti, Sonic!", 150, Gameplay } },
	{ 1714, { "\aS� valiente, erizo azul.", 120, Gameplay } },
	{ 1716, { "\a�Para permanecer como Super Sonic,\nnecesitar�s anillos!", 180, Gameplay } },
};


std::map<int, SubtitleData> ExtraSubs_SE_SpanishDub
{
	// Sonic

	{ SE_SV_CHARGED, { "\a�Listos!", 90, Gameplay } },
	{ SE_SV_LDASH, { "\a�Ya!", 60, Gameplay } },

	// Knuckles

	{ SE_KV_DAME, { "\a�No puede ser!", 60, Gameplay } },
	{ SE_KV_HAZURE, { "\a�Chucha!", 60, Gameplay } },
	{ SE_KV_KAKERA1, { "\a�Dos m�s!", 90, Gameplay } },
	{ SE_KV_KAKERA2, { "\a�Uno m�s para llevar!", 90, Gameplay } },

	// Gamma

	{ SE_EV_PICK, { "\aRecoger.", 60, Gameplay } },
	{ SE_EV_PUT, { "\aSoltar.", 60, Gameplay } },
	{ SE_EV_THROW, { "\aTirar.", 60, Gameplay } },
	{ SE_EV_PUSH, { "\aEmpujar.", 60, Gameplay } },
	{ SE_EV_PULL, { "\aJalar.", 60, Gameplay } },
	{ SE_EV_TRANSFORM, { "\aCambio de modo.", 120, Gameplay } },
	{ SE_EV_LIMIT, { "\aNo hay tiempo.", 120, Gameplay } },
	{ SE_EV_ITEM1, { "\aObtener �tem.", 120, Gameplay } },
};