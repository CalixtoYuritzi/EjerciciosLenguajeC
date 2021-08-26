//Multiplos de 5.

#include <stdio.h>

int main(){
	int n, i;
	
	printf("Digite el total de numeros a comprobar: ");
	scanf("%i",&n);
	
	i = 1;
	
	while(i<=n){
		if(i%5==0){
			printf("\n %i. \n",i);
		}
		i++;
	}
	
	return 0;
}
