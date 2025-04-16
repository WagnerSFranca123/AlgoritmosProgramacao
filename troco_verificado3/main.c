#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorCompra, troco, precoUnit, valorReceb;
    int qtd;
    printf("Preco unitario do produto: ");
    scanf("%f", &precoUnit);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%f", &valorReceb);

    valorCompra = precoUnit*qtd;

    if (valorCompra<valorReceb)
    {
        troco = valorReceb-valorCompra;
        printf("\nTROCO: %.2f\n", troco);
    }
    else
    {
        troco = valorCompra-valorReceb;
        printf("\nDINHEIRO INSUFICIENTE. FALTAM %.2f\n", troco);
    }
    return 0;
}
