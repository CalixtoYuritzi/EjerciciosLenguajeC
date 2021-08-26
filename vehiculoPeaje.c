/*Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor númerico
   1.- Turismo = $500
   2.- Autobus = $3000
   3.- Motocicleta = $300
   
   Caso contrario - Vehículo no encontrado
*/

#include <stdio.h>
#include <stdlib.h>  //Pueden clasificarse en las siguientes categorías: conversión, memoria, control de procesos, ordenación y búsqueda, matemáticas.
#include <locale.h>  //Añade paquetes de idiomas.

int main(int argc, char *argv[]){
	int opc;
	
	setlocale(LC_ALL,"");
	printf("Seleciona el tipo de vehículo con su respectiva tarifa\n");
	printf("\n1.-Turismo = $500. \n2.-Autobús = $3000. \n3.-Motocicleta = $300.\n");
	printf("\nDigita la opción que deseas usar: ");
	scanf("%i",&opc);
	
	switch(opc){
		case 1:printf("\nTurismo con costo de $500.");break;
		case 2:printf("\nAutobús con costo de $3000.");break;
		case 3:printf("\nMotocicleta con costo de $300.");break;
		default:printf("\nIrás a pie");
	}
	
	return 0;
}
