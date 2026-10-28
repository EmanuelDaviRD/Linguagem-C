#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **matriz) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    }
}

void matrizTransposta(int **matriz, int **transposta) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    int i, j;
    int **matriz = (int **)malloc(2 * sizeof(int *));
    int **transposta = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 2; i++)
        matriz[i] = (int *)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
        transposta[i] = (int *)malloc(2 * sizeof(int));

    printf("Digite os elementos da matriz 2x3:\n");
    lerMatriz(matriz);

    printf("\nMatriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    matrizTransposta(matriz, transposta);

    printf("\nMatriz Transposta:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", transposta[i][j]);
        printf("\n");
    }

    for (i = 0; i < 2; i++)
        free(matriz[i]);
    for (i = 0; i < 3; i++)
        free(transposta[i]);
    free(matriz);
    free(transposta);

    return 0;
}
