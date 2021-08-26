//Serie Fibonancci.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int num, i, x=0, y=1, z=1;
	
	setlocale(LC_ALL,"");
	printf("Digité el número de elementos: ");
	scanf("%i",&num);
	
	printf("1, ");
	
	for(i=1; i<num; i++){
		z = x +y;
		x = y;
		y = z;
		printf("%i, ", z);
	}
	
	return 0;
}
