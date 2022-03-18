#include "Middle_Schooler.h"

void Middle_Schooler::Play()
{
	cout << "  게임 이름 : " << GameName() << "\n";
	cout << "  게임 장르 : " << GameGenre() << "\n";
	cout << "플레이 타임 : " << GamePlayTime() << "\n";
	if (GameName() == "League of Legends") {
		cout << "                    ■          \n";
		cout << "                    □  ■■■  \n";
		cout << "                    □■■■■  \n";
		cout << "                    □  ■□■  \n";
		cout << "            □      □  ■□■  \n";
		cout << "            ■      □  ■□■  \n";
		cout << "■■■■■■■■■■■■■■■■\n";
	}
	else if (GameName() == "Overwatch") {
		cout << "                          ■\n";
		cout << "                        ■  ■\n";
		cout << "                  ■■■    ■\n";
		cout << "          ■■■■          ■\n";
		cout << "      ■■      □□        ■\n";
		cout << "  ■■        □■■□      ■\n";
		cout << "■            □■■□      ■\n";
		cout << "  ■■          □□        ■\n";
		cout << "    ■■   ■■■■■■■   ■\n";
		cout << "    ■■   ■■         ■■\n";
		cout << "   ■■   ■\n";
		cout << "  ■■   ■\n";
		cout << "   ■■■\n";
	}
	else if (GameName() == "Battlegrounds") {
		cout << "                                  \n";
		cout << "                    ■■■        \n";
		cout << "■■□□■■■■■■■■■■■□■\n";
		cout << "■■■■■□■■■■□□■■■■■\n";
		cout << "■■■■                          \n";
		cout << "■■■■■■■■■■■■■        \n";
		cout << "                                  \n";
	}
}
