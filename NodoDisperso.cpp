#include "NodoDisperso.h"

NodoDisperso::NodoDisperso()
{
	
}

NodoDisperso::NodoDisperso(int x, int y, string color){
	this->x = x;
	this->y = y;
	this->color = color;
	this->arriba = NULL;
	this->abajo = NULL;
	this->izquierda = NULL;
	this->derecho = NULL;
}

NodoDisperso::~NodoDisperso()
{
}


void NodoDisperso::setColor(string color){
	this->color = color;
}

void NodoDisperso::setX(int x){
	this->x = x;
}

void NodoDisperso::setY(int y){
	this->y = y;
}

string NodoDisperso::getColor(){
	return color;
}

int NodoDisperso::getX(){
	return x;
}

int NodoDisperso::getY(){
	return y;
}
