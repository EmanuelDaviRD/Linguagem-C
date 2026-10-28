#include <stdio.h>

int somaNaturais(int n) {
    if (n <= 1)
        return n;
    return n + somaNaturais(n - 1);
}

int main() {
    int n;
    printf("Digite um numero: ");
    if (scanf("%d", &n) != 1) return 0;
    printf("Soma de 1 ate %d: %d\n", n, somaNaturais(n));
    return 0;
}
