#include <stdio.h>

/*
 * Examinar cuidadosamente el siguiente programa. Y determinar cuáles de las
 * siguientes llamadas a las funciones son correctas si x, y y z son variables
 * de tipo entero.
 */

void trueque(int*, int*);
int suma(int);

int main(int argc, char *argv[])
{
	int x, y, z;

	// Error. Se espera un apuntador de tipo entero como primer argumento.
	//trueque(suma(&x), &x);
	// Error. Se esperan dos apuntadores de tipo entero.
	//trueque(3, 4);
	suma(10);			// Correcto.
	y = suma(10);		// Correcto.
	//z = trueque(&x, &y);	// Error. Trueque no retorna valor.
	trueque(&x, &y);	// Correcto.

	return 0;
}

void trueque(int *x, int *y)
{
	int tem;
	tem = *x;
	*x = *y;
	*y = tem;
}

int suma(int x)
{
	return (x + x);
}
