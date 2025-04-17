#include <stdio.h>
#include <stdlib.h>

/*Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
deduzir a fórmula de Celsius para Fahrenheit): c =5/9*(f*-32)*/

/*void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
*/
int main()
{
    char temperatura;
    double celsius, fahrenheit;

    printf("Voce vai digitar a temperatura em qual escala (c/f)? ");
    //limpar_entrada();
    scanf("%c", &temperatura);

    if (temperatura=='f')
    {
        printf("\nDigite a temperatura em Fahrenheit: ");
        scanf("%lf", &fahrenheit);

        celsius = (5*(fahrenheit-32))/9;

        printf("\nTemperatura equivalente em Celsius: %.2lf", celsius);
    }
    else if (temperatura=='c')
    {
        printf("\nDigite a temperatura em Celsius: ");
        scanf("%lf", &celsius);

        fahrenheit = 9*celsius / 5+32;

        printf("\nTemperatura equivalente em Fahrenheit: %.2lf", fahrenheit);
    }
    return 0;
}
