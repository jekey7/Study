#include "Game.h"

Game::Game(string& GameName, int _Age, string _Genre, int _PlayTime)
{
	this->Age = _Age;
	this->Genre = _Genre;
	this->PlayTime = _PlayTime;
	cout << "���� ���� : " << Age << "\n";
	cout << "���� �帣 : " << Age << "\n";
	cout << "���� ���� : " << Age << "\n";
}

Game::~Game()
{

}

void Game::Play()
{

}
