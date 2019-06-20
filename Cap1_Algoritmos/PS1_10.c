#include <stdio.h>

/*
Programa que al recibir como dato un numero de cuatro digitos genera una impresion
de cada digito.
*/

int main()
{
	int num, dig1, dig2, dig3, dig4;

	printf("Ingrese un numero de 4 digitos: ");
	scanf("%u", &num);

	dig4 = num % 10;
	num /= 10;
	dig3 = num % 10;
	num /= 10;
	dig2 = num % 10;
	num /= 10;
	dig1 = num;

	printf("%u \n%u \n%u \n%u \n", dig1, dig2, dig3, dig4);

	return 0;
}
