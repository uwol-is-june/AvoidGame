#include "Game.h"

Game::Game() {
	this->InitWindowPointer();
	this->InitWindow();

	this->InitPlayer();
}

Game::~Game() {
	this->DeleteWindow();
}

void Game::InitWindowPointer() {
	this->Window = nullptr;
}

void Game::InitWindow()
{
	this->Window = new RenderWindow(VideoMode(1280, 720), "Avoid Game", Style::Titlebar | Style::Close);
}

void Game::DeleteWindow() {
	delete this->Window;
}

const bool Game::Running() const{
	return this->Window->isOpen();
}

void Game::EventHandler() {
	while (this->Window->pollEvent(Event)) {
		switch (Event.type)
		{
		case Event::Closed:
			this->Window->close();
			break;
		case Event::KeyPressed:
			if (Event.key.code == Keyboard::Escape) this->Window->close();
			break;
		}
	}
}

void Game::Render() {
	this->Window->clear(Color(50, 50, 50, 255));
	this->Window->draw(this->Player);
	this->Window->display();
}

void Game::InitPlayer() {
	this->Player.setRadius(100.0f);
	this->Player.setFillColor(Color(255, 0, 0, 255));
	this->Player.setPosition(100,100);
}