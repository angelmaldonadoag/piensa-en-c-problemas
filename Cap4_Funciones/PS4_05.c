#include <stdio.h>
#include <math.h>

/**	Serie.
*	Programa que, al recibr como dato un número entero N, obtiene el resultado
*	de la siguiente serie:
*	1¹ - 2² + 3³ -... +- N^N
*	Dato: N. */

long serie(int n);	/* Prototipo de funcion. */

int main(int argc, char* argv[])
{
	int n;

	do
	{
		printf("Ingrese el numero de terminos de la serie: ");
		scanf("%d", &n);
	} while(n < 1);

	printf("\nResultado de la serie: %ld\n", serie(n));

	return 0;
}

long serie(int n)
{
	long resultado = 0;

	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 1)	// Si es impar
			resultado += pow(i, i);
		else	// Si es par
			resultado -= pow(i, i);
	}

	return resultado;
}
