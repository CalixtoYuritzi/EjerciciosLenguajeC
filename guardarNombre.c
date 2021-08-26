#include <stdio.h>

int main(){
	
	char x [50];
	
	printf("Digite su nombre: ");
//	scanf("%s", x); // %s es por ser string y no hace falta poner el caracter "&" junto a la x (Aunque al dar espacio solo se guarda lo incial y no demas no)
	gets(x); //Aunque se encuentren espacios guarda por completo los datos de tipo string
	
	printf("\nSu nombre es: %s", x);
	
	return 0;
}
