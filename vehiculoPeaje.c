/*Seleccionar un tipo de veh�culo e indicar el peaje a pagar seg�n un valor n�merico
   1.- Turismo = $500
   2.- Autobus = $3000
   3.- Motocicleta = $300
   
   Caso contrario - Veh�culo no encontrado
*/

#include <stdio.h>
#include <stdlib.h>  //Pueden clasificarse en las siguientes categor�as: conversi�n, memoria, control de procesos, ordenaci�n y b�squeda, matem�ticas.
#include <locale.h>  //A�ade paquetes de idiomas.

int main(int argc, char *argv[]){
	int opc;
	
	setlocale(LC_ALL,"");
	printf("Seleciona el tipo de veh�culo con su respectiva tarifa\n");
	printf("\n1.-Turismo = $500. \n2.-Autob�s = $3000. \n3.-Motocicleta = $300.\n");
	printf("\nDigita la opci�n que deseas usar: ");
	scanf("%i",&opc);
	
	switch(opc){
		case 1:printf("\nTurismo con costo de $500.");break;
		case 2:printf("\nAutob�s con costo de $3000.");break;
		case 3:printf("\nMotocicleta con costo de $300.");break;
		default:printf("\nIr�s a pie");
	}
	
	return 0;
}
