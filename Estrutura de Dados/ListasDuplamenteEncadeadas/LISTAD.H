#ifndef LISTAD_H
#define LISTAD_H

typedef struct No{
    int dado;
    struct No *ant;
    struct No *prox;
} No;

No* criarNo(int valor);
void inserirOrdenado(No **inicio,int valor);
void inserirInicio(No **inicio,int valor);
void inserirFim(No **inicio, int valor);
void imprimirInverso(No *inicio);
int contarElementos(No *inicio);
void inserirPosicao(No **inicio, int valor, int pos);
void removerPosicao(No **inicio, int pos);
void inverterLista(No **inicio);

No* buscar(No *inicio, int valor);
void imprimir(No *inicio);
void liberarLista(No **inicio);

#endif