/*

Problema "aumento" (adaptado de URI 1048)
Uma empresa vai conceder um aumento percentual de
sal�rio aos seus funcion�rios dependendo de quanto
cada pessoa ganha, conforme tabela abaixo. Fazer um
programa para ler o sal�rio de uma pessoa, da� mostrar
qual o novo sal�rio desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.

Sal�rio atual                           Aumento
At� R$ 1000.00                          20%
Acima de R$ 1000.00 at� R$ 3000.00      15%
Acima de R$ 3000.00 at� R$ 8000.00      10%
Acima de R$ 8000.00                     5%

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salAtual, salNovo, aumento;
    printf("Digite o salario da pessoa: ");
    scanf("%f", &salAtual);
    if (salAtual<=1000)
    {
        salNovo = (salAtual*0.20)+salAtual;
        printf("\nNovo salario: R$ %.2f",salNovo);
        aumento = (salAtual*0.20);
        printf("\nAumento: R$ %.2f",aumento);
        printf("\nPorcentual: 20%%");
    }
    else if (salAtual<=3000)
    {
        salNovo = (salAtual*0.15)+salAtual;
        printf("\nNovo salario: R$ %.2f",salNovo);
        aumento = (salAtual*0.15);
        printf("\nAumento: R$ %.2f",aumento);
        printf("\nPorcentual: 15%%");
    }
    else if (salAtual<=8000)
    {
        salNovo = (salAtual*0.10)+salAtual;
        printf("\nNovo salario: R$ %.2f",salNovo);
        aumento = (salAtual*0.10);
        printf("\nAumento: R$ %.2f",aumento);
        printf("\nPorcentual: 10%%");
    }
    else
    {
        salNovo = (salAtual*0.05)+salAtual;
        printf("\nNovo salario: R$ %.2f",salNovo);
        aumento = (salAtual*0.05);
        printf("\nAumento: R$ %.2f",aumento);
        printf("\nPorcentual: 5%%");
    }
    return 0;
}
