#include <stdio.h>

int main() {
    float valorUnit, total;
    int quantidade;

    printf("Digite o valor unitario: ");
    scanf("%f", &valorUnit);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    total = valorUnit * quantidade;

    printf("Valor total: R$ %.2f\n", total);

    return 0;
}