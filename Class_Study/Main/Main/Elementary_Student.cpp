#include "Elementary_Student.h"

void Elementary_Student::Play()
{
	cout << "  ���� �̸� : " << GameName() << "\n";
	cout << "  ���� �帣 : " << GameGenre() << "\n";
	cout << "�÷��� Ÿ�� : " << GamePlayTime() << "\n";
	if (GameName() == "Minecraft") {
		cout << "                                \n";
		cout << "          ��    ��������  \n";
		cout << "        ����  ��������  \n";
		cout << "        ����  ����  ����  \n";
		cout << "  ��      ��    ��������  \n";
		cout << "  ��      ��    ��������  \n";
		cout << "�����������������\n";
	}
	else if (GameName() == "League of Legends") {
		cout << "                    ��          \n";
		cout << "                    ��  ����  \n";
		cout << "                    ������  \n";
		cout << "                    ��  ����  \n";
		cout << "            ��      ��  ����  \n";
		cout << "            ��      ��  ����  \n";
		cout << "�����������������\n";
	}
}
