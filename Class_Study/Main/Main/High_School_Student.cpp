#include "High_School_Student.h"

void High_School_Student::Play()
{
	cout << "  ���� �̸� : " << GameName() << "\n";
	cout << "  ���� �帣 : " << GameGenre() << "\n";
	cout << "�÷��� Ÿ�� : " << GamePlayTime() << "\n";
	if (GameName() == "League of Legends") {
		cout << "                    ��          \n";
		cout << "                    ��  ����  \n";
		cout << "                    ������  \n";
		cout << "                    ��  ����  \n";
		cout << "            ��      ��  ����  \n";
		cout << "            ��      ��  ����  \n";
		cout << "�����������������\n";
	}
	else if (GameName() == "Eternal Return") {
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
	else if (GameName() == "Battlegrounds") {
		cout << "                                  \n";
		cout << "                    ����        \n";
		cout << "������������������\n";
		cout << "������������������\n";
		cout << "�����                          \n";
		cout << "��������������        \n";
		cout << "                                  \n";
	}
}
