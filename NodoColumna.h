#ifndef NODOCOLUMNA_H
#define NODOCOLUMNA_H
#include "NodoDisperso.h"

class NodoColumna
{
	private:
	
	public:
		int x;
		NodoColumna* derecha;
		NodoColumna* izquierda;
		NodoDisperso* abajo;
		NodoColumna(int);
		NodoColumna();
		~NodoColumna();
	protected:
};

#endif
