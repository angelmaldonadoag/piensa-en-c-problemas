#include <stdio.h>
#include <math.h>

/**	Areas de un cono.
*	Programa que, al recibir como datos el radio, la generatriz y la altura de
*	un cono, calcula e imprime el area de la base, el area lateral, el area
*	total y su volumen.
*	Datos: RAD, ALT, GEN. */

#define M_PI 3.14159265358979323846

int main(int argc, char* argv[])
{
	float rad, alt, gen;
	float a_base, a_lateral, a_total, volumen;

	printf("Ingresa el valor del radio, generatriz y la altura del cono respectivamente: ");
	scanf("%f %f %f", &rad, &gen, &alt);

	a_base = M_PI * pow(rad, 2);
	a_lateral = M_PI * rad * gen;
	a_total = a_base + a_lateral;
	volumen = (float)1/3 * a_base * alt;

	printf("Area base: %.2f \n", a_base);
	printf("Area lateral: %.2f \n", a_lateral);
	printf("Area total: %.2f \n", a_total);
	printf("Volumen: %.2f \n", volumen);

	return 0;
}
