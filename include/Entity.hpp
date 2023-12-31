#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Math.hpp"

class Entity
{
public:
	Entity(Vector2f p_pos, SDL_Texture* p_tex);

	Vector2f getPos()
	{
		return pos;
	}

	void setPos(Vector2f p_pos)
	{
		pos = p_pos;
	}

	SDL_Texture* getTex()
	{
		return tex;
	}

	SDL_Rect getCurrentFrame()
	{
		return currentFrame;
	}
private:
	Vector2f pos;

	SDL_Rect currentFrame;
	SDL_Texture* tex;
};