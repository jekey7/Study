#include "Game.h"

Game::Game()
{
	this->Name = "None";
	this->Age = 0;
	this->Genre = "None";
	this->PlayTime = "None";
}

Game::~Game()
{

}

string Game::GameName()
{
	return Name;
}

string Game::GameGenre()
{
	return Genre;
}

string Game::GamePlayTime()
{
	return PlayTime;
}

void Game::Input(int _Age)
{
	this->Age = _Age;
	if (this->Age == 12) {
		this->Name = "Minecraft";
		this->Genre = "SandBox";
		this->PlayTime = "N/A";
	}
	else if (this->Age == 13 || this->Age == 14 || this->Age == 18) {
		this->Name = "League of Legends";
		this->Genre = "AOS";
		this->PlayTime = "3000 + a";
	}
	else if (this->Age == 15) {
		this->Name = "Overwatch";
		this->Genre = "Hyper FPS";
		this->PlayTime = "2000 + a";
	}
	else if (this->Age == 16 || this->Age == 17) {
		this->Name = "Battlegrounds";
		this->Genre = "BattleRoyal";
		this->PlayTime = "1300 + a";
	}
	else if (this->Age == 19 || this->Age == 20) {
		this->Name = "Eternal Return";
		this->Genre = "BattleRoyal, MOBA";
		this->PlayTime = "420 + a";
	}
	else if (this->Age == 21) {
		this->Name = "Teamfight Tactics";
		this->Genre = "AutoBattler";
		this->PlayTime = "N/A";
	}
}

void Game::Play()
{

}
