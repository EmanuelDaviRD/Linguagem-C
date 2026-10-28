#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char rua[50];
    int numero;
    char cidade[50];
} Endereco;

typedef struct {
    char nome[100];
    int idade;
    Endereco endereco;
} Aluno;

int main() {
    Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
    if (aluno == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }
    printf("Digite o nome do aluno, idade, rua, numero e cidade:\n");
    if (scanf(" %99[^\n]", aluno->nome) != 1) return 0;
    if (scanf("%d", &aluno->idade) != 1) return 0;
    if (scanf(" %49[^\n]", aluno->endereco.rua) != 1) return 0;
    if (scanf("%d", &aluno->endereco.numero) != 1) return 0;
    if (scanf(" %49[^\n]", aluno->endereco.cidade) != 1) return 0;

    printf("\nDados cadastrados:\n");
    printf("Nome: %s\nIdade: %d\nRua: %s\nNumero: %d\nCidade: %s\n",
           aluno->nome, aluno->idade, aluno->endereco.rua, aluno->endereco.numero, aluno->endereco.cidade);

    free(aluno);
    return 0;
}
