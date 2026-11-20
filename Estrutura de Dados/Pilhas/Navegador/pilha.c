#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PILHA.H"

No *push(No *topo, const char *url) {
    No *novo = malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return topo;
    }
    
    strncpy(novo->url, url, TAM_URL - 1);
    novo->url[TAM_URL - 1] = '\0';
    novo->prox = topo;
    
    return novo;
}

No *pop(No *topo, char *url_removida) {
    if (topo == NULL) return NULL;

    No *temp = topo;
    if (url_removida != NULL) {
        strcpy(url_removida, temp->url);
    }
    
    No *novo_topo = topo->prox;
    free(temp);
    
    return novo_topo;
}

void esvaziar(No **topo) {
    while (*topo != NULL) {
        *topo = pop(*topo, NULL);
    }
}