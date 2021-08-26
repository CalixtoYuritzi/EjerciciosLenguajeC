#include <stdio.h>

int main(){
	
	
	char a = 'e';
	short b = -15;
	int c = 1024;
	unsigned int d = 128;
	long e = 123456;
	float f = 15.678;
	double m = 123123.123123;
	
	
	printf("El elemento char es: %c",a);
	
	printf("\nEl elemento short es: %i",b);
	
	printf("\nEl elemento int es: %i",c);
	
	printf("\nEl elemento unsigned int es: %i",d);
	
	printf("\nEl elemento long es: %li",e);
	
	printf("\nEl elemento float es: %.2f",f); //%.2f solo aparecera dos decimales o redondear el número.
	
	printf("\nEl elemento double es: %.lf",m); // %.lf significa que se reduciran los decimales
	
	
	return 0;
}
