#include <stdio.h>

float mediaDiagonalPrincipal(float matriz[4][4]) {
    int i, j;
    float soma = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }
    return soma / 4.0;
}

void preencheMatriz(float matriz[4][4]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
}

int main() {
    float matriz[4][4];
    preencheMatriz(matriz);
    printf("%.2f\n", mediaDiagonalPrincipal(matriz));
    return 0;
}
