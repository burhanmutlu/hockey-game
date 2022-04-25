#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H


enum Color { SIYAH, MAVI, YESIL, CIYAN, KIRMIZI, MOR, KAHVERENGI, ACIKGRI, KOYUGRI,
	ACIKMAVI, ACIKYESIL, ACIKCIYAN, ACIKKIRMIZI, ACIKMOR, SARI, BEYAZ };


class GameInterface
{
	private:
		int width;
		int height;
	public:
		GameInterface();
		GameInterface(int width, int height);
		~GameInterface();
		bool openWindow(int width, int height);
		void setBackgroungColor(enum Color color);
		void drawField();
		int getWidth();
		int getHeight();
		void setWidth(int width);
		void setHeight(int height);
};

#endif
