#ifndef LISTACIR_H
#define LISTACIR_H

typedef struct No {
    int dado;
    struct No *ant;
    struct No *prox;
} No;

No* criarNo(int valor);
void inserirInicio(No **inicio, int valor);
void inserirFim(No **inicio, int valor);
void inserirOrdenado(No **inicio, int valor);
void inserirPosicao(No **inicio, int valor, int pos);
void removerPosicao(No **inicio, int pos);
int contarElementos(No *inicio);
void imprimir(No *inicio);
void liberarLista(No **inicio);

#endif 