#include <stdio.h>

int main() {
    int i, v1[10];
    int positivos = 0, negativos = 0, pares = 0;

    for (i = 0; i < 10; i++) {
        if (scanf("%d", &v1[i]) != 1) return 0;
    }

    for (i = 0; i < 10; i++) {
        if (v1[i] > 0)
            positivos++;
        else if (v1[i] < 0)
            negativos++;
        if (v1[i] % 2 == 0)
            pares++;
    }

    printf("Quantidade de numeros positivos %d\n", positivos);
    printf("Quantidade de numeros negativos %d\n", negativos);
    printf("Quantidade de numeros pares %d\n", pares);
    return 0;
}
