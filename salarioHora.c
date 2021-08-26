#include <stdio.h>

int main(){
	float h_t, v_h, salario;
	
	printf("Digite las horas trabajadas: ");
	scanf("%f",&h_t);
	printf("Digite el valor monetario por hora: ");
	scanf("%f",&v_h);
	
	salario = h_t * v_h;
	
	printf("\nEl salario es: $%.2f",salario);
	
	return 0;
}
