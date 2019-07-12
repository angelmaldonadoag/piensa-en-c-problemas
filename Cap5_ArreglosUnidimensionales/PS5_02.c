#include <stdio.h>

/*
 * Arreglo sin números repetidos.
 * Programa que, al recibir como entrada un arreglo undimensional ordenado de N
 * enteros obtiene como salida ese mismo arreglo pero sin los elementos repetidos.
 * Dato: VEC[N] (1 <= N <= 100).
 */

enum { MAX = 100 };

void leerVec(int *, int);
void eliminarRep(int *, int *);
void imprimirVec(int *, int);

int main(int argc, char *argv[])
{
	int vec[MAX] = {0}, n;

	do
	{
		printf("Ingrese el tamano del arreglo: ");
		scanf("%d", &n);
	} while((n < 1) || (n > MAX));

	leerVec(&*vec, n);
	eliminarRep(&*vec, &n);
	imprimirVec(&*vec, n);

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

/** Elimina cada uno de los elementos repetidos en un vector desordenado. */
void eliminarRep(int vector[], int* tam)
{
	/*
	 * i: Posición actual. Llega hasta la penúltima.
	 * k: Posición siguiente. Llega hasta la última.
	 * l: Posición actual cuando el componente en el índice i y k son iguales.
	 */
	int i = 0, k, l;

	// i recorre desde el primer hasta el penúltimo elemento.
	while(i < (*tam - 1))
	{
		k = i + 1;	// Posición siguiente a la actual (i).
		// k recorre desde la posición derecha de i hasta la última posicion.
		while(k <= (*tam - 1))
		{
			// Si el valor de los componentes en las posiciones i y k son iguales.
			if (vector[i] == vector[k])
			{
				// Se recorre desde la posición "siguiente" hasta la penúltima.
				for (l = k; l < (*tam - 1); l++)
				{
					// La posicion "siguiente" toma el valor de su siguiente.
					vector[l] = vector[l + 1];
				}

				*tam -= 1;
			}
			else
				k++;
		}

		i++;
	}
}

void imprimirVec(int vector[], int tam)
{
	printf("\n");

	for (int i = 0; i < tam; i++)
	{
		printf("vector[%d]: %d\n", i, vector[i]);
	}
}
