/*

Problema "coordenadas" (adaptado de URI 1041)
Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
“Eixo X” ou “Eixo Y”, conforme for a situação.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Valor de X: ");
    scanf("%f", &x);

    printf("\nValor de Y: ");
    scanf("%f", &y);

    if (x==0&&y==0)
    {
        printf("\nOrigem\n");
    }
    else if (x>0&&y==0)
    {
        printf("\nEixo X\n");
    }
    else if (x==0&&y>0)
    {
        printf("\nEixo Y\n");
    }
    else if (x>0&&y>0)
    {
        printf("\nQ1\n");
    }
    else if (x<0&&y>0)
    {
        printf("\nQ2\n");
    }
    else if (x<0&&y<0)
    {
        printf("\nQ3\n");
    }
    else
    {
        printf("\nQ4\n");
    }

    return 0;
}
