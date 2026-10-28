#include <stdio.h>

void fibonacci_iterativo(int n) {
    int t1 = 0, t2 = 1, proximo;
    printf("Sequencia de Fibonacci (%d termos): ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        proximo = t1 + t2;
        t1 = t2;
        t2 = proximo;
    }
    printf("\n");
}

int main() {
    int termos;
    printf("Digite quantos termos do Fibonacci voce quer ver: ");
    if (scanf("%d", &termos) != 1) return 0;
    if (termos > 0) {
        fibonacci_iterativo(termos);
    } else {
        printf("Digite um numero maior que zero.\n");
    }
    return 0;
}
