/*   ~~~   OPERADOR DE INTERROGACIÓN.   ~~~ 
      	Expresión condicional:El operador '?'
      	
      	Sintaxis:
      	         
      	         Condición ? Expresión 1: Expresión 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	int num;
	
	setlocale(LC_ALL,"");
	printf("Digité un número: ");
	scanf("%i",&num);
	
	(num%2==0)?printf("\nEl número es par"): printf("\nEl número es impar");
	
	return 0;
}
