#include <stdio.h>
#include <math.h>

int main(){
	float hipo, cat1, cat2;
	
	printf("Digite el valor de los dos catetos: ");
	scanf("%f %f", &cat1, &cat2);
	
	hipo = sqrt(pow(cat1, 2)+ pow(cat2,2));
	
	printf("La hipotenusa del triangulo es: %.2f", hipo);
	
	return 0;
}
