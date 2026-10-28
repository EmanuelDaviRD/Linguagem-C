#include <stdio.h>
#include <stdlib.h>

void eliminarRepetidos(int *vetor) {
    int i, j, repetido, quantidade = 0;
    int *distintos = (int *)malloc(sizeof(int));
    for (i = 0; i < 15; i++) {
        repetido = 0;
        for (j = 0; j < quantidade; j++) {
            if (vetor[i] == distintos[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            distintos = (int *)realloc(distintos, (quantidade + 1) * sizeof(int));
            distintos[quantidade] = vetor[i];
            quantidade++;
        }
    }
    printf("Valores distintos:\n");
    for (i = 0; i < quantidade; i++)
        printf("%d ", distintos[i]);
    printf("\n");
    free(distintos);
}

int main() {
    int *vetor = (int *)malloc(15 * sizeof(int));
    printf("Digite 15 valores:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }
    eliminarRepetidos(vetor);
    free(vetor);
    return 0;
}
