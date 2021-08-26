//Suma los 10 primeros numeros pares.

#include <stdio.h>

int main(){
	int i, suma=0;
	
/*	1) for(i=1; i<=10;i++){ // 2+4+6+8+10 = 30
		if(i%2==0){ */
		
/*		for(i=1; i<=100;i++){ 
			if(i%2==0){*/
			
			for(i=0;i<=10; i +=2){ // Igual que la primera, distinto procedimiento.
			suma += i;
		}
	
	printf("\nLa suma de los numeros es: %i",suma);
	
	return 0;
}
