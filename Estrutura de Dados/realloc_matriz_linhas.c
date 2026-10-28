#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j;
    printf("Digite o numero de linhas e de colunas respectivamente:\n");
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int **matriz = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        matriz[i] = (int *)malloc(m * sizeof(int));

    printf("Escreva os valores da matriz inicial:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            scanf("%d", &matriz[i][j]);
    }

    printf("\nMatriz inicial:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite quantas linhas deseja adicionar:\n");
    int novaslinhas;
    if (scanf("%d", &novaslinhas) != 1) return 0;

    matriz = (int **)realloc(matriz, (n + novaslinhas) * sizeof(int *));
    for (i = n; i < n + novaslinhas; i++)
        matriz[i] = (int *)malloc(m * sizeof(int));

    printf("Digite os valores das novas linhas:\n");
    for (i = n; i < n + novaslinhas; i++) {
        for (j = 0; j < m; j++)
            scanf("%d", &matriz[i][j]);
    }

    printf("\nMatriz final:\n");
    for (i = 0; i < n + novaslinhas; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n + novaslinhas; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}
