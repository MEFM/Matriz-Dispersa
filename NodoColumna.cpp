#include "NodoColumna.h"

NodoColumna::NodoColumna()
{
	this->derecha = NULL;
	this->izquierda = NULL;
	this->abajo = NULL;
}

NodoColumna::NodoColumna(int x){
	this->x = x;
	this->derecha = NULL;
	this->izquierda = NULL;
	this->abajo = NULL;
}


