#include <stdio.h>

int main() {
	float nota;
	printf( "Digite su nota: \n");
	scanf("%f",&nota);
	
	if (nota > 4.5) {
		printf( "Exelente");
	}
	
	else if (nota > 4 && nota <= 4.5){		
	printf( "Muy bueno");
	}
	else if (nota > 3.5 && nota <= 4){
	printf( "Bueno");
	}
	
	else if (nota > 3 && nota <= 3.5){
	printf( "Regular");
	}
	else if (nota > 2.5 && nota <= 3){
	printf( "Deficiente");
	}
	
	return 0;
}

