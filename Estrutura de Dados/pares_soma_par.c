#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double paresSomaParIngenuo(int *vetor, int n) {
    double contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((vetor[i] + vetor[j]) % 2 == 0) {
                contador++;
            }
        }
    }
    return contador;
}

double paresSomaParOtimizado(int *vetor, int n) {
    double pares = 0;
    double impares = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    double combPares = (pares * (pares - 1.0)) / 2.0;
    double combImpares = (impares * (impares - 1.0)) / 2.0;
    return combPares + combImpares;
}

int main() {
    int n = 50000;
    int *vetor = (int *)malloc(n * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 1000;
    }

    clock_t inicio = clock();
    double resIngenuo = paresSomaParIngenuo(vetor, n);
    clock_t fim = clock();
    double tempoIngenuo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    inicio = clock();
    double resOtimizado = paresSomaParOtimizado(vetor, n);
    fim = clock();
    double tempoOtimizado = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("=== COMPARACAO DE PERFORMANCE (n = %d) ===\n", n);
    printf("Versao Ingenua [O(n^2)]: Resultado = %.0f | Tempo = %.5f seg\n", resIngenuo, tempoIngenuo);
    printf("Versao Otimizada [O(n)] : Resultado = %.0f | Tempo = %.5f seg\n", resOtimizado, tempoOtimizado);

    free(vetor);
    return 0;
}
