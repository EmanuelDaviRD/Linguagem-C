#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main() {
    int n, i;
    long double fatorial = 1.0L;

    printf("DIGITE UM NUMERO PARA CALCULAR O FATORIAL: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("NAO EXISTE FATORIAL DE NUMERO NEGATIVO\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial = fatorial * i;
        }
        printf("\n O FATORIAL DE %d E IGUAL A %.0Lf\n", n, fatorial);
    }

    return 0;
}
