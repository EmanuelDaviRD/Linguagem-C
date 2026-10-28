#include <stdio.h>

int main() {
    int i, menor, numeros[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        if (i == 0) {
            menor = numeros[i];
        } else if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Menor numero: %d\n", menor);
    return 0;
}
