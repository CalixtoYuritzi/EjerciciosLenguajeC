//Factorial de un n�mero.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int i, num, factorial=1;
	
	setlocale(LC_ALL,"");
	printf("Digit� el n�mero para hallar el factorial: ");
	scanf("%i",&num);
	
	for(i=1;i<=num; i++){
		factorial *=i;
	}
	
	printf("\nEl factorial del n�mero dado es: %i", factorial);
	
	return 0;
}
