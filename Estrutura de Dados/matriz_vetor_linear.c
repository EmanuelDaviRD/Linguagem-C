#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *vetor;
    int linhas, colunas, i, j;

    printf("Quantas linhas e colunas deseja?\n");
    if (scanf("%d %d", &linhas, &colunas) != 2) return 0;

    vetor = (int *)malloc(linhas * colunas * sizeof(int));

    srand(time(NULL));

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            vetor[i * colunas + j] = rand() % 100;
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", vetor[i * colunas + j]);
        }
        printf("\n");
    }

    free(vetor);

    return 0;
}
