/*       MOTOCICLETAS
 Una distribuidora de motociclitas tiene una promoción de fin de año que consiste en lo siguiente:
   
   *Honda tiene un descuento del 5%
   *Yamaha del 8%
   *Suzuki del 10%
   *Otras marcas del 2%
*/

#include <stdio.h>
#define HONDA 0.05
#define YAMAHA 0.08
#define SUZUKI 0.1
#define OTROS 0.02

int main(){
	char marca[30];
	float costo, descuento, total;
	
	printf("\n~~ Motociclestas ~~\n");
	printf("\nMarca de la motocicleta: ");
	gets(marca);
	printf("Costo la motocicleta: ");
	scanf("%f", &costo);
	
	if(strcmp (marca, "Honda")==0){
		descuento = costo * HONDA;
		total= costo - descuento;
		printf("\nEl precio con descuento es: $%.2f", total); 
	}
	else if(strcmp (marca, "Yamaha")==0){
		descuento = costo * YAMAHA;
		total= costo - descuento;
		printf("\nEl precio con descuento es: $%.2f", total); 
	}
	 else if(strcmp (marca, "Suzuki")==0){
		descuento = costo * SUZUKI;
		total= costo - descuento;
		printf("\nEl precio con descuento es: $%.2f", total); 
	}
	else if(strcmp (marca, "Otros")==0){
		descuento = costo * OTROS;
		total= costo - descuento;
		printf("\nEl precio con descuento es: $%.2f", total); 
	} 
	
	return 0;
} //YC
