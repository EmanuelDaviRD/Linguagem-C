#include <stdio.h>

int fatorial(int n) {
    if (n < 0) {
        return -1;
    }
    int i;
    int resultado = 1;
    for (i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n, teste;
    if (scanf("%d", &n) != 1) return 0;
    teste = fatorial(n);
    if (teste == -1) {
        printf("nao existe fatorial de numero negativo\n");
    } else {
        printf("o fatorial de %d e igual a: %d\n", n, teste);
    }
    return 0;
}
