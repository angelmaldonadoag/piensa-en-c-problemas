#include <stdio.h>

/**	Operaciones basicas.
*	Programa que al recibir como datos dos numeros reales, calcula la suma,
*	resta, multiplicacion y division de dichos numeros.
*	Datos: N1, N2. */

int main(int argc, char* argv[])
{
	float n1, n2;

	printf("Ingrese el numero 1: ");
	scanf("%f", &n1);

	printf("Ingrese el numero 2: ");
	scanf("%f", &n2);

	printf("\n%.2f + %.2f = %.2f", n1, n2, n1 + n2);
	printf("\n%.2f - %.2f = %.2f", n1, n2, n1 - n2);
	printf("\n%.2f * %.2f = %.2f", n1, n2, n1 * n2);
	printf("\n%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);

	return 0;
}
