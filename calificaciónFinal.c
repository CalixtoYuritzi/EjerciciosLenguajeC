#include <stdio.h>

int main(){
	float n1,n2,n3,promedio=0,calificacion=0,promedio_cp=0,c_t=0,e_f,t_f,c_f=0;
	
	printf("Digite las 3 calificaciones parciales: ");
	scanf("%f %f %f",&n1, &n2, &n3);
	
	printf("Digite la nota del examen final: ");
	scanf("%f",&e_f);
	
	printf("Digite la nota del trabajo final: ");
	scanf("%f",&t_f);
	
	promedio = (n1+n2+n3)/3;
	promedio_cp = promedio * 0.55;
	
	calificacion = e_f * 0.30;
	
	c_t = t_f * 0.15;
	
	c_f = promedio_cp + calificacion + c_t;
	
	printf("\nLa calificacion final es: %.1f", c_f);
	
	return 0;
}
