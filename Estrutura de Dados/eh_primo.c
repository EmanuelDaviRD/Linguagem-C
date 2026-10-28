#include <stdio.h>

int ehPrimo(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int numero;
    if (scanf("%d", &numero) != 1) return 0;
    if (ehPrimo(numero))
        printf("O numero e primo\n");
    else
        printf("o numero nao e primo\n");
    return 0;
}
