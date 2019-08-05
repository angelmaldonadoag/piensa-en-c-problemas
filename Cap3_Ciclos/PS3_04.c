#include <stdio.h>

/*
 * Clasificador de números enteros.
 * Programa que, al recibir como datos N números enteros, determina cuántos de
 * ellos son positivos, negativos o nulos.
 * Datos: N, NUM1, NUM2,...,NUMN
 */

int main(int argc, char *argv[])
{
	int n, num;
	int positivos = 0, negativos = 0, nulos = 0;

	printf("Ingrese la cantidad de numeros a clasificar: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		printf("Valor del numero %d: ", i);
		scanf("%d", &num);

		if (num > 0)
			positivos++;
		else if (num < 0)
			negativos++;
		else
			nulos++;
	}

	printf("\nCantidad de numeros positivos: %d\n", positivos);
	printf("Cantidad de numeros negativos: %d\n", negativos);
	printf("Cantidad de numeros nulos: %d\n", nulos);

	return 0;
}
