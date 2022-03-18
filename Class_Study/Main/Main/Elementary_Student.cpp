#include "Elementary_Student.h"

void Elementary_Student::Play()
{
	cout << "  게임 이름 : " << GameName() << "\n";
	cout << "  게임 장르 : " << GameGenre() << "\n";
	cout << "플레이 타임 : " << GamePlayTime() << "\n";
	if (GameName() == "Minecraft") {
		cout << "                                \n";
		cout << "          □    ■■■■■■■  \n";
		cout << "        □□□  ■□□□□□■  \n";
		cout << "        □□□  ■□□  □□■  \n";
		cout << "  □      ■    ■□□□□□■  \n";
		cout << "  ■      ■    ■□□□□□■  \n";
		cout << "■■■■■■■■■■■■■■■■\n";
	}
	else if (GameName() == "League of Legends") {
		cout << "                    ■          \n";
		cout << "                    □  ■■■  \n";
		cout << "                    □■■■■  \n";
		cout << "                    □  ■□■  \n";
		cout << "            □      □  ■□■  \n";
		cout << "            ■      □  ■□■  \n";
		cout << "■■■■■■■■■■■■■■■■\n";
	}
}
