#include "Middle_Schooler.h"

void Middle_Schooler::Play()
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
	else if (GameName() == "Overwatch") {
		cout << "                          ��\n";
		cout << "                        ��  ��\n";
		cout << "                  ����    ��\n";
		cout << "          �����          ��\n";
		cout << "      ���      ���        ��\n";
		cout << "  ���        �����      ��\n";
		cout << "��            �����      ��\n";
		cout << "  ���          ���        ��\n";
		cout << "    ���   ��������   ��\n";
		cout << "    ���   ���         ���\n";
		cout << "   ���   ��\n";
		cout << "  ���   ��\n";
		cout << "   ����\n";
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
