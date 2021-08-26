//Nombre Signo Aries

#include <stdio.h>

int main(){
	char nombre[30], signo[20];
	
	printf("Digite su nombre: ");
	gets(nombre);
	printf("Digite su signo: ");
	gets(signo);
	
	if(strcmp (signo, "Aries")==0){
		printf("\nEs un signo Aries, su nombre es: %s", nombre);
	}
	else if(strcmp (signo, "Aries")==1){
		printf("No es signo Aries");
	}
	
	return 0;
}
