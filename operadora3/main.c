#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, minutos;
    printf("Digite a quantidade de minutos: ");
    scanf("%f", &minutos);

    if (minutos>100)
    {
        valor = minutos - 100;
        valor = valor*2;
        valor = 50 + valor;
        printf("\nValor a pagar: R$ %.2f", valor);
    }
    else
    {
        printf("\nValor a pagar: R$ 50.00");
    }

    return 0;
}
