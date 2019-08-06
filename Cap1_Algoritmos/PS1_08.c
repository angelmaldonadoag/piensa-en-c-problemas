#include <stdio.h>

/*
 * Conversiones de medidas.
 * Programa que, al recibir como datos la distancia recorrida, el número de
 * minutos, el número de segundos y el número de centésimas, calcula la
 * velocidad de los participantes en kilómetros por hora.
 * Datos: DIS, MIN, SEG, CEN.
 */

int main(int argc, char *argv[])
{
	int dis, min, seg, cen;
	int tse;
	float vms, vhk;

	printf("Ingrese la distancia recorrida (en metros): ");
	scanf("%d", &dis);

	printf("Ingrese los minutos segundos y centesimas: ");
	scanf("%d %d %d", &min, &seg, &cen);

	// Tiempo expresado en segundos
	tse = min * 60 + seg + cen / 100;
	// Velocidad expresada en metros sobre segundos.
	vms = (float)dis/tse;
	// Velocidad expresada en kilómetros por hora.
	vhk = (float)(vms * 3600) / 1000;

	printf("K/h: %.2f \n", vhk);
	
	return 0;
}
