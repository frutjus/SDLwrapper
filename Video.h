#ifndef VIDEO_H
#define VIDEO_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
using namespace std;

#include "Window.h"
#include "Renderer.h"
#include "Rect.h"

class Video
{
	public:
	Video();
	~Video();
} video;

Video::Video()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << SDL_GetError() << endl;
	}
	
	int imgflags = IMG_INIT_JPG | IMG_INIT_PNG | IMG_INIT_TIF | IMG_INIT_WEBP;
	if (!(IMG_Init(imgflags) & imgflags))
	{
		cout << IMG_GetError() << endl;
	}
	
	if (TTF_Init() == -1)
	{
		cout << TTF_GetError() << endl;
	}
};

Video::~Video()
{
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();
};

#endif
