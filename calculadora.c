#include <stdio.h>
#define Tamano 32


void imprimirMenu();
int leerOpcion();
void imprimirMenuBinDec();
double leerNumero();
double suma(double,double);
double resta(double,double);
double multiplicacion(double,double);
void imprimirRes();
void recibirBinario( int b[]);
int convierteBinarioDecimal( int c[]);
void binario(int);

int main(){
	double numero1;
	double numero2;
	double resultado;
	int numBinario[Tamano];
    imprimirMenu();
    
    switch (leerOpcion()){
		case 1:                   // SUMA
		imprimirMenuBinDec();
		
		           if(leerOpcion()==1){
					   numero1=leerNumero();
					   numero2=leerNumero();
					   resultado=suma(numero1, numero2);
					   imprimirRes(resultado);					   	   
									   }else if (leerOpcion()==2){
										   recibirBinario(numBinario);
										   numero1=convierteBinarioDecimal(numBinario);
										   recibirBinario(numBinario);
										   numero2=convierteBinarioDecimal(numBinario);
										   resultado=suma(numero1, numero2);
										   binario(resultado);					   
										   									   
										   }
		      break;
		case 2:                   //RESTA
		imprimirMenuBinDec();
				if(leerOpcion()==1){
					   numero1=leerNumero();
					   numero2=leerNumero();
					   resultado=resta(numero1, numero2);
					   imprimirRes(resultado);
									}else if (leerOpcion()==2){
										   recibirBinario(numBinario);
										   numero1=convierteBinarioDecimal(numBinario);
										   recibirBinario(numBinario);
										   numero2=convierteBinarioDecimal(numBinario);
										   resultado=resta(numero1, numero2);
										   binario(resultado);					   
										   									   
										   }
		      break;
		case 3:                  //MULTIPLICACION
		imprimirMenuBinDec();
				if(leerOpcion()==1){
					   numero1=leerNumero();
					   numero2=leerNumero();
					   resultado=multiplicacion(numero1, numero2);
					   imprimirRes(resultado);
									}
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

void imprimirRes(double res){
	printf("\n El resultado es: %lf\n",res);
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
	double res_multiplicacion=numero1*numero2;
	return res_multiplicacion;
}
void recibirBinario( int b[]){
	int i = 0;
	for (i=0; i<Tamano; i++){
			b[i]= ' ';
			}
			printf("\n Introduzca un numero binario: \n");
			i=0;
			while((b[i++]=getchar())!= '\n' && Tamano >i){
				}
	}
	
		
int convierteBinarioDecimal(int c[]){
	int i;
	int potencia=1;
	int decimal=0;
	int inicio;
	for ( i = Tamano - 1; i >= 0; i-- ){
			if ( ' ' != c[i] ){
				inicio = i;
				break;
							  }
			}
	int valido=1;
	for ( i = inicio; i >= 0; i-- ){
				switch( c[i] ){
					case '0':
					decimal += 0*potencia;
					potencia *= 2;
					break;
					case '1':
					decimal += 1*potencia;
					potencia *= 2;
					break;
					default:
				if ( '\n' != c[i]){
					valido = 0;
					printf("\nEste caracter no es valido ");
					putchar(c[i]);
					printf("\n");
							} 
				break;
					}
		}
		if ( 1 == valido ){
					return decimal;
					}else{
						return 0;
						}
	}
	
void binario(int num){
	int aux;
	if(num==0)
		return;
		
		aux=num%2;
		num=num/2;
		binario(num);
		printf("%d", aux);
	
		
	
	}
	
	
	
			
			
			
			
			
			
	
