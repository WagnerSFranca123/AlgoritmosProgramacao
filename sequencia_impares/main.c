/*


Problema "sequencia_impares" (adaptado de URI 1067)
Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite o valor de X: ");
    scanf("%d",&x);

    if (x%2!=0)
    {
        for (int i=1; i<=x ; i=i+2)
        {
            printf("%d\n",i);
        }
    }
    else if(x%2==0)
    {
        for (int i =1;i<x;i=i+2){
            printf("%d\n",i);
        }
    }
    return 0;
}
