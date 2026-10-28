#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeVetor(int *vetor, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

void copiarVetor(int *origem, int *destino, int n) {
    for (int i = 0; i < n; i++)
        destino[i] = origem[i];
}

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
        if (!trocou)
            break;
    }
}

void merge(int *v, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    for (int i = 0; i < n1; i++) L[i] = v[l + i];
    for (int j = 0; j < n2; j++) R[j] = v[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) v[k++] = L[i++];
        else v[k++] = R[j++];
    }
    while (i < n1) v[k++] = L[i++];
    while (j < n2) v[k++] = R[j++];
    free(L);
    free(R);
}

void mergeSort(int *v, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(v, l, m);
        mergeSort(v, m + 1, r);
        merge(v, l, m, r);
    }
}

int particiona(int *v, int baixo, int alto) {
    int pivo = v[alto];
    int i = (baixo - 1);
    for (int j = baixo; j <= alto - 1; j++) {
        if (v[j] < pivo) {
            i++;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    int temp = v[i + 1];
    v[i + 1] = v[alto];
    v[alto] = temp;
    return (i + 1);
}

void quickSort(int *v, int baixo, int alto) {
    if (baixo < alto) {
        int pi = particiona(v, baixo, alto);
        quickSort(v, baixo, pi - 1);
        quickSort(v, pi + 1, alto);
    }
}

int main() {
    int n = 1000;
    int *vetor = (int *)malloc(n * sizeof(int));
    int *copia = (int *)malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        vetor[i] = (rand() % 5000) + 1;

    printf("Vetor Original (Antes da Ordenacao)\n");
    imprimeVetor(vetor, n);

    copiarVetor(vetor, copia, n);
    clock_t inicio = clock();
    bubbleSort(copia, n);
    clock_t fim = clock();
    double tempoBubble = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nVetor apos Bubble Sort\n");
    imprimeVetor(copia, n);

    copiarVetor(vetor, copia, n);
    inicio = clock();
    quickSort(copia, 0, n - 1);
    fim = clock();
    double tempoQuick = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nVetor apos Quicksort\n");
    imprimeVetor(copia, n);

    copiarVetor(vetor, copia, n);
    inicio = clock();
    mergeSort(copia, 0, n - 1);
    fim = clock();
    double tempoMerge = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nVetor apos MergeSort\n");
    imprimeVetor(copia, n);

    printf("\n--- TEMPOS DE EXECUCAO ---\n");
    printf("Bubble Sort: %lf segundos\n", tempoBubble);
    printf("QuickSort:   %lf segundos\n", tempoQuick);
    printf("MergeSort:   %lf segundos\n", tempoMerge);

    free(vetor);
    free(copia);
    return 0;
}
