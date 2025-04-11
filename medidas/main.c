#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ladoA, ladoB, ladoC;
    double quadrado, triangulo, trapezio;

    printf("Digite a medida de A: ");
    scanf("%lf", &ladoA);
    printf("Digite a medida de B: ");
    scanf("%lf", &ladoB);
    printf("Digite a medida de C: ");
    scanf("%lf", &ladoC);

    quadrado = ladoA*ladoA;
    printf("\nArea do quadrado: %.4lf", quadrado);

    triangulo = (ladoA*ladoB)/2;
    printf("\nArea do triangulo: %.4lf", triangulo);

    trapezio = ((ladoA+ladoB)*ladoC)/2;
    printf("\nArea do trapezio: %.4lf", trapezio);

    return 0;
}
