#include <stdio.h>

int main() {
	float a,x,b;
	printf("Digite el valor de a: ");
	scanf("%f",&a);
	printf("Digite el valor de b: ");
	scanf("%f",&b);
	
	if(a != 0){
		x = -b/a;
		printf("La solucion es: %.1f",x);
	}else{
		printf("la ecuacion no tiene solución");
	}
	
	return 0;
}

