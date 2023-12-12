#include "Game.h"

Game::Game() {
	this->InitWindowPointer();
	this->InitWindow();

	this->InitPlayer();
	this->InitEnemy();
	this->InitSpawn();
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
	this->Player.setRadius(30.0f);
	this->Player.setFillColor(Color(217, 207, 98, 255));
	this->Player.setPosition(
		float(this->Window->getSize().x/2 - 30.0f), 
		float(this->Window->getSize().y/2 - 30.0f));
}

void Game::UpdatePlayer() {
	if (Keyboard::isKeyPressed(Keyboard::Left)) {

	}
}

void Game::InitEnemy() {
	this->Enemy.setSize(Vector2f(60.0f, 60.0f));
	this->Enemy.setFillColor
	this->Enemy.
}

void Game::InitSpawn() {

}

void Game::SpawnEnemy() {

}

void Game::UpdateEnemy() {
	this->SpawnEnemy();
	if (this->EnemyArray.size() < this->EnemyMax) {
		this->SpawnEnemy();
		this->IntervalStart = 0.0f;
	}
	else {
		this->IntervalStart += 1.0f;
	}

		for (int i = 0; i < this->EnemyArray.size()l i++) {
			this->EnemyArray[i].move(0.0f, 1.0f);
	}
}