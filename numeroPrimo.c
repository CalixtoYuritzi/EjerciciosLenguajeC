//Determinar si un n�mero es primo o no.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int i, num, cont=0;
	
	setlocale(LC_ALL,"");
	printf("Digit� un n�mero: ");
	scanf("%i",&num);
	
	for(i=1; i<=num;i++){
		if(num%i==0){
			cont++;
		}
	}
	if(cont>2){
		printf("\nEl n�mero es compuesto.");
	}
	else{
		printf("\nEl n�mero es primo.");
	}
	
	return 0;
}
