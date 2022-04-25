#include "Ball.h"
#include <graphics.h>

Ball::Ball()
{
	x = 50;
	y = 50;
	r = 10;
	dx = 3;
	dy = 3;
}

Ball::~Ball()
{
}

void Ball::drawBall()
{
	circle(x, y, r);
}

void Ball::topSil()
{
	setcolor(BLACK);
	circle(x, y, r);
	setcolor(WHITE);
}
