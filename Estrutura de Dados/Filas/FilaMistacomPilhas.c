#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    char valor;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

typedef struct {
    No *topo;
} Pilha;

void initFila(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

void enqueue(Fila *f, char c) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = c;
    novo->prox = NULL;
    if (f->inicio == NULL) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;
}

char dequeue(Fila *f) {
    if (f->inicio == NULL) return '\0';
    No *temp = f->inicio;
    char c = temp->valor;
    f->inicio = f->inicio->prox;
    if (f->inicio == NULL) f->fim = NULL;
    free(temp);
    return c;
}

void initPilha(Pilha *p) {
    p->topo = NULL;
}

void push(Pilha *p, char c) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) return;
    novo->valor = c;
    novo->prox = p->topo;
    p->topo = novo;
}

char pop(Pilha *p) {
    if (p->topo == NULL) return '\0';
    No *temp = p->topo;
    char c = temp->valor;
    p->topo = p->topo->prox;
    free(temp);
    return c;
}

int ehDigito(char c) {
    return (c >= '0' && c <= '9');
}

No* inserenoFim(No *head, char c) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) return head;
    novo->valor = c;
    novo->prox = NULL;
    
    if (head == NULL) return novo;
    
    No *aux = head;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
    return head;
}

No* reorganizarLista(No *origem) {
    Fila filaLetras;
    Pilha pilhaDigitos;
    initFila(&filaLetras);
    initPilha(&pilhaDigitos);

    No *aux = origem;
    while (aux != NULL) {
        if (ehDigito(aux->valor)) {
            push(&pilhaDigitos, aux->valor);
        } else {
            enqueue(&filaLetras, aux->valor);
        }
        aux = aux->prox;
    }

    No *novaLista = NULL;

    while (filaLetras.inicio != NULL) {
        novaLista = inserenoFim(novaLista, dequeue(&filaLetras));
    }

    while (pilhaDigitos.topo != NULL) {
        novaLista = inserenoFim(novaLista, pop(&pilhaDigitos));
    }

    return novaLista;
}

void exibirLista(No *head) {
    No *aux = head;
    while (aux != NULL) {
        printf("%c ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

void liberarLista(No *head) {
    while (head != NULL) {
        No *temp = head;
        head = head->prox;
        free(temp);
    }
}

int main() {
    char ex1[] = {'A', '1', 'E', '5', 'T', '7', 'W', '8', 'G'};
    int tam1 = sizeof(ex1) / sizeof(ex1[0]);
    
    No *lista1 = NULL;
    for (int i = 0; i < tam1; i++) {
        lista1 = inserenoFim(lista1, ex1[i]);
    }

    printf("Exemplo 1 Original: ");
    exibirLista(lista1);

    No *resultado1 = reorganizarLista(lista1);
    printf("Exemplo 1 Reorganizado: ");
    exibirLista(resultado1);

    printf("\n");

    char ex2[] = {'3', 'C', '9', 'H', '4', 'Q', '6'};
    int tam2 = sizeof(ex2) / sizeof(ex2[0]);

    No *lista2 = NULL;
    for (int i = 0; i < tam2; i++) {
        lista2 = inserenoFim(lista2, ex2[i]);
    }

    printf("Exemplo 2 Original: ");
    exibirLista(lista2);

    No *resultado2 = reorganizarLista(lista2);
    printf("Exemplo 2 Reorganizado: ");
    exibirLista(resultado2);

    liberarLista(lista1);
    liberarLista(resultado1);
    liberarLista(lista2);
    liberarLista(resultado2);

    return 0;
}