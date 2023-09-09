#pragma once

#include "RenderWindow.hpp"

class GameManager
{
public:
	GameManager()
	:gameRunning(true), window("Basic 2D Physics Engine", 1280, 720)
	{}
	void init();
	void update();

	RenderWindow getWindow()
	{
		return window;
	}

	bool gameRunning;

private:
	RenderWindow window;
};

extern GameManager game;
