#include <stdio.h>

/**	Orden creciente.
*	Programa que, al recibir como datos de entrada tres valores enteros entre sí
*	determina si los mismos están en orden creciente.
*	Datos: N1, N2 y N3. */

int main(int argc, char* argv[])
{
	int n1, n2, n3;

	printf("Ingrese los 3 numeros respectivamente: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	if(n2 >= n1 && n3 >= n2)
		printf("Orden creciente.\n");
	else
		printf("No estan en orden creciente.\n");

	return 0;
}
