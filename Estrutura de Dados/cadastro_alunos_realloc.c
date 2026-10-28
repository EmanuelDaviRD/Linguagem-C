#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float n1;
    float n2;
} Aluno;

int main() {
    char confirmacao[10];
    int total = 0;
    int capacidade = 2;

    Aluno *aluno = (Aluno *)malloc(capacidade * sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    while (1) {
        if (total == capacidade) {
            capacidade *= 2;
            Aluno *temp = (Aluno *)realloc(aluno, capacidade * sizeof(Aluno));
            if (temp == NULL) {
                printf("Erro ao realocar memoria!\n");
                break;
            }
            aluno = temp;
        }

        printf("\n--- Aluno %d ---\n", total + 1);
        printf("Nome: ");
        if (scanf(" %49[^\n]", (aluno + total)->nome) != 1) break;
        printf("Nota 1: ");
        if (scanf("%f", &(aluno + total)->n1) != 1) break;
        printf("Nota 2: ");
        if (scanf("%f", &(aluno + total)->n2) != 1) break;

        total++;

        printf("Deseja cadastrar outro aluno? (sim/nao): ");
        if (scanf(" %9s", confirmacao) != 1) break;

        if (strcmp(confirmacao, "sim") != 0 && strcmp(confirmacao, "SIM") != 0 && strcmp(confirmacao, "Sim") != 0) {
            break;
        }
    }

    printf("\n========= RELATORIO FINAL =========\n");
    for (int i = 0; i < total; i++) {
        float media = ((aluno + i)->n1 + (aluno + i)->n2) / 2.0f;
        printf("Aluno %d: %s\n", i + 1, (aluno + i)->nome);
        printf("Media: %.2f\n", media);
        printf("Situacao: %s\n\n", media >= 7.0f ? "Aprovado" : "Reprovado");
    }

    free(aluno);
    return 0;
}
