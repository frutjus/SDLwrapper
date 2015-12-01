#ifndef RECT_H
#define RECT_H

#include <SDL2/SDL.h>
using namespace std;

#include "Video.h"

class Renderer
{
	SDL_Renderer *renderer;
	
	public:
	Renderer(Window &);
	~Renderer();
};

Renderer::Renderer(Window &win)
{
	renderer = NULL;
	renderer = SDL_CreateRenderer(win.window(), -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE);
	if (renderer == NULL)
	{
		cout << SDL_GetError() << endl;
	}
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
}

Renderer::~Renderer()
{
	SDL_DestroyRenderer(renderer);
}

#endif