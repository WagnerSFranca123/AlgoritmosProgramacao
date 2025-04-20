/*

Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui v�rios produtos. Cada produto possui um c�digo
e um pre�o. Voc� deve fazer um programa para ler o c�digo e a
quantidade comprada de um produto (suponha um c�digo v�lido), e da�
informar qual o valor a ser pago, com duas casas decimais, conforme
tabela de produtos abaixo.

COD - VALOR
1   - R$ 5.00
2   - R$ 3.50
3   - R$ 4.80
4   - R$ 8.90
5   - R$ 7.32

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codProd, qtd;

    printf("Codigo do produto comprado: ");
    scanf("%i",&codProd);

    printf("Quantidade comprada: ");
    scanf("%i", &qtd);

    switch(codProd)
    {
    case 1:
        printf("\nValor a pagar: R$%.2f\n", (float) qtd*5);
        break;
    case 2:
        printf("\nValor a pagar: R$%.2f\n", (float) qtd*3.5);
        break;
    case 3:
        printf("\nValor a pagar: R$%.2f\n", (float) qtd*4.8);
        break;
    case 4:
        printf("\nValor a pagar: R$%.2f\n", (float) qtd*8.9);
        break;
    case 5:
        printf("\nValor a pagar: R$%.2f\n", (float) qtd*7.32);
        break;
    }

    return 0;
}
