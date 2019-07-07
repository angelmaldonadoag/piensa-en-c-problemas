#include <stdio.h>
#include <math.h>

/**	Serie.
*	Programa que, al recibir como dato un número entero NUM calcula el resultado
*	de la siguiente serie:
*	1 * 1/2 / 1/3 * 1/4 / ... (*,/) 1/N
*	Dato: NUM. */

float serie(int);

int main(int argc, char* argv[])
{
	int num;
	float resultado;

	do
	{
		printf("Ingrese el numero de terminos de la serie: ");
		scanf("%d", &num);
	} while(num < 1);

	resultado = serie(num);

	printf("\nResultado de la serie: %.2f\n", resultado);

	return 0;
}

float serie(int n)
{
	float res = 1.0;

	for(int i = 1; i <= n; i++)
	{
		if(pow(-1, i) > 0)	// Par.
			res *= (1.0 / i);
		else	// Impar.
			res /= (1.0 / i);
	}

	return (n > 0 ? res : 0);
}
