#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main() {
    Aluno *lista = NULL;
    int opcao;

    do {
        printf("\n===== MENU ALUNO =====\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Inserir no fim\n");
        printf("3 - Exibir lista (Todos)\n");
        printf("4 - Alterar\n");
        printf("5 - Buscar (Matricula)\n");
        printf("6 - Buscar (Nome)\n");
        printf("7 - Exibir aluno aprovados\n");
        printf("8 - Remover\n");
        printf("9 - Contar quantos alunos cadastrados\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) break;

        switch (opcao) {
            case 1:
                inserirInicio(&lista);
                break;
            case 2:
                inserirFim(&lista);
                break;
            case 3:
                exibirLista(lista);
                break;
            case 4:
                alterarAluno(lista);
                break;
            case 5:
                buscarPorMatricula(lista);
                break;
            case 6:
                buscarPorNome(lista);
                break;
            case 7:
                exibirAprovados(lista);
                break;
            case 8:
                removerAluno(&lista);
                break;
            case 9:
                printf("\nTotal de alunos cadastrados: %d\n", contarAlunos(lista));
                break;
            case 0:
                liberarLista(&lista);
                printf("\nEncerrando o programa...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
