#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void percorreVetor(int *vetor, int n) {
    int pares = 0;
    clock_t inicio = clock();
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0)
            pares++;
    }
    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Quantidade de pares: %d\n", pares);
    printf("Tempo de execucao: %lf segundos\n", tempo);
}

int main() {
    int i, n;
    printf("Digite o tamanho do vetor: ");
    if (scanf("%d", &n) != 1) return 0;
    int *vetor = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        vetor[i] = rand() % 100;
    percorreVetor(vetor, n);
    free(vetor);
    return 0;
}
