#include <stdio.h>
#include <stdbool.h>

/*
 * Programa que, al recibir como datos dos arreglos unidimensionales de tipo
 * entero, el primero ordenado en forma ascendente y el segundo ordenado en
 * forma descendente, de N y M elementos respectivamente, genera un nuevo
 * arreglo unidimensinal ordenado en forma ascendente de N+M elementos de tipo
 * entero, mezclando los dos primeros.
 * Datos: VEC1[N], VEC2[M]. (1 <= N <= 100, 1 <= M <= 100).
 */

enum { MAX = 100 };

void leerVector(int *, int, const bool);
void unirVectores(int *, int, int *, int, int *);
void bubbleSort(int *, int);
void imprimirVector(int *, int);

int main(int argc, char *argv[])
{
	int vec1[MAX], vec2[MAX], vec3[MAX] = { 0 };
	int n, m;

	do
	{
		printf("Cantidad de elementos del vector 1: ");
		scanf("%d", &n);
	} while ((n < 1) || (n > MAX));

	leerVector(vec1, n, true);

	do
	{
		printf("Cantidad de elementos del vector 2: ");
		scanf("%d", &m);
	} while ((m < 1) || (m > MAX));

	leerVector(vec2, m, false);

	unirVectores(vec1, n, vec2, m, vec3);

	printf("\nVector 3:\n");
	bubbleSort(vec3, m + n);
	imprimirVector(vec3, m + n);

	return 0;
}

void leerVector(int vec[], int tam, const bool ASC)
{
	for (int i = 0; i < tam; i++)
	{
		if (i == 0)
		{
			printf("Componente %d: ", i + 1);
			scanf("%d", &vec[i]);
		}
		else
		{
			if (ASC == true)
			{
				do
				{
					printf("Componente %d: ", i + 1);
					scanf("%d", &vec[i]);
				} while (vec[i] < vec[i - 1]);
			}
			else
			{
				do
				{
					printf("Componente %d: ", i + 1);
					scanf("%d", &vec[i]);
				} while (vec[i] > vec[i - 1]);
			}
		}
	}
}

void unirVectores(int vec1[], int tam_vec1, int vec2[], int tam_vec2, int vec3[])
{
	for (int i = 0; i < tam_vec1; i++)
	{
		vec3[i] = vec1[i];
	}

	for (int i = 0; i < tam_vec2; i++)
	{
		vec3[i + tam_vec1] = vec2[i];
	}
}

void bubbleSort(int vec[], int tam)
{
	int aux = 0;

	for (int i = 0; i < tam - 1; i++)
	{
		for (int j = i + 1; j < tam; j++)
		{
			if (vec[j] < vec[i])
			{
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}

void imprimirVector(int vec[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("Componente %d: %d\n", i + 1, vec[i]);
	}
}
