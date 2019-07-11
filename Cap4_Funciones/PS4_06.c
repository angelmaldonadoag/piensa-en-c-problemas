#include <stdio.h>
#include <math.h>

/**	Polinomio de Taylor de la función coseno (radianes).
*	Programa que, al recibir como dato una X cualquiera, calcula el cos(x)
*	utilizando la siguiente serie:
*	1 - X²/2! + X⁴/4! + X⁶/6! + ...
*	La diferencia entre la serie y un número término debe ser menor o igual a
*	0.0001.
*	Se imprime el número de términos requeridos para obtener la precisión.
*	Dato: X. */

/* Prototipo de función. */
double coseno(int, int);
long long factorial(int);

int main(int argc, char* argv[])
{
	int x;
	int stop = 4;

	printf("Ingrese el valor de x: ");
	scanf("%d", &x);

	do
	{
		stop += 2;
		printf("\ncoseno(%d) = %.6lf\n", x, coseno(x, stop));
	} while( fabs(coseno(x, stop) - cos(x)) > 0.003 );	// Funciona con -1, 0 y 1.

	return 0;
}

/*	Función que obtiene el coseno de x. */
double coseno(int x, int stop)
{
	double resultado = 1.0;

	resultado -= pow(x, 2) / (double)factorial(2);

	for(int i = 4; i <= stop; i+=2)
	{
		resultado += pow(x, i) / (double)factorial(i);
	}

	return resultado;
}

/*	Función que obtiene el factorial de n. */
long long factorial(int n)
{
	long long resultado = 1;

	for(int i = 1; i <= n; i++)
	{
		resultado *= i;
	}

	return resultado;
}
