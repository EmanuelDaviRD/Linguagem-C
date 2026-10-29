#include <stdio.h>
#include <stdlib.h>
#include "LISTAD.H"

No *criarNo(int valor) {
    No *novo = malloc(sizeof(No));
    if (novo == NULL) return NULL;

    novo->dado = valor;
    novo->ant = NULL;
    novo->prox = NULL;
    return novo;
}

void inserirOrdenado(No **inicio, int valor) {
    No *novo = criarNo(valor);
    if (novo == NULL) return; 

    if (*inicio == NULL || (*inicio)->dado >= valor) {
        novo->prox = *inicio;
        if (*inicio != NULL)
            (*inicio)->ant = novo;

        *inicio = novo;
        return;    
    }

    No *aux = *inicio;
    while (aux->prox != NULL && aux->prox->dado < valor)
        aux = aux->prox;

    novo->prox = aux->prox;
    novo->ant = aux;

    if (aux->prox != NULL) { 
        aux->prox->ant = novo;
    }   
    aux->prox = novo; 
}

void inserirInicio(No **inicio, int valor) {
    No *novo = criarNo(valor); 
    if (novo == NULL) return;

    novo->prox = *inicio;

    if (*inicio != NULL)
        (*inicio)->ant = novo;

    *inicio = novo;
}

void inserirFim(No **inicio, int valor) {
    No *novo = criarNo(valor);
    if (novo == NULL) return;

    if (*inicio == NULL) { 
        *inicio = novo;
        return;
    }

    No *aux = *inicio;
    while (aux->prox != NULL)
        aux = aux->prox;

    aux->prox = novo;
    novo->ant = aux;
}

void imprimirInverso(No *inicio) {
    if (inicio == NULL) { 
        printf("Lista vazia.\n");
        return;
    }

    No *aux = inicio;
    while (aux->prox != NULL)
        aux = aux->prox;

    printf("Lista (Inversa): ");
    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->ant;
    }
    printf("\n");
}

int contarElementos(No *inicio) {
    int qtd = 0;
    No *aux = inicio;
    
    while (aux != NULL) {
        qtd++;
        aux = aux->prox;
    }
    
    return qtd;
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
    if (aux->prox != NULL) {
        aux->prox->ant = novo;
    }
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

    if (pos == 1) {
        *inicio = aux->prox;
        if (*inicio != NULL) {
            (*inicio)->ant = NULL;
        }
        free(aux);
        return;
    }

    for (int i = 1; i < pos; i++) {
        aux = aux->prox;
    }

    aux->ant->prox = aux->prox;
    if (aux->prox != NULL) {
        aux->prox->ant = aux->ant;
    }
    free(aux);
}

void inverterLista(No **inicio) {
    if (*inicio == NULL || (*inicio)->prox == NULL) return;

    No *temp = NULL;
    No *aux = *inicio;

    while (aux != NULL) {
        temp = aux->ant;
        aux->ant = aux->prox;
        aux->prox = temp;
        aux = aux->ant;
    }

    if (temp != NULL) {
        *inicio = temp->ant;
    }
}

No* buscar(No *inicio, int valor) {
    No *aux = inicio;
    while (aux != NULL) {
        if (aux->dado == valor) {
            return aux;
        }
        aux = aux->prox;
    }
    return NULL;
}

void imprimir(No *inicio) {
    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    printf("Lista: ");
    No *aux = inicio;
    while (aux != NULL) {
        printf("%d ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}

void liberarLista(No **inicio) {
    No *atual = *inicio;
    No *proximo;
    while (atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    *inicio = NULL;
}