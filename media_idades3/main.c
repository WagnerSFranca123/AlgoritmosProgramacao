/*

Problema "media_idades"
Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
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






