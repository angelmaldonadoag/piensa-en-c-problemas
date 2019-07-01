#include <stdio.h>

/**	Salario con horas extras.
*   Programa que, al recibir como datos el salario de un trabajador, la categoría
*   del mismo y la cantidad de horas extras trabajadas. Calcula e imprime la
*   cantidad a pagar al trabajador. Cada trabajador puede tener como máximo 30
*   horas extra, si tienen más, sólo se les pagarán las primeras 30. Los
*   trabajadores con categoría 4 o mayor a 4 no pueden recibir este beneficio.
*   Datos: SAL, CAT y PHE. */

int main(int argc, char* argv[])
{
	float sal;
	unsigned int cat, phe;
	float pago_final;
    // Pago por Hora Extra Categoria [1-3].
    enum PAGO_EXTRA_CAT {PHEC1 = 40, PHEC2 = 50, PHEC3 = 85};

	printf("Ingrese el salario: ");
	scanf("%f", &sal);

	printf("Ingrese la categoria: ");
	scanf("%u", &cat);

	printf("Ingrese la cantidad de horas extras trabajadas: ");
	scanf("%u", &phe);

	switch(cat)
	{
		case 1:
			pago_final = (phe <= 30) ? (sal + (PHEC1 * phe)) : (sal + (PHEC1 * 30));
			break;
		case 2:
			pago_final = (phe <= 30) ? (sal + (PHEC2 * phe)) : (sal + (PHEC2 * 30));
			break;
		case 3:
			pago_final = (phe <= 30) ? (sal + (PHEC3 * phe)) : (sal + (PHEC3 * 30));
			break;
		default: pago_final = sal; break;
	}

	printf("\nCantidad a pagar: %.2f\n", pago_final);

	return 0;
}
