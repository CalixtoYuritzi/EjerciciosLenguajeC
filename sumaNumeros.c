//   ~~~   SUMA N   ~~~

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int cont, n, suma=0;
	
	setlocale(LC_ALL,"");
	printf("Digite el total de numeros a sumar: ");
	scanf("%i",&n);
	
	cont = 1;
	
	while(cont <= n){
		suma += cont; //suma + cont;
		cont++; 
	}
	
	printf("\nLa suma es: %i", suma);
	
	return 0;
}
