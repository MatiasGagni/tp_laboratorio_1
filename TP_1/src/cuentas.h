/*
 * cuentas.h
 *
 *  Created on: 24 sep. 2021
 *      Author: lucianog
 */

#ifndef CUENTAS_H_
#define CUENTAS_H_
#include <stdio.h>
#include <stdlib.h>



int menu();
int pedirEntero1();
int pedirEntero2();
int suma(int num1, int num2);
int resta(int num1, int num2);
int multiplicacion(int num1, int num2);
float division(int num1, int num2);
int sacarFactorial(int num);
void calcular(int* sumar, int* restar, int* multiplicar, float* dividir, int* factorizar1, int* factorizar2, int num1, int num2);
void mostrar(int sumar, int restar, int multiplicar, float dividir, int factorizar1, int factorizar2, int num1, int num2 );
#endif /* CUENTAS_H_ */
