#ifndef TEXTURE_H
#define TEXTURE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <string>
using namespace std;

#include "Video.h"

class Texture
{
	protected:
	SDL_Texture *texture;
	
	public:
	Texture();
	~Texture();
};

Texture::Texture()
{
	texture = NULL;
}

Texture::~Texture()
{
	
}

#endif