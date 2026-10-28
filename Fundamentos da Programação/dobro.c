#include <stdio.h>

int dobro(int numero) {
    return numero * 2;
}

int main() {
    int valor;
    if (scanf("%d", &valor) != 1) return 0;
    printf("o dobro de %d e igual a %d\n", valor, dobro(valor));
    return 0;
}
