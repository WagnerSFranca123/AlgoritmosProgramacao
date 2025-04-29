/*

Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma, cont;
    float media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if(idade<0)
    {
        printf("Impossivel calcular");
    }
    else
    {
        soma = idade;
        cont = 0;
        while (idade>0)
        {
            cont = cont + 1;
            scanf("%d", &idade);
            if (idade>0)
            {
                soma = soma + idade;
            }
        }
        media = (float) soma/cont;
        printf("Media: %.2f", media);
    }
    return 0;
}






