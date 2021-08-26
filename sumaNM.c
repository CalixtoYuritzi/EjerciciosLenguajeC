//Sumar pares desde n hasta m.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc,char *argv[]){
	int i, n1, n2, s_p=0;
	
	 setlocale(LC_ALL, "");
	printf("Ingrese el número de numeros pares que desea sumar: ");
	scanf("%i %i", &n1, &n2);
	
	i = n1;
	
	while(i<=n2){
		if(i%2==0){
			s_p += i;
		}
		i++;
	}
	
	printf("\n%i. \n", s_p);
	system("PAUSE");
	
	return 0;
}
