/* SUMA POSITIVA NEGATIVA

    Sumar 1-2+3-4+5-6.......n
    
    Impares (-)
    Pares(+)
    
    Suma_pares=-2-4-6.....
    Suma_impares=1+3+5....
    
    suma = Suma_pares + suma_impares;
    
    1-2+3-4+5-6
    -1+3-4+5-6
    2-4+5-6
    -2+5-6
    3-6
    -3
*/

#include <stdio.h>

int main(){
	int i, n, suma=0, s_p=0, s_ip=0,ne;
	
	printf("Digite el total de elementos a sumar: ");
	scanf("%i",&n);
	
	i = 1;
	
	while(i<=n){
		if(i%2==0){
			ne = i *(-1);
			s_p +=ne;
		}
		else{
			s_ip += i;
		}
		i++;
	}
	suma = s_p + s_ip;
	
	printf("\nLa suma total es: %i", suma);
		
	return 0;
}
