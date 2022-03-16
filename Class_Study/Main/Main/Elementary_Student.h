#pragma once
#include "Game.h"
#include <iostream>
class Elementary_Student : public Game
{
public:
	Elementary_Student(string& GameName, int _Age, string& _Genre, int _PlayTime);
	~Elementary_Student();
	virtual void Play();
};

