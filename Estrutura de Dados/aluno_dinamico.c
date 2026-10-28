#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int idade;
    float media;
} Aluno;

int main() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    strcpy(aluno->nome, "Emanuel Davi");
    aluno->idade = 17;
    aluno->media = 10.00f;

    printf("--- Dados do Aluno ---\n");
    printf("Nome: %s\nIdade: %d\nMedia: %.2f\n", aluno->nome, aluno->idade, aluno->media);

    free(aluno);
    return 0;
}
