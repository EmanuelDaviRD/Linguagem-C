#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", a);
        } else if (i == 2) {
            printf(" %d", b);
        } else {
            proximo = a + b;
            printf(" %d", proximo);
            a = b;
            b = proximo;
        }
    }
    printf("\n");

    return 0;
}
