#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    char nome[50];
    float sal_hora, qtdHoras, pagamento;

    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%f", &sal_hora);
    printf("Horas trabalhadas: ");
    scanf("%f", &qtdHoras);
    pagamento = sal_hora*qtdHoras;
    printf("%s recebe %.2f", nome, pagamento);

    return 0;
}
