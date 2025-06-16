
/*

Problema "validacao_de_nota" (adaptado de URI 1117)
Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e imprima a
m�dia semestral. Fa�a com que o algoritmo s� aceite notas v�lidas (uma nota v�lida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota01, nota02, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota01);

    while (nota01<0||nota01>10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%f", &nota01);
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &nota02);

    while (nota02<0||nota02>10)
    {
        printf("Valor invalido! Tente novamente: ");
        scanf("%f", &nota02);
    }

    media = (nota01+nota02)/2;
    printf("Media: %.1f", media);
    return 0;
}
