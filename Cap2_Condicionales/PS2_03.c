#include <stdio.h>

/*
 * Número divisor de otro.
 * Programa que, al recibir como datos dos números enteros, determina si un
 * número es divisor de otro.
 * Datos: N1 y N2.
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	printf("Ingrese el valor del numero 1 y del numero 2: ");
	scanf("%d %d", &n1, &n2);

	if (n1 >= n2)
		if (n1 % n2 == 0)
			printf("%d es divisor de %d \n", n2, n1);
		else
			printf("No hay un numero divisor de otro.\n");
	else
		if (n2 % n1 == 0)
			printf("%d es divisor de %d \n", n1, n2);
		else
			printf("No hay un numero divisor de otro.\n");

	return 0;
}
