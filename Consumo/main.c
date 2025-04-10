#include <stdio.h>
#include <stdlib.h>

int main()
{
    double disTotal, combusTotal, consumoMedio;

    printf("Distancia percorrida: ");
    scanf("%lf", &disTotal);
    printf("Combustivel gasto: ");
    scanf("%lf", &combusTotal);

    consumoMedio = disTotal/combusTotal;

    printf("Consumo medio: %.3lf", consumoMedio);
    return 0;
}
