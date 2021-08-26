#include <stdio.h>

int main(){
	float n1, n2, n3,m_a;
	
	printf("Digite 3 numeros: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	m_a = (n1 + n2 + n3)/3;
	
	printf("\nLa media aritmetica es: %.2f", m_a);
	
	return 0;
}
