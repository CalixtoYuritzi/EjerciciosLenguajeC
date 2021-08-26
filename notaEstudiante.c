//Nota del Estudiante.

#include <stdio.h>

int main(){
	float nota;
	
	printf("Digite la nota del examen: ");
	scanf("%f",&nota);
	
	if(nota >=10.5){
		printf("\nEl alumno esta aprovado");
	}
	else {
		printf("\nEl alumno no esta aprovado");
	}
	
	return 0;
}
