#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float media;
} Disciplina;

typedef struct {
    char nome[50];
    int idade;
    int numDisciplina;
    Disciplina *disciplina;
} Aluno;

int main() {
    int n, i;

    printf("Digite o numero de alunos: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    Aluno *aluno = (Aluno *)malloc(n * sizeof(Aluno));
    if (aluno == NULL) return 1;

    for (i = 0; i < n; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        if (scanf(" %49[^\n]", (aluno + i)->nome) != 1) return 0;
        printf("Idade: ");
        if (scanf("%d", &(aluno + i)->idade) != 1) return 0;
        printf("Numero de disciplinas: ");
        if (scanf("%d", &(aluno + i)->numDisciplina) != 1) return 0;

        (aluno + i)->disciplina = (Disciplina *)malloc((aluno + i)->numDisciplina * sizeof(Disciplina));

        for (int j = 0; j < (aluno + i)->numDisciplina; j++) {
            printf("Disciplina %d: ", j + 1);
            if (scanf(" %49[^\n]", ((aluno + i)->disciplina + j)->nome) != 1) return 0;
            printf("Media: ");
            if (scanf("%f", &((aluno + i)->disciplina + j)->media) != 1) return 0;
        }
    }

    int indiceMaiorMedia = 0;
    float maiorMediaGeral = -1.0f;

    printf("\n========= RELATORIO FINAL =========\n");

    for (i = 0; i < n; i++) {
        float somaMedias = 0.0f;

        printf("\nNome: %s | Idade: %d\n", (aluno + i)->nome, (aluno + i)->idade);
        printf("Disciplinas:\n");

        for (int j = 0; j < (aluno + i)->numDisciplina; j++) {
            float m = ((aluno + i)->disciplina + j)->media;
            printf(" - %s: %.2f\n", ((aluno + i)->disciplina + j)->nome, m);
            somaMedias += m;
        }

        float mediaGeral = somaMedias / (aluno + i)->numDisciplina;
        printf("Media Geral: %.2f\n", mediaGeral);

        if (mediaGeral > maiorMediaGeral) {
            maiorMediaGeral = mediaGeral;
            indiceMaiorMedia = i;
        }
    }

    printf("\n------------------------------------\n");
    printf("MAIOR MEDIA GERAL:\n");
    printf("%s com Media Geral de %.2f\n", (aluno + indiceMaiorMedia)->nome, maiorMediaGeral);
    printf("------------------------------------\n");

    for (i = 0; i < n; i++) {
        free((aluno + i)->disciplina);
    }
    free(aluno);

    return 0;
}
