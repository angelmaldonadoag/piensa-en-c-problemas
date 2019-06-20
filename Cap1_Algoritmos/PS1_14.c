#include <stdio.h>
#include <math.h>

/*
Programa que, al recibir como datos las coordenadas de los puntos P1, P2 y P3 que corresponden a 
los vertices de un triangulo, calcule su superficie.

x1, y1, x2, y2, x3, y3: variables de tipo real, que representan las coordenadas de cada punto.
*/

int main()
{
	float x1, y1, x2, y2, x3, y3;
	float area;

	printf("Ingrese las coordenadas x y del punto 1: ");
	scanf("%f %f", &x1, &y1);

	printf("Ingrese las coordenadas x y del punto 2: ");
	scanf("%f %f", &x2, &y2);

	printf("Ingrese las coordenadas x y del punto 3: ");
	scanf("%f %f", &x3, &y3);

	area = (float) 1/2 * fabs( x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) );

	printf("\nArea del triangulo: %.2f \n", area);

	return 0;
}
