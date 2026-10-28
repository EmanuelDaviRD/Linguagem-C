#include <stdio.h>

/* Encontra e retorna o maior elemento do vetor */
int obterMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    return maior;
}

/* Counting Sort estável para um dígito específico */
void ordenacaoPorContagem(int vetor[], int tamanho, int posicaoDigito) {
    int saida[tamanho];
    int contagem[10] = {0};

    for (int i = 0; i < tamanho; i++) {
        int digito = (vetor[i] / posicaoDigito) % 10;
        contagem[digito]++;
    }

    for (int i = 1; i < 10; i++) {
        contagem[i] += contagem[i - 1];
    }

    for (int i = tamanho - 1; i >= 0; i--) {
        int digito = (vetor[i] / posicaoDigito) % 10;
        saida[contagem[digito] - 1] = vetor[i];
        contagem[digito]--;
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = saida[i];
    }
}

/* Função principal do Radix Sort */
void radixSort(int vetor[], int tamanho) {
    int maiorElemento = obterMaior(vetor, tamanho);

    for (int posicaoDigito = 1; maiorElemento / posicaoDigito > 0; posicaoDigito *= 10) {
        ordenacaoPorContagem(vetor, tamanho, posicaoDigito);
    }
}

/* Função para exibir os elementos do vetor */
void exibirVetor(int vetor[], int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int vetor[] = {42, 17, 8, 93, 21, 5, 64, 31};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("=== DEMONSTRACAO RADIX SORT ===\n\n");

    printf("Vetor Original: ");
    exibirVetor(vetor, tamanho);

    radixSort(vetor, tamanho);

    printf("\nVetor Ordenado: ");
    exibirVetor(vetor, tamanho);

    return 0;
}
