/*   ~~~   OPERADOR DE INTERROGACI�N.   ~~~ 
      	Expresi�n condicional:El operador '?'
      	
      	Sintaxis:
      	         
      	         Condici�n ? Expresi�n 1: Expresi�n 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int num;
	
	setlocale(LC_ALL,"");
	printf("Digit� un n�mero: ");
	scanf("%i",&num);
	
	(num%2==0)?printf("\nEl n�mero es par"): printf("\nEl n�mero es impar");
	
	return 0;
}
