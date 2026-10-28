#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int ano;
    float preco;
} Livro;

int main() {
    Livro *livro = (Livro *)malloc(sizeof(Livro));
    if (livro == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    printf("Digite os dados do livro (Titulo, Autor, Ano, Preco):\n");
    if (scanf(" %49[^\n]", livro->titulo) != 1) return 0;
    if (scanf(" %49[^\n]", livro->autor) != 1) return 0;
    if (scanf("%d", &livro->ano) != 1) return 0;
    if (scanf("%f", &livro->preco) != 1) return 0;

    printf("\n--- Dados do Livro ---\n");
    printf("Titulo: %s\nAutor: %s\nAno: %d\nPreco: R$ %.2f\n", livro->titulo, livro->autor, livro->ano, livro->preco);

    free(livro);
    return 0;
}
