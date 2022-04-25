#include <graphics.h>
#include <iostream>
#include "gameinterface.h"
#include "Ball.h"
#include "Racket.h"

using namespace std;

int width=700, height=400;

int main()
{
	
	GameInterface game(width, height );
	Racket racket(width, height );
	Ball ball;
	//sabit alan çizimi
	game.setWidth(width);
	game.setHeight(height);
	game.setBackgroungColor(SIYAH);
	int tus=0;
	
	while(true) {
		game.drawField(); // alan çiz
		racket.drawRacket(); // raketler
		ball.drawBall(); // top çiz 
		
		
		// týklama olursa çalýþsýn
		if(kbhit()) { 
		  tus = getch();
	  	}
	  	// 1. oyuncu
	    if(tus == 119 ) { 		// yukarý w
    	  if(racket.ysol1 > 23) {
    		racket.ysol1 = racket.ysol1-10; 
    		racket.ysol2 = racket.ysol2-10;
		  }	    	
	  	} 
		else if(tus == 115 ) { // aþaðý s
		  if(racket.ysol2 < height - 23) {
			racket.ysol1 = racket.ysol1+10; 
	    	racket.ysol2 = racket.ysol2+10;
    	  }
		}
		// 2. oyuncu
		if(tus == KEY_UP ) { 		// yukarý yön u
		  if(racket.ysag1 > 23) {
	    	racket.ysag1 = racket.ysag1-10; 
	    	racket.ysag2 = racket.ysag2-10;
    	  }
	  	}	 
	  	else if(tus == KEY_DOWN ) { // aþaðý yön d
  		  if(racket.ysag2 < height - 23) {
	    	racket.ysag1 = racket.ysag1+10; 
	    	racket.ysag2 = racket.ysag2+10;
    	  }
	  	}
	  	
	  	delay(15); // bunu yapmaz isen iþlemci sürekli iþlem yapar ve kötü oyun yapmýþ olursun
		
		// her defasýnda silinmesin iþlem var ise silsin    
		if(tus != 0 ) { 
		  cleardevice();
		  tus = 0;
		}
		
		ball.topSil(); // siyah rengi ile saklarýz
		ball.x = ball.x + ball.dx;
		ball.y = ball.y + ball.dy;
		
		if(ball.x > width - 20 || ball.x < 30 ) {
			ball.dx *= -1; 
		} 
		if(ball.y > height - 20 || ball.y < 30 ) {
			ball.dy *= -1;
		}
	}
	
	
	getch();
	return 0;
}
