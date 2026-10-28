#include <stdio.h>

void imprimeVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d\n", vetor[i]);
}

int main() {
    int i, tamanho;
    if (scanf("%d", &tamanho) != 1) return 0;
    int vetor[tamanho];
    for (i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
    imprimeVetor(vetor, tamanho);
    return 0;
}
