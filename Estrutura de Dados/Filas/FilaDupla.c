#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *ant;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Deque;

void inicializar(Deque *d) {
    d->inicio = NULL;
    d->fim = NULL;
}

int isEmpty(Deque *d) {
    return (d->inicio == NULL);
}

void enqueueInicio(Deque *d, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    novo->valor = valor;
    novo->ant = NULL;
    novo->prox = d->inicio;

    if (isEmpty(d)) {
        d->fim = novo;
    } else {
        d->inicio->ant = novo;
    }
    d->inicio = novo;

    printf("%d inserido no início.\n", valor);
}

void enqueueFim(Deque *d, int valor) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    novo->valor = valor;
    novo->prox = NULL;
    novo->ant = d->fim;

    if (isEmpty(d)) {
        d->inicio = novo;
    } else {
        d->fim->prox = novo;
    }
    d->fim = novo;

    printf("%d inserido no fim.\n", valor);
}

void dequeueInicio(Deque *d) {
    if (isEmpty(d)) {
        printf("Deque vazio!\n");
        return;
    }

    No *temp = d->inicio;
    printf("%d removido do início.\n", temp->valor);

    d->inicio = d->inicio->prox;

    if (d->inicio == NULL) {
        d->fim = NULL;
    } else {
        d->inicio->ant = NULL;
    }

    free(temp);
}

void dequeueFim(Deque *d) {
    if (isEmpty(d)) {
        printf("Deque vazio!\n");
        return;
    }

    No *temp = d->fim;
    printf("%d removido do fim.\n", temp->valor);

    d->fim = d->fim->ant;

    if (d->fim == NULL) {
        d->inicio = NULL;
    } else {
        d->fim->prox = NULL;
    }

    free(temp);
}

void exibir(Deque *d) {
    if (isEmpty(d)) {
        printf("Deque vazio!\n");
        return;
    }

    No *aux = d->inicio;
    printf("Deque atual: ");
    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

void esvaziar(Deque *d) {
    while (!isEmpty(d)) {
        dequeueInicio(d);
    }
}

int main() {
    Deque d;
    int opcao, valor;

    inicializar(&d);

    do {
        printf("\nFILA DUPLA (DEQUE)\n");
        printf("1 - Inserir no início (enqueueInicio)\n");
        printf("2 - Inserir no fim (enqueueFim)\n");
        printf("3 - Remover do inicio (dequeueInicio)\n");
        printf("4 - Remover do fim (dequeueFim)\n");
        printf("5 - Exibir deque\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                enqueueInicio(&d, valor);
                exibir(&d);
                break;
            case 2:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                enqueueFim(&d, valor);
                exibir(&d);
                break;
            case 3:
                dequeueInicio(&d);
                exibir(&d);
                break;
            case 4:
                dequeueFim(&d);
                exibir(&d);
                break;
            case 5:
                exibir(&d);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    esvaziar(&d);

    return 0;
}