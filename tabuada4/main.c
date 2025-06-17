/*

Problema "tabuada"
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d",&n);

    for(i=0; i<11; i++){
        printf("%d x %d = %d\n",n,i,(n*i));
    }


    return 0;
}
