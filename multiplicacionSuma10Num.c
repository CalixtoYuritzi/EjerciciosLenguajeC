//Digite un numero, si el numero supera a 10, multiplique los 10 primeros numeros, sino, sumelos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int i, n, suma = 0, mult =1;
	
	setlocale(LC_ALL, "");
	printf("Digité el total de numeros: ");
	scanf("%i",&n);
	
	i = 1;
	
	if(n>10){
		while(i<=10){
			mult *= i;
			i++;
		}
		printf("\nLa multiplicación del número ingresado por los 10 primeros numeros es de: %i", mult);
	}
	else{
		while(i<=n){
			suma += i;
				i++;
		}
		printf("\nLa suma del número ingresado es de: %i", suma);
	}
	
	return 0;
}
