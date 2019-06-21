#include <stdio.h>

/**	Cambio de una compra.
*	Programa que, al recibir como datos el costo de un articulo vendido y la
*	cantidad de dinero entregada por el cliente, calcula e imprime el cambio que
*	se debe entregar al cliente.
*	Datos: PRE, PAG. */

int main(int argc, char* argv[])
{
	float pre, pag;
	float cambio;

	printf("Ingrese el precio del producto: ");
	scanf("%f", &pre);

	printf("Ingrese el pago del cliente: ");
	scanf("%f", &pag);

	cambio = pag - pre;

	printf("\nCambio del cliente: %.2f \n", cambio);


    return 0;
}
