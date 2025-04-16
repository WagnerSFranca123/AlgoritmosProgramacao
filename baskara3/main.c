#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;

    printf("Coeficiente a: ");
    scanf("%f",&a);
    printf("Coeficiente b: ");
    scanf("%f",&b);
    printf("Coeficiente c: ");
    scanf("%f",&c);

    delta = sqrt((b*b) -(4*a*c));

    if (delta>0)
    {
        x1 = (-(b) + delta)/(2*a);
        x2 = (-(b) - delta)/(2*a);
        printf("\nX1 = %.4f", x1);
        printf("\nX2 = %.4f\n", x2);
    }
    else
    {
        printf("\nEsta equacao nao possui raizes reais\n");
    }
    return 0;
}
