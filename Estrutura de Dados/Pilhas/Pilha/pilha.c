#include <stdio.h>
#include <stdlib.h>
#include "PILHA.H"

No *push(No *topo, int valor){
    No *novo = malloc(sizeof(No));
    if(novo == NULL) return topo;

    novo->valor = valor;
    novo->prox = topo;
    return novo;
}

No *pop(No *topo){
    if(topo == NULL) return topo;

    No *temp = topo;
    printf("Desempilhando: %d\n", topo->valor);
    topo = topo->prox;
    free(temp);
    return topo;
}

void top

void exibir(No *topo){
    No *aux = topo;

    printf("Pilha: ");
    while(aux != NULL){
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}
