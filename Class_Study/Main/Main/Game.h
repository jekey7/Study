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
	string PlayTime;
public:
	Game();
	~Game();
	string GameName();
	string GameGenre();
	string GamePlayTime();
	void Input(int _Age);
	virtual void Play();
};

