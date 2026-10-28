#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, impar = 0, par = 0, primos = 0, divisores, v1[10];

    srand(time(NULL));

    printf("Vetor Gerado: ");
    for (i = 0; i < 10; i++) {
        v1[i] = rand() % 20 + 1;
        printf("%d ", v1[i]);
    }

    for (i = 0; i < 10; i++) {
        if (v1[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        divisores = 0;
        if (v1[i] > 1) {
            for (j = 1; j <= v1[i]; j++) {
                if (v1[i] % j == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                primos++;
            }
        }
    }

    printf("\nPares: %d", par);
    printf("\nImpares: %d", impar);
    printf("\nPrimos: %d\n", primos);

    return 0;
}
