#include <stdio.h>
#include <stdlib.h>

//Problema

/*No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.
*/

int main()
{
    float dist1, dist2, dist3;

    printf("Digite as tres distancias:\n");
    scanf("%f%f%f", &dist1, &dist2, &dist3);

    if (dist1>dist2&&dist1>dist3)
    {
        printf("Maior distancia: %.2f", dist1);
    }
    else if (dist2>dist3)
    {
        printf("Maior distancia: %.2f", dist2);
    }
    else
    {
        printf("Maior distancia: %.2f", dist3);
    }
    return 0;
}
