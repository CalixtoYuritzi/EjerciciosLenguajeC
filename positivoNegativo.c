/*Comprobar si un numero digitado por el usuario es positivo o negativo*/

#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite el numero para combrobar si es positivo o negativo: ");
	scanf("%i", &numero);
	
	if (numero < 0){
		puts("\nEl numero es negativo");
	}
	else if (numero > 0){
		puts("\nEl numero es positivo");
	}	
	
	
	return 0;
}
