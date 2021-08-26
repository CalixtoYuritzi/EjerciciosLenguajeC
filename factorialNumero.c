//Factorial de un número.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int i, num, factorial=1;
	
	setlocale(LC_ALL,"");
	printf("Digité el número para hallar el factorial: ");
	scanf("%i",&num);
	
	for(i=1;i<=num; i++){
		factorial *=i;
	}
	
	printf("\nEl factorial del número dado es: %i", factorial);
	
	return 0;
}
