#include <stdio.h>
#include "matematica.h"

int main() {
    int a, b;
    printf("Digite o primeiro valor: ");
    if (scanf("%d", &a) != 1) return 0;
    printf("Digite o segundo valor: ");
    if (scanf("%d", &b) != 1) return 0;

    printf("Soma: %d\n", soma(a, b));
    printf("Subtracao: %d\n", subtrai(a, b));
    printf("Multiplicacao: %d\n", multiplica(a, b));
    printf("Divisao: %.2f\n", divide(a, b));

    return 0;
}
