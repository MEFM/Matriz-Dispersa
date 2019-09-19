#ifndef NODOPADRE_H
#define NODOPADRE_H
#include "NodoFila.h"
#include "NodoColumna.h"

class NodoPadre
{
	
	public:
		NodoColumna* derecha;
		NodoFila* abajo;	
		NodoPadre();
		~NodoPadre();
	protected:
};

#endif
