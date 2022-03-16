#include <iostream>
#include <string>
#include "Elementary_Student.h"
#include "Middle_Schooler.h"
#include "High_School_Student.h"
using namespace std;
int main()
{
	Elementary_Student ES("Minecraft", 15, "SandBox", 3);

	ES.Play();

	return 0;
}