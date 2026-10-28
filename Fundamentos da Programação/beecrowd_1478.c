#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j, valor;
    while (scanf("%d", &N) && N != 0) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                valor = abs(i - j) + 1;
                if (j == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
