#include <stdio.h>

/** 100 primeros números de Fibonacci.
 * Programa que almacena en un arreglo unidimensional los primeros 100 números
 * Fibonacci e imprime el arreglo unidimensional. */

enum { MAX = 100 };

void fibonacci(long long*, int);
void imprimirVec(long long*, int);

int main(int argc, char* argv[])
{
	unsigned long long vec[MAX] = {0};

	fibonacci(vec, MAX);
	imprimirVec(vec, MAX);

	return 0;
}

/**	Calcula los primeros 100 números de Fibonacci. */
void fibonacci(long long vector[], int tam)
{
	vector[0] = 0;
	vector[1] = 1;

	for(int i = 2; i < tam; i++)
	{
		vector[i] = vector[i - 1] + vector[i - 2];
	}
}

void imprimirVec(long long fib[], int tam)
{
	for(int i = 0; i < tam; i++)
	{
		printf("Fibonacci #%d: %lld\n", i + 1, fib[i]);
	}
}

