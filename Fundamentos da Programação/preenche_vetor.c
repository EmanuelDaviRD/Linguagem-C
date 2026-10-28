#include <stdio.h>

void preencheVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
}

int main() {
    int i, tamanho;
    if (scanf("%d", &tamanho) != 1) return 0;
    int vetor[tamanho];
    preencheVetor(vetor, tamanho);
    for (i = 0; i < tamanho; i++)
        printf("%d\n", vetor[i]);
    return 0;
}
