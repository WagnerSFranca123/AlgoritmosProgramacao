/*

Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, soma;

    soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%d",&x);
    scanf("%d",&y);

    if(x%2!=0&&x<y)
    {
        for(i=x+2; i<y; i=i+2)
        {
            soma = soma + i;
        }
        printf("SOMA DOS IMPARES = %d\n", soma);
    }
    else if(x%2==0&&x<y)
    {
        for(i=x+1; i<y; i=i+2)
        {
            soma = soma + i;
        }
        printf("SOMA DOS IMPARES = %d\n", soma);
    }
    else if(y%2!=0&&y<x)
    {
        for(i=y+2; i<x; i=i+2)
        {
            soma = soma + i;
        }
        printf("SOMA DOS IMPARES = %d\n", soma);
    }
    else if(y%2==0&&y<x)
    {
        for(i=y+1; i<x; i=i+2)
        {
            soma = soma + i;
        }
        printf("SOMA DOS IMPARES = %d\n", soma);
    }
    return 0;
}
