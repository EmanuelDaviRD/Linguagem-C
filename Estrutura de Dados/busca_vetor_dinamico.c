#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v1 = (int *)malloc(10 * sizeof(int));
    int i, busca, encontrado = 0;
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &v1[i]) != 1) return 0;
    }
    printf("Digite qual valor voce deseja buscar: ");
    if (scanf("%d", &busca) != 1) return 0;
    for (i = 0; i < 10; i++) {
        if (v1[i] == busca) {
            encontrado = 1;
            printf("Numero encontrado na posicao %d.\n", i);
            break;
        }
    }
    if (encontrado == 0)
        printf("Valor nao encontrado no vetor.\n");
    free(v1);
    return 0;
}
