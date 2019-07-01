#include <stdio.h>
#include <stdbool.h>

/**	¿Todos los dígitos son pares?
*   Programa que, al recibir como dato un número de 4 dígitos determina si todos
*   los dígitos del número son pares o no lo son.
*   Dato: NUM. */

int main(int argc, char* argv[])
{
	int num;
	int dig, aux;
    bool son_pares = false;

	printf("Ingrese el numero: ");
	scanf("%d", &num);

	aux = num;
	dig = num % 10;
	num /= 10;
	if(dig % 2 == 0)  // 4to dígito.
	{
		dig = num % 10;
		num /= 10;

		if(dig % 2 == 0)  // 3er dígito.
		{
			dig = num % 10;
			num /= 10;

			if(dig % 2 == 0)  // 2do dígito.
			{
				dig = num % 10;
				num /= 10;

				if(dig % 2 == 0)  // 1er dígito.
					son_pares = true;
			}
		}
	}

	if(son_pares)
		printf("\nTodos los numeros de %d son pares.\n", aux);
	else
		printf("\nNO todos los numeros de %d son pares.\n", aux);

	return 0;
}
