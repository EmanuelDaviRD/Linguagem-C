#include <stdio.h>

int main() {
    int numero = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Decimal: %d\n", numero);
    printf("Octal: %o\n", numero);
    printf("Hexadecimal: %x\n", numero);

    return 0;
}
