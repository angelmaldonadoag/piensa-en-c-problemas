#include <stdio.h>

/**	Dias a segundos.
*	Programa que, calcula e imprime el numero de segundos que hay en un
*	determinado numero de dias.
*	Dato: DIA. */

int main(int argc, char* argv[])
{
	unsigned int dia, segundos;

	printf("Cantidad de dias: ");
	scanf("%u", &dia);

	segundos = dia * 24 * 60 * 60;

	printf("Cantidad de segundos: %u \n", segundos);

	return 0;
}
