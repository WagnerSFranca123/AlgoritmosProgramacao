/*

Problema "combustivel" (adaptado de URI 1134)
Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alcool, gasolina, diesel, variavel;

    alcool=0;
    gasolina=0;
    diesel=0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d",&variavel);
    while (variavel!=4)
    {
        while (variavel==1)
        {
            alcool++;
            printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            scanf("%d",&variavel);
        }
        while (variavel==2)
        {
            gasolina++;
            printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            scanf("%d",&variavel);

        }
        while (variavel==3)
        {
            diesel++;
            printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            scanf("%d",&variavel);
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return 0;
}



