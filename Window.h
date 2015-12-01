#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <iostream>
#include <string>
using namespace std;

#include "Video.h"

class Window
{
	SDL_Window *win;
	
	public:
	Window(string, );
	~Window();
	SDL_Window *window();
};

Window::Window(string n, )
{
	win = NULL;
	win = SDL_CreateWindow();
	if (win == NULL)
	{
		cout << SDL_GetError() << endl;
	}
}

Window::~Window()
{
	SDL_DestroyWindow(win);
}

SDL_Window *Window::window()
{
	return win;
}

#endif