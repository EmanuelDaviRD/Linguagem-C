#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fatorial(n - 1);
}

int main() {
    int num;
    printf("Digite um numero: ");
    if (scanf("%d", &num) != 1) return 0;
    printf("Fatorial de %d e %d\n", num, fatorial(num));
    return 0;
}
