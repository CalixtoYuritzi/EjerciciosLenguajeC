#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n1,n2,n3,MG;
    printf("Ingrese el primer numero:");scanf("%f",&n1);
    printf("Ingrese el segundo numero:");scanf("%f",&n2);
    printf("Ingrese el tercer numero:");scanf("%f",&n3);
    MG = sqrt(n1*n2*n3);
    system("cls");
    printf("\nLa media geometrica es de %.2f",MG);

    return 0;
}

