/*Problema 1: Comprobar a traves de un programa si un alumno
aprobo o no un examen (Aprubea si su nota es mayor a 10.5) */

#include <stdio.h>

int main(){
	
	float examen;
	
	printf("Digite la nota del examen: "); scanf("%f", &examen);
	
	if( examen > 10.5){
		printf("\nEl alumno esta aprobado");
		// puts("El alumno esta aprobado"); Solo imprime dentro de un condicional
	}
		
	return 0;
}
