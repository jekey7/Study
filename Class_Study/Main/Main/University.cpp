#include "University.h"

void University::Play()
{
	cout << "  ���� �̸� : " << GameName() << "\n";
	cout << "  ���� �帣 : " << GameGenre() << "\n";
	cout << "�÷��� Ÿ�� : " << GamePlayTime() << "\n";
	if (GameName() == "Eternal Return") {
		cout << "            ��\n";
		cout << "          ��  ���\n";
		cout << "        ��        ���\n";
		cout << "      ��              ��\n";
		cout << "      ��               ���������������\n";
		cout << "      ��               ���������������\n";
		cout << "      ��                 ��������������\n";
		cout << "     ��                    ��\n";
		cout << "     ��                    ��\n";
		cout << "     ��                    ��\n";
		cout << "     ��                    ��\n";
		cout << "   ��������������\n";
		cout << "    �������������\n";
		cout << "           ������\n";
	}
	else if (GameName() == "Teamfight Tactics") {
		cout << "��������������\n";
		cout << "���                  ���\n";
		cout << "���                  ���\n";
		cout << "���                  ���\n";
		cout << "���                  ���\n";
		cout << "���                  ���\n";
		cout << "���                  ���\n";
		cout << "���                  ���\n";
		cout << "��������������\n";
	}
}
