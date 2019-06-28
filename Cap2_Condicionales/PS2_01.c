#include <stdio.h>

/**	Termómetro.
*	Programa que, al recibir como dato el número de sonidos emitidos por un
*	grillo en un minuto calcula la temperatura en grados fahrenheit. Fórmula:
*	FA = S/4 + 40.
*	Dato: S. */

int main(int argc, char* argv[])
{
	int s;
	float fa;

	printf("Numero de sonidos emitidos por el grillo en un minuto: ");
	scanf("%d", &s);

	if(s >= 0)
	{
		fa = s/4 + 40;
		printf("Temperatura en grados Fahrenheit: %.1f \n", fa);
	}

	return 0;
}
