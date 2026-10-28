#include <stdio.h>

void preencheMatriz(int matriz[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int somaMatriz(int matriz[3][3]) {
    int i, j;
    int soma = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[3][3];
    preencheMatriz(matriz);
    printf("Soma da matriz: %d\n", somaMatriz(matriz));
    return 0;
}
