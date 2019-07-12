#include <stdio.h>

/** Inserta y elimina elementos.
 * Programa que inserta y elimina elementos en un arreglo unidimensional de tipo
 * entero que se encuentra desordenado. Considerar que no se pueden insertar
 * elementos repetidos.
 * Datos: VEC[N], ele. (1 <= N <= 100) */

const int MAX = 100;

void insertarNum(int*, int*, int);
int seEncuentra(int*, int, int);
void eliminarNum(int*, int*, int);
void imprimirVec(int*, int);

int main(int argc, char* argv[])
{
	int vec[MAX], n = 0, ele;
	int menu;

	do
	{
		printf("Ingrese la accion: \n");
		printf("1. Insertar.\n");
		printf("2. Eliminar.\n");
		printf("3. Imprimir.\n");
		printf("0. Salir.\n> ");
		scanf("%d", &menu);

		switch(menu)
		{
			case 1:
				printf("Ingrese el elemento a insertar: ");
				scanf("%d", &ele);
				insertarNum(vec, &n, ele);
				break;
			case 2:
				printf("Ingrese el elemento a eliminar: ");
				scanf("%d", &ele);
				eliminarNum(vec, &n, ele);
				break;
			case 3:
				imprimirVec(vec, n);
				break;
			case 0:
				printf("\nAdios.\n");
				break;
			default:
				printf("\aError. Opción inválida.\n");
		}

	}	while(menu != 0);

	return 0;
}

/** Inserta un elemento al arreglo.
 * En caso de de insertar un número el tamaño del arreglo es actualizado. */
void insertarNum(int vector[], int *tam, int num)
{
	if(!seEncuentra(vector, *tam, num))
	{
		vector[*tam] = num;
		*tam += 1;
	}
	else if(*tam >= MAX)
		printf("\aError. Se ha alcanzado el limite de elementos.\n");
	else
		printf("\aError. Numero repetido.\n");

	printf("\n");
}

/** Indica si se encuentra o no un número en el arreglo.
 * Si el número se encuentra devuelve su posición (+1) en caso contrario retorna 0. */
int seEncuentra(int vector[], int tam, int buscar)
{
	for(int i = 0; i < tam; i++)
	{
		if(vector[i] == buscar)
			return (i + 1);	// Retorna su posición (empezando en 1).
	}

	return 0;
}

/** Elimina un número del arreglo. */
void eliminarNum(int vector[], int *tam, int num)
{
	int elemento;

	elemento = seEncuentra(vector, *tam, num);

	if(elemento > 0)
	{
		// Desde el numero encontrado hasta el penultimo.
		for(int i = (elemento - 1); i < (*tam - 1); i++)
		{
			vector[i] = vector[i + 1];	// Se recorren los números.
		}

		vector[*tam] = 0;	// El ultimo valor se queda en 0.
		*tam -= 1;
	}
	else
		printf("\aError. %d no se encuentra en el arreglo.\n", num);

	printf("\n");
}

void imprimirVec(int vector[], int tam)
{
	printf("\n");

	for(int i = 0; i < tam; i++)
	{
		printf("vector[%d]: %d\n", i, vector[i]);
	}

	printf("\n");
}
