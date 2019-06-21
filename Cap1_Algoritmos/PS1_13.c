#include <stdio.h>
#include <math.h>

/**	Areas y volumen de un cubo.
*	Programa que, al recibir como dato el lado de un hexaedro o cubo, calcula el
*	area de la base, el area lateral, el area total y el volumen.
*	Dato: LAD. */

int main(int argc, char* argv[])
{
	float lad;
	float a_base, a_lateral, a_total, volumen;

	printf("Ingrese el lado: ");
	scanf("%f", &lad);

	a_base = pow(lad, 2);
	a_lateral = 4 * a_base;
	a_total = 6 * a_base;
	volumen = pow(lad, 3);

	printf("Area base: %.2f \n", a_base);
	printf("Area lateral: %.2f \n", a_lateral);
	printf("Area total: %.2f \n", a_total);
	printf("Volumen: %.2f \n", volumen);

	return 0;
}
