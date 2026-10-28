#include <stdio.h>
#include <stdlib.h>

void maior(int **matriz1, int **matriz2, int **matriz3) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j])
                matriz3[i][j] = matriz1[i][j];
            else
                matriz3[i][j] = matriz2[i][j];
        }
    }
}

int main() {
    int **matriz1, **matriz2, **matriz3;
    int i, j;

    matriz1 = (int **)malloc(4 * sizeof(int *));
    matriz2 = (int **)malloc(4 * sizeof(int *));
    matriz3 = (int **)malloc(4 * sizeof(int *));
    for (i = 0; i < 4; i++) {
        matriz1[i] = (int *)malloc(4 * sizeof(int));
        matriz2[i] = (int *)malloc(4 * sizeof(int));
        matriz3[i] = (int *)malloc(4 * sizeof(int));
    }

    printf("Digite os valores da primeira matriz (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            scanf("%d", &matriz1[i][j]);
    }

    printf("Digite os valores da segunda matriz (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            scanf("%d", &matriz2[i][j]);
    }

    maior(matriz1, matriz2, matriz3);

    printf("\nMatriz com os maiores elementos:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%d ", matriz3[i][j]);
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matriz3);

    return 0;
}
