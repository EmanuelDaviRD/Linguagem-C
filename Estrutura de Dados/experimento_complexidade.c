#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int *vetor, int n) {
    for (int i = 0; i < n - 1; i++) {
        int trocou = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int tmp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = tmp;
                trocou = 1;
            }
        }
        if (!trocou) break;
    }
}

int main() {
    int tamanhos[] = {1000, 2000, 4000, 8000};
    int qtdTamanhos = 4;
    srand(time(NULL));
    printf("Tamanho (n) | Tempo (segundos)\n");
    printf("-------------------------------\n");
    for (int k = 0; k < qtdTamanhos; k++) {
        int n = tamanhos[k];
        int *vetor = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            vetor[i] = rand() % 10000;
        }
        clock_t inicio = clock();
        bubbleSort(vetor, n);
        clock_t fim = clock();
        double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("%-11d | %-16.5f\n", n, tempo);
        free(vetor);
    }
    return 0;
}
