#include <stdio.h>
#include <stdlib.h>
#include "listad.h"

int main() {
    No *inicio = NULL;
    int opcao, valor, pos;
    No *encontrado = NULL;

    do {
        printf("1 - Inserir de forma ordenada\n");
        printf("2 - Inserir no inicio\n");
        printf("3 - Inserir no final\n");
        printf("4 - Imprimir em ordem inversa\n");
        printf("5 - Contar quantidade de elementos\n");
        printf("6 - Inserir em posicao especifica\n");
        printf("7 - Remover de posicao especifica\n");
        printf("8 - Inverter a ordem da lista\n");
        printf("9 - Buscar valor na lista\n");
        printf("10 - Imprimir lista\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para inserir ordenado: ");
                scanf("%d", &valor);
                inserirOrdenado(&inicio, valor);
                printf("Valor %d inserido com sucesso!\n", valor);
                break;

            case 2:
                printf("Digite o valor para inserir no inicio: ");
                scanf("%d", &valor);
                inserirInicio(&inicio, valor);
                printf("Valor %d inserido no inicio!\n", valor);
                break;

            case 3:
                printf("Digite o valor para inserir no final: ");
                scanf("%d", &valor);
                inserirFim(&inicio, valor);
                printf("Valor %d inserido no final!\n", valor);
                break;

            case 4:
                imprimirInverso(inicio);
                break;

            case 5:
                printf("Quantidade de elementos: %d\n", contarElementos(inicio));
                break;

            case 6:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                printf("Digite a posicao: ");
                scanf("%d", &pos);
                inserirPosicao(&inicio, valor, pos);
                break;

            case 7:
                printf("Digite a posicao para remover: ");
                scanf("%d", &pos);
                removerPosicao(&inicio, pos);
                break;

            case 8:
                inverterLista(&inicio);
                printf("Lista invertida com sucesso!\n");
                break;

            case 9:
                printf("Digite o valor a buscar: ");
                scanf("%d", &valor);
                encontrado = buscar(inicio, valor);
                if (encontrado != NULL) {
                    printf("Valor %d encontrado no ponteiro %p\n", encontrado->dado, (void*)encontrado);
                } else {
                    printf("Valor %d nao encontrado (NULL).\n", valor);
                }
                break;

            case 10:
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