#include <stdio.h>
#include <stdlib.h>

void criarMatriz(int **matriz) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = i * j;
        }
    }
}

int main() {
    int **matriz;
    int i, j;

    matriz = (int **)malloc(5 * sizeof(int *));
    for (i = 0; i < 5; i++)
        matriz[i] = (int *)malloc(5 * sizeof(int));

    criarMatriz(matriz);

    printf("Matriz 5x5 (i * j):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}
