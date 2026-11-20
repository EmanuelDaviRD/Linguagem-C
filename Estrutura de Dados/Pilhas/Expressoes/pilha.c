#include <stdio.h>
#include <stdlib.h>
#include "PILHA.H"

No *push(No *topo, char c) {
    No *novo = malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return topo;
    }
    novo->caractere = c;
    novo->prox = topo;
    return novo;
}

No *pop(No *topo) {
    if (topo == NULL) return topo;

    No *temp = topo;
    topo = topo->prox;
    free(temp);
    return topo;
}

void liberar_pilha(No *topo) {
    while (topo != NULL) {
        topo = pop(topo);
    }
}

int verificar_parenteses(const char *expressao) {
    No *topo = NULL;
    int i;

    for (i = 0; expressao[i] != '\0'; i++) {
        if (expressao[i] == '(') {
            topo = push(topo, '(');
        } else if (expressao[i] == ')') {
            if (topo == NULL) {
                return 0;
            }
            topo = pop(topo);
        }
    }

    int valido = (topo == NULL);
    
    liberar_pilha(topo);

    return valido;
}