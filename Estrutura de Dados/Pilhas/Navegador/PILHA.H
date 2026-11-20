#ifndef PILHA_H
#define PILHA_H

#define TAM_URL 100

typedef struct No {
    char url[TAM_URL];
    struct No *prox;
} No;

No *push(No *topo, const char *url);
No *pop(No *topo, char *url_removida);
void esvaziar(No **topo);

#endif