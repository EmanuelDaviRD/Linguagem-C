#include <stdio.h>

int main() {
    int par, i, v1[10], v2[10], soma[10];

    for (i = 0; i < 10; i++) {
        par = (i + 1) * 2;
        v1[i] = par * par;
    }

    for (i = 0; i < 10; i++) {
        v2[i] = 10 + i;
    }

    printf("Vetor 1: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nVetor 2: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", v2[i]);
    }

    printf("\nSoma dos vetores: ");
    for (i = 0; i < 10; i++) {
        soma[i] = v1[i] + v2[i];
        printf("%d ", soma[i]);
    }
    printf("\n");

    return 0;
}
