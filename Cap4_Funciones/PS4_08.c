#include <stdio.h>
#include <stdbool.h>

/**	Números perfectos.
*	Se dice que un número es considerado perfecto si la suma de sus divisores
*	excepto el mismo, es igual al propio número.
*	Programa que obtiene e imprime todos los números perfectos comprendidos
*	entre 1 y N.
*	Dato: N. */

bool esNumPerfecto(int);	/* Prototipo de función. */

int main(int argc, char* argv[])
{
	int n;

	do
	{
		printf("Ingrese el valor de N: ");
		scanf("%d", &n);
	} while(n < 1);

	for(int i = 1; i <= n; i++)
	{
		if(esNumPerfecto(i))
			printf("Numero perfecto: %d\n", i);
	}

	return 0;
}

/*	Función que determina si num es un número perfecto o no. */
bool esNumPerfecto(int num)
{
	int sum_divisores = 0;

	for(int i = 1; i < num; i++)
	{
		if(num % i == 0)
			sum_divisores += i;
	}

	return (sum_divisores == num) ? true : false;
}
