#include <stdio.h>

int somaVetor(int vet[], int tamanho) {
    if (tamanho <= 0)
        return 0;
    return vet[tamanho - 1] + somaVetor(vet, tamanho - 1);
}

int main() {
    int v[5];
    int i;
    printf("Digite 5 numeros:\n");
    for (i = 0; i < 5; i++)
        if (scanf("%d", &v[i]) != 1) return 0;
    printf("Saida: %d\n", somaVetor(v, 5));
    return 0;
}
