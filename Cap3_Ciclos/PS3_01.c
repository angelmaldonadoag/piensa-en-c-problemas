#include <stdio.h>

/**	Tabla de multiplicar.
*	Programa que, al recibir como dato un número entero N, se imprime la tabla 
*	de multiplicar desde 1 hasta ese número.
*	Dato: N. */

int main(void)
{
	int n;

	printf("Tabla de multiplicar del numero: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}

	return 0;
}
