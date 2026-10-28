#include <stdio.h>

int main() {
    float notas[10], aux;
    int i, j;

    printf("Digite as notas de 10 estudantes:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9; j++) {
            if (notas[j] > notas[j + 1]) {
                aux = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = aux;
            }
        }
    }

    printf("\n5 melhores notas (ordem crescente): ");
    for (i = 5; i < 10; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");

    return 0;
}
