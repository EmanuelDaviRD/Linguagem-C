#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, soma = 0;
    printf("Quantos numeros deseja calcular a media: ");
    if (scanf("%d", &n) != 1) return 0;
    int *v1 = (int *)malloc(n * sizeof(int));
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < n; i++)
        if (scanf("%d", &v1[i]) != 1) return 0;
    for (i = 0; i < n; i++)
        soma += v1[i];
    printf("A media dos valores digitados e igual a: %.2f.\n", (float)soma / n);
    free(v1);
    return 0;
}
