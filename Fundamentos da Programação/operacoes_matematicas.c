#include <stdio.h>

int main() {
    float var1, var2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &var1);

    printf("Digite o segundo valor: ");
    scanf("%f", &var2);

    printf("Soma = %.2f\n", var1 + var2);
    printf("Subtracao = %.2f\n", var1 - var2);
    printf("Multiplicacao = %.2f\n", var1 * var2);

    if (var2 != 0) {
        printf("Divisao = %.2f\n", var1 / var2);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}