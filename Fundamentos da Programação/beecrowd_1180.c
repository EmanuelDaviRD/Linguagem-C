#include <stdio.h>

int main() {
    int n, i;
    int menor, posicao;

    if (scanf("%d", &n) != 1) return 0;

    int x[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (i == 0) {
            menor = x[i];
            posicao = 0;
        } else {
            if (x[i] < menor) {
                menor = x[i];
                posicao = i;
            }
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
