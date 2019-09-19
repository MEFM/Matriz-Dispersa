#include "NodoFila.h"

NodoFila::NodoFila()
{
	this->arriba = NULL;
	this->abajo = NULL;
	this->derecha = NULL;
}

NodoFila::NodoFila(int y){
	this->y = y;
	this->arriba = NULL;
	this->abajo = NULL;
	this->derecha = NULL;
	
}

NodoFila::~NodoFila()
{
}
