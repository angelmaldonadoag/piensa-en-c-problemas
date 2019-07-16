#include <stdio.h>

/*
 * Cosecha.
 * En un arreglo unidimensional de tipo real se tienen almacenadas las
 * toneladas mensuales de cereales cosechadas durante el año anterior en una
 * estancia de la pampa Argentina. El siguiente programa calcula e impreme:
 * a) El promedio anual de toneladas cosechadas.
 * b) ¿Cuántos meses tuvieron una cosecha superior al promedio anual?
 * c) ¿En qué mes se produjo el mayor numero de toneladas? ¿Cuántas fueron?
 * Dato: COS[12].
 */

enum { MAX = 12 };

void leerVec(float *);
float promedioAnual(float *);
int mesesSuperior(float *, float);
int mesMayor(float *);

int main(int argc, char *argv[])
{
	float cos[MAX] = {0};

	leerVec(cos);

	printf("\nPromedio anual: %.2f toneladas.\n", promedioAnual(cos));
	printf("Meses de cosecha superior al promedio anual: %d\n",
			mesesSuperior(cos, promedioAnual(cos)));
	printf("Mes en que se producieron mas toneladas: %d.\n",
			mesMayor(cos));
	printf("\tToneladas producidas: %.2f\n", cos[mesMayor(cos) - 1]);

	return 0;
}

void leerVec(float cosecha[])
{
	printf("Ingrese las toneladas recolectadas en cada mes.\n");

	for (int i = 0; i < MAX; i++)
	{
		printf("Mes %d: ", i + 1);
		scanf("%f", &cosecha[i]);
	}
}

float promedioAnual(float cosecha[])
{
	float sumatoria = 0;

	for (int i = 0; i < MAX; i++)
	{
		sumatoria += cosecha[i];
	}

	return sumatoria / (float)MAX;
}

int mesesSuperior(float cosecha[], float promedio_anual)
{
	int contador = 0;

	for (int i = 0; i < MAX; i++)
	{
		if (cosecha[i] > promedio_anual)
			contador++;
	}

	return contador;
}

int mesMayor(float cosecha[])
{
	int mes_mayor = 0;
	float toneladas_superior = 0;

	for (int i = 0; i < MAX; i++)
	{
		if (cosecha[i] > toneladas_superior)
		{
			mes_mayor = i + 1;
			toneladas_superior = cosecha[i];
		}
	}

	return mes_mayor;
}
