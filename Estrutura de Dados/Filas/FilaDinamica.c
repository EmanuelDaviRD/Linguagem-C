#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[40];
    int senha;
    int tempo_espera;
} Pessoa;

typedef struct No {
    Pessoa dados;
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

void enqueue(Fila *f, const char *nome, int senha, int tempo_espera) {
    No *novo = (No *) malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    strncpy(novo->dados.nome, nome, 39);
    novo->dados.nome[39] = '\0';
    novo->dados.senha = senha;
    novo->dados.tempo_espera = tempo_espera;
    novo->prox = NULL;

    if (isEmpty(f)) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;

    printf("Pessoa '%s' (Senha: %d) adicionada à fila.\n", nome, senha);
}

void dequeue(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia! Ninguém para atender.\n");
        return;
    }

    No *temp = f->inicio;
    printf("Atendendo: %s (Senha: %d) - Tempo estimado de atendimento: %d min\n", 
           temp->dados.nome, temp->dados.senha, temp->dados.tempo_espera);

    f->inicio = f->inicio->prox;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(temp);
}

void exibir(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia!\n");
        return;
    }

    No *aux = f->inicio;
    printf("\nFILA DE ATENDIMENTO\n");
    while (aux != NULL) {
        printf("Nome: %s | Senha: %d | Tempo de espera: %d min\n", 
               aux->dados.nome, aux->dados.senha, aux->dados.tempo_espera);
        aux = aux->prox;
    }
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
    int opcao;
    char nome[40];
    int senha_contador = 1;
    int tempo;

    inicializar(&f);

    do {
        printf("\n1 - Adicionar pessoa na fila\n");
        printf("2 - Atender pessoa\n");
        printf("3 - Exibir fila atual\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("Digite o nome da pessoa: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';
                
                printf("Digite o tempo estimado de espera (minutos): ");
                scanf("%d", &tempo);
                getchar();

                enqueue(&f, nome, senha_contador++, tempo);
                break;

            case 2:
                dequeue(&f);
                break;

            case 3:
                exibir(&f);
                break;

            case 0:
                printf("Encerrando atendimento...\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    esvaziar(&f);

    return 0;
}