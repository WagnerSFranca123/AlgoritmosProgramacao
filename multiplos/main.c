/*

Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros:\n");
    scanf("%i",&a);
    scanf("%i",&b);

    if (a%b==0||b%a==0)
    {
        printf("Sao multiplos");
    }
    else
    {
        printf("Nao sao multiplos");
    }

    return 0;
}
