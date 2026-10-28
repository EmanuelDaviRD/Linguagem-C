#include <stdio.h>
#include <stdlib.h>

void comparar(int **matriz, int n, int m, int x) {
    int i, j;
    int maiores = 0, menores = 0, iguais = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (matriz[i][j] > x)
                maiores++;
            else if (matriz[i][j] < x)
                menores++;
            else
                iguais++;
        }
    }
    printf("Maiores que X: %d\n", maiores);
    printf("Menores que X: %d\n", menores);
    printf("Iguais a X: %d\n", iguais);
}

int main() {
    int **matriz;
    int n, m, i, j, x;
    printf("Digite o numero de linhas e colunas: ");
    if (scanf("%d %d", &n, &m) != 2) return 0;

    matriz = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
        matriz[i] = (int *)malloc(m * sizeof(int));

    printf("Digite os valores da matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            scanf("%d", &matriz[i][j]);
    }

    printf("Digite o valor de X: ");
    if (scanf("%d", &x) != 1) return 0;

    comparar(matriz, n, m, x);

    for (i = 0; i < n; i++)
        free(matriz[i]);
    free(matriz);

    return 0;
}
