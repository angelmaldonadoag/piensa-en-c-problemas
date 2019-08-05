#include <stdio.h>

/** Escribir los resultados que se obtienen al ejecutar el siguiente programa. */

/* Funciones y parámetros. */

int a, b, c, d;

int pal(int, int);							/* Prototipo de función. */

int main(int argc, char *argv[])
{
	a = 2;
	c = 3;
	d = 5;
	a = pal(c, d);	// b: 15, c: 20, x: 4, y: 30

	printf("\n%d %d %d %d", a, b, c, d);	// a: 4, b: 15, c: 3, d: 5

	b = 4;
	b = pal(b, a);	// b: 16, c: 20, x: 5, y: 20

	printf("\n%d %d %d %d\n", a, b, c, d);	// a: 4, b: 5, c: 3, d: 5

	return 0;
}

int pal(int x, int y)
{
	int c;
	b = x * y;
	c = b + y;
	x++;
	y = y * (y + 1);

	printf("\n%d %d %d %d", b, c, x, y);

	return (x);
}
