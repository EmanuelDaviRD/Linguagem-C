#include <stdio.h>

int main() {
    float preco = -1, total_compra = 0;
    int forma_pagamento;

    printf("      SUPERMERCADO EXCELENTE PRECO     \n");
    printf("DIGITE OS PRECOS DOS PRODUOS OU 0 PARA ENCERRAR\n");

    while (preco != 0) {
        printf("PRECO DO PRODUTO: R$ ");
        scanf("%f", &preco);
        if (preco > 0) {
            total_compra += preco;
        } else if (preco < 0) {
            printf("PRECO INVALIDO\n");
        }
    }

    if (total_compra == 0) {
        printf("\nNENHUM PRODUTO FOI COMPRADO\n");
        return 0;
    }

    printf("\nTOTAL DA COMPRA: R$ %.2f", total_compra);

    do {
        printf("\n\nFORMA DE PAGAMENTO:");
        printf("\n1) A vista (5%% de desconto)");
        printf("\n2) Cartao de Credito (4x sem juros)");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &forma_pagamento);

        if (forma_pagamento == 1) {
            float desconto = total_compra * 0.05;
            printf("\n>> Desconto aplicado: R$ %.2f", desconto);
            printf("\n>> TOTAL A PAGAR: R$ %.2f\n", total_compra - desconto);
        } else if (forma_pagamento == 2) {
            printf("\n>> Compra parcelada em 4x de R$ %.2f", total_compra / 4.0);
            printf("\n>> TOTAL A PAGAR: R$ %.2f\n", total_compra);
        } else {
            printf("\n[!] Opcao invalida! Tente novamente.");
        }
    } while (forma_pagamento != 1 && forma_pagamento != 2);

    return 0;
}
