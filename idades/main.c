#include <stdio.h>
#include <stdlib.h>

int main()

{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMedia;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d",&idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin,0,SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    idadeMedia = (double)(idade1+idade2)/2;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, idadeMedia);


    return 0;
}
