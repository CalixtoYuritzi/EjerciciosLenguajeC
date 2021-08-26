#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite el numero: ");
	scanf("%i",&numero);
	
	if(numero % 2 == 0){
		printf("\nEl numero es par");
	}
	if(numero % 2 != 0){
		printf("\nEl numero es impar");
	}
	
	return 0;
}
