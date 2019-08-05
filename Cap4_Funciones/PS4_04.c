#include <stdio.h>

/*
 * Inversion.
 * Un individuo invierte en un banco un capital específico y quiere saber cuánto
 * obtendrá al cabo de cierto tiempo.
 * Programa que, al recibir como datos el mes, el capital y la tasa de interés
 * mensual imprime cuanto obtendra el individuo.
 * Datos: MES, CAP, TAS.
 */

float inversion(int, float, float);

int main(int argc, char *argv[])
{
	int mes;
	float cap, tas;

	do
	{
		printf("Ingrese el numero de meses, capital y la tasa de interes mensual: ");
		scanf("%d %f %f", &mes, &cap, &tas);
	} while (mes < 1 || cap < 0 || tas < 0);

	printf("\nHa obtenido $%.2f\n", inversion(mes, cap, tas));

	return 0;
}

float inversion(int meses, float capital, float tasa)
{
	float obtendra = (capital * (1 + (meses * tasa)));
	return (obtendra);
}
