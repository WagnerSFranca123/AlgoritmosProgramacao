
/*

Problema "validacao_de_nota" (adaptado de URI 1117)
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
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
