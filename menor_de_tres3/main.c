#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, menor;

    printf("Primeiro Valor: ");
    scanf("%d", &x);
    printf("Segundo Valor: ");
    scanf("%d", &y);
    printf("Terceiro Valor: ");
    scanf("%d", &z);

    if (x<=y && x<=z)
    {
        printf("Menor: %d", x);
    }
    else if (y<=z)
    {
        printf("Menor: %d", y);
    }
    else
    {
        printf("Menor: %d", z);
    }

    return 0;
}
