#include <stdio.h>

/*
 * Conversion.
 * Programa que, al recibir como datos el tipo de conversion que se quiere
 * realizar (pulgadas a milímetros, yardas a metros o millas a kilómetros) y el
 * valor a convertir, realiza e imprime el valor de la conversion.
 * Datos: MED y VAL.
 */

int main(int argc, char *argv[])
{
	unsigned int med, val;
	float res;

	printf("Tipo de conversion: \n");
	printf("1.- Pulgadas a milimetros.\n");
	printf("2.- Yardas a metros.\n");
	printf("3.- Millas a kilometros.\n");
	scanf("%u", &med);

	printf("Valor a convertir: ");
	scanf("%u", &val);

	switch (med)
	{
	case 1:
		res = val * 25.40;
		break;
	case 2:
		res = val * 0.9144;
		break;
	case 3:
		res = val * 1.6093;
		break;
	}

	printf("\nValor de la conversion: %.2f\n", res);

	return 0;
}
