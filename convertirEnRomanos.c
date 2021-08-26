//Cambiar un numero entero con el mismo valor pero en romanos

#include<stdio.h>
#include <stdlib.h>  //Pueden clasificarse en las siguientes categor�as: conversi�n, memoria, control de procesos, ordenaci�n y b�squeda, matem�ticas.
#include <locale.h>  //A�ade paquetes de idiomas.

int main(int argc, char *argv[]){
	int numero, unidades, decenas, centenas, millares; 
	
	setlocale(LC_ALL,"");
	printf("Digit� un n�mero: ");
	scanf("%i",&numero);
	printf("\n\n");
	
	unidades = numero%10; numero = numero/10;
	decenas = numero%10; numero = numero/10;
	centenas = numero%10; numero = numero/10;
	millares = numero%10; numero = numero/10;
	
	switch(millares){
		case 1:printf("M"); break;
		case 2:printf("MM"); break;
		case 3:printf("MMM"); break;
	}
	
	switch(centenas){
		case 1:printf("C"); break;
		case 2:printf("CC"); break;
		case 3:printf("CCC"); break;
		case 4:printf("CD"); break;
		case 5:printf("D"); break;
		case 6:printf("DC"); break;
		case 7:printf("DCC"); break;
		case 8:printf("DCCC"); break;
		case 9:printf("CM"); break;
	}
	
	switch(decenas){
		case 1:printf("X"); break;
		case 2:printf("XX"); break;
		case 3:printf("XXX"); break;
		case 4:printf("XL"); break;
		case 5:printf("L"); break;
		case 6:printf("LX"); break;
		case 7:printf("LXX"); break;
		case 8:printf("LXXX"); break;
		case 9:printf("XC"); break;
	}
	
	switch(unidades){
		case 1:printf("I"); break;
		case 2:printf("II"); break;
		case 3:printf("III"); break;
		case 4:printf("IV"); break;
		case 5:printf("V"); break;
		case 6:printf("VI"); break;
		case 7:printf("VII"); break;
		case 8:printf("VIII"); break;
		case 9:printf("IX"); break;
	}
	
	return 0;
}
