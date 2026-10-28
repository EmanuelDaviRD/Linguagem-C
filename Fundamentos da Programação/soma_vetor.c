#include <stdio.h>

int somaVetor(int vetor[], int tamanho) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int i, tamanho;
    if (scanf("%d", &tamanho) != 1) return 0;
    int vetor[tamanho];
    for (i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
    printf("soma dos numeros digitados igual a %d\n", somaVetor(vetor, tamanho));
    return 0;
}
