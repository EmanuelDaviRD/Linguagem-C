#include <stdio.h>
#include "agenda.h"

int main() {
    Pessoa agenda[MAX];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n===== AGENDA DE TELEFONES =====\n");
        printf("1 - Buscar por primeiro nome\n");
        printf("2 - Buscar por mes de aniversario\n");
        printf("3 - Buscar por dia e mes de aniversario\n");
        printf("4 - Inserir pessoa\n");
        printf("5 - Retirar pessoa\n");
        printf("6 - Imprimir agenda\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        opcao = lerInteiro();

        switch (opcao) {
            case 1: buscarNome(agenda, quantidade); break;
            case 2: buscarMes(agenda, quantidade); break;
            case 3: buscarDiaMes(agenda, quantidade); break;
            case 4: inserirPessoa(agenda, &quantidade); break;
            case 5: retirarPessoa(agenda, &quantidade); break;
            case 6: imprimirAgenda(agenda, quantidade); break;
            case 0: printf("Programa encerrado!\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
