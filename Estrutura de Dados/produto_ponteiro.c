#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto *produto = (Produto *)malloc(sizeof(Produto));
    if (produto == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }
    printf("Digite o Nome, Preco e Quantidade do Produto:\n");
    if (scanf(" %99[^\n]", produto->nome) != 1) return 0;
    if (scanf("%f", &produto->preco) != 1) return 0;
    if (scanf("%d", &produto->quantidade) != 1) return 0;

    printf("\nNome: %s\nPreco: R$ %.2f\nQuantidade: %d\n", produto->nome, produto->preco, produto->quantidade);

    free(produto);
    return 0;
}
