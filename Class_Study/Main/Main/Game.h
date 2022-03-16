#pragma once
#include <iostream>
#include <string>
using namespace std;
class Game
{
private:
	string Name;
	int Age;
	string Genre;
	int PlayTime;
public:
	Game(string& GameName, int _Age, string _Genre, int _PlayTime);
	~Game();
	virtual void Play();
};

