#include <stdio.h>
#include <math.h>

/*
Programa que, al recibir como dato el radio de una esfera, calcula e imprime el area y su volumen.

rad: variable de tipo real, que representa el radio de la esfera.
*/

#define M_PI 3.14159265358979323846

int main()
{
	float rad;
	float area, volumen;

	printf("Ingrese el radio: ");
	scanf("%f", &rad);

	area = 4 * M_PI * pow(rad, 2);
	volumen = (float) 1/3 * M_PI * pow(rad, 3);

	printf("\nArea: %.2f ", area);
	printf("\nVolumen: %.2f \n", volumen);

	return 0;
}
