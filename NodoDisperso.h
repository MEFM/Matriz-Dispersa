#ifndef NODODISPERSO_H
#define NODODISPERSO_H
#include <string>
//#include "NodoColumna.h"

using namespace std;
class NodoDisperso
{
	private:
	
		int x, y;
		string color;
		
	public:
		NodoDisperso* arriba;
		NodoDisperso* abajo;
		NodoDisperso* izquierda;
		NodoDisperso* derecho;
		
		void setX(int);
		void setY(int);
		void setColor(string);
		int getX();
		int getY();
		string getColor();
		NodoDisperso(int, int, string);
		NodoDisperso();
		~NodoDisperso();
	protected:
};

#endif
