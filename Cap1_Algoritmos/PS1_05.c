#include <stdio.h>
#include <math.h>

/*
Programa que al recibir como dato el radio de un circulo, calcula e imprime tanto su area
como la longitud de su circunferencia.

rad: variable de tipo real, que representa el radio del circulo.
*/

#define M_PI 3.14159265358979323846 // error: ‘M_PI’ undeclared 

int main()
{
	float rad, area, circunferencia;

	printf("Ingrese el radio: ");
	scanf("%f", &rad);

	area = M_PI * pow(rad, 2);
	circunferencia = 2 * M_PI * rad;

	printf("\nArea: %.2f", area);
	printf("\nCircuferencia: %.2f\n", circunferencia);

	return 0;
}
