//Mostrar los meses del a�o, pidiendole al usuario un numero entre (1-12) y mostrar el mes al que corresponde.

#include <stdio.h>
#include <stdlib.h>  //Pueden clasificarse en las siguientes categor�as: conversi�n, memoria, control de procesos, ordenaci�n y b�squeda, matem�ticas.
#include <locale.h>  //A�ade paquetes de idiomas.

int main(int argc, char *argv[]){
	int num;
	
	setlocale(LC_ALL,"");
	printf("Digit� un n�mero y se mostrara el mes correspondiente: ");
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
		default:printf("\nNo es un n�mero que corresponda a un mes del a�o.");break;
	}
	
	return 0;
}
