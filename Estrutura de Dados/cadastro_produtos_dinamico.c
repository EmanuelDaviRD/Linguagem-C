#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    int n;
    printf("Quantos produtos deseja cadastrar?\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    Produto *produto = (Produto *)malloc(n * sizeof(Produto));
    if (produto == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\n--- Produto %d ---\n", i + 1);
        printf("Nome: ");
        if (scanf(" %49[^\n]", (produto + i)->nome) != 1) return 0;
        printf("Preco: ");
        if (scanf("%f", &(produto + i)->preco) != 1) return 0;
        printf("Quantidade: ");
        if (scanf("%d", &(produto + i)->quantidade) != 1) return 0;
    }

    float valortotal, valorgeral = 0.0f;
    printf("\n========= RELATORIO DE ESTOQUE =========\n");
    for (int i = 0; i < n; i++) {
        valortotal = (produto + i)->preco * (produto + i)->quantidade;
        valorgeral += valortotal;

        printf("\nProduto: %s\n", (produto + i)->nome);
        printf("Preco: R$ %.2f\n", (produto + i)->preco);
        printf("Quantidade: %d\n", (produto + i)->quantidade);
        printf("Valor em estoque: R$ %.2f\n", valortotal);
    }

    printf("\nValor total de todos os estoques: R$ %.2f\n", valorgeral);

    free(produto);
    return 0;
}
