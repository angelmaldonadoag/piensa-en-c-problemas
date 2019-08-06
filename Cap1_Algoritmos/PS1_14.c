#include <stdio.h>
#include <math.h>

/*
 * Área de un triángulo.
 * Programa que, al recibir como datos las coordenadas de los puntos P1, P2 y P3
 * que corresponden a los vértices de un triángulo, calcula su superficie.
 * Datos: X1, Y1, X2, Y2, X3, Y3.
 */

int main(int argc, char *argv[])
{
	float x1, y1, x2, y2, x3, y3;
	float area;

	printf("Ingrese las coordenadas x y del punto 1: ");
	scanf("%f %f", &x1, &y1);

	printf("Ingrese las coordenadas x y del punto 2: ");
	scanf("%f %f", &x2, &y2);

	printf("Ingrese las coordenadas x y del punto 3: ");
	scanf("%f %f", &x3, &y3);

	area = (float)1/2 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

	printf("Area del triangulo: %.2f \n", area);

	return 0;
}
