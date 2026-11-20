#ifndef PILHA_H
#define PILHA_H

typedef struct No{
    int valor;
    struct No *prox;
} No;

No *push(No *topo, int valor);
No *pop(No *topo);
void exibir(No *topo);

#endif