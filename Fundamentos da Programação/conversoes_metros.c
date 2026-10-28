#include <stdio.h>

int main() {
    float valor;

    printf("Digite o valor em metros: ");
    scanf("%f", &valor);

    printf("Decimetros = %.2f\n", valor * 10);
    printf("Centimetros = %.2f\n", valor * 100);
    printf("Milimetros = %.2f\n", valor * 1000);

    return 0;
}