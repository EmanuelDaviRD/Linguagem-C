#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) return 0;
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int primos[20];
    int qtdEncontrada = 0;
    int candidato = 2;
    if (scanf("%d", &n) != 1) return 0;
    while (qtdEncontrada < n) {
        if (ehPrimo(candidato) == 1) {
            primos[qtdEncontrada] = candidato;
            qtdEncontrada++;
        }
        candidato++;
    }
    int limite, j;
    for (limite = n; limite >= 1; limite--) {
        for (j = 0; j < limite; j++) {
            printf("%d ", primos[j]);
        }
        printf("\n");
    }
    return 0;
}
