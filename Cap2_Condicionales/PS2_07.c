#include <stdio.h>
#include <math.h>

/**	Función definida en intervalos.
*	Programa que, al recibir como dato un número entero, representando el valor
*	independiente, calcula el valor de f(x) dado ciertos parámetros.
*			(	X³				Si (X mod 4) = 0
*			|	(X² - 14) / X³	Si (X mod 4) = 1
*	Y = f(X){
*			|	x³ + 5			Si (X mod 4) = 2
*			(	sqrt(X)			Si (X mod 4) = 3
*	Dato: X. */

int main(int argc, char* argv[])
{
	int x;
	float y;

	printf("Ingrese el valor de x: ");
	scanf("%d", &x);

	switch(x % 4)
	{
		case 0: y = pow(x, 3); break;
		case 1: y = ( pow(x, 2) - 14 ) / pow(x, 3) ; break;
		case 2: y = pow(x, 3) + 5; break;
		case 3: y = sqrt(x); break;
	}

	printf("f(x) = %.2f\n", y);

	return 0;
}
