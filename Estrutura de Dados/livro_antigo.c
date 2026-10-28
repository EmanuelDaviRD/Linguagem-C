#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

int main() {
    Livro *livro1 = (Livro *)malloc(sizeof(Livro));
    Livro *livro2 = (Livro *)malloc(sizeof(Livro));

    if (livro1 == NULL || livro2 == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os dados do Livro 1 (Titulo, Autor, Ano):\n");
    if (scanf(" %99[^\n]", livro1->titulo) != 1) return 0;
    if (scanf(" %99[^\n]", livro1->autor) != 1) return 0;
    if (scanf("%d", &livro1->ano) != 1) return 0;

    printf("Digite os dados do Livro 2 (Titulo, Autor, Ano):\n");
    if (scanf(" %99[^\n]", livro2->titulo) != 1) return 0;
    if (scanf(" %99[^\n]", livro2->autor) != 1) return 0;
    if (scanf("%d", &livro2->ano) != 1) return 0;

    printf("\n--- Livro mais antigo ---\n");
    if (livro1->ano < livro2->ano) {
        printf("Titulo: %s\nAutor: %s\nAno: %d\n", livro1->titulo, livro1->autor, livro1->ano);
    } else if (livro1->ano > livro2->ano) {
        printf("Titulo: %s\nAutor: %s\nAno: %d\n", livro2->titulo, livro2->autor, livro2->ano);
    } else {
        printf("Ambos os livros foram publicados no mesmo ano.\n");
    }

    free(livro1);
    free(livro2);
    return 0;
}
