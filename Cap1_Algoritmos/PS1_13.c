#include <stdio.h>
#include <math.h>

/*
Programa que, al recibir como dato el lado de un hexaedro o ccubo, calcule el area de la base,
el area lateral, el area total y el volumen.

lad: variable de tipo real, que representa el lado del hexahedro.
*/

int main()
{
	float lad;
	float a_base, a_lateral, a_total, volumen;

	printf("Ingrese el lado: ");
	scanf("%f", &lad);

	a_base = pow(lad, 2);
	a_lateral = 4 * a_base;
	a_total = 6 * a_base;
	volumen = pow(lad, 3);

	printf("\nArea base: %.2f", a_base);
	printf("\nArea lateral: %.2f", a_lateral);
	printf("\nArea total: %.2f", a_total);
	printf("\nVolumen: %.2f \n", volumen);

	return 0;
}
