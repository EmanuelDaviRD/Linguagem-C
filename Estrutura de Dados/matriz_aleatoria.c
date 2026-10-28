#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int l, c, i, j;
    printf("Quantas linhas e colunas deseja?\n");
    if (scanf("%d%d", &l, &c) != 2) return 0;

    int **matriz = (int **)malloc(l * sizeof(int *));
    for (i = 0; i < l; i++)
        matriz[i] = (int *)malloc(c * sizeof(int));

    srand(time(NULL));
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++)
            matriz[i][j] = rand() % 100;
    }

    printf("\nMatriz:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }

    for (i = 0; i < l; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}
