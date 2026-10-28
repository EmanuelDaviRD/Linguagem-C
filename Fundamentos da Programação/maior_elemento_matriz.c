#include <stdio.h>

int maiorElementoMatriz(int matriz[5][5]) {
    int i, j, maior = matriz[0][0];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }
    return maior;
}

void preencheMatriz(int matriz[5][5]) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {
    int matriz[5][5];
    preencheMatriz(matriz);
    printf("maior numero digitado: %d\n", maiorElementoMatriz(matriz));
    return 0;
}
