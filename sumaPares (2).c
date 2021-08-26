//  Imprimir la suma de todos los numeros pares que hay desde 1 hasta n, y diga cuales numeros hay.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int num, i, acum = 0,cont=0;
	
	setlocale(LC_ALL, "");
	printf("Digita un número: ");
	scanf("%i",&num);
	
	for(i=1; i<=num; i++){
		if(i%2==0){
			acum += i;
			cont +=1; 
			printf("%i. \n", i);
		}
	}	
	
	printf("La suma de numeros pares es: %i", acum);
	printf("\nHay %i numeros", cont);
	
	return 0;
}
