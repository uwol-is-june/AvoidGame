#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;

class Game
{
private:
	RenderWindow* Window;
	Event Event;

	CircleShape Player;

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
};

