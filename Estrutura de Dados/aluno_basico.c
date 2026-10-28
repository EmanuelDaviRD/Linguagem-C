#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float media;
} Aluno;

int main() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    printf("Digite o nome: ");
    if (scanf(" %49[^\n]", aluno->nome) != 1) return 0;
    printf("Digite a idade: ");
    if (scanf("%d", &aluno->idade) != 1) return 0;
    printf("Digite a media: ");
    if (scanf("%f", &aluno->media) != 1) return 0;

    printf("\nNome: %s\nIdade: %d\nMedia: %.2f\n", aluno->nome, aluno->idade, aluno->media);

    free(aluno);
    return 0;
}
