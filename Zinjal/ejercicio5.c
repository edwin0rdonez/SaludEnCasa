#include <stdio.h>

int main() {
	int year;
	
	printf("Digite un a�o: ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("El a�o digitado es Bisiesto");
	}else{
		printf("El a�o no es bisiesto");
	}
	
	return 0;
}

