/* Repetición: El bucle do... while
   Sintaxis:
            do{
            Instrucciones...
           } while(Condición) 
*/

//Mostrar los 10 primeros números.
//Saludo.

#include <stdio.h>

int main(){
	int i;
	
	i = 1;
	
	do{
		printf("%i. \n", i);
		i++;
	} while(i<=10);
	
	return 0;
}
