#include <stdio.h>

void imprimirMenu();
int leerOpcion();

int main(){
    imprimirMenu();
    
    switch (leerOpcion()){
		case 1:
		      break;
		case 2:
		      break;
		case 2:
		      break;
		case 2:
		      break;
	}
}

void imprimirMenu(){
	printf("/n CALCULADORA");
	printf("/n 1. Suma");
	printf("/n 2. Resta");
	printf("/n 3. Multiplicacion");
	printf("/n 4. Salir");
}

int leerOpcion(){
	int i_i_opcion;
	printf("/n Digite una opcion");
	scanf("%d%*c",&i_i_opcion);
	return i_i_opcion;
}
