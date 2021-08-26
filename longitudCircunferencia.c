#include <stdio.h>
#define PI 3.1416

int y=2;

int main(){
	float radio ,L=0;
	
	printf("Digite el valor del radio: ");
	scanf("%f", &radio);
	
	L= y * PI * radio;
	
	printf("La longitud de la circunferencia es: %.2f", L);
	
	return 0;
}
