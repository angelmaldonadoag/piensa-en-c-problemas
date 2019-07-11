#include <stdio.h>

/**	Escribir los resultados que se obtienen al ejecutar el siguiente programa. */

/* Parámetros y funciones. */

int f1(void);
int f2(void);
int f3(void);
int f4(void);
int K = 5;

int main(int argc, char* argv[])
{
	int I;

	for(I = 1; I <= 4; I++)
	{
		printf("\nEl resultado de la funcion f1 es: %d", f1());
		printf("\nEl resultado de la funcion f2 es: %d", f2());
		printf("\nEl resultado de la funcion f3 es: %d", f3());
		printf("\nEl resultado de la funcion f4 es: %d\n", f4());
	}

	return 0;
}

int f1(void)
{
	K *= K;

	return (K);	// K: 25, K: 625, K: 390625, K: 152587890625
}

int f2(void)
{
	int K = 3;
	K++;

	return (K);	// K: 4, K: 4, K: 4, K: 4
}

int f3(void)
{
	static int K = 6;
	K += 3;

	return (K);	// K = 9, K = 12, K = 15, K = 18
}

int f4(void)
{
	int K = 4;
	//K = K + ::K;	/* Error. */

	return (K);	// K: 29, K: 629, K: 390629, K: 152587890629
}
