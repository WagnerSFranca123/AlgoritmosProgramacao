#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, notaFinal;

    printf("Digite a primeira nota de 0 ate 100: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota de 0 ate 100: ");
    scanf("%lf", &nota2);

    notaFinal = (nota1+nota2)/2;

    printf("Nota Final = %.1lf\n", notaFinal);

    if (notaFinal<60.0)
    {
        printf("Reprovado\n");
    }

    return 0;
}
