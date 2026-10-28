#include <stdio.h>
#include "utilidades.h"

int main() {
    int a, b, c;
    printf("Digite tres numeros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;

    printf("O maior valor digitado foi: %d\n", maior(maior(a, b), c));
    printf("O menor valor digitado foi: %d\n", menor(menor(a, b), c));

    return 0;
}
