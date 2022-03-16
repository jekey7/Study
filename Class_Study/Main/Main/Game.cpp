#include "Game.h"

Game::Game(string& GameName, int _Age, string _Genre, int _PlayTime)
{
	this->Age = _Age;
	this->Genre = _Genre;
	this->PlayTime = _PlayTime;
	cout << "현재 나이 : " << Age << "\n";
	cout << "게임 장르 : " << Age << "\n";
	cout << "현재 나이 : " << Age << "\n";
}

Game::~Game()
{

}

void Game::Play()
{

}
