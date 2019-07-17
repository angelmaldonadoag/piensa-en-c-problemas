#include <stdio.h>
#include <stdbool.h>

/*
 * Programa que almacena en un arreglo unidimensional los primeros 30 números
 * perfectos. Un número se considera perfecto si la suma de sus divisores,
 * excepto él mismo, es igual al propio número.
 */

enum { META = 4 };  // Es el número máximo soportado por mi equipo.

bool esPerfecto(int);
void imprimirVector(int *, int);

int main(int argc, char *argv[])
{
	int nums_perfect[META] = {0};
	int cont_perfectos = 0, i = 2;


	do
	{
		if (esPerfecto(i))
		{
			nums_perfect[cont_perfectos] = i;
			cont_perfectos++;
		}
		i++;
	} while (cont_perfectos < META);

	imprimirVector(nums_perfect, META);

	return 0;
}

bool esPerfecto(int num)
{
	int suma_divisores = 0;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			suma_divisores += i;
	}

	return (suma_divisores == num) ? true : false;
}

void imprimirVector(int nums_perfect[], int tam)
{
	printf("Numeros perfectos:\n");
	for (int i = 0; i < tam; i++)
	{
		printf("%d.- %d\n", i + 1, nums_perfect[i]);
	}
}
