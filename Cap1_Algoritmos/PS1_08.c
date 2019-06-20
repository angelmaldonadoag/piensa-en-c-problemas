#include <stdio.h>

/*
Programa que, al recibir como datos la distanica recorrida, el numero de minutos, el numero de
segundos y el numero de centesima, calcula la velocidad de los participantes en kilometros por hora.
*/

int main()
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
	// Velocidad expresada en metros.
	vms = (float)dis/tse;
	// Velocidad expresada en kilometros por hora.
	vhk = (float)(vms * 3600) / 1000;

	printf("\nK/h: %.2f \n", vhk);


	return 0;
}
