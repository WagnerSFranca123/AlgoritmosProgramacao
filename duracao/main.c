#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos, segundos, tempo;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &tempo);

    horas = (tempo/60)/60;
    minutos = (tempo/60)%60;
    segundos = tempo%60;

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}
