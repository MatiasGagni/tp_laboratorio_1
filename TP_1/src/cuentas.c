/*
 * cuentas.c
 *
 *  Created on: 24 sep. 2021
 *      Author: lucianog
 */

#include <stdio.h>
#include <stdlib.h>


int menu(){
	int elegir;

	printf("\n1_Ingresar el primer número: ");
	printf("\n2_Ingrese el segundo número");
	printf("\n3_Ingrese el número tres para realizar todos los calculos: ");
	printf("\n4_Ingrese el número cuatro para visualizar los resultados: ");
	printf("\n5_Ingrese el número cinco para salir.");
	printf("\nIngrese un número para entrar en la opción deseada: ");

	scanf("%d" , &elegir);

	return elegir;


}

int pedirEntero1(){
	int num1;

	printf("\nIngrese un número: ");
	scanf("%d" , &num1);


	printf("\nEl número ingresado es: %d\n" , num1);

	return num1;
}
int pedirEntero2(){
	int num2;

	printf("\nIngrese un número: ");
	scanf("%d" , &num2);


	printf("\nEl número ingresado es: %d\n" , num2);

	return num2;
}

int suma(int num1, int num2){
	int resultadosuma;

	resultadosuma = num1 + num2;

	return resultadosuma;
}

int resta(int num1, int num2){
	int diferencia;

	diferencia = num1 - num2;

	return diferencia;
}

int multiplicacion(int num1, int num2){
	int producto;

	producto = num1*num2;

	return producto;
}

float division(int num1, int num2){
	float cociente;


	cociente = (float)num1/num2;

	return cociente;
}

int sacarFactorial(int num){
	int factor=1;

	        for (int i = 1; num >= i; i++) {
	        factor*= i;
	        }
	    return factor;
}

void calcular(int* sumar, int* restar, int* multiplicar, float* dividir, int* factorizar1, int* factorizar2, int num1, int num2){

	*sumar = suma(num1, num2);
	*restar = resta(num1, num2);
	*multiplicar = multiplicacion(num1, num2);
	*dividir = division(num1, num2);
	*factorizar1 = sacarFactorial(num1);
	*factorizar2 = sacarFactorial(num2);


}

void mostrar(int sumar, int restar, int multiplicar, float dividir, int factorizar1, int factorizar2, int num1, int num2 ){

	printf("\nEl resultado de la suma es: %d" , sumar);
	printf("\nEl resultado de la resta es: %d" , restar);
	printf("\nEl resultado de la multiplicación es: %d" , multiplicar);
	if(num1==0 || num2==0){
			printf("\nNo es posible dividir por 0.");
		}
		else
		{
	printf("\nEl resultado de la división es: %.2f" , dividir);
		}
	printf("\nEl factorial del primer número es: %d" , factorizar1);
	printf("\nEl factorial del segundo número es: %d" , factorizar2);
}











