#include <stdio.h>

/*
Programa que, al recibir como datos el costo de un articulo vendido y la cantidad
de dinero entregada por el cliente, calcule e imprima el cambio que se debe entregar al cliente.
PRE, PAG: variables de tipo real.
*/

int main()
{
	float PRE, PAG;
	float cambio;

	printf("Ingrese el precio del producto: ");
	scanf("%f", &PRE);

	printf("Ingrese el pago del cliente: ");
	scanf("%f", &PAG);

	cambio = PAG - PRE;

	printf("\nCambio del cliente: %.2f \n", cambio);


    return 0;
}
