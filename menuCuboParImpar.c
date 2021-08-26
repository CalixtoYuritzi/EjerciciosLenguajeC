/*Hacer un menu que considere las siguientes operaciones:
case 1: Cubo de un numero
case 2: Numero par o impar
case 3: Salir.  */

#include <stdio.h>
int main(){
	int opcion,num, cubo, n1;
	
	printf("Elige la opcion que utilizaras: ");
	printf("\n1.- Cubo de un numero.");
	printf("\n2.- Numero par o impar");
	printf("\n3.- Salir");
	printf("\nDigita el numero de la opcion que quieras: ");
	scanf("%i",&opcion);
	
	switch(opcion){
		case 1: printf("\nDigita un numero: ");
		        scanf("%i",&num);
		        cubo= num*num*num;
		        printf("\nEl cubo del  numero es: %i", cubo);
		break;
		
		case 2: printf("\nDigita un numero: ");
		        scanf("%i",&n1);
		        
		        if(n1 % 2==0){
		        	printf("\nEl numero es par");
		        } 
				else if(n1%2!=0){
		        	printf("\nEl numero es impar");
		        }
		break;
		
		case 3: break;
	}
	
	return 0;
}
