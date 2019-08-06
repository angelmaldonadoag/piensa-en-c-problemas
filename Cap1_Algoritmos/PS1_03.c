#include <stdio.h>

/*
 * Operaciones básicas.
 * Programa que al recibir como datos dos números reales, calcula la suma,
 * resta, multiplicación y división de dichos números.
 * Datos: N1, N2.
 */

int main(int argc, char *argv[])
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
