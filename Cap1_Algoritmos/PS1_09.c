#include <stdio.h>

/* 
Programa que calcula e imprime el numero de segundos que hay en un determinado dia.

dia: variable de tipo entero.
*/

int main()
{
	unsigned int dia, segundos;

	printf("Cantidad de dias: ");
	scanf("%u", &dia);

	segundos = dia * 24 * 60;

	printf("Cantidad de segundos: %u \n", segundos);

	return 0;
}
