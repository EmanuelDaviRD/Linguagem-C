#include <stdio.h>

int ehPar(int numero) {
    if (numero % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int n1;
    if (scanf("%d", &n1) != 1) return 0;
    if (ehPar(n1) == 1)
        printf("Par\n");
    else
        printf("Impar\n");
    return 0;
}
