#include <stdio.h>

int main() {
	float notaMateria1,notaMateria2, notaMateria3,notaMateria4,notaMateria5;
	int creditosMateria1,creditosMateria2,creditosMateria3,creditosMateria4, creditosMateria5;
	float ponderadomateria1, ponderadomateria2,ponderadomateria3,ponderadomateria4,ponderadomateria5;
	float ponderacion, sumaCreditos, promedio;
	
	
	printf( "Ingrese la Nota de la materia 1,y sus creditos: \n");
	scanf("%f %i",&notaMateria1,&creditosMateria1);
	printf( "Ingrese la Nota de la materia 2,y sus creditos: \n");
	scanf("%f %i",&notaMateria2,&creditosMateria2);
	printf( "Ingrese la Nota de la materia 3,y sus creditos: \n");
	scanf("%f %i",&notaMateria3,&creditosMateria3);
	printf( "Ingrese la Nota de la materia 4,y sus creditos: \n");
	scanf("%f %i",&notaMateria4,&creditosMateria4);
	printf( "Ingrese la Nota de la materia 5,y sus creditos: \n");
	scanf("%f %i",&notaMateria5,&creditosMateria5);
	
	ponderadomateria1 = notaMateria1 * creditosMateria1;
	ponderadomateria2 =  notaMateria2 * creditosMateria2;
	ponderadomateria3 = notaMateria3 * creditosMateria3;
	ponderadomateria4 = notaMateria4 * creditosMateria4;
	ponderadomateria5 = notaMateria5 * creditosMateria5;
	
	ponderacion = ponderadomateria1 + ponderadomateria2 + ponderadomateria3 + ponderadomateria4 + ponderadomateria5;
	sumaCreditos = creditosMateria1 + creditosMateria2 + creditosMateria3 + creditosMateria4 + creditosMateria5;
	
	promedio =  ponderacion / sumaCreditos;

	printf("Promedio de notas de su semestre %.2f",promedio);
	return 0;
}

