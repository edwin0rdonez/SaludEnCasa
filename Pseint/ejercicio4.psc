Algoritmo ejercicio4
	Definir notaMateria1, ponderadomateria1 Como Real;
	Definir notaMateria2,  ponderadomateria2 Como Real;
	Definir notaMateria3,  ponderadomateria3 Como Real;
	Definir notamateria4,  ponderadomateria4 Como Real;
	Definir notamateria5,  ponderadomateria5 Como Real;
	Definir creditosMateria1,creditosMateria2,creditosMateria3,creditosMateria4, creditosMateria5 Como Entero;
	Definir ponderacion, sumaCreditos, promedio Como Real;
	
	Escribir "Ingrese la Nota de la materia 1, y los creditos de la materia 1";
	Leer notaMateria1,creditosMateria1;
	
	Escribir "Ingrese la nota de la materia 2, y los creditos de la materia 2";
	Leer notaMateria2,creditosMateria2;
	
	Escribir "Ingrese la Nota de la materia 3, y los creditos de la materia 3";
	Leer notaMateria3,creditosMateria3;
	
	Escribir "Ingrese la Nota de la materia 4 y los creditos de la materia 4";
	Leer notamateria4,creditosMateria4;
	
	Escribir "Ingrese la Nota de la materia 5, y  los creditos de la materia 5";
	Leer notamateria5,creditosMateria5;
	
	ponderadomateria1 = notaMateria1 * creditosMateria1;
	ponderadomateria2 =  notaMateria2 * creditosMateria2;
	ponderadomateria3 = notaMateria3 * creditosMateria3;
	ponderadomateria4 = notamateria4 * creditosMateria4;
	ponderadomateria5 = notamateria5 * creditosMateria5;
	
	ponderacion = ponderadomateria1 + ponderadomateria2 + ponderadomateria3 + ponderadomateria4 + ponderadomateria5;
	sumaCreditos = creditosMateria1 + creditosMateria2 + creditosMateria3 + creditosMateria4 + creditosMateria5;
	
	promedio =  ponderacion / sumaCreditos;
	
	Escribir"Promedio de notas de su semestre ",promedio;
	
	
FinAlgoritmo
