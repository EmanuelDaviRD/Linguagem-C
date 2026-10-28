#include <stdio.h>

int main() {
    float salario, limite, prestacao;

    scanf("%f %f", &salario, &prestacao);

    limite = salario * 0.30;

    if (prestacao <= limite) {
        printf("APROVADO");
    } else {
        printf("REPROVADO");
    }

    return 0;
}