#include "University.h"

void University::Play()
{
	cout << "  게임 이름 : " << GameName() << "\n";
	cout << "  게임 장르 : " << GameGenre() << "\n";
	cout << "플레이 타임 : " << GamePlayTime() << "\n";
	if (GameName() == "Eternal Return") {
		cout << "            ■\n";
		cout << "          ■  ■■\n";
		cout << "        ■        ■■\n";
		cout << "      ■              ■\n";
		cout << "      ■               ■■■■■■■■■■■■■■\n";
		cout << "      ■               ■■■■■■■■■■■■■■\n";
		cout << "      ■                 ■■■■■■■■■■■■■\n";
		cout << "     ■                    ■\n";
		cout << "     ■                    ■\n";
		cout << "     ■                    ■\n";
		cout << "     ■                    ■\n";
		cout << "   ■□□□□□□□□□□□■\n";
		cout << "    ■■■■□□□□■■■■\n";
		cout << "           ■■■■■\n";
	}
	else if (GameName() == "Teamfight Tactics") {
		cout << "■■□□□□□□□□□■■\n";
		cout << "■■                  ■■\n";
		cout << "□■                  ■□\n";
		cout << "□■                  ■□\n";
		cout << "□■                  ■□\n";
		cout << "□■                  ■□\n";
		cout << "□■                  ■□\n";
		cout << "■■                  ■■\n";
		cout << "■■□□□□□□□□□■■\n";
	}
}
