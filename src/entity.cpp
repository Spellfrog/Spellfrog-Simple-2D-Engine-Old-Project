#include "Entity.hpp"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

std::vector<Entity*> Entity::objList;

Entity::Entity(Vector2f p_pos, SDL_Texture* p_tex)
	:pos(p_pos), tex(p_tex)
{
	currentFrame.x = 0;
	currentFrame.y = 0;
	currentFrame.w = 48;
	currentFrame.h = 48;

	objList.push_back(this);
}

