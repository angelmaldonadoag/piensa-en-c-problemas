#include <stdio.h>

/*
 * Incremento de salario.
 * Programa que, al recibir como dato el salario de un profesor de una
 * universidad, calcula el incremento del salario de acuerdo con el siguiente
 * criterio e imprime el nuevo salario del profesor.
 * Salario < $18,000: Incremento 12%.
 * $18,000 <= Salario <= $30,000: Incremento 8%.
 * $30,000 < Salario <= $50,000: Incremento 7%.
 * $50,000 < Salario: Incremento 6%.
 * Dato: SAL.
 */

int main(int argc, char *argv[])
{
	float sal;
	float nue_sal;

	printf("Salario del profesor: ");
	scanf("%f", &sal);

	if (sal < 18000)
		if (sal > 0)
			nue_sal = sal * 1.12;
		else
			nue_sal = -1;
	else if (sal <= 30000)
		nue_sal = sal * 1.08;
	else if (sal <= 50000)
		nue_sal = sal * 1.07;
	else
		nue_sal = sal * 1.06;

	if (nue_sal != -1)
		printf("Anterior salario: %.2f\tNuevo salario: %.2f \n", sal, nue_sal);
	else
		printf("\aEl salario no puede ser menor a 0.\n");

	return 0;
}
