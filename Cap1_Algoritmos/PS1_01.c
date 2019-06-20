#include <stdio.h>

/* Aplicacion de operadores */

int main(int argc, char const *argv[])
{
	int i, j, k = 2, l = 7;

	i = 9 + 3 * 2; // <- 15
	j = 8 % 6 + 4 * 2; // <- 10
	i %= j; // <- 5

	printf("El valor de i es: %d\n", i);

	++l; // <- 8
	// --k -= l++ * 2; // error: lvalue required as left operand of assignment
        k = --k - (l++ * 2); // -15
	printf("El valor de k es: %d\n", k);

	i = 5.5 - 3 * 2 % 4; // <- 3
	j = (i * 2 - (k = 3, --k));	// <- 4
	printf("El valor de j es: %d\n", j);

	return 0;
}
