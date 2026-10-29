#include <stdio.h>
#include <stdlib.h>
#include "listacir.h"

int main() {
    No *inicio = NULL;
    int opcao, valor, pos;

    do {
        printf("1 - Inserir no inicio\n");
        printf("2 - Inserir no final\n");
        printf("3 - Inserir de forma ordenada\n");
        printf("4 - Inserir em posicao especifica\n");
        printf("5 - Remover de posicao especifica\n");
        printf("6 - Contar elementos\n");
        printf("7 - Imprimir lista circular\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirInicio(&inicio, valor);
                printf("Valor inserido no inicio!\n");
                break;
            case 2:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirFim(&inicio, valor);
                printf("Valor inserido no final!\n");
                break;
            case 3:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                inserirOrdenado(&inicio, valor);
                printf("Valor inserido ordenadamente!\n");
                break;
            case 4:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                printf("Digite a posicao (base 1): ");
                scanf("%d", &pos);
                inserirPosicao(&inicio, valor, pos);
                break;
            case 5:
                printf("Digite a posicao a remover (base 1): ");
                scanf("%d", &pos);
                removerPosicao(&inicio, pos);
                break;
            case 6:
                printf("Total de elementos: %d\n", contarElementos(inicio));
                break;
            case 7:
                imprimir(inicio);
                break;
            case 0:
                liberarLista(&inicio);
                printf("Encerrando programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}