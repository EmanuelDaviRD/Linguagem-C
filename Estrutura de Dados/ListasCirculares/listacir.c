#include <stdio.h>
#include <stdlib.h>
#include "listacir.h"

No* criarNo(int valor) {
    No *novo = malloc(sizeof(No));
    if (novo == NULL) return NULL;

    novo->dado = valor;
    novo->ant = NULL;
    novo->prox = NULL;
    return novo;
}

void inserirInicio(No **inicio, int valor) {
    No *novo = criarNo(valor);
    if (novo == NULL) return;

    if (*inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
        *inicio = novo;
        return;
    }

    No *ultimo = (*inicio)->ant;

    novo->prox = *inicio;
    novo->ant = ultimo;
    (*inicio)->ant = novo;
    ultimo->prox = novo;
    *inicio = novo;
}

void inserirFim(No **inicio, int valor) {
    No *novo = criarNo(valor);
    if (novo == NULL) return;

    if (*inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
        *inicio = novo;
        return;
    }

    No *ultimo = (*inicio)->ant;

    novo->prox = *inicio;
    novo->ant = ultimo;
    ultimo->prox = novo;
    (*inicio)->ant = novo;
}

int contarElementos(No *inicio) {
    if (inicio == NULL) return 0;

    int qtd = 0;
    No *aux = inicio;
    do {
        qtd++;
        aux = aux->prox;
    } while (aux != inicio);

    return qtd;
}

void inserirOrdenado(No **inicio, int valor) {
    No *novo = criarNo(valor);
    if (novo == NULL) return;

    if (*inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
        *inicio = novo;
        return;
    }

    No *ultimo = (*inicio)->ant;

    if (valor <= (*inicio)->dado) {
        novo->prox = *inicio;
        novo->ant = ultimo;
        (*inicio)->ant = novo;
        ultimo->prox = novo;
        *inicio = novo;
        return;
    }

    No *aux = *inicio;
    while (aux->prox != *inicio && aux->prox->dado < valor) {
        aux = aux->prox;
    }

    novo->prox = aux->prox;
    novo->ant = aux;
    aux->prox->ant = novo;
    aux->prox = novo;
}

void inserirPosicao(No **inicio, int valor, int pos) {
    int total = contarElementos(*inicio);

    if (pos < 1 || pos > total + 1) {
        printf("Posicao %d invalida!\n", pos);
        return;
    }

    if (pos == 1) {
        inserirInicio(inicio, valor);
        return;
    }

    No *novo = criarNo(valor);
    if (novo == NULL) return;

    No *aux = *inicio;
    for (int i = 1; i < pos - 1; i++) {
        aux = aux->prox;
    }

    novo->prox = aux->prox;
    novo->ant = aux;
    aux->prox->ant = novo;
    aux->prox = novo;
}

void removerPosicao(No **inicio, int pos) {
    if (*inicio == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    int total = contarElementos(*inicio);
    if (pos < 1 || pos > total) {
        printf("Posicao %d invalida!\n", pos);
        return;
    }

    No *aux = *inicio;

    if (total == 1) {
        free(*inicio);
        *inicio = NULL;
        printf("Elemento removido. A lista ficou vazia.\n");
        return;
    }

    for (int i = 1; i < pos; i++) {
        aux = aux->prox;
    }

    aux->ant->prox = aux->prox;
    aux->prox->ant = aux->ant;

    if (aux == *inicio) {
        *inicio = aux->prox;
    }

    free(aux);
    printf("Elemento da posicao %d removido com sucesso!\n", pos);
}

void imprimir(No *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista Circular: ");
    No *aux = inicio;
    do {
        printf("%d ", aux->dado);
        aux = aux->prox;
    } while (aux != inicio);
    printf("\n");
}

void liberarLista(No **inicio) {
    if (*inicio == NULL) return;

    No *atual = *inicio;
    No *ultimo = (*inicio)->ant;
    No *temp;

    while (atual != ultimo) {
        temp = atual->prox;
        free(atual);
        atual = temp;
    }
    free(ultimo);
    *inicio = NULL;
}