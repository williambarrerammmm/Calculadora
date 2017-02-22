#include <stdio.h>

void imprimirMenu();
int leerOpcion();
void imprimirMenuBinDec();
double leerNumero();
double suma(double,double);
double resta(double,double);
double multiplicacion(double,double);
int main(){
	double numero1;
	double numero2;
	double resultado;
    imprimirMenu();
    
    switch (leerOpcion()){
		case 1:                   // SUMA
		imprimirMenuBinDec();
		leerOpcion();
		           if(leerOpcion()==1){
					   numero1=leerNumero();
					   numero2=leerNumero();
					   resultado=suma(numero1, numero2);
					 ;
					   
					   
										
					                }
		      break;
		case 2:                   //RESTA
		imprimirMenuBinDec();
		leerOpcion();
		      break;
		case 3:                  //MULTIPLICACION
		imprimirMenuBinDec();
		leerOpcion();
		      break;
		case 4:                  // SALIDA
		leerOpcion();
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

double leerNumero(){
	double i_i_operacion=0;
	printf("\n Digite un numero: ");
	scanf("%lf%*c",&i_i_operacion);
	return i_i_operacion;
	}
	
int leerOpcion(){
	int i_i_opcion=0;
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
