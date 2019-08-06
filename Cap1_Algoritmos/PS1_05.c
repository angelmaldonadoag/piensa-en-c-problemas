#include <stdio.h>
#include <math.h>

/*
 * Área y longitud de un círculo.
 * Programa que al recibir como dato el radio de un círculo, calcula e imprime
 * tanto su área como la longitud de su circunferencia.
 * Dato: RAD.
 */

#define M_PI 3.14159265358979323846

int main(int argc, char *argv[])
{
	float rad;
	float area, circunferencia;

	printf("Ingrese el radio: ");
	scanf("%f", &rad);

	area = M_PI * pow(rad, 2);
	circunferencia = 2 * M_PI * rad;

	printf("\nArea: %.2f", area);
	printf("\nCircuferencia: %.2f\n", circunferencia);

	return 0;
}
