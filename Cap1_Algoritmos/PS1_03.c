#include <stdio.h>

/*  
Programa que al recibir como datos dos numeros reales, calcula la suma, resta,
multiplicacion y division de dichos numeros.
*/

int main()
{
    float N1, N2;

    printf("Ingrese el numero 1: ");
    scanf("%f", &N1);

    printf("Ingrese el numero 2: ");
    scanf("%f", &N2);

    printf("\n%.2f + %.2f = %.2f", N1, N2, N1 + N2);
    printf("\n%.2f - %.2f = %.2f", N1, N2, N1 - N2);
    printf("\n%.2f * %.2f = %.2f", N1, N2, N1 * N2);
    printf("\n%.2f / %.2f = %.2f\n", N1, N2, N1 / N2);

    return 0;
}