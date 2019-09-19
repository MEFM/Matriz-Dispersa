#include "Matriz.h"

Matriz::Matriz()
{
	this->raiz = NULL;
}

Matriz::~Matriz()
{
}

NodoColumna* Matriz::insertarColumna(NodoPadre* raiz, NodoDisperso* nuevo){
	if(raiz->derecha == NULL){
		raiz->derecha = new NodoColumna(nuevo->getX());
		return raiz->derecha;
	}else{
		NodoColumna* auxiliar = raiz->derecha;
		
		if(auxiliar->x > nuevo->getX()){
			raiz->derecha = new NodoColumna(nuevo->getX());
			raiz->derecha->derecha = auxiliar;
			auxiliar->izquierda = raiz->derecha;
			return raiz->derecha;
		}
		while(auxiliar->derecha != NULL){
			
			if(auxiliar->x == nuevo->getX()){
				return auxiliar;
			}
			else if(auxiliar->x > nuevo->getX()){
				NodoColumna* iz = auxiliar->izquierda;
				NodoColumna* nue = new NodoColumna(nuevo->getX());
				
				nue->derecha = auxiliar;
				auxiliar->izquierda = nue;
				iz->derecha = nue;
				nue->izquierda = iz;
				
				return nue;
				
			}
			else if(auxiliar->derecha == NULL){
				auxiliar->derecha = new NodoColumna(nuevo->getX());
				auxiliar->derecha->izquierda = auxiliar;
				return auxiliar->derecha;
			}
			
			auxiliar = auxiliar->derecha;
		}
	}
}

NodoFila* Matriz::insertarFila(NodoPadre* raiz, NodoDisperso* nuevo){
	if(raiz->abajo == NULL){
		raiz->abajo = new NodoFila(nuevo->getY());
		return raiz->abajo;
	}
	else{
		NodoFila* auxiliar = raiz->abajo;
		
		if(auxiliar->y > nuevo->getY()){
			
			raiz->abajo = new NodoFila(nuevo->getY());
			raiz->abajo->abajo = auxiliar;
			auxiliar->arriba = raiz->abajo;
			return raiz->abajo;
		}
		
		while(auxiliar->abajo != NULL){
			if(auxiliar->y == nuevo->getY()){
				return auxiliar;
			}
			else if(auxiliar->y > nuevo->getY()){
				NodoFila* arr = auxiliar->arriba;
				NodoFila* nue = new NodoFila(nuevo->getY());
			
				nue->abajo = auxiliar;
				auxiliar->arriba = nue;
				arr->abajo = nue;
				nue->arriba = arr;
			
				return nue;
	
		
			}
			else if(auxiliar->abajo == NULL){
				auxiliar->abajo = new NodoFila(nuevo->getY());
				auxiliar->abajo->arriba = auxiliar;
				return auxiliar->abajo;
			}
			auxiliar = auxiliar->abajo;
	}
		
}
	
}

bool Matriz::insertColum(NodoColumna* columna, NodoDisperso* nuevo){
	
	NodoDisperso* temporal = columna->abajo;
	
	if(temporal == NULL){
		columna->abajo = temporal;
		return true;
	}	
	
	while(temporal != NULL){
		if(temporal->getX() == nuevo->getX() && temporal->getY() == nuevo->getY()){
			return false;
		}
		temporal = temporal->abajo;

	}
	
	temporal = columna->abajo;
	
	if(columna->abajo->getX() > nuevo->getX()){
		NodoDisperso* aux = columna->abajo;
		columna->abajo = nuevo;
		nuevo->abajo = aux;
		aux->arriba = columna->abajo;
		return true;
	}
	
	while(temporal != NULL){
		if(columna->abajo->getX() > nuevo->getX()){
			NodoDisperso* tempA = temporal->arriba;
			tempA->abajo = nuevo;
			nuevo->arriba = tempA;
			nuevo->abajo = temporal;
			temporal->arriba = nuevo;
			return true;
		}
		else if(temporal->abajo == NULL){
			temporal->abajo = nuevo;
			nuevo->arriba = temporal;
			return true;
		}
		temporal = temporal->abajo;
	}
	return false;
}

bool Matriz::insertFila(NodoFila* fila, NodoDisperso* nuevo){
	NodoDisperso* temporal = fila->derecha;
	
	if(temporal == NULL){
		fila->derecha = nuevo;
		return true;
	}
	
	while(temporal != NULL){
		
		if(temporal->getX() == nuevo->getX() && temporal->getY() == nuevo->getY()){
			return false;
		}
		temporal = temporal->derecho;
	}
	
	temporal = fila->derecha;
	
	if(fila->derecha->getY() > nuevo->getY()){
		NodoDisperso* auxiliar = fila->derecha;
		fila->derecha = nuevo;
		nuevo->derecho = auxiliar;
		auxiliar->izquierda = fila->derecha;
		return true;	
	}
	
	while(temporal!= NULL){
		if(temporal->getY() > nuevo->getY()){
			NodoDisperso* temporalA = temporal->izquierda;
			temporalA->derecho = nuevo;
			nuevo->izquierda = temporalA;
			nuevo->derecho = temporal;
			temporal->izquierda = nuevo;
			return true;	
		}else if(temporal->derecho == NULL){
			temporal->derecho = nuevo;
			nuevo->izquierda = temporal;
			return true;
		}
		
		temporal = temporal->derecho;
	}
	
	return false;
}

void Matriz::insertar(int x, int y, string color){
	NodoDisperso* nuevo = new NodoDisperso(x, y, color);
	if(this->raiz == NULL){
		this->raiz = new NodoPadre();
	}
		NodoColumna* columnaActual = insertarColumna(raiz, nuevo);
		NodoFila* filaActual = insertarFila(raiz, nuevo);		
		bool columna, fila ;
		
		columna = this->insertColum(columnaActual, nuevo);
		fila = this->insertFila(filaActual, nuevo);
		
		if((columna && fila) == true){
			cout<<"Si inserto correctamente"<<endl;
		}else{
			cout<<"Se presento un error en la insecion"<<endl;
			
		}
	
}


