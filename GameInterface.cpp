#include "GameInterface.h"
#include <graphics.h>


GameInterface::GameInterface()
{
	initwindow(500, 500);
}

GameInterface::GameInterface(int width, int height)
{
	this->width = width;
	this->height = height;
	initwindow(width, height);
}

GameInterface::~GameInterface()
{
	closegraph();
	//Free(width);
}

bool GameInterface::openWindow(int width, int height)
{
	this->width = width;
	this->height = height;
	if(width == 0 || height == 0 ) {
		return 0;
	} else {
		initwindow(width, height);
		return 1;
	}
}

void GameInterface::setBackgroungColor(enum Color color)
{
	setbkcolor(color);
	cleardevice();
}

void GameInterface::drawField()
{
	rectangle(20, 20, this->width-20 , this->height-20); // tam alan
	line(this->width/2, 20, this->width/2, this->height-20);
	pieslice(this->width/2, this->height/2, 0, 360, 25);
}

int GameInterface::getWidth()
{
	return this->width;
}

int GameInterface::getHeight()
{
	return this->height;
}

void GameInterface::setWidth(int width)
{
	this->width = width;
}

void GameInterface::setHeight(int height)
{
	this->height = height;
}

