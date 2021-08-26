//Mostrar los meses del año, pidiendole al usuario un numero entre (1-12) y mostrar el mes al que corresponde.

#include <stdio.h>
#include <stdlib.h>  //Pueden clasificarse en las siguientes categorías: conversión, memoria, control de procesos, ordenación y búsqueda, matemáticas.
#include <locale.h>  //Añade paquetes de idiomas.

int main(int argc, char *argv[]){
	int num;
	
	setlocale(LC_ALL,"");
	printf("Digité un número y se mostrara el mes correspondiente: ");
	scanf("%i",&num);
	
	switch(num){
		case 1:printf("\nEnero");break;
		case 2:printf("\nFebrero");break;
		case 3:printf("\nMarzo");break;
		case 4:printf("\nAbril");break;
		case 5:printf("\nMayo");break;
		case 6:printf("\nJunio");break;
		case 7:printf("\nJulio");break;
		case 8:printf("\nAgosto");break;
		case 9:printf("\nSeptiembre");break;
		case 10:printf("\nOctubre");break;
		case 11:printf("\nNoviembre");break;
		case 12:printf("\nDiciembre");break;
		default:printf("\nNo es un número que corresponda a un mes del año.");break;
	}
	
	return 0;
}
