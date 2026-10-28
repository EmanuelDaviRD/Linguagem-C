#include <stdio.h>
#include <stdlib.h>

void somarLinhas(int **matriz) {
    int i, j, soma;
    for (i = 0; i < 5; i++) {
        soma = 0;
        for (j = 0; j < 4; j++)
            soma += matriz[i][j];
        matriz[i][4] = soma;
    }
}

int main() {
    int **matriz;
    int i, j;

    matriz = (int **)malloc(5 * sizeof(int *));
    for (i = 0; i < 5; i++)
        matriz[i] = (int *)malloc(5 * sizeof(int));

    printf("Digite os valores das 4 primeiras colunas de cada linha (matriz 5x5):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            scanf("%d", &matriz[i][j]);
    }

    somarLinhas(matriz);

    printf("\nMatriz final:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    for (i = 0; i < 5; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}
