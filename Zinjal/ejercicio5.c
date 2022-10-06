#include <stdio.h>

int main() {
	int year;
	
	printf("Digite un año: ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("El año digitado es Bisiesto");
	}else{
		printf("El año no es bisiesto");
	}
	
	return 0;
}

