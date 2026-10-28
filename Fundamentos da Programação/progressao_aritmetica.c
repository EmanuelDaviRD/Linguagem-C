#include <stdio.h>

int main() {
    int a1, n, r, an;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a1);

    printf("Digite a razao da PA: ");
    scanf("%d", &r);

    printf("Digite a posicao do termo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Posicao invalida.\n");
        return 1;
    }

    an = a1 + (n - 1) * r;

    printf("A%d = %d\n", n, an);

    return 0;
}