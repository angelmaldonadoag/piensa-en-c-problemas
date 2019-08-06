#include <stdio.h>

/*
 * Descuento.
 * Programa que, al recibir como dato el monto de la compra del cliente, obtiene
 * el precio real a pagar luego de aplicar el descuento correspondiente.
 * Compra < $800: Descuento 0%.
 * $800 <= Compra <= $1500: Descuento 10%.
 * $1500 < Compra <= $5000: Descuento 15%.
 * $5000 < Compra: Descuento 20%.
 * Dato: COM.
 */

int main(int argc, char *argv[])
{
	float com;
	float monto_real;

	printf("Ingrese el monto de la compra: ");
	scanf("%f", &com);

	if (com < 800)
		monto_real = com;
	else if (com <= 1500)
		monto_real = com * 0.90;
	else if (com <= 5000)
		monto_real = com * 0.85;
	else
		monto_real = com * 0.80;

	printf("Monto final: %.2f \n", monto_real);

	return 0;
}
