#include <stdio.h>

int main() {
    int n, i, quantia;
    char tipo;
    int total_geral = 0;
    int total_coelhos = 0;
    int total_ratos = 0;
    int total_sapos = 0;
    float p_coelhos, p_ratos, p_sapos;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 0; i < n; i++) {
        scanf("%d %c", &quantia, &tipo);
        total_geral += quantia;

        if (tipo == 'C') {
            total_coelhos += quantia;
        } else if (tipo == 'R') {
            total_ratos += quantia;
        } else if (tipo == 'S') {
            total_sapos += quantia;
        }
    }

    p_coelhos = (float)total_coelhos * 100 / total_geral;
    p_ratos = (float)total_ratos * 100 / total_geral;
    p_sapos = (float)total_sapos * 100 / total_geral;

    printf("Total: %d cobaias\n", total_geral);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos: %d\n", total_sapos);
    printf("Percentual de coelhos: %.2f %%\n", p_coelhos);
    printf("Percentual de ratos: %.2f %%\n", p_ratos);
    printf("Percentual de sapos: %.2f %%\n", p_sapos);

    return 0;
}
