#include <stdio.h>
#include <stdlib.h>

void percorrerTrajetoria(int *trajetoria, int n) {
    int pos = 1;
    while (pos != 0) {
        printf("%d ", pos);
        pos = trajetoria[pos];
    }
    printf("0\n");
}

int main() {
    int n, i;
    printf("Quantos valores deseja calcular a trajetoria?\n");
    if (scanf("%d", &n) != 1) return 0;
    int *trajetoria = (int *)malloc((n + 1) * sizeof(int));
    for (i = 1; i <= n; i++) {
        printf("Valor [%d]: ", i);
        scanf("%d", &trajetoria[i]);
    }
    percorrerTrajetoria(trajetoria, n);
    free(trajetoria);
    return 0;
}
