#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qtdGlicose;

    printf("Digite a medida da glicose: ");
    scanf("%f", &qtdGlicose);

    if (qtdGlicose > 140)
    {
        printf("\nClassificacao: Diabetes\n");
    }
    else if (qtdGlicose < 100)
    {
        printf("\nClassificacao: Normal\n");
    }
    else
    {
        printf("\nClassificacao: Elevado\n");
    }

    return 0;
}
