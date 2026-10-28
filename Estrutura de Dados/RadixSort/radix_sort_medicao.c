#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Encontrar o maior elemento do vetor */
int obterMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

/* Counting Sort com alocação dinâmica */
void ordenacaoPorContagem(int vetor[], int tamanho, int posicaoDigito) {
    int *saida = (int *)malloc(tamanho * sizeof(int));
    if (saida == NULL) {
        printf("Erro de alocacao!\n");
        exit(1);
    }

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
    free(saida);
}

/* Algoritmo Radix Sort */
void radixSort(int vetor[], int tamanho) {
    int maiorElemento = obterMaior(vetor, tamanho);
    for (int posicaoDigito = 1; maiorElemento / posicaoDigito > 0; posicaoDigito *= 10) {
        ordenacaoPorContagem(vetor, tamanho, posicaoDigito);
    }
}

/* Função auxiliar para exibir o vetor na tela */
void exibirVetor(int vetor[], int tamanho) {
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    printf("=== DEMONSTRACAO VISUAL ===\n");
    
    int vetor[] = {42, 17, 8, 93, 21, 5, 64, 31};
    int tamDemo = 8;
    
    printf("Antes da ordenacao:  ");
    exibirVetor(vetor, tamDemo);
    
    radixSort(vetor, tamDemo);
    
    printf("Depois da ordenacao: ");
    exibirVetor(vetor, tamDemo);

    printf("\n%-12s %s\n", "Quantidade", "Tempo");
    
    int tamanhos[] = {100, 1000, 10000, 100000};
    int numTestes = sizeof(tamanhos) / sizeof(tamanhos[0]);
    
    srand(time(NULL)); 

    for (int t = 0; t < numTestes; t++) {
        int n = tamanhos[t];
        
        int *vetorTempo = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            vetorTempo[i] = rand() % 1000000;
        }

        clock_t inicio = clock();
        radixSort(vetorTempo, n);
        clock_t fim = clock();
        
        double tempoSegundos = (double)(fim - inicio) / CLOCKS_PER_SEC;
        
        printf("%-12d %.3f s\n", n, tempoSegundos);
        
        free(vetorTempo);
    }

    return 0;
}
