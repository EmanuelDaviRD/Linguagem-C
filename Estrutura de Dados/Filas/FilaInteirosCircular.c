#include <stdio.h>

#define MAX 5

typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int qtd;
} Fila;

void inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->qtd = 0;
}

int isEmpty(Fila *f) {
    return (f->qtd == 0);
}

int isFull(Fila *f) {
    return (f->qtd == MAX);
}

void enqueue(Fila *f, int valor) {
    if (isFull(f)) {
        printf("Fila cheia!\n");
        return;
    }
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % MAX;
    f->qtd++;
    printf("%d inserido na fila.\n", valor);
}

void dequeue(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia!\n");
        return;
    }
    int valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->qtd--;
    printf("%d removido da fila.\n", valor);
}

void exibir(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Fila: ");
    for (int i = 0; i < f->qtd; i++) {
        int idx = (f->inicio + i) % MAX;
        printf("%d ", f->dados[idx]);
    }
    printf("\n");
}

int main() {
    Fila f;
    int opcao, valor;

    inicializar(&f);

    do {
        printf("\n1 - Inserir elemento (enqueue)\n");
        printf("2 - Remover elemento (dequeue)\n");
        printf("3 - Exibir fila\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                enqueue(&f, valor);
                exibir(&f);
                break;
            case 2:
                dequeue(&f);
                exibir(&f);
                break;
            case 3:
                exibir(&f);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}