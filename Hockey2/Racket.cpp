#include "Racket.h"
#include <graphics.h>


Racket::Racket(int width, int height)
{
	xsol1 = 40;
	xsol2 = 60;
	ysol1 = height/2-30;
	ysol2 = height/2 + 30;
	xsag1 = 640;
	xsag2 = 660;
	ysag1 = height/2-30;
	ysag2 = height/2 + 30;
}

Racket::~Racket()
{
}

void Racket::drawRacket()
{
	rectangle(xsol1, ysol1, xsol2, ysol2 );
	rectangle(xsag1, ysag1, xsag2, ysag2 );
}
