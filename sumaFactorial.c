//Calcule la suma de factoriales.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int i, n1, n2, f1=1, f2=1, suma=0;
	
	setlocale(LC_ALL,"");
	printf("Digit� un n�mero para hallar su factorial: ");
	scanf("%i",&n1);
	printf("Digit� otro n�mero para hallar su factorial: ");
	scanf("%i",&n2);
	
	for(i=1; i<=n1;i++){
		f1 *=i;
	}
	printf("\nEl factorial del n�mero es: %i\n",f1);
	
	for(i=1; i<=n2; i++){
		f2 *=i;
	}
	
	printf("\nEl factorial del segundo n�mero dado es: %i\n",f2);
	
	suma= f1 + f2;
	
	printf("\nLa suma de los 2 factoriales es: %i", suma);
	
	return 0;
}
