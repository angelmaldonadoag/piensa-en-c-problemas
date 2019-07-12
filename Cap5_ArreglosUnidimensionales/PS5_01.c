#include <stdio.h>

/*
 * Clasificador de números.
 * Programa que, al dar como dato un arreglo unidimensional de números enteros
 * determina cuántos de ellos son positivos, cuántos negativos y cuántos nulos.
 * Dato: VEC[N] (1 <= N <= 100).
 */

enum { MAX = 100 };

void leerVec(int *, int);
void clasificador(int, int *, int * , int *);

int main(int argc, char *argv[])
{
	int vec[MAX] = {0}, pos = 0, neg = 0, nul = 0;
	int n;

	do
	{
		printf("Ingrese el tamano del arreglo: ");
		scanf("%d", &n);
	} while ((n < 1) || (n > MAX));

	leerVec(&*vec, n); // Dirección de la indirección == apuntador del vector.

	for (int i = 0; i < n; i++)
	{
		clasificador(vec[i], &pos, &neg, &nul);
	}

	printf("\nPositivos: %d \t Negativos: %d \t Nulos: %d\n", pos, neg, nul);

	return 0;
}

/** Lee un arreglo unidimensional. */
void leerVec(int vector[], int tam)
{
	printf("\n");

	for (int i = 0; i < tam; i++)
	{
		printf("Ingrese el elemento %d: ", i+1);
		scanf("%d", &vector[i]);
	}
}

/** Clasifica los números en positivos, negativos o nulos. */
void clasificador(int num, int *pos, int *neg, int *nul)
{
	if (num > 0)
		*pos += 1;
	else if (num < 0)
		*neg += 1;
	else
		*nul += 1;
}
