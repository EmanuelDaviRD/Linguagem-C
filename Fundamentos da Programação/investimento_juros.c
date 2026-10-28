#include <stdio.h>

int main() {
    float saldo = 1000.00;
    float taxa = 0.005;    
    int meses, i;

    printf(" SIMULADOR DE INVESTIMENTO \n");
    printf("Investimento inicial: R$ 1000,00\n");
    printf("Taxa de rendimento: 0,5%% ao mes\n");
    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);

    printf("\n EVOLUCAO DO SALDO MES A MES \n");
    for (i = 1; i <= meses; i++) {
        saldo = saldo + (saldo * taxa);
        printf("Mes %2d: R$ %10.2f\n", i, saldo);
    }

    printf("\nSALDO FINAL: R$ %.2f\n", saldo);
    printf("LUCRO TOTAL: R$ %.2f\n", saldo - 1000.00);

    return 0;
}
