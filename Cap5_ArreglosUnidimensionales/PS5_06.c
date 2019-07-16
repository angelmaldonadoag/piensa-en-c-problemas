#include <stdio.h>

/*
 * Examen de admisión.
 * Programa que, en un arreglo unidimensional de tipo real, almacena las
 * calificaciones de un grupo de N alumnos que presentaron un examen de admisión
 * a una universidad. Calcula e imprime:
 * a) El promedio general del grupo.
 * b) El porcentaje de alumnos aprobados (puntaje > 1300).
 * c) El numero de alumnos cuya calificación sea >= 1500.
 * Dato: ALU[N] (1 <= N <= 100).
 */

enum { MAX = 100 };

void leerVector(float *, int);
float promedioGrupal(float *, int);
float porcentajeAprobado(float *, int);
int calificacionesMayores(float *, int);

int main(int argc, char *argv[])
{
	float alu[MAX] = {0};
	int n = 0;

	do
	{
		printf("Ingrese la cantidad de alumnos: ");
		scanf("%d", &n);
	} while ((n < 1) && (n > MAX));

	leerVector(alu, n);

	printf("\nPromedio grupal: %.1f\n", promedioGrupal(alu, n));
	printf("Porcentaje de alumnos aprobados: %.1f%%\n", porcentajeAprobado(alu, n));
	printf("Cantidad de alumnos con calificacion >= 1500: %d.\n",
			calificacionesMayores(alu, n));

	return 0;
}

void leerVector(float alu[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("Calificacion del alumno #%d: ", i + 1);
		scanf("%f", &alu[i]);
	}
}

float promedioGrupal(float alu[], int tam)
{
	float sumatoria = 0;

	for (int i = 0; i < tam; i++)
	{
		sumatoria += alu[i];
	}

	return sumatoria / tam;
}

float porcentajeAprobado(float alu[], int tam)
{
	unsigned int contador = 0;

	for (int i = 0; i < tam; i++)
	{
		if (alu[i] > 1300)
			contador++;
	}

	return contador * 100 / (float)tam;
}

int calificacionesMayores(float alu[], int tam)
{
	unsigned int contador = 0;

	for (int i = 0; i < tam; i++)
	{
		if (alu[i] >= 1500)
			contador++;
	}

	return contador;
}
