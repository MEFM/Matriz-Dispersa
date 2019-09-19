#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include <string>
#include "NodoPadre.h"

using namespace std;
class Matriz
{
	private:
		NodoPadre* raiz;
	public:
		
		void insertar(int, int, string);
		NodoColumna* insertarColumna(NodoPadre*, NodoDisperso*);
		NodoFila* insertarFila(NodoPadre*, NodoDisperso*);
		
		bool insertColum(NodoColumna*, NodoDisperso*);
		bool insertFila(NodoFila*, NodoDisperso*);
		
		Matriz();
		~Matriz();
	protected:
};

#endif
