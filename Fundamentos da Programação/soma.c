#include <stdio.h>

int soma(int numero1, int numero2) {
    return numero1 + numero2;
}

int main() {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) return 0;
    printf("a soma de %d + %d e igual a %d\n", a, b, soma(a, b));
    return 0;
}
