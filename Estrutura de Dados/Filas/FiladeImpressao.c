#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char documento[40];
    int paginas;
} Impressao;

typedef struct No {
    Impressao dados;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
}

int isEmpty(Fila *f) {
    return (f->inicio == NULL);
}

void enqueue(Fila *f, const char *documento, int paginas) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }

    strncpy(novo->dados.documento, documento, 39);
    novo->dados.documento[39] = '\0';
    novo->dados.paginas = paginas;
    novo->prox = NULL;

    if (isEmpty(f)) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;

    printf("Trabalho '%s' (%d páginas) adicionado à fila.\n", documento, paginas);
}

void dequeue(Fila *f) {
    if (isEmpty(f)) {
        printf("Nenhum trabalho na fila de impressao!\n");
        return;
    }

    No *temp = f->inicio;
    printf("Imprimindo: '%s' (%d páginas)...\n", temp->dados.documento, temp->dados.paginas);

    f->inicio = f->inicio->prox;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(temp);
}

int totalPaginas(Fila *f) {
    int total = 0;
    No *aux = f->inicio;
    while (aux != NULL) {
        total += aux->dados.paginas;
        aux = aux->prox;
    }
    return total;
}

void exibir(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila de impressão vazia!\n");
        return;
    }

    No *aux = f->inicio;
    printf("\nFILA DE IMPRESSÃO\n");
    while (aux != NULL) {
        printf("- Documento: %s (%d páginas)\n", aux->dados.documento, aux->dados.paginas);
        aux = aux->prox;
    }
    printf("Total de páginas restantes: %d\n", totalPaginas(f));
}

void esvaziar(Fila *f) {
    while (!isEmpty(f)) {
        No *temp = f->inicio;
        f->inicio = f->inicio->prox;
        free(temp);
    }
    f->fim = NULL;
}

int main() {
    Fila f;
    int opcao, paginas;
    char doc[40];

    inicializar(&f);

    do {
        printf("\n1 - Inserir trabalho de impressão\n");
        printf("2 - Processar impressão\n");
        printf("3 - Mostrar total de páginas restantes\n");
        printf("4 - Exibir fila de impressão\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Nome do documento: ");
                fgets(doc, sizeof(doc), stdin);
                doc[strcspn(doc, "\n")] = '\0';
                printf("Quantidade de páginas: ");
                scanf("%d", &paginas);
                getchar();
                enqueue(&f, doc, paginas);
                break;

            case 2:
                dequeue(&f);
                break;

            case 3:
                printf("Total de páginas restantes na fila: %d\n", totalPaginas(&f));
                break;

            case 4:
                exibir(&f);
                break;

            case 0:
                printf("Encerrando simulador...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    esvaziar(&f);

    return 0;
}