#pragma once

#include <map>


/* This is basically experimental, some lines might be interpreted incorrectly */

const char* SkyChase1_Japanese[]
{
	UTF16toSJIS(L"\aフン、これで勝ったと思うなよ！"),
	UTF16toSJIS(L"\aエッグマン砲よい！"),
	UTF16toSJIS(L"\aほれ、発射！"),
	UTF16toSJIS(L"\aわ、やられた！"),
	UTF16toSJIS(L"\aわああああああ！"),
};

const char* SkyChase2_Japanese[]
{
	UTF16toSJIS(L"\aシステムモード、チェンジ！"),
	UTF16toSJIS(L"\aわあああああう！"),
	UTF16toSJIS(L"\aよし、行くよ！"),
	NULL
};

const char* WelcomeToTwinklePark_Japanese[] = { "\aWelcome to Twinkle Park!", NULL };


std::map<int, SubtitleDataUTF16> ExtraSubs_Japanese_UTF16
{
	/* Menu voices */

	//Tikal (default)

	{ 0, { L"\aメモリーカードを選んでください", 120, Menu } },
	{ 1, { L"\aファイルを選んでください", 90, Menu } },
	{ 2, { L"\aシナリオを進めるアドベンチャーモードです", 180, Menu } },
	{ 3, { L"\a一つのステージを遊ぶトライアルモードです", 180, Menu } },
	{ 4, { L"\aキャラクターを選んでください", 90, Menu } },
	{ 5, { L"\aソニックの操作方法です", 120, Menu } },
	{ 6, { L"\aテイルスの操作方法です", 120, Menu } },
	{ 7, { L"\aナックルズの操作方法です", 120, Menu } },
	{ 8, { L"\aエミーの操作方法です", 120, Menu } },
	{ 9, { L"\aE-102ガンマの操作方法です", 150, Menu } },
	{ 10, { L"\aビッグの操作方法です", 120, Menu } },
	{ 11, { L"\aアクションステージのルール説明です", 150, Menu } },
	{ 12, { L"\aステージを選んでください", 90, Menu } },
	{ 13, { L"\aゲームを選んでください", 90, Menu } },
	{ 14, { L"\aオプション画面です\n設定項目を変更できます", 210, Menu } },
	{ 15, { L"\aサウンドテストです\nBGMを聴くことができます", 240, Menu } },
	{ 16, { L"\aメモリーカードが準備できていません", 150, Menu } },
	{ 17, { L"\aメモリーカードの空き容量がありません", 150, Menu } },

	//Tikal (alternate)

	{ 18, { L"\aメモリーカードを選んで", 90, Menu } },
	{ 19, { L"\aファイルを選んでね", 90, Menu } },
	{ 20, { L"\aシナリオを進めるアドベンチャーモードよ", 180, Menu } },
	{ 21, { L"\a一つのステージを遊ぶトライアルモードよ", 180, Menu } },
	{ 22, { L"\aキャラクターを選んで", 90, Menu } },
	{ 23, { L"\aソニックの操作方法よ", 90, Menu } },
	{ 24, { L"\aテイルスくんの操作方法よ", 90, Menu } },
	{ 25, { L"\aナックルズの操作方法よ", 90, Menu } },
	{ 26, { L"\aエミーちゃんの操作方法よ", 90, Menu } },
	{ 27, { L"\aE-102ガンマの操作方法よ", 120, Menu } },
	{ 28, { L"\aビッグの操作方法よ", 90, Menu } },
	{ 29, { L"\aアクションステージのルール説明よ\n知ってる覚えてね", 210, Menu } },
	{ 30, { L"\aどのステージを遊ぶ？", 120, Menu } },
	{ 31, { L"\aどのミニゲームを遊ぶ？", 120, Menu } },
	{ 32, { L"\aオプション画面よ\n色んな設定を変更できるわ", 210, Menu } },
	{ 33, { L"\aサウンドテストよ\nゲームチューンの曲を聴くことができるの", 240, Menu } },
	{ 34, { L"\aメモリーカードがないみたいね", 120, Menu } },
	{ 35, { L"\aメモリーカードの容量が足りないわよ", 150, Menu } },

	//Sonic

	{ 36, { L"\aSelect your memory card", 90, Menu } },
	{ 37, { L"\aSelect a file", 90, Menu } },
	{ 38, { L"\aAdventure mode\nストリーを進めるモードだ", 210, Menu } },
	{ 39, { L"\aTrial mode\n一つのステージだけは遊べるんだ", 210, Menu } },
	{ 40, { L"\aSelect your character", 90, Menu } },
	{ 41, { L"\aHow to play with me, Sonic", 120, Menu } },
	{ 42, { L"\aHow to play with Tails", 120, Menu } },
	{ 43, { L"\aHow to play with Knuckles", 120, Menu } },
	{ 44, { L"\aHow to play with Amy", 90, Menu } },
	{ 45, { L"\aHow to play with E-102 Gamma", 180, Menu } },
	{ 46, { L"\aHow to play with Big", 120, Menu } },
	{ 47, { L"\aHow to clear the game\nこれを知らなきゃ、ゲームがクリアできないぜ", 270, Menu } },
	{ 48, { L"\aSelect a stage", 90, Menu } },
	{ 49, { L"\aSelect a game", 90, Menu } },
	{ 50, { L"\aOptions\nエディットしたい項目を選んでくれ", 210, Menu } },
	{ 51, { L"\aSound Test\nクールサウンズを聴くことができるんだ", 240, Menu } },
	{ 52, { L"\aメモリーダード、ちゃんと刺さってるかい？", 120, Menu } },
	{ 53, { L"\aヘイ、メモリーカードの容量が足りないぜ", 180, Menu } },

	//Tails

	{ 54, { L"\aメモリーカードを選んで", 90, Menu } },
	{ 55, { L"\a次はファイル選択だよ", 120, Menu } },
	{ 56, { L"\aシナリオを進めるアドベンチャーモードだよ", 180, Menu } },
	{ 57, { L"\a一つのステージが遊べるトライアルモードだよ", 180, Menu } },
	{ 58, { L"\a誰で遊ぶ？", 90, Menu } },
	{ 59, { L"\aソニックの操作方法だよ", 120, Menu } },
	{ 60, { L"\a僕の操作方法だよ", 120, Menu } },
	{ 61, { L"\aナックルズの操作方法だよ", 120, Menu } },
	{ 62, { L"\aエミーの操作方法だよ", 120, Menu } },
	{ 63, { L"\aE-102ガンマの操作方法だよ", 150, Menu } },
	{ 64, { L"\aビッグの操作方法だよ", 90, Menu } },
	{ 65, { L"\aアクションステージのルール説明だよ\nちゃんと覚えてね", 240, Menu } },
	{ 66, { L"\aどのステージにする？", 90, Menu } },
	{ 67, { L"\aどのミニゲームにする？", 90, Menu } },
	{ 68, { L"\aオプションだよ\n色んな設定を変更できるんだ", 210, Menu } },
	{ 69, { L"\aサウンドテストだよ\nゲームチューンの曲が聴けるんだ", 240, Menu } },
	{ 70, { L"\aメモリーカード、ちゃんと刺してる？", 120, Menu } },
	{ 71, { L"\aメモリーカードの空き容量がないみたいだよ", 180, Menu } },

	//Knuckles

	{ 72, { L"\aメモリーカードを選ぶんだ", 90, Menu } },
	{ 73, { L"\aファイルを選んでくれ", 90, Menu } },
	{ 74, { L"\a物語を進めるアドベンチャーモードだ", 180, Menu } },
	{ 75, { L"\a一つのステージだけを遊ぶモードだ", 180, Menu } },
	{ 76, { L"プレイするキャラクターを選ぶんだ", 120, Menu}},
	{ 77, { L"\aソニックの操作方法だ", 120, Menu } },
	{ 78, { L"\aテイルスの操作方法だ", 120, Menu } },
	{ 79, { L"\a俺の操作方法だ", 120, Menu } },
	{ 80, { L"\aエミーの操作方法だ", 120, Menu } },
	{ 81, { L"\aE-102ガンマの操作方法だ", 150, Menu } },
	{ 82, { L"\aビッグの操作方法だ", 90, Menu } },
	{ 83, { L"\aアクションステージのルール説明だ\nよく読んで、マスターするんだな", 300, Menu } },
	{ 84, { L"\aどのステージにするんだ？", 90, Menu } },
	{ 85, { L"\aどのゲームにするんだ？", 90, Menu } },
	{ 86, { L"\aオプション画面\nここで色んな設定ができるんだ", 210, Menu } },
	{ 87, { L"\aサウンドテストだ\nBGMを聴くことができるぜ", 210, Menu } },
	{ 88, { L"\aメモリーカードの準備ができていないらしいな", 150, Menu } },
	{ 89, { L"\aメモリーカードの空き容量がないみたいだ", 150, Menu } },

	//Amy

	{ 90, { L"\aメモリーカードを選んで", 120, Menu } },
	{ 91, { L"\aファイルを選んでね", 90, Menu } },
	{ 92, { L"\a物語を楽しむアドベンチャーモードよ", 180, Menu } },
	{ 93, { L"\a一つとことは遊ぶトライアルモードよ", 180, Menu } }, // *?* not sure
	{ 94, { L"\aキャラクターを選んで", 90, Menu } },
	{ 95, { L"\a愛しいのソニックの操作方法よ", 150, Menu } },
	{ 96, { L"\aテイルスの操作方法よ", 120, Menu } },
	{ 97, { L"\aナックルズの操作方法よ", 120, Menu } },
	{ 98, { L"\aあたしの操作方法よ", 120, Menu } },
	{ 99, { L"\aロボットさんの操作方法よ", 120, Menu } },
	{ 100, { L"\aビッグの操作方法よ", 120, Menu } },
	{ 101, { L"\aアクションステージのルール説明\nちゃんと覚えるのよ", 240, Menu } },
	{ 102, { L"\aどのステージを遊ぶの？", 120, Menu } },
	{ 103, { L"\aどのミニゲームを遊ぶの？", 120, Menu } },
	{ 104, { L"\aオプション画面\nここで色んな設定ができちゃうの", 240, Menu } },
	{ 105, { L"\aサウンドテスト\nゲームチューンの曲が聴けちゃうのよ", 240, Menu } },
	{ 106, { L"\aメモリーカード、ちゃんと刺さってる？", 150, Menu } },
	{ 107, { L"\aメモリーカードの容量が足りないですって", 150, Menu } },

	//Gamma

	{ 108, { L"\aメモリーカード選択", 180, Menu } },
	{ 109, { L"\aファイルヲ選択セヨ", 120, Menu } },
	{ 110, { L"\aアドベンチャーモード", 120, Menu } },
	{ 111, { L"\aトライアルモード", 90, Menu } },
	{ 112, { L"\aプレイキャラクター選択", 150, Menu } },
	{ 113, { L"\a操作説明：ソニック", 150, Menu } },
	{ 114, { L"\a操作説明：テイルス", 150, Menu } },
	{ 115, { L"\a操作説明：ナックルズ", 180, Menu } },
	{ 116, { L"\a操作説明：エミー", 150, Menu } },
	{ 117, { L"\a操作説明：E-102ガンマ", 270, Menu } },
	{ 118, { L"\a操作説明：ビッグ", 150, Menu } },
	{ 119, { L"\aアクションステージノ ルール説明\n直チニ インプットセヨ", 360, Menu} },
	{ 120, { L"\aプレイステージヲ選択セヨ", 150, Menu } },
	{ 121, { L"\aミニゲームヲ選択セヨ", 150, Menu } },
	{ 122, { L"\aオプション画面\n設定項目ヲ選択セヨ", 240, Menu } },
	{ 123, { L"\aサウンドテスト\nBGM選択可能", 330, Menu } },
	{ 124, { L"\aメモリーカード存在不明", 210, Menu } },
	{ 125, { L"\a警告：メモリーカード容量不足", 300, Menu } },

	//Big

	{ 126, { L"\aメモリーカードを選ぶんだよ", 150, Menu } },
	{ 127, { L"\aファイルはどれにする？", 150, Menu } },
	{ 128, { L"\a物語を進めるモードだよ", 180, Menu } },
	{ 129, { L"\a一つのステージだけを遊べるんだよ", 180, Menu } },
	{ 130, { L"\a誰で遊ぶ？", 120, Menu } },
	{ 131, { L"\aハリネズミくんの操作方法だよ", 180, Menu } },
	{ 132, { L"\aキツネくんの操作方法だよ", 180, Menu } },
	{ 133, { L"\aモグラくんの操作方法だよ", 180, Menu } },
	{ 134, { L"\a女の子の操作方法だよ", 180, Menu } },
	{ 135, { L"\aロボットの操作方法だよ", 180, Menu } },
	{ 136, { L"\a僕の操作方法だよ", 180, Menu } },
	{ 137, { L"\aアクションステージのルールだよ\nちゃんと覚えてね", 330, Menu } },
	{ 138, { L"\aどこは遊ぶ？", 120, Menu } },
	{ 139, { L"\aどれは遊ぶ？", 120, Menu } },
	{ 140, { L"\aオプションだよ\n何か変えられるらしいと", 300, Menu } },
	{ 141, { L"\aサウンドテストだよ\n音楽を聴けるんだ", 270, Menu } },
	{ 142, { L"\aメモリーカード、ちゃんと刺さってる？", 210, Menu } },
	{ 143, { L"\aメモリーカードの容量が足りないよ", 210, Menu } },

	//Eggman

	{ 144, { L"\aメモリーカードを選ぶんじゃ", 120, Menu } },
	{ 145, { L"\aよし、次はファイルを選ぶんじゃ", 180, Menu } },
	//{ 146, { L"\aワシとの戦い(?)アドベンチャーモードじゃ", 270, Menu } }, // *?* couldn't understand the middle
	{ 147, { L"\aトライアルモードで練習せい", 210, Menu } },
	{ 148, { L"\aどいつで遊ぶんじゃ？", 120, Menu } },
	{ 149, { L"\a憎っくきソニックの操作方法じゃ", 150, Menu } }, // *?* not sure
	{ 150, { L"\a子ギツネテイルスの操作方法じゃ", 150, Menu } },
	{ 151, { L"\aアホ ナックルズの操作方法じゃ", 150, Menu } },
	{ 152, { L"\a小娘エミーの操作方法じゃ", 150, Menu } },
	{ 153, { L"\a我がしもべ、E-102ガンマの操作方法じゃ", 240, Menu } },
	{ 154, { L"\aビッグとか言うデブ猫の操作方法じゃ", 210, Menu } },
	{ 155, { L"\aアクションステージのルール説明じゃ\nこんなものは見とらんで、さっさとゲームが始めるか", 480, Menu } }, // *?* not sure
	{ 156, { L"\aどのステージをやるんじゃ？", 120, Menu } },
	{ 157, { L"\aどのミニゲームをやるんじゃ？", 120, Menu } },
	{ 158, { L"\aオプション画面じゃ\nさ、好きなように設定を変えて見るがよい", 300, Menu } }, // *?* not sure
	{ 159, { L"\aサウンドテストじゃ\nここで色んな曲が聴けるぜ", 300, Menu } },
	{ 160, { L"\aメモリーカードが刺さっとるか？", 150, Menu } },
	//{ 161, { L"\aメモリーカードの容量がただ利用じゃの", 210, Menu } }, // *?* the ending is most likely incorrect


	/* Character select lines */

	{ 1837, { L"\aLet's get them!", 120, Menu } }, //Sonic
	{ 1800, { L"\aソニック！今行きよ！", 120, Menu } }, //Tails - *?* not sure
	{ 1787, { L"\aよし、行くぜ！", 90, Menu } }, //Knuckles
	{ 1730, { L"\aあたしの出番ね！", 90, Menu } }, //Amy
	{ 1767, { L"\a準備完了", 150, Menu } }, //Gamma
	{ 1744, { L"\aカエルくん、待っててね", 180, Menu } }, //Big


	/* Common idle lines */

	{ 390, { L"\aそろそろ行くか", 90, Gameplay } }, //Sonic
	{ 392, { L"\a急がないと", 60, Gameplay } }, //Knuckles
	{ 393, { L"\aはぁぁ、疲れた…", 90, Gameplay } }, //Amy
	{ 394, { L"\a戦闘準備完了", 180, Gameplay } }, //Gamma
	{ 395, { L"\aなんかお腹空いたなぁ…", 210, Gameplay } }, //Big


	/* Adventure fields idle lines */

	//Station Square - station area

	{ 288, { L"\aこの駅が街の中心地か", 180, Gameplay } }, //Sonic
	{ 289, { L"\a鉄道もかっこいいな", 90, Gameplay } }, //Tails
	{ 290, { L"\aここがステーションスクエアか", 120, Gameplay } }, //Knuckles
	{ 291, { L"\a海が見える街っていいわよね！", 180, Gameplay } }, //Amy
	{ 292, { L"\aここにもお魚いるかなぁ…", 210, Gameplay } }, //Big
	{ 293, { L"\aステーションスクエアヲ探索中", 180, Gameplay } }, //Gamma

	//Station Square - city hall area

	{ 274, { L"\aこの辺もずいぶん変わったなぁ…", 150, Gameplay } }, //Sonic
	{ 275, { L"\aお腹空いたなぁ…", 90, Gameplay } }, //Tails
	{ 276, { L"\a都会は苦手だ", 120, Gameplay } }, //Knuckles
	{ 277, { L"\aお買い物しちゃうかな…", 120, Gameplay } }, //Amy
	{ 278, { L"\aみんな、忙しそうだな", 180, Gameplay } }, //Big
	{ 279, { L"\a人間ノ生命反応ヲ確認", 210, Gameplay } }, //Gamma

	//Station Square - sewers

	{ 286, { L"\aこれじゃ、まるでドブネズミだぜ", 180, Gameplay } }, //Sonic
	{ 287, { L"\a暗いとこだなぁ…", 120, Gameplay } }, //Big

	//Station Square - Twinkle Park entrance

	{ 300, { L"\a苦手なんだよなぁ、こういうとこ…", 150, Gameplay } }, //Sonic
	{ 301, { L"\a遊園地に入らないのか", 120, Gameplay } }, //Tails
	{ 302, { L"\a何なんだ、ここは？", 90, Gameplay } }, //Knuckles
	{ 303, { L"\aなんだかワクワクしちゃう…", 120, Gameplay } }, //Amy
	{ 304, { L"\aトゥインクルパーク？", 150, Gameplay } }, //Big
	{ 305, { L"\aカートコースヲ発見", 150, Gameplay } }, //Gamma

	//Station Square - hotel

	{ 294, { L"\aヘイヘイ、休んでる場合じゃないぜ！", 180, Gameplay } }, //Sonic
	{ 295, { L"\aホテルか… ちょっと羨ましいな…", 180, Gameplay } }, //Tails
	{ 296, { L"\aフン、リゾートホテルか", 120, Gameplay } }, //Knuckles
	{ 297, { L"\aこんなホテルに泊まってみたいなぁ…", 210, Gameplay } }, //Amy
	{ 298, { L"\a大きなお家だなぁ…", 150, Gameplay } }, //Big
	{ 299, { L"\a戦闘モード解除", 150, Gameplay } }, //Gamma

	//Station Square - casino area / station

	{ 280, { L"\aお、お、こんなとこで遊んでる場合じゃないぜ", 210, Gameplay } }, //Sonic
	{ 281, { L"\a大きな街だな", 90, Gameplay } }, //Tails
	{ 282, { L"\a賑やかな街だぜ", 90, Gameplay } }, //Knuckles
	{ 283, { L"\aこの街も変わらないなぁ…", 150, Gameplay } }, //Amy
	{ 284, { L"\aカエルくん、どこだろう？", 150, Gameplay } }, //Big
	{ 285, { L"\aミスティックルインヘ行キノ列車ヲ確認", 210, Gameplay } }, //Gamma

	//Mystic Ruins - station area

	{ 306, { L"\a閑散としたところだなぁ…", 120, Gameplay } }, //Sonic
	{ 307, { L"\a駅が出来てこの辺も変わっちゃったなぁ…", 180, Gameplay } }, //Tails
	{ 308, { L"\a早くマスターエメラルドを…", 150, Gameplay } }, //Knuckles
	{ 309, { L"\aあたしってこういうとこ苦手なもよね", 210, Gameplay } }, //Amy - *?* not sure
	{ 310, { L"\aカエルくん、どこかなぁ？", 180, Gameplay } }, //Big
	{ 311, { L"\aミスティックルインヲ探索中", 180, Gameplay } }, //Gamma

	//Mystic Ruins - Angel Island

	{ 312, { L"\aエンジェルアイランドか", 120, Gameplay } }, //Sonic
	{ 313, { L"\a早くこの島を空に戻さないと！", 180, Gameplay } }, //Knuckles
	{ 314, { L"\aエンジェルアイランドニ上陸", 120, Gameplay } }, //Gamma

	//Mystic Ruins - jungle

	{ 315, { L"\aやったこうでないだな!", 90, Gameplay } }, //Sonic - *?* not sure
	{ 316, { L"\a僕はどっちから来たんだっけ？", 120, Gameplay } }, //Tails
	{ 317, { L"\a何か… 懐かしい気持ちになる…", 210, Gameplay } }, //Knuckles
	{ 318, { L"\aすごいところね！", 120, Gameplay } }, //Amy
	{ 319, { L"\aお家へ帰ろうかなぁ…", 150, Gameplay } }, //Big
	{ 320, { L"\a気温上昇\n強制冷却モード１：スタート", 360, Gameplay } }, //Gamma

	//Final Egg entrance

	{ 321, { L"\aここがエッグマンの基地か", 120, Gameplay } }, //Sonic
	{ 322, { L"\aこれがエッグマンの要塞だね", 120, Gameplay } }, //Tails
	{ 323, { L"\aここが… 奴の？", 120, Gameplay } }, //Knuckles
	{ 324, { L"\aソニック… あたし頑張る！", 150, Gameplay } }, //Amy
	{ 325, { L"\a私ノ生マレタ場所", 120, Gameplay } }, //Gamma

	//Past (normal)

	{ 326, { L"\a何だここ？", 90, Gameplay } }, //Tails
	{ 327, { L"\aここは… 一体…", 120, Gameplay } }, //Knuckles
	{ 328, { L"\aやだ、ここどこ？", 180, Gameplay } }, //Amy
	{ 329, { L"\aはぁて、ここはどこ？", 210, Gameplay } }, //Big
	{ 330, { L"\a適合データナシ\n現在位置確認不能", 330, Gameplay } }, //Gamma

	//Past (fire)

	{ 331, { L"\a酷い！", 60, Gameplay } }, //Sonic
	{ 332, { L"\a何故だ？", 60, Gameplay } }, //Knuckles

	//Egg Carrier - outside

	{ 333, { L"\aふう、呆れるね、まったく…", 180, Gameplay } }, //Sonic
	{ 334, { L"\aすごいな、この船！", 120, Gameplay } }, //Tails
	{ 335, { L"\aこんなものがよく空を飛んでいられるぜ", 180, Gameplay } }, //Knuckles
	{ 336, { L"\aどうしてこんなものを作るのかしら？", 180, Gameplay } }, //Amy
	{ 337, { L"\a任務継続中", 120, Gameplay } }, //Gamma
	{ 338, { L"\a何でお船が飛ぶのかなぁ…", 210, Gameplay } }, //Big

	//Egg Carrier - inside

	{ 339, { L"\a船の仲間で趣味丸出したな", 240, Gameplay } }, //Sonic
	{ 340, { L"\a僕もいつかこんな船を作ろう！", 120, Gameplay } }, //Tails
	{ 341, { L"\aどこが出口なんだ？", 90, Gameplay } }, //Knuckles
	{ 342, { L"\a見つかんないように静かに歩きましょう", 150, Gameplay } }, //Amy
	{ 343, { L"\a任務継続中", 120, Gameplay } }, //Gamma
	{ 344, { L"\aンンと… 出口出口っと…", 210, Gameplay } }, //Big --- ンンと… 出口出口っと…


	/* Action stages idle lines */

	//Emerald Coast

	{ 227, { L"\aこのまま海岸線を進めばいいんだなぁ", 150, Gameplay } }, //Sonic
	{ 228, { L"\aカエルノ生命反応ヲ確認", 180, Gameplay } }, //Gamma
	{ 229, { L"\a風が気持ちいいぜ！", 120, Gameplay } }, //Sonic
	{ 230, { L"\a大きな池だなぁ…", 150, Gameplay } }, //Big

	//Windy Valley

	{ 231, { L"\a遠くで風の音が聞こえる", 120, Gameplay } }, //Sonic
	{ 232, { L"\aE-103ノ存在ヲ確認", 240, Gameplay } }, //Gamma
	{ 233, { L"\a早く脱出しないと！", 120, Gameplay } }, //Sonic
	{ 234, { L"\aずいぶん高いとこまで来ちまったなぁ…", 150, Gameplay } }, //Sonic
	{ 235, { L"\aソニック、どこへ行っちゃったんだろう？", 120, Gameplay } }, //Tails

	//Casinopolis

	{ 236, { L"\aハァ、ピンボールか", 150, Gameplay } }, //Sonic
	{ 237, { L"\a派手なところだ", 90, Gameplay } }, //Knuckles
	{ 238, { L"\a酷い匂いだ… ゴミ捨て場か", 210, Gameplay } }, //Sonic

	//Icecap

	{ 239, { L"\a陽気に冷えるぜ", 150, Gameplay } }, //Sonic
	{ 240, { L"\aまるで氷の世界だなぁ…", 120, Gameplay } }, //Sonic
	{ 241, { L"\a氷が美味しそうだなぁ…", 150, Gameplay } }, //Big
	{ 242, { L"\a最高の技をキメるぜ！", 150, Gameplay } }, //Sonic
	{ 243, { L"\aそろそろ滑ろうかなぁ…", 120, Gameplay } }, //Tails

	//Twinkle Park

	{ 244, { L"\aここがカート場の入り口か", 150, Gameplay } }, //Sonic
	{ 245, { L"\aこのエリアには誰もいないみたいだなぁ…", 120, Gameplay } }, //Sonic
	{ 246, { L"\a何が釣れるか楽しみだなぁ…", 180, Gameplay } }, //Big
	{ 247, { L"\aソニック、どこへ行ったのかなぁ…", 150, Gameplay } }, //Amy

	//Speed Highway

	{ 248, { L"\aさぁて… 一気に行くぜ！", 180, Gameplay } }, //Sonic
	{ 249, { L"\aエッグマンはどこだ？", 90, Gameplay } }, //Tails
	{ 250, { L"\aヘイヘイ、遊んでる場合か", 120, Gameplay } }, //Sonic
	{ 251, { L"\a車が止まって見えるぜ！", 120, Gameplay } }, //Sonic
	{ 252, { L"\aこの街のどこかにエメラルドが…", 180, Gameplay } }, //Knuckles

	//Red Mountain

	{ 253, { L"\aエッグキャリアはどこへ行った？", 120, Gameplay } }, //Sonic
	{ 254, { L"\aへえ… 溶岩に落ちたらイチコロだなぁ…", 270, Gameplay } }, //Sonic
	{ 255, { L"\aE-104ノ存在ヲ確認", 120, Gameplay } }, //Gamma
	{ 256, { L"\aこの崖から落ちたら終わりだな", 150, Gameplay } }, //Knuckles

	//Sky Deck

	{ 257, { L"\aふう、落ちたらイチコロだぜ", 210, Gameplay } }, //Sonic
	{ 258, { L"\a高いなぁ… 足がすくんじゃうよ!", 180, Gameplay } }, //Tails
	{ 259, { L"\aShoot! この風はうざったいぜ！", 240, Gameplay } }, //Sonic
	{ 260, { L"\aおいおい、どうなってんだ、この船？", 180, Gameplay } }, //Sonic
	{ 261, { L"\aさぁて… お宝はどこだ？", 210, Gameplay } }, //Knuckles

	//Lost World

	{ 262, { L"\aずいぶん静かなところだなぁ…", 150, Gameplay } }, //Sonic
	{ 263, { L"\aここは… 一体…？", 120, Gameplay } }, //Sonic
	{ 264, { L"\aこの部屋にエメラルドがあるはずなんだな", 150, Gameplay } }, //Knuckles

	//Final Egg

	{ 265, { L"\aえ、オイルの嫌な匂いだ", 180, Gameplay } }, //Sonic
	{ 266, { L"\a小鳥さん、元気出して行こう", 150, Gameplay } }, //Amy
	{ 267, { L"\aどこまで続いてるんだ？", 120, Gameplay } }, //Sonic
	{ 268, { L"\a待ってろよ、エッグマン！", 90, Gameplay } }, //Sonic
	{ 269, { L"\a青イ ハリネズミハ 敵", 150, Gameplay } }, //Gamma

	//Hot Shelter

	{ 270, { L"\aエッグマンって本当最低よね！", 150, Gameplay } }, //Amy
	{ 271, { L"\aカエルくん、大丈夫かなぁ…", 210, Gameplay } }, //Big
	{ 272, { L"\aもう、どっちへ行けばいいの？", 210, Gameplay } }, //Amy
	{ 273, { L"\aE-105ノ存在ヲ確認", 120, Gameplay } }, //Gamma


	/* Boss battle idle lines */

	//Sonic

	{ 368, { L"\a何だこいつ？ 不死身か？", 150, Gameplay } }, //Chaos 0
	{ 369, { L"\a何をやっても無駄だぜ！", 120, Gameplay } }, //Egg Hornet
	{ 370, { L"\aナックルズ？ どうしたんだ？", 120, Gameplay } }, //vs Knuckles
	{ 371, { L"\aヘイ！今度は逃さないぜ！", 120, Gameplay } }, //Chaos 4
	{ 372, { L"\aNot so bad! 結構やるね！", 180, Gameplay } }, //Gamma
	{ 373, { L"\a弱点はどこだ？", 90, Gameplay } }, //Chaos 6
	{ 374, { L"\aお遊びはここまでだ、エッグマン！", 120, Gameplay } }, //Egg Viper

	//Tails

	{ 375, { L"\a負けるもんか！", 60, Gameplay } }, //Egg Hornet
	{ 376, { L"\aちょ… ちょっと待ってよ！", 90, Gameplay } }, //vs Knuckles
	{ 377, { L"\a水の化け物め！", 90, Gameplay } }, //Chaos 4
	{ 378, { L"\aこのロボット… 何が違う…", 150, Gameplay } }, //vs Gamma
	{ 379, { L"\a僕なって、一人でやれるんだ！", 120, Gameplay } }, //Egg Walker

	//Knuckles

	{ 380, { L"\aたっぷりでは返すぜ！", 90, Gameplay } }, //Chaos 2 - *?* not sure
	{ 381, { L"\aエメラルドを渡せ！", 60, Gameplay } }, //vs Sonic
	{ 382, { L"\a往生際の悪い野郎だ", 120, Gameplay } }, //Chaos 4 - *?* not sure
	{ 383, { L"\a今度こそ… 止めを刺してやる！", 180, Gameplay } }, //Chaos 6

	//Amy

	{ 384, { L"\a絶対に許さないだから！", 120, Gameplay } }, //Zero

	//Gamma

	{ 385, { L"\aターゲット確認", 120, Gameplay } }, //E-101
	{ 386, { L"\a青イ ハリネズミハ 敵", 150, Gameplay } }, //vs Sonic
	{ 387, { L"\aベータ！", 60, Gameplay } }, //E-101 mk.2

	//Super Sonic

	{ 388, { L"\aエメラルドの本当の力を見せてやる！", 210, Gameplay } },
	{ 389, { L"\aあれが奴のコアか", 90, Gameplay } },


	/* Chao Garden idle lines */

	//Sonic

	{ 348, { L"\aまったく、なんて平和な場所なんだ", 150, Gameplay } },
	{ 349, { L"\aよ！ いい子にしてたかい？", 120, Gameplay } }, // *?* not sure
	{ 350, { L"\aHey guys! 喧嘩してダメだぜ！", 150, Gameplay } },

	//Tails

	{ 351, { L"\aここに来ると、ホッとするんだよね", 120, Gameplay } },
	{ 352, { L"\aみんな、元気にしてた？", 90, Gameplay } },
	{ 353, { L"\a僕もみんなのこと大好き！", 120, Gameplay } },

	//Knuckles

	{ 354, { L"\aここにはエメラルドはないようだなぁ…", 150, Gameplay } },
	{ 355, { L"\aこいつら… どこかで会ったような…", 210, Gameplay } },
	{ 356, { L"\aここにいると、何故か故郷を思い出す…", 240, Gameplay } },

	//Amy

	{ 357, { L"\aはぁぁ、ここって気持ちいいな…", 270, Gameplay } },
	{ 358, { L"\aはぁぁ…はぁぁ… 眠くなってきちゃった…", 360, Gameplay } },
	{ 359, { L"\aみんな、喧嘩してダメよ！", 150, Gameplay } },
	{ 360, { L"\aソニックがそばに行ってくれたのなぁ…", 180, Gameplay } },

	//Gamma

	{ 361, { L"\aココハ？", 60, Gameplay } },
	{ 362, { L"\a戦闘モード解除", 150, Gameplay } },
	{ 363, { L"\a生命反応アリ", 120, Gameplay } },

	//Big

	{ 364, { L"\aなんかいい感じ", 180, Gameplay } },
	{ 365, { L"\aみんな元気？", 120, Gameplay } },
	{ 366, { L"\aなんかお腹減ってきちゃったなぁ…", 240, Gameplay } },
	{ 367, { L"\aンン、釣り会いしたいの！", 210, Gameplay } },


	/* Mini games idle lines */

	//Sand Hill

	{ 345, { L"\aShoot! 砂が目に入っちまった！", 120, Gameplay } }, //Sonic
	{ 346, { L"\aこの砂、柔らかくて滑りやすいや！", 150, Gameplay } }, //Tails

	//Hedgehog Hammer

	{ 347, { L"\aええ、とこどこ？", 120, Gameplay } }, //Amy


	/* Sky Chase sequences */

	//Sky Chase 1 - before Egg Cannon fires

	{ 491, { L"\aやった！", 60, Gameplay } }, //Tails
	{ 716, { L"\aやった！", 60, Gameplay } }, //Tails (duplicate?)
	{ 492, { L"\a軽いもんだぜ！", 150, Gameplay } }, //Sonic
	{ 717, { L"\a軽いもんだぜ！", 150, Gameplay } }, //Sonic (duplicate?)

	//Sky Chase 2 - before transformation

	{ 765, { L"\aよし、第一に防衛ラインを移るか", 180, Gameplay } }, // *?* not sure
	{ 766, { L"\aまだ次の来るぞ！", 90, Gameplay } },
	{ 767, { L"\a分かってるって！", 90, Gameplay } },

	//Sky Chase 2 - transformation sequence alternate lines (they also match the regular lines in Japanese)

	{ 530, { L"\aよし、第一に防衛ラインを移るか", 180, Gameplay } }, // *?* not sure
	{ 531, { L"\aまだ次の来るぞ！", 90, Gameplay } },
	{ 532, { L"\a分かってるって！", 90, Gameplay } },
	{ 533, { L"\aシステムモード、チェンジ！", 120, Gameplay } },
	{ 534, { L"\aわあああああう！", 90, Gameplay } },
	{ 535, { L"\aよし、行くよ！", 120, Gameplay } },


	/* Action stages voices */

	//All Tails' stages except for Speed Highway (Sonic's voice)

	{ 205, { L"\aCome on, Tails!", 60, Gameplay } },
	{ 206, { L"\aヘイヘイヘイ！", 90, Gameplay } },
	{ 207, { L"\aいいぞ、テイルス！ その調子だ！", 120, Gameplay } },
	{ 208, { L"\aお、おい、テイルス！", 90, Gameplay } },
	{ 209, { L"\aYou made it!", 60, Gameplay } },
	{ 210, { L"\aCome on!", 60, Gameplay } },
	{ 211, { L"\aテイルス、先へ行くぜ！", 90, Gameplay } },
	{ 212, { L"\aテイルス、急げ！", 60, Gameplay } },
	{ 213, { L"\aHooray!", 60, Gameplay } },
	{ 214, { L"\aI got it!", 60, Gameplay } },
	{ 215, { L"\aテイルス、リングはないぞ！\n気をつけろ！", 120, Gameplay } },

	//Speed Highway (Eggman's voice)

	{ 216, { L"\aこのワシについて来られるかな？", 150, Gameplay } }, // *?* not sure
	{ 217, { L"\aつかがえたぞ、テイルス！", 120, Gameplay } }, // *?* not sure about the beginning
	{ 218, { L"\aなんと？ 追いつけおったわ？", 120, Gameplay } }, // *?* not sure
	{ 219, { L"\aくそ、この子ギツネめ！", 120, Gameplay } },
	{ 220, { L"\aテ、テイルスちゃん、待って！", 180, Gameplay } },
	{ 222, { L"\aさらばじゃ、テイルス！", 120, Gameplay } },
	{ 223, { L"\aこの街もろども破壊してくれるわ！", 150, Gameplay } }, // *?* not sure
	{ 224, { L"\aワシに勝とうなんて１００年早いわ！", 180, Gameplay } },
	{ 225, { L"\aワシの勝ちじゃ！ ぬははははは！", 210, Gameplay } },
	{ 226, { L"\aさ、降参するのじゃ、テイルス！", 180, Gameplay } },

	//Final Egg

	//alerts
	{ 1588, { L"\a緊急実態発生！ 緊急実態発生！\n直ちに侵入者を排除せよ！", 420, Gameplay } },
	{ 1589, { L"\a緊急実態発生！ 緊急実態発生！\n直ちに侵入者を排除せよ！", 420, Gameplay } },
	{ 1590, { L"\aファイナルエッグ：レベル２隔壁オープン！", 300, Gameplay } },
	{ 1591, { L"\aファイナルエッグ：レベル２隔壁オープン！", 300, Gameplay } },
	//Eggman to Gamma
	{ 1592, { L"\aターゲットを破壊すれば、\nタイムが加算されるぞい！", 240, Gameplay } },
	{ 1593, { L"\aソニックターゲットを破壊するのじゃ！", 210, Gameplay } },


	/* Boss voices */

	//vs character

	{ 166, { L"\aやるな、ソニック！", 60, Gameplay } }, //Knuckles
	{ 167, { L"\aやるな、ナックルズ！", 90, Gameplay } }, //Sonic
	{ 168, { L"\aやるな、テイルス！", 60, Gameplay } }, //Knuckles
	{ 169, { L"\a命令ハ絶対", 150, Gameplay } }, //Gamma
	{ 170, { L"\aこいつ… 強い…", 120, Gameplay } }, //Sonic

	//Eggman bosses

	{ 171, { L"\aパワー全開じゃ！", 90, Gameplay } },
	{ 174, { L"\aおりゃ！", 60, Gameplay } },
	{ 176, { L"\aおのれ、ちょこまかと！", 90, Gameplay } },
	{ 177, { L"\aな、何と？", 60, Gameplay } },
	{ 178, { L"\aおらおらおらおらおらおら！", 60, Gameplay } },
	//Egg Viper
	{ 1902, { L"\aふはははははは！\nソニック、ここまで来てみろ！", 270, Gameplay } },
	{ 1903, { L"\aソニック、この攻撃を受けてみろ！", 210, Gameplay } },


	/* Adventure fields announcers */

	//Station Square

	{ 1567, { L"\aご利用のお客さまは\nご乗車になってお待ちください！", 300, Gameplay } },
	{ 1568, { L"\aご利用のお客さまは\nご乗車になってお待ちください！", 300, Gameplay } },
	{ 1569, { L"\aミスティックルインへ行き列車、\nまもなく発車いたします！", 270, Gameplay } },
	{ 1570, { L"\aミスティックルインへ行き列車、\nまもなく発車いたします！", 270, Gameplay } },
	{ 1571, { L"\aまもなく列車が到着いたします！\n下がってお待ちください！", 270, Gameplay } },
	{ 1572, { L"\aまもなく列車が到着いたします！\n下がってお待ちください！", 270, Gameplay } },
	{ 1573, { L"\aただいまの時間、\n列車は運行いたしておりません！", 180, Gameplay } },
	{ 1574, { L"\aただいまの時間、\n列車は運行いたしておりません！", 180, Gameplay } },

	//Twinkle Park entrance

	{ 1575, { L"\aWelcome to Twinkle Park!", 90, Gameplay } },

	//Mystic Ruins

	{ 1654, { L"\aご利用のお客さまは\nご乗車になってお待ちください！", 300, Gameplay } },
	{ 1655, { L"\aステーションスクエアへ行き列車、\nまもなく発車いたします！", 270, Gameplay } },
	{ 1656, { L"\aまもなく列車が到着いたします！\n下がってお待ちください！", 300, Gameplay } },
	{ 1657, { L"\aただいまの時間、\n列車は運行いたしておりません！", 210, Gameplay } },


	/* Character specific gameplay voices */

	//Sonic

	{ 1838, { L"\aYeees!", 90, Gameplay } }, //Twinkle Circuit clear / Sky Deck section 1 clear
	{ 1839, { L"\aYahoo!", 90, Gameplay } }, //Twinkle Circuit jump
	{ 1840, { L"\aYes!", 60, Gameplay } }, //stage clear
	{ 1841, { L"\aHey, pump it up!", 120, Gameplay } }, //bad clear
	{ 1842, { L"\aIt's sweet!", 180, Gameplay } }, //good clear
	{ 1843, { L"\aHey guy! また遊んでやるぜ！", 180, Gameplay } }, //boss clear
	{ 1844, { L"\aYeah! It's okay!", 120, Gameplay } }, //normal clear
	{ 1845, { L"\aは、離せ！", 60, Gameplay } }, //captured
	{ 1847, { L"\aNo!", 60, Gameplay } }, //died with no rings

	//Tails

	{ 1801, { L"\aやった！", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1802, { L"\aひゃほぉ！", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1803, { L"\aやった！", 60, Gameplay } }, //stage clear
	{ 1804, { L"\aふう、何とか間に合った", 120, Gameplay } }, //bad clear
	{ 1805, { L"\aやったよ、ソニック！", 90, Gameplay } }, //good clear
	{ 1806, { L"\a僕なって強いだからね！", 90, Gameplay } }, //boss clear
	{ 1807, { L"\aま、こんな感じかな", 90, Gameplay } }, //normal clear
	{ 1808, { L"\aちょ、ちょっと！", 60, Gameplay } }, //captured

	//Knuckles

	{ 1788, { L"\aよしゃ！", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1789, { L"\aおっと！", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1790, { L"\a見つけたぜ！", 60, Gameplay } }, //stage clear
	{ 1791, { L"\aフン、手間取っちまった", 150, Gameplay } }, //bad clear
	{ 1792, { L"\a軽いもんだぜ！", 60, Gameplay } }, //good clear
	{ 1793, { L"\aフン、口程にもない奴め！", 150, Gameplay } }, //boss clear
	{ 1794, { L"\aま、こんなもんだろう", 90, Gameplay } }, //normal clear
	{ 1795, { L"\aくそおおお！", 60, Gameplay } }, //captured

	//Amy

	{ 1731, { L"\aやったね！", 60, Gameplay } }, //Twinkle Circuit clear
	{ 1732, { L"\aやあああい！", 60, Gameplay } }, //Twinkle Circuit jump
	{ 1733, { L"\aやったぁ！", 90, Gameplay } }, //stage clear
	{ 1734, { L"\aふう、危なかった…", 120, Gameplay } }, //bad clear
	{ 1735, { L"\aあたしだってやる時はやるんだから！", 150, Gameplay } }, //boss clear - *?* not sure
	{ 1736, { L"\a脱して成功！", 90, Gameplay } }, //normal clear
	{ 1737, { L"\aやぁぁ、あたしって最高！", 150, Gameplay } }, //good clear
	{ 1738, { L"\aいやぁ、離して！", 150, Gameplay } }, //captured

	//Big

	{ 1334, { L"\aほぉぉ、また行っちゃった…", 240, Gameplay } }, //stage clear (Twinkle Park, Icecap)
	{ 1747, { L"\aカエルくん！", 90, Gameplay } }, //stage clear (Emerald Coast, Hot Shelter)
	{ 1748, { L"\a今度は頑張る…", 150, Gameplay } }, //bad clear
	{ 1749, { L"\a大漁！ 大漁！", 90, Gameplay } }, //good clear
	{ 1750, { L"\a大丈夫かい、カエルくん？", 150, Gameplay } }, //boss clear
	{ 1751, { L"\a結構釣れたなぁ…", 150, Gameplay } }, //normal clear - *?* not sure
	{ 1758, { L"\a釣れた！ 釣れた！", 120, Gameplay } }, //got fish
	{ 1759, { L"\a来たぁ！", 60, Gameplay } }, //hit

	//Gamma

	{ 1768, { L"\a走行完了", 150, Gameplay } }, //Twinkle Circuit clear
	{ 1770, { L"\aミッションコンプリート", 150, Gameplay } }, //stage clear
	{ 1771, { L"\aE-101ベタ：救出完了", 300, Gameplay } }, //Beta mk.2 clear
	{ 1772, { L"\aカエル捕獲完了", 240, Gameplay } }, //Emerald Coast clear
	{ 1773, { L"\aE-105ゼタ：救出完了", 300, Gameplay } }, //Hot Shelter clear
	{ 1774, { L"\aE-104イプシロン：救出完了", 300, Gameplay } }, //Red Mountain clear
	{ 1775, { L"\aE-103デルタ：救出完了", 300, Gameplay } }, //Windy Valley clear
	{ 1777, { L"\a脱出不能", 150, Gameplay } }, //captured
	{ 1778, { L"\aミッション失敗", 150, Gameplay } }, //died
	{ 1786, { L"\a活動不能", 150, Gameplay } }, //time over


	/* Cutscene voices */

	//Before Egg Walker

	{ 816, { L"\aエ、エッグマンだ！", 30, Gameplay } },
	{ 818, { L"\a大丈夫かな？", 30, Gameplay } },

	//After Egg Walker

	{ 821, { L"\aやったぞ！", 20, Cutscene } },
	{ 822, { L"\a大したもんだ", 20, Cutscene } },
	{ 823, { L"\a助かった！", 20, Cutscene } },
	{ 824, { L"\aすごいぞ！", 20, Cutscene } },
	{ 825, { L"\aわぁぁ！ やったやった！", 20, Cutscene } },

	//After Emerald Coast (Gamma)

	{ 1223, { L"\a俺ノハ本物ダ", 20, Gameplay } },
	{ 1224, { L"\aイヤ、俺ダ", 20, Gameplay } },
	{ 1225, { L"\a俺ノホウガ色ガイイ", 20, Gameplay } }, // *?* not sure


	/* Beta restores */

	//Big's unused fishing lines

	{ 1763, { L"\a小っちゃい…", 90, Gameplay } }, //small fish
	{ 1761, { L"\aまあまあかな…", 120, Gameplay } }, //medium-sized fish
	{ 1745, { L"\aでかいぞ！", 150, Gameplay } }, //large fish
	{ 1753, { L"\aダメだ、こりゃ…", 90, Gameplay } }, //failed attempt
	{ 1756, { L"\aダメか…", 90, Gameplay } }, //failed attempt
	{ 1876, { L"\aよぉし、もう一回だ", 210, Gameplay } }, //try again
	{ 1877, { L"\a惜しい、もう一度", 210, Gameplay } }, //try again

	//Final Egg 1 (Sonic) intercom

	{ 1706, { L"\a侵入者発見！ 侵入者発見！\nエッグキーパーは直ちに急行せよ！", 360, Gameplay } },
	{ 1707, { L"\a侵入者発見！ 侵入者発見！\nエッグキーパーは直ちに急行せよ！", 360, Gameplay } },

	//Final Egg (Amy) Eggman's taunts

	{ 1984, { L"\aははははは！ ハズレじゃ！", 150, Gameplay } },
	{ 1985, { L"\aはははは！ またまたハズレじゃ！", 180, Gameplay } },
	{ 1986, { L"\aはははははは！ もう諦めて観念せい！", 210, Gameplay } },

	//Sky Deck (probably) unused lines

	//alerts
	{ 1704, { L"\a緊急実態発生！ 緊急実態発生！\n直ちに侵入者を排除せよ！", 420, Gameplay } },
	{ 1705, { L"\a緊急実態発生！ 緊急実態発生！\n直ちに侵入者を排除せよ！", 420, Gameplay } },
	{ 1727, { L"\a強風接近！ 強風接近！", 150, Gameplay } },
	{ 1728, { L"\a強風警戒解除！", 120, Gameplay } },
	//Eggman orders (Sonic's section 2)
	{ 1723, { L"\a向かいに先行！ スピードを落とせ！", 360, Gameplay } }, // *?* not sure
	{ 1724, { L"\a向かいに先行！ スピードを落とせ！", 360, Gameplay } }, // *?* not sure
	{ 1725, { L"\a浮上フロー！ 全速前進！", 300, Gameplay } }, // *?* not sure about the first one at all but whatever, it's probably used only from the sound bank anyway
	//ship tilt
	{ 1726, { L"\aこしゃくなハリネズミめ！\n振り落してくれるわ！", 300, Gameplay } },

	//vs E-101 mk.2 unused line

	{ 1681, { L"\aヤメルンダ、ベタ！", 90, Gameplay } },

	//characters taking damage with no rings

	{ 1809, { L"\aソニック…", 90, Gameplay } }, //Tails
	{ 1796, { L"\aここまでか…", 60, Gameplay } }, //Knuckles
	{ 1740, { L"\aもう、いや！", 90, Gameplay } }, //Amy
	{ 1755, { L"\aもう、ダメ…", 120, Gameplay } }, //Big

	//Tails' stages alternate Sonic voices

	{ 1823, { L"\aYou made it!", 60, Gameplay } },
	{ 1824, { L"\aYou got it!", 60, Gameplay } },
	{ 1825, { L"\aI made it!", 60, Gameplay } },
	{ 1826, { L"\aI got it!", 60, Gameplay } },
	{ 1827, { L"\aGood going!", 60, Gameplay } },
	{ 1828, { L"\aヘイヘイヘイ！", 60, Gameplay } },
	{ 1829, { L"\aCome on!", 60, Gameplay } },
	{ 1830, { L"\aI win!", 60, Gameplay } },
	{ 1831, { L"\aLet's get going!", 60, Gameplay } },
	{ 1832, { L"\aHang in there!", 60, Gameplay } },
	{ 1833, { L"\aWait-wait-wait!", 60, Gameplay } },
	{ 1834, { L"\aHold it!", 60, Gameplay } },
	{ 1835, { L"\aHooray!", 60, Gameplay } },
	{ 1836, { L"\aOkey-dokey!", 60, Gameplay } },

	//Perfect Chaos unused Tikal's cheers

	{ 1713, { L"\aソニック？\n分かったわ！", 150, Gameplay } },
	{ 1714, { L"\aあなたの勇気に掛けてみる！", 120, Gameplay } },
	{ 1716, { L"\aスーパーソニックでいるにはリングが必要よ！\n気をつけて！", 210, Gameplay } },
};