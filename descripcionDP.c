//Directivas del Procesador (Son las que tienen las librerias y macros) y Directivas.

#include<stdio.h>//Libreria
#define PI 3.1416 //Macro

int y = 5; //Variable Global: Se puede utilizar a lo largo del programa

int main (){
	
	int x = 10; //Variable Local: Se encuentra dentro de una funci�n
	float suma = 0;
	
	suma = PI + x;
	
	printf("La suma es: %.3f", suma);/*El simbolo %f.3f, significa que se imprimira un numero real flotante,
	                                   despu�s de tres numeros del punto, 
	                                   si fuera entero ser�a: %i.3i
	                                   */
	return 0;
} 
