#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "PILHA.H"

No *push(No *topo, char *nome){
    No *novo = malloc(sizeof(No));
    if(novo == NULL) return topo;

    strncpy(novo->nome, nome, TAM_NOME - 1);
    novo->nome[TAM_NOME - 1] = '\0';
    novo->prox = topo;
    
    return novo;
}

No *pop(No *topo){
    if(topo == NULL) return topo;

    No *temp = topo;
    printf("Desempilhando: %s\n", topo->nome);
    topo = topo->prox;
    free(temp);
    
    return topo;
}

void exibir(No *topo){
    No *aux = topo;

    printf("Pilha: ");
    while(aux != NULL){
        printf("- %s\n", aux->nome);
        aux = aux->prox;
    }
}