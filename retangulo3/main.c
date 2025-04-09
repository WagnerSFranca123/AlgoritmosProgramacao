#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double base, altura;
    double area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base*altura;
    perimetro = base*2+altura*2;
    diagonal = sqrt(base*base+altura*altura);

    printf("Area: %.4lf\n",area);
    printf("Perimetro: %.4lf\n",perimetro);
    printf("Diagonal: %.4lf\n",diagonal);


    return 0;
}
