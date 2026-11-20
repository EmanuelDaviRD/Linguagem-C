#ifndef PILHA_H
#define PILHA_H

typedef struct No {
    char caractere;
    struct No *prox;
} No;

No *push(No *topo, char c);
No *pop(No *topo);
void liberar_pilha(No *topo);

int verificar_parenteses(const char *expressao);

#endif