#include <stdio.h>

int main() {
    int x, y, i, soma = 0, inicio, fim;

    if (scanf("%d %d", &x, &y) != 2) return 0;

    if (x < y) {
        inicio = x;
        fim = y;
    } else {
        inicio = y;
        fim = x;
    }

    for (i = inicio + 1; i < fim; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);
    return 0;
}
