/*   ~~~   BUCLE FOR   ~~~
    Sintaxis:
    
    for(inicialización; condición, incremento){
    Instruciones;
    ...
    ...
    }
*/

// Mostrar los 10 primeros numeros ascendentes y descendentes.

#include <stdio.h>

int main(){
	 int i;
	 
	/* for( i = 1; i<=10; i++){ //Ascendente 1 2 3 4 5 6 7 8 9 10
	 	printf("\n%i. \n", i);
	 } */
	 
	/* for(i = 10; i>=1; i--){ //Descendente 10 9 8 7 6 5 4 3 2 1
	 	printf("\n%i. \n", i);
	 }*/
	 
	 for(i=1; i<=100; i++){
	 	printf("\n%i.No debo llegar tarde a clases. \n", i);
	 }
	 
	return 0;
}
