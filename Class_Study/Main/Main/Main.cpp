#include <iostream>
#include <string>
#include "Elementary_Student.h"
#include "Middle_Schooler.h"
#include "High_School_Student.h"
#include "University.h"
using namespace std;
int main()
{
	Elementary_Student ES;
	Middle_Schooler MS;
	High_School_Student HS;
	University US;
	int age = 0;

	cin >> age;

	if (age >= 12 && age <= 13) {
		ES.Input(age);
		ES.Play();
	}
	else if (age >= 14 && age <= 16) {
		MS.Input(age);
		MS.Play();
	}
	else if (age >= 17 && age <= 19) {
		HS.Input(age);
		HS.Play();
	}
	else if (age >= 20 && age <= 21) {
		US.Input(age);
		US.Play();
	}
	else {
		cout << "ERROR!\n";
	}
	
	return 0;
}