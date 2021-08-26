/*Nota del Alumno
     
     Dada una nota de un examen mediante un codigo escribir el literal que le corresponde a la nota.
     A - Excelente
     B - Notable
     C - Aprovado
     D y F - Reprovado
*/

#include<stdio.h>
#include <stdlib.h>  //Pueden clasificarse en las siguientes categor�as: conversi�n, memoria, control de procesos, ordenaci�n y b�squeda, matem�ticas.
#include <locale.h>  //A�ade paquetes de idiomas.

int main(int argc, char *argv[]){ //
	char nota;
	
	setlocale(LC_ALL,""); //Establece el idioma.
	printf("Digit� la nota: ");
	scanf("%c",&nota);
	
	switch(nota){
		case 'A':printf("\nExcelente");break;
		case 'B':printf("\nNotable");break;
		case 'C':printf("\nAprovado");break;
		case 'D':
		case 'F':printf("\nReprovado");break;
		default: printf("\nSe equivoca de nota");
	}
	
	return 0;
}
