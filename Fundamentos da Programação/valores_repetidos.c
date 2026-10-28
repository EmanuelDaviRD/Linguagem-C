#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, v1[10], ja_contado[10];
    int total_repetidos = 0;

    srand(time(NULL));

    printf("Vetor Gerado: ");
    for (i = 0; i < 10; i++) {
        v1[i] = rand() % 10 + 1;
        ja_contado[i] = 0;
        printf("%d ", v1[i]);
    }

    printf("\nValores que se repetem: ");
    for (i = 0; i < 10; i++) {
        if (ja_contado[i] == 1) continue;

        int encontrou_duplicata = 0;
        for (j = i + 1; j < 10; j++) {
            if (v1[i] == v1[j]) {
                encontrou_duplicata = 1;
                ja_contado[j] = 1;
            }
        }

        if (encontrou_duplicata) {
            total_repetidos++;
            printf("%d ", v1[i]);
        }
    }

    printf("\nTotal de valores repetidos: %d\n", total_repetidos);

    return 0;
}
