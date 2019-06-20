#include <stdio.h>

#define DOLAR 12.48

/*
Programa que, al recibir como dato un valor en dolares lo convierte en pesos.

can: variable de tipo real, que representa la cantidad en dolares).
*/

int main()
{
	float can, pesos;

	printf("\nCantidad en dolares: ");
	scanf("%f", &can);

	pesos = can * DOLAR;

	printf("Cantidad en pesos: %.2f \n", pesos);

	return 0;
}
