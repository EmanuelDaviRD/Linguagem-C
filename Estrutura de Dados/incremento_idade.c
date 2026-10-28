#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float media;
} Aluno;

void incrementoUm(Aluno *aluno) {
    if (aluno != NULL) {
        aluno->idade += 1;
    }
}

int main() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }
    printf("Digite o Nome, Idade e Media do aluno:\n");
    if (scanf(" %49[^\n]", aluno->nome) != 1) return 0;
    if (scanf("%d", &aluno->idade) != 1) return 0;
    if (scanf("%f", &aluno->media) != 1) return 0;

    incrementoUm(aluno);

    printf("\nDados do aluno apos incremento de idade:\n");
    printf("Nome: %s\nIdade: %d\nMedia: %.2f\n", aluno->nome, aluno->idade, aluno->media);

    free(aluno);
    return 0;
}
