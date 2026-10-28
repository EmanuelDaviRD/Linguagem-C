#include <stdio.h>

double mediaVetor(double vetor[], int tamanho) {
    int i;
    double soma = 0;
    for (i = 0; i < tamanho; i++)
        soma += vetor[i];
    return soma / tamanho;
}

int main() {
    int i, tamanho;
    if (scanf("%d", &tamanho) != 1) return 0;
    double vetor[tamanho];
    for (i = 0; i < tamanho; i++)
        scanf("%lf", &vetor[i]);
    printf("A media dos numeros digitados e igual a %.2lf\n", mediaVetor(vetor, tamanho));
    return 0;
}
