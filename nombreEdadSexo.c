#include <stdio.h>


int main(){
	 char nombre[30], sexo[20];
	 int edad;
	 
	 printf("Digite su nombre: ");
	 gets(nombre);
	 printf("Digite su sexo: ");
	 gets(sexo);
	 printf("Digite su edad: ");
	 scanf("%i", &edad);
	 
	 if (strcmp(sexo,"masculino")==0 && edad >=18){
	 	printf("Su nombre es: %s", nombre);
	 }
	 else{
	 	printf("No es mayor de edad y sexo masculino");
	 }
	
	return 0;
}
