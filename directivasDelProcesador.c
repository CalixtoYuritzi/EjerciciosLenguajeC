//Directivas del Procesador.

#include <stdio.h>  //Libreria.
#define PI 3.1416   //Libreria.

//int y=5;   //Variable Global.

int main(){
	
	int x = 10;  //Variable Local.
	float suma = 0;
	
	suma = PI + x;
	
	printf("La suma es: %.3f", suma);	
	
	return 0;
}

/*
Directivas del Procesador: Son las que tienen las librerias y macros.
Macros: Definir una variable al programa.
Variable Global: Se puede utilizar a lo largo del programa.
Variable Local: Esta dentro de una función.
*/
