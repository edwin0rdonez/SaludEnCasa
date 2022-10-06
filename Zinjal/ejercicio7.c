#include <stdio.h>

int main() {
	int varNum;
	
	printf("Digite un numero: ");
	scanf("%i",&varNum);
	
	if(varNum % 3 == 0){
		printf("El numero es divisible entre 3");
	}else{
		printf("El numero no es divisible entre 3");
	}
	
	return 0;
}

