#include <stdio.h>

/*	Aplicacion de operadores. */

int main(int argc, char *argv[])
{
	int i = 5, j = 4, k, l, m;

	k = !i * 3 + --j * 2 - 3;	// <- 3
	printf("\nEl valor de k es: %d", k);

	l = ! (!i || 1 && 0) && 1; // <- 1
	printf("\nEl valor de l es: %d", l);

	m = ( k = (! (12 > 10)), j = (10 || 0) && k, (! (k || j)) ); // <- 1
	printf("\nEl valor de m es: %d", m);

	return 0;
}
