#ifndef NODOFILA_H
#define NODOFILA_H
#include "NodoDisperso.h"

class NodoFila
{
	private:
		
	public:
		int y;
		NodoFila* arriba;
		NodoFila* abajo;
		NodoDisperso* derecha;
		NodoFila(int);
		NodoFila();
		~NodoFila();
	protected:
};

#endif
