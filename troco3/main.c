#include <stdio.h>
#include <stdlib.h>

int main()
{
    double precoUnitario, valorRecebido, troco;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", &valorRecebido);

    troco = valorRecebido-(precoUnitario*qtd);

    printf("TROCO: %.2lf", troco);


    return 0;
}
