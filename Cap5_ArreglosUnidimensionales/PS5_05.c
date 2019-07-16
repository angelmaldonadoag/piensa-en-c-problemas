#include <stdio.h>
#include <stdbool.h>

/*
 * Inserta y elimina elementos.
 * Programa que inserta y elimina elementos de una arreglo unidimensional de tipo
 * entero que se encuentra ordenado en forma creciente. Considera que no se pueden
 * insertar elementos repetidos.
 * Datos: VEC[N], ELE. (N <= 1 <= 100).
 */

enum { MAX = 100 };
enum accion { SALIR, INSERTAR, ELIMINAR, IMPRIMIR };

bool insertarNum(int *, int *, int);
bool eliminarNum(int *, int *, int);
int busquedaBinaria(int *, int, int);
void imprimirVec(int *, int);

int main(int argc, char *argv[])
{
	int vec[MAX] = {0}, n = 0, ele;
	int accion;

	do
	{
		printf("Ingrese la accion: \n");
		printf("1. Inserte.\n");
		printf("2. Elimine.\n");
		printf("3. Imprima.\n");
		printf("0. Salir.\n> ");
		scanf("%u", &accion);

		switch (accion)
		{
		case SALIR:
			printf("\nAdios.\n");
			break;
		case INSERTAR:
			printf("Ingrese el elemento a insertar: ");
			scanf("%d", &ele);

			if (!insertarNum(vec, &n, ele))
				printf("\aError al insertar.\n");

			printf("\n");
			break;
		case ELIMINAR:
			printf("Ingrese el elemento a eliminar: ");
			scanf("%d", &ele);

			if (!eliminarNum(vec, &n, ele))
				printf("\aError al eliminar.\n");

			printf("\n");
			break;
		case IMPRIMIR:
			imprimirVec(vec, n);
			break;
		default:
			printf("\aError. Opción inválida.\n");
			break;
		}
	} while (accion != 0);

	return 0;
}

/**
 * Inserta un elemento al arreglo.
 * Al insertar un número el tamaño del arreglo es actualizado, en caso de no
 * cumplir la condición para insertarse retorna falso.
 */
bool insertarNum(int vector[], int *tam, int num)
{
	int pos_insert = 0, pos_disponible;

	if (*tam == 100)
		return false;

	/* Se llega a la posición posterior en la que se debe insertar el nuevo número. */
	while ((vector[pos_insert] < num) && (pos_insert < *tam))
	{
		pos_insert++;
	}

	if (vector[pos_insert] == num)
		return false;

	pos_disponible = *tam;
	*tam += 1;

	/*
	 * Se recorrera de derecha (considerando el nuevo espacio) a izquierda (hasta
	 * la posición siguiente de donde se insertara el nuevo número).
	 */
	while (pos_disponible > pos_insert)
	{
		vector[pos_disponible] = vector[pos_disponible - 1];
		pos_disponible--;
	}

	vector[pos_insert] = num;
	return true;
}

/** Elimina un número del arreglo. */
bool eliminarNum(int vector[], int* tam, int num)
{
	if (*tam == 0)
		return false;

	int pos = busquedaBinaria(vector, *tam, num);

	if (pos == -1)
		return false;

	/*
	 * Se recorrera desde la posición del número a eliminar hasta una posición
	 * antes del último número en el vector.
	 */
	while (pos < *tam - 1)
	{
		vector[pos] = vector[pos + 1];
		pos++;
	}

	vector[*tam - 1] = 0;
	*tam -= 1;
	return true;
}

/** Busca dentro del arreglo unidemensional un número y devuelve su posición. */
int busquedaBinaria(int vector[], int tam, int num)
{
	bool bandera = false;
	int izq = 0, der = tam - 1, centro;
	int pos = -1;   // En caso de no encontrarse el numero.

	/* Llegara al número buscado o los indices izq y der se cruzaran entre ellos. */
	while ((izq <= der) && (!bandera))
	{
		centro = (izq + der) / 2;

		if (num == vector[centro])
		{
			bandera = true;
			pos = centro;
		}
		else if (num < vector[centro])
			der = centro - 1;
		else if (num > vector[centro])
			izq = centro + 1;
	}

	return pos;
}

void imprimirVec(int vector[], int tam)
{
	printf("\n");
	for (int i = 0; i < tam; i++)
	{
		printf("vector[%d]: %d\n", i, vector[i]);
	}
	printf("\n");
}
