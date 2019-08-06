#include <stdio.h>

/*
 * Conversión dólar a peso.
 * Programa que, al recibir como dato un valor en dólares lo convierte en pesos.
 * Dato: CAN.
 */

#define DOLAR 12.48

int main(int argc, char *argv[])
{
	float can, pesos;

	printf("Cantidad en dolares: ");
	scanf("%f", &can);

	pesos = can * DOLAR;

	printf("Cantidad en pesos: %.2f \n", pesos);

	return 0;
}
