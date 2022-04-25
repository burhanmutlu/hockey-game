#ifndef RACKET_H
#define RACKET_H

class Racket
{
	public:
		int xsol1, ysol1, xsol2, ysol2;
		int xsag1, xsag2, ysag1, ysag2;
	public:
		Racket(int width, int height);
		~Racket();
		void drawRacket();
		
};

#endif
