#include <stdio.h>

/**	El mayor de 3 números.
*	Programa que, al recibir como datos 3 números reales, identifica cual es el
*	mayor. Considerando que pueden ser iguales.
*	Datos: N1, N2 y N3. */

int main(int argc, char* argv[])
{
	float n1, n2, n3;

	printf("Ingrese los 3 numeros: ");
	scanf("%f %f %f", &n1, &n2, &n3);

	if(n1 >= n2 && n1 >= n3)
		printf("Numero mas grande: %.2f\n", n1);
	else if(n2 >= n1 && n2 >= n3)
		printf("Numero mas grande: %.2f\n", n2);
	else if(n3 >= n1 && n3 >= n2)
		printf("Numero mas grande: %.2f\n", n3);

	return 0;
}
