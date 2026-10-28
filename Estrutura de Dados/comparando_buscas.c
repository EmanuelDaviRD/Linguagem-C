#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int buscaSequencial(int *vetor, int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
    return -1;
}

int buscaBinaria(int *vetor, int n, int chave) {
    int inicio = 0;
    int fim = n - 1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == chave) {
            return meio;
        }
        if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int n = 100000;
    int *vetor = (int *)malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 500000;
    }
    int chave = vetor[n - 1];

    clock_t inicio = clock();
    int posSeq = buscaSequencial(vetor, n, chave);
    clock_t fim = clock();
    double tempoSeq = (double)(fim - inicio) / CLOCKS_PER_SEC;

    qsort(vetor, n, sizeof(int), compara);

    inicio = clock();
    int posBin = buscaBinaria(vetor, n, chave);
    fim = clock();
    double tempoBin = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("=== RESULTADOS DA BUSCA (n = %d) ===\n", n);
    printf("Busca Sequencial: Posicao = %d | Tempo = %lf segundos\n", posSeq, tempoSeq);
    printf("Busca Binaria:    Posicao = %d | Tempo = %lf segundos\n", posBin, tempoBin);

    free(vetor);
    return 0;
}
