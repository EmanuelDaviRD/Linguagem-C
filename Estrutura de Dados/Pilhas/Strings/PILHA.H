#ifndef PILHA_H
#define PILHA_H

#define TAM_NOME 30

typedef struct No{
    char nome[TAM_NOME];
    struct No *prox;
} No;

No *push(No *topo, char *nome);
No *pop(No *topo);
void exibir(No *topo);

#endif