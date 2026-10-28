#include <stdio.h>

void imprimeMatriz(int matriz[4][4]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void preencheMatriz(int matriz[4][4]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {
    int matriz[4][4];
    preencheMatriz(matriz);
    imprimeMatriz(matriz);
    return 0;
}
