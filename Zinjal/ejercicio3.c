#include <stdio.h>

int main() {
	float distancia,velocidad;
	int tiempo;
	
	printf("Digite la velocidad: ");
	scanf("%f",&velocidad);
	
	printf("Digite el tiempo: ");
	scanf("%i",&tiempo);
	
	if (tiempo > 0){
		distancia = velocidad * tiempo;
		printf("La distancia recorrida es: %.1f",distancia );
	}else {
		printf("¡El tiempo es incorrecto!");
	}

	return 0;
}

