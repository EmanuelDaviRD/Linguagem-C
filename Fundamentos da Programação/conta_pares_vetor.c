#include <stdio.h>

void preencheVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
}

int contaPares(int vetor[], int tamanho) {
    int i, pares = 0;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0)
            pares++;
    }
    return pares;
}

int main() {
    int tamanho;
    if (scanf("%d", &tamanho) != 1) return 0;
    int vetor[tamanho];
    preencheVetor(vetor, tamanho);
    printf("Quantidade de pares digitados: %d\n", contaPares(vetor, tamanho));
    return 0;
}
