#include <stdio.h>

int maiorElemento(int vetor[], int tamanho) {
    int i, maior = vetor[0];
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    return maior;
}

void preencheVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
}

int main() {
    int tamanho;
    if (scanf("%d", &tamanho) != 1) return 0;
    int vetor[tamanho];
    preencheVetor(vetor, tamanho);
    printf("maior elemento %d\n", maiorElemento(vetor, tamanho));
    return 0;
}
