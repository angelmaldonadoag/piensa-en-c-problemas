#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**	¿Es triángulo?
*	Programa que, al recibir como datos tres variables reales que representan
*	los lados de un probable triángulo, determina si esos lados corresponden a
*	un triángulo. En caso de serlo además de imprimir el área correspondiente
*	comprueba si el mismo es equilátero, isósceles o escaleno.
*	Datos: L1, L2 y L3. */

int main(int argc, char* argv[])
{
	float l1, l2, l3;
	bool es_triangulo = false;

	printf("Valor del lado 1: ");
	scanf("%f", &l1);
	printf("Valor del lado 2: ");
	scanf("%f", &l2);
	printf("Valor del lado 3: ");
	scanf("%f", &l3);

	/* Si se cumple la propiedad de que la suma de los dos lados menores es
	mayor a la del lado restante, es triángulo. */
	if(l1 > l2 && l1 > l3)
	{
		if((l2 + l3) > l1)
			es_triangulo = true;
	}
	else if(l2 > l1 && l2 > l3)
	{
		if((l1 + l3) > l2)
			es_triangulo = true;
	}
	else if(l3 > l1 && l3 > l2)
	{
		if((l1 + l2) > l3)
			es_triangulo = true;
	}

	if(es_triangulo)
	{
		float s, area;
		s = (l1 + l2 + l3) / 2;
		area = sqrt( s * (s - l1) * (s - l2) * (s - l3) );	// Fórmula de Herón.

		printf("\nEs triangulo.\n");
		printf("Y su area es de: %.2f\n", area);
	}
	else
		printf("\nNo es triangulo.\n");

	return 0;
}
