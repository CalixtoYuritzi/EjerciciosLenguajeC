/*  Hacer un arbol con '*' del tipo:
    EJEMPLO:
            Digite el número de filas: 5
                               *
                               **
                               ***
                               ****
                               *****
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char argv[]){
	int i,j, k, num;
	
	setlocale(LC_ALL,"");
	printf("Digité un número: ");
	scanf("%d",&num);
	
	for(i = 1; i<=num; i++){
    	printf("\n");
		for(k=i;k<=num;k++){
			printf("\t");
		}
		for(j=1;j<=i;j++){
			printf("\t\t");
			printf("*");
		}
	}

	return 0;
}

