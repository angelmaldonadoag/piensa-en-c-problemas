#include <stdio.h>

/*
 * Conversión de medidas.
 * Programa que, al recibir como datos el valor a convertir, la medida en que
 * está expresada, el nuevo valor y la nueva medida, realiza e imprime el
 * resultado de la conversión.
 * Datos: MED, SME y VAL.
 */

int main(int argc, char *argv[])
{
	unsigned int med, sme, val;
	float res;

	printf("Ingrese el tipo de medida\n");
	printf("1.- Longitud.\n");
	printf("2.- Volumen.\n");
	printf("3.- Peso.\n");
	scanf("%u", &med);

	switch (med)
	{
	case 1:
		printf("Ingrese el tipo de conversion\n");
		printf("1.- Pulgada -> milimetros.\n");
		printf("2.- Yarda -> metros.\n");
		printf("3.- Milla -> kilometros.\n");
		printf("4.- Pulgada^2 -> centimetros^2.\n");
		printf("5.- Pie^2 -> metros^2.\n");
		printf("6.- Yarda^2 -> metros^2.\n");
		printf("7.- Acre -> hectareas.\n");
		printf("8.- Milla^2 -> kilometros^2.\n");
		scanf("%u", &sme);

		printf("Ingrese el valor que se va a convertir: ");
		scanf("%u", &val);

		switch (sme)
		{
		case 1:
			res = val * 25.40;
			break;
		case 2:
			res = val * 0.9144;
			break;
		case 3:
			res = val * 1.6093;
			break;
		case 4:
			res = val * 6.452;
			break;
		case 5:
			res = val * 0.09290;
			break;
		case 6:
			res = val * 0.8361;
			break;
		case 7:
			res = val * 0.4047;
			break;
		case 8:
			res = val * 2.59;
			break;
		default:
			res = -1;
			printf("\nError en el tipo de conversion.\n");
			break;
		}
		break;
	case 2:
		printf("Ingrese el tipo de conversion\n");
		printf("1.- Pie^3 -> metros^3.\n");
		printf("2.- Yarda^3 -> metros^3.\n");
		printf("3.- Pinta -> litros.\n");
		printf("4.- Galon -> litros^2.\n");
		scanf("%u", &sme);

		printf("Ingrese el valor que se va a convertir: ");
		scanf("%u", &val);

		switch (sme)
		{
		case 1:
			res = val * 0.02832;
			break;
		case 2:
			res = val * 0.7646;
			break;
		case 3:
			res = val * 0.56826;
			break;
		case 4:
			res = val * 4.54609;
			break;
		default:
			res = -1;
			printf("\nError en el tipo de conversion.\n");
			break;
		}
		break;
	case 3:
		printf("Ingrese el tipo de conversion\n");
		printf("1.- Onza -> gramos.\n");
		printf("2.- Libra -> kilogramos.\n");
		printf("3.- Ton. inglesa -> toneladas.\n");
		scanf("%u", &sme);

		printf("Ingrese el valor que se va a convertir: ");
		scanf("%u", &val);

		switch (sme)
		{
		case 1:
			res = val * 28.35;
			break;
		case 2:
			res = val * 0.45359;
			break;
		case 3:
			res = val * 1.0160;
			break;
		default:
			res = -1;
			printf("\nError en el tipo de conversion.\n");
			break;
		}
		break;
	default:
		res = -1;
		printf("\nError en tipo de medida.\n");
		break;
	}

	if (res != -1)
		printf("\nResultado de la conversion: %.2f\n", res);

	return 0;
}
