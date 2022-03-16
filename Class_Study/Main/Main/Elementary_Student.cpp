#include "Elementary_Student.h"

Elementary_Student::Elementary_Student(string& GameName, int _Age, string& _Genre, int _PlayTime) : Game(_GameName, _Age, _Genre, _PlayTime)
{

}

Elementary_Student::~Elementary_Student()
{
}

void Elementary_Student::Play()
{
	cout << "Virtual Func Test" << "\n";
}
