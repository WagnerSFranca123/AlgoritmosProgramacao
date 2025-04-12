#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    nota_final = nota1 + nota2;
    printf("Nota final: %.1f", nota_final);
    if (nota_final<60)
    {
        printf("\nReprovado");
    }
    return 0;
}
