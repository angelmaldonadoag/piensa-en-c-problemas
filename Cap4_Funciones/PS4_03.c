#include <stdio.h>

/*
 * Factorial.
 * Programa que, al recibir como dato un número entero N, calcula el factorial
 * de dicho número.
 * Dato: N.
 */

long factorial(int);

int main(int argc, char *argv[])
{
	int n;

	do
	{
		printf("Factorial de: ");
		scanf("%d", &n);
	} while (n < 0);

	printf("\nEl factorial de %d es: %ld\n", n, factorial(n));

	return 0;
}

long factorial(int n)
{
	if (n == 0)
		return 1;

	int resultado = 1;

	for (int i = 1; i <= n; i++)
	{
		resultado *= i;
	}

	return resultado;
}
