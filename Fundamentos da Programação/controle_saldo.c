#include <stdio.h>

int main() {
    int i, conta, conta_maior, conta_menor;
    float saldo, debito, credito, saldo_atual;
    float maior_saldo, menor_saldo;

    for (i = 1; i <= 10; i++) {
        printf("\n CLIENTE %d \n", i);
        printf("NUMERO DA CONTA: ");
        scanf("%d", &conta);
        printf("SALDO ANTERIOR: ");
        scanf("%f", &saldo);
        printf("DEBITO: ");
        scanf("%f", &debito);
        printf("CREDITO: ");
        scanf("%f", &credito);

        saldo_atual = saldo - debito + credito;
        printf("SALDO ATUAL: R$ %.2f\n", saldo_atual);

        if (saldo_atual >= 0) {
            printf("SITUACAO: Saldo Positivo\n");
        } else {
            printf("SITUACAO: Saldo Negativo\n");
        }

        if (i == 1) {
            maior_saldo = saldo_atual;
            conta_maior = conta;
            menor_saldo = saldo_atual;
            conta_menor = conta;
        } else {
            if (saldo_atual > maior_saldo) {
                maior_saldo = saldo_atual;
                conta_maior = conta;
            }
            if (saldo_atual < menor_saldo) {
                menor_saldo = saldo_atual;
                conta_menor = conta;
            }
        }
    }

    printf("\nMAIOR SALDO: Conta %d (R$ %.2f)\n", conta_maior, maior_saldo);
    printf("MENOR SALDO: Conta %d (R$ %.2f)\n", conta_menor, menor_saldo);

    return 0;
}
