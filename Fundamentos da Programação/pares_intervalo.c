#include <stdio.h>

int main() {
    int M, N, i, temp;

    printf("Digite o valor de M e N respectivamente: ");
    scanf("%d%d", &M, &N);

    if (M > N) {
        temp = M;
        M = N;
        N = temp;
    }

    printf("Numeros pares entre %d e %d:\n", M, N);
    for (i = M; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
