#include <stdio.h>

int NumeroPerfeito(int n) {
    int i;
    int somaDivisores = 0;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            somaDivisores += i;
        }
    }
    if (somaDivisores == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (NumeroPerfeito(n) == 1)
        printf("%d e um numero perfeito\n", n);
    else
        printf("%d nao e um numero perfeito\n", n);
    return 0;
}
