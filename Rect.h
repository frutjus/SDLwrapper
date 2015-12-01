#ifndef RECT_H
#define RECT_H

#include <SDL2/SDL.h>
using namespace std;

#include "Video.h"

class Rect
{
	SDL_Rect rect;
	
	public:
	Rect(int, int, int, int);
	~Rect();
	int x();
	int x(int);
	int y();
	int y(int);
	int w();
	int w(int);
	int h();
	int h(int);
};
{
Rect::Rect(int x=0, int y=0, int w=0, int h=0)
{
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;
};

Rect::~Rect() {}

int Rect::x()
{
	return rect.x;
}

int Rect::x(int x)
{
	rect.x = x;
	return x;
}

int Rect::y()
{
	return rect.y;
}

int Rect::y(int y)
{
	rect.y = y;
	return y;
}

int Rect::w()
{
	return rect.w;
}

int Rect::w(int w)
{
	rect.w = w;
	return w;
}

int Rect::h()
{
	return rect.h;
}

int Rect::h(int h)
{
	rect.h = h;
	return h;
}
}

class Point
{
	SDL_point point;
	
	public:
	Point(int, int);
	~Point();
	int x();
	int x(int);
	int y();
	int y(int);
};
{
Point::Point(int x=0, int y=0)
{
	point.x = x;
	point.y = y;
}

Point::~Point() {}

int Point::x()
{
	return point.x;
}

int Point::x(int x)
{
	point.x = x;
	return x;
}

int Point::y()
{
	return point.y;
}

int Point::y(int y)
{
	point.y = y;
	return y;
}
}

#endif