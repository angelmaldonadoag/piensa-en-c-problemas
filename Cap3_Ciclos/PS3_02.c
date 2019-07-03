#include <stdio.h>

/**	Serie.
*	Programa que, al recibir como dato un número entero N, calcula el resultado
*	de la siguiente serie:
*	1 + 1/2 + 1/3 + 1/4 + ... + 1/N
*	Dato: N. */

int main(int argc, char* argv[])
{
	int n;
	float resultado = 0.0;

	printf("Ingrese el valor de N: "),
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		resultado += (float) 1 / i;
	}

	printf("\nResultado: %.2f\n", resultado);

	return 0;
}
