#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    int prioridade;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
} FilaPrioridade;

void inicializar(FilaPrioridade *f) {
    f->inicio = NULL;
}

int isEmpty(FilaPrioridade *f) {
    return (f->inicio == NULL);
}

void enqueue(FilaPrioridade *f, int valor, int prioridade) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    novo->valor = valor;
    novo->prioridade = prioridade;
    novo->prox = NULL;

    if (isEmpty(f) || prioridade > f->inicio->prioridade) {
        novo->prox = f->inicio;
        f->inicio = novo;
    } else {
        No *aux = f->inicio;
        while (aux->prox != NULL && aux->prox->prioridade >= prioridade) {
            aux = aux->prox;
        }
        novo->prox = aux->prox;
        aux->prox = novo;
    }

    printf("Inserido: %d (Prioridade: %d)\n", valor, prioridade);
}

void dequeue(FilaPrioridade *f) {
    if (isEmpty(f)) {
        printf("Fila vazia!\n");
        return;
    }

    No *temp = f->inicio;
    printf("Removido: %d (Prioridade: %d)\n", temp->valor, temp->prioridade);

    f->inicio = f->inicio->prox;
    free(temp);
}

void exibir(FilaPrioridade *f) {
    if (isEmpty(f)) {
        printf("Fila vazia!\n");
        return;
    }

    No *aux = f->inicio;
    printf("Fila de Prioridade: ");
    while (aux != NULL) {
        printf("[%d | Prioridade: %d] ", aux->valor, aux->prioridade);
        aux = aux->prox;
    }
    printf("\n");
}

void esvaziar(FilaPrioridade *f) {
    while (!isEmpty(f)) {
        No *temp = f->inicio;
        f->inicio = f->inicio->prox;
        free(temp);
    }
}

int main() {
    FilaPrioridade f;
    int opcao, valor, prioridade;

    inicializar(&f);

    do {
        printf("\n--- FILA DE PRIORIDADE ---\n");
        printf("1 - Inserir elemento (enqueue)\n");
        printf("2 - Remover elemento (dequeue)\n");
        printf("3 - Exibir fila\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor: ");
                scanf("%d", &valor);
                printf("Digite a prioridade (maior valor = maior prioridade): ");
                scanf("%d", &prioridade);
                enqueue(&f, valor, prioridade);
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

    esvaziar(&f);

    return 0;
}