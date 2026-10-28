#include <stdio.h>
#include <stdlib.h>

void soma_vet(int t, float *v1, float *v2, float *v3) {
    int i;
    for (i = 0; i < t; i++)
        v3[i] = v1[i] + v2[i];
}

int main() {
    int i;
    float *v1 = (float *)malloc(10 * sizeof(float));
    float *v2 = (float *)malloc(10 * sizeof(float));
    float *soma = (float *)malloc(10 * sizeof(float));
    printf("Digite os 10 elementos do primeiro vetor:\n");
    for (i = 0; i < 10; i++)
        if (scanf("%f", &v1[i]) != 1) return 0;
    printf("Digite os 10 elementos do segundo vetor:\n");
    for (i = 0; i < 10; i++)
        if (scanf("%f", &v2[i]) != 1) return 0;
    printf("Soma dos elementos de ambos os vetores:\n");
    soma_vet(10, v1, v2, soma);
    for (i = 0; i < 10; i++)
        printf("%.2f ", soma[i]);
    printf("\n");
    free(v1);
    free(v2);
    free(soma);
    return 0;
}
