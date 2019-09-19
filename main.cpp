#include <iostream>
#include <string>
#include "Matriz.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Matriz matriz;

int main(int argc, char** argv) {
	
	matriz.insertar(5, 6, "hola");
//	matriz.insertar(9, 10, "asdfadsf");
	matriz.insertar(9, 11, "asdfadsf");
//	matriz.insertar(9, 112, "asdfadsf");
		
	system("pause");
	return 0;
}
