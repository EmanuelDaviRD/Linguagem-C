#include <stdio.h>

int main() {
    int n, i;
    int numero = 1;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 0; i < n; i++) {
        printf("%d %d %d PUM\n", numero, numero + 1, numero + 2);
        numero += 4;
    }

    return 0;
}
