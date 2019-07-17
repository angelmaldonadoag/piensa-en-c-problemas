#include <stdio.h>
#include <stdbool.h>

/*
 * Programa que al recibir como dato un arreglo unidimensional de tipo entero
 * de N elementos, determina si el arreglo es palíndrome.
 * Dato: VEC[N]. (1 <= N <= 100).
 */

enum { MAX = 100 };

void leerVector(int *, int);
bool esPalindromo(int *, int);

int main(int argc, char *argv[])
{
	int vec[MAX] = {0}, n;

	do
	{
		printf("Ingrese el tamano del vector: ");
		scanf("%d", &n);
	} while ((n < 1) || (n > MAX));

	leerVector(vec, n);

	if (esPalindromo(vec, n))
		printf("Es palindromo\n");
	else
		printf("No es palindromo.\n");

	return 0;
}

void leerVector(int vector[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("Componente %d: ", i + 1);
		scanf("%d", &vector[i]);
	}
}

bool esPalindromo(int vector[], int tam)
{
	int izq, der;
	bool bandera = false;

	for (izq = 0, der = tam - 1; (izq < der) && (!bandera); izq++, der--)
	{
		bandera = (vector[izq] != vector[der]) ? (true) : (false);
	}

	return bandera ? false : true;
}
