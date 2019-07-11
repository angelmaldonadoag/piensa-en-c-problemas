#include <stdio.h>

/**	Número invertido.
*	Programa que, al recibir como dato un número entero de 4 dígitos, lo imprime
*	de forma inversa.
*	Dato: N. */

int digitos(int);
void invertir(int);	/* Prototipo de función. */

int main(int argc, char* argv[])
{
	int n;

	do
	{
		printf("Ingrese un numero de 4 digitos: ");
		scanf("%d", &n);
	} while( digitos(n) != 4 );

	printf("\nNumero invertido:\n");
	invertir(n);
	printf("\n");

	return 0;
}

int digitos(int num)
{
	int contador = 0;

	while(num != 0)
	{
		num /= 10;
		contador++;
	}

	return contador;
}

/*	Función que invierte un número de 4 digitos. */
void invertir(int n)
{
	int digito;

	for(int i = 1; i <= 4; i++)
	{
		digito = n % 10;
		printf("%d ", digito);
		n /= 10;
	}
}
