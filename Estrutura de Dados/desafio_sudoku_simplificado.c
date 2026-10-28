#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **matriz) {
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++)
            scanf("%d", &matriz[i][j]);
    }
}

int verificaLinha(int **matriz) {
    int i, j, k;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            for (k = j + 1; k < 9; k++) {
                if (matriz[i][j] == matriz[i][k])
                    return 0;
            }
        }
    }
    return 1;
}

int verificaColunas(int **matriz) {
    int i, j, k;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            for (k = i + 1; k < 9; k++) {
                if (matriz[i][j] == matriz[k][j])
                    return 0;
            }
        }
    }
    return 1;
}

int main() {
    int i;
    int **matriz = (int **)malloc(9 * sizeof(int *));
    for (i = 0; i < 9; i++) {
        matriz[i] = (int *)malloc(9 * sizeof(int));
    }

    printf("Digite a matriz 9x9 do Sudoku:\n");
    lerMatriz(matriz);

    if (verificaLinha(matriz) && verificaColunas(matriz))
        printf("Sudoku valido\n");
    else
        printf("Sudoku invalido\n");

    for (i = 0; i < 9; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}
