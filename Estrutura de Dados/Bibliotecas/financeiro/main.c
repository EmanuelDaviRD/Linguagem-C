#include <stdio.h>
#include "financeiro.h"

int main() {
    float capital, taxa, tempo;

    printf("Digite o capital inicial: ");
    if (scanf("%f", &capital) != 1) return 0;
    printf("Digite a taxa de juros (em %%): ");
    if (scanf("%f", &taxa) != 1) return 0;
    printf("Digite o tempo em anos: ");
    if (scanf("%f", &tempo) != 1) return 0;

    printf("Juros simples: %.2f\n", calcularJurosSimples(capital, taxa, tempo));
    printf("Juros compostos: %.2f\n", calcularJurosCompostos(capital, taxa, tempo));

    return 0;
}
