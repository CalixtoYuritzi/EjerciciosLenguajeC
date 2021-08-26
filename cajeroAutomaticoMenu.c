//Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dolares.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int opc,saldo=1000;
	float agregar, retirar;
	
	setlocale(LC_ALL,"");
	printf("\n ~~~   Bienvenido a su Cajero Virtual   ~~~");
	printf("\n1.-Ingreso en cuenta.");
	printf("\n2.- Retirar dinero de la cuenta.");
	printf("\n3.-Salir.");
	printf("\nOpción: ");
	scanf("%i",&opc);
	
	switch(opc){
		case 1: printf("\nCuanto dinero deseas ingresar en la cuenta: ");
		        scanf("%f",&agregar);
		        saldo +=agregar;
		        printf("\nEl saldo total es: $%i", saldo);
		        break;
		case 2: printf("\nCuanto dinero desea retirar: ");
		        scanf("%f",&retirar);
				if(retirar > saldo){
					printf("\nLa cantidad a retirar es mayor al saldo.");
				}
				else{
					saldo -=retirar;
					printf("\nEl saldo disponible es de: $%i", saldo);
				}
				break;
		case 3:break;
		default: printf("\nSe equivoco de opción en el menú.");		
	}
	
	return 0;
}
