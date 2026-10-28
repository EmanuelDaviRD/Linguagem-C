#include <stdio.h>
#include <stdlib.h>

int calcularDistancia(int **matriz, int *viagem) {
    int i;
    int distancia = 0;
    for (i = 0; i < 5; i++)
        distancia += matriz[viagem[i] - 1][viagem[i + 1] - 1];
    return distancia;
}

int main() {
    int **matriz;
    int *viagem;
    int i, j, distancia;

    matriz = (int **)malloc(6 * sizeof(int *));
    for (i = 0; i < 6; i++)
        matriz[i] = (int *)malloc(6 * sizeof(int));

    viagem = (int *)malloc(6 * sizeof(int));

    printf("Digite os valores da matriz de distancias (6x6):\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++)
            scanf("%d", &matriz[i][j]);
    }

    printf("Digite o vetor de viagem (6 posicoes):\n");
    for (i = 0; i < 6; i++)
        scanf("%d", &viagem[i]);

    distancia = calcularDistancia(matriz, viagem);

    printf("\nDistancia percorrida: %d km\n", distancia);

    for (i = 0; i < 6; i++)
        free(matriz[i]);
    free(matriz);
    free(viagem);

    return 0;
}
