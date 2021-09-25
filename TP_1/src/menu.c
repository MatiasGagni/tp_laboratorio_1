/*
 ============================================================================
 Name        : menu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



#include "cuentas.h"



int main(void) {
	setbuf(stdout, NULL);
	int elegir;
	int num1;
	int num2;
	int sumar;
	int restar;
	float dividir;
	int multiplicar;
	int factorizar1;
	int factorizar2;

	do{

		elegir = menu();
		switch(elegir){
		case 1:
			printf("\nUsted eligió ingresar el primer numero");
			num1 = pedirEntero1();
			break;
		case 2:
			printf("\nUsted eligió ingresar el segundo número");
			num2 = pedirEntero2();
			break;
		case 3:
			printf("\nUsted seleccionó la opción de calcular los resultados");
			calcular(&sumar, &restar, &multiplicar, &dividir, &factorizar1, &factorizar2, num1, num2);
			break;
		case 4:
			printf("\nUsted eligió ver los resultados");
			mostrar(sumar, restar, multiplicar, dividir, factorizar1, factorizar2, num1, num2 );
			break;
		case 5:
			printf("\nSalir.");
			break;


		}

	}while(elegir != 5);

	return 0;

}


