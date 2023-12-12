#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include <vector>


using namespace sf;
using namespace std;


class Game
{
private:
	RenderWindow* Window;
	Event Event;

	CircleShape Player;
	vector<RectangleShape> EnemyArray;

	int EnemyMax;


public:

	Game();
	~Game();

	void InitWindowPointer();
	void InitWindow();
	void DeleteWindow();

	const bool Running() const;
	void EventHandler();

	void Render();

	void InitPlayer();
	void UpdatePlayer();

	void InitEnemy();
	void InitSpawn();
	void SpawnEnemy();
	void UpdateEnemy();

};

