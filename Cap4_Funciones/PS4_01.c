#include <stdio.h>
#include <math.h>

/*
 * Promedio de los números pares e impares.
 * Programa que, al dar como datos N números enteros (1 <= N <= 500), obtiene el
 * promedio de los números pares e impares.
 * Datos: N, NUM1, NUM2,...,NUMN
 */

void parImpar(int, int *, int *, int *, int *);	// Prototipo de función.

int main(int argc, char *argv[])
{
	int n, num;
	int pares = 0, impares = 0;
	int sum_pares = 0, sum_impares = 0;

	do
	{
		printf("Ingrese la cantidad de numeros: ");
		scanf("%d", &n);
	} while (n < 1 || n > 500);

	for (int i = 1; i <= n; i++)
	{
		printf("Ingrese el numero %d: ", i);
		scanf("%d", &num);

		// Llamado a la funcion. Paso de parámetros por valor y por referencia.
		parImpar(num, &pares, &impares, &sum_pares, &sum_impares);
	}

	printf("\nPromedio de los numeros pares: %.1f\n", (float)sum_pares / pares);
	printf("Promedio de los numeros impares: %.1f\n", (float)sum_impares / impares);

	return 0;
}

/** Función que determina si el número pasado es par o impar. */
void parImpar(int num, int *pares, int *impares, int *sum_p, int *sum_i)
{
	if (pow(-1, num) > 0)	// Par.
	{
		*pares += 1;
		*sum_p += num;
	}
	else	// Impar
	{
		*impares += 1;
		*sum_i += num;
	}
}
