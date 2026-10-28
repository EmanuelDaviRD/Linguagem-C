#include <stdio.h>

int main() {
    float salario, maior, menor, soma_salarios = 0;
    float imposto, liquido, media;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("\nDIGITE O SALARIO DO FUNCIONARIO %d: ", i);
        scanf("%f", &salario);
        soma_salarios += salario;

        if (i == 1) {
            maior = salario;
            menor = salario;
        } else {
            if (salario > maior) {
                maior = salario;
            }
            if (salario < menor) {
                menor = salario;
            }
        }

        if (salario <= 1500.00) {
            imposto = 0;
        } else if (salario <= 2000.00) {
            imposto = salario * 0.10;
        } else {
            imposto = salario * 0.15;
        }

        liquido = salario - imposto;
        printf("IMPOSTO: R$ %.2f | LIQUIDO: R$ %.2f\n", imposto, liquido);
    }

    media = soma_salarios / 10.0;
    printf("\nMAIOR SALARIO: R$ %.2f\n", maior);
    printf("MENOR SALARIO: R$ %.2f\n", menor);
    printf("MEDIA SALARIAL: R$ %.2f\n", media);

    return 0;
}
