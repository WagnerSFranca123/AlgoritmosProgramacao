/*

Problema "tempo_de_jogo" (adaptado de URI 1046)
Leia a hora inicial e a hora final de um jogo. A seguir calcule a dura��o do jogo, sabendo que o mesmo
pode come�ar em um dia e terminar em outro, tendo uma dura��o m�nima de 1 hora e m�xima de 24
horas.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim, duracao;

    printf("Hora inicial: ");
    scanf("%i", &inicio);

    printf("Hora final: ");
    scanf("%i", &fim);

    if (inicio>fim)
    {
        duracao = 24-inicio+fim;
        printf("O jogo durou %i hora(s)", duracao);
    }
    else if (inicio==fim)
    {
        duracao = 24+inicio-fim;
        printf("O jogo durou %i hora(s)", duracao);
    }
    else
    {
        duracao = fim-inicio;
        printf("O jogo durou %i hora(s)", duracao);
    }
    return 0;
}
