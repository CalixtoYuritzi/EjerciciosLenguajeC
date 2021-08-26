/*      SENTENCIA SWITCH
 
 switch(selector){
 case etiqueta 1: sentencia 1; break;
 case etiqueta 2: sentencia 2; break;
 case etiqueta 3: sentencia 3; break;
 default: sentencia;
 }


//Ejemplo con numero del 1-3.

#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite un numero entre (1-3): ");
	scanf("%i",&numero);
	
	switch (numero){
		case 1:printf("\nEs el numero 1");break;
		case 2:printf("\nEs el numero 2");break;
		case 3:printf("\nEs el numero 3");break;
		default: printf("\nNo ha digitado un numero correcto");
	}
	
	return 0;
}
*/

//Ejemplo en vocales.
#include <stdio.h>

int main(){
	char vocal;
	
	printf("Digite una vocal: ");
	scanf("%c",&vocal);
	
	switch (vocal){
		case 'a':printf("\nVocal a");break;
		case 'e':printf("\nVocal e");break;
		case 'i':printf("\nVocal i");break;
		case 'o':printf("\nVocal o");break;
		case 'u':printf("\nVocal u");break;
		default: printf("\nNo es una vocal");
	}
	
	return 0;
}
