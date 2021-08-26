#include <stdio.h>

int main(){
	int GC, GF=0;
	
	printf("Digite los C que desea convertir a F: ");
	scanf("%i", &GC);
	
	GF = ((GC * 9/5) + 32);
	
	printf("Los F son: %i", GF);
	
	return 0;
}
