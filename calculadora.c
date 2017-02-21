#include <stdio.h>

void imprimirMenu();
int leerOpcion();
void imprimirMenuBinDec();}
double suma(double,double);
double resta(double,double);
double multiplicacion(double,double);

int main(){
    imprimirMenu();
    
    switch (leerOpcion()){
		case 1:
		      break;
		case 2:
		      break;
		case 3:
		      break;
		case 4:
		      break;
	}
}

void imprimirMenu(){
	printf("\n CALCULADORA");
	printf("\n 1. Suma");
	printf("\n 2. Resta");
	printf("\n 3. Multiplicacion");
	printf("\n 4. Salir");
}

int leerOpcion(){
	int i_i_opcion;
	printf("\n Digite una opcion: ");
	scanf("%d%*c",&i_i_opcion);
	return i_i_opcion;
}
void imprimirMenuBinDec(){
	printf("\n El sistema numerico que desea utilizar es: ");
	printf("\n1. Decimal");
	printf("\n2. Binario");
}

double suma(double numero1, double numero2){
	double res_suma=numero1+numero2;
	return res_suma;
}
	
double resta(double numero1, double numero2){
	double res_resta=numero1-numero2;
	return res_resta;
}

double multiplicacion(double numero1, double numero2){
	double res_multiplicacion=numero1-numero2;
	return res_multiplicacion;
}
