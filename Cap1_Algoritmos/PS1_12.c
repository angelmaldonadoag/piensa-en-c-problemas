#include <stdio.h>
#include <math.h>

/*
 * Área y volumen de una esfera.
 * Programa que, al recibir como dato el radio de una esfera, calcula e imprime
 * el área y su volumen.
 * Dato: RAD.
 */

#define M_PI 3.14159265358979323846

int main(int argc, char *argv[])
{
	float rad;
	float area, volumen;

	printf("Ingrese el radio: ");
	scanf("%f", &rad);

	area = 4 * M_PI * pow(rad, 2);
	volumen = (float)1/3 * M_PI * pow(rad, 3);

	printf("Area: %.2f \n", area);
	printf("Volumen: %.2f \n", volumen);

	return 0;
}
