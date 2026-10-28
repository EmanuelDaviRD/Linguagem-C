#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

Aluno* criarAluno() {
    Aluno *novo = (Aluno*) malloc(sizeof(Aluno));
    if (novo == NULL) {
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }

    printf("\nDigite a matricula: ");
    if (scanf("%d", &novo->matricula) != 1) {
        free(novo);
        return NULL;
    }
    getchar();

    printf("Digite o nome: ");
    fgets(novo->nome, sizeof(novo->nome), stdin);
    novo->nome[strcspn(novo->nome, "\n")] = '\0';

    printf("Digite a nota N1: ");
    if (scanf("%f", &novo->notaN1) != 1) {
        free(novo);
        return NULL;
    }

    printf("Digite a nota N2: ");
    if (scanf("%f", &novo->notaN2) != 1) {
        free(novo);
        return NULL;
    }

    novo->prox = NULL;
    return novo;
}

void inserirInicio(Aluno **head) {
    Aluno *novo = criarAluno();
    if (novo != NULL) {
        novo->prox = *head;
        *head = novo;
        printf("Aluno inserido no inicio com sucesso!\n");
    }
}

void inserirFim(Aluno **head) {
    Aluno *novo = criarAluno();
    if (novo == NULL) return;

    if (*head == NULL) {
        *head = novo;
    } else {
        Aluno *temp = *head;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo;
    }
    printf("Aluno inserido no fim com sucesso!\n");
}

void exibirLista(Aluno *head) {
    if (head == NULL) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }
    printf("\n--- LISTA DE ALUNOS ---\n");
    Aluno *temp = head;
    while (temp != NULL) {
        float media = (temp->notaN1 + temp->notaN2) / 2.0f;
        printf("Matricula: %d | Nome: %-20s | N1: %.2f | N2: %.2f | Media: %.2f\n",
               temp->matricula, temp->nome, temp->notaN1, temp->notaN2, media);
        temp = temp->prox;
    }
}

void alterarAluno(Aluno *head) {
    if (head == NULL) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }
    int mat;
    printf("\nDigite a matricula do aluno que deseja alterar: ");
    if (scanf("%d", &mat) != 1) return;

    Aluno *temp = head;
    while (temp != NULL) {
        if (temp->matricula == mat) {
            printf("\nAluno encontrado (%s). Digite os novos dados:\n", temp->nome);
            getchar();

            printf("Novo nome: ");
            fgets(temp->nome, sizeof(temp->nome), stdin);
            temp->nome[strcspn(temp->nome, "\n")] = '\0';

            printf("Nova nota N1: ");
            if (scanf("%f", &temp->notaN1) != 1) return;

            printf("Nova nota N2: ");
            if (scanf("%f", &temp->notaN2) != 1) return;

            printf("Dados alterados com sucesso!\n");
            return;
        }
        temp = temp->prox;
    }
    printf("Aluno com matricula %d nao encontrado.\n", mat);
}

void buscarPorMatricula(Aluno *head) {
    if (head == NULL) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }
    int mat;
    printf("\nDigite a matricula para busca: ");
    if (scanf("%d", &mat) != 1) return;

    Aluno *temp = head;
    while (temp != NULL) {
        if (temp->matricula == mat) {
            float media = (temp->notaN1 + temp->notaN2) / 2.0f;
            printf("\n--- ALUNO ENCONTRADO ---\n");
            printf("Matricula: %d\nNome: %s\nN1: %.2f\nN2: %.2f\nMedia: %.2f\n",
                   temp->matricula, temp->nome, temp->notaN1, temp->notaN2, media);
            return;
        }
        temp = temp->prox;
    }
    printf("Aluno com matricula %d nao encontrado.\n", mat);
}

void buscarPorNome(Aluno *head) {
    if (head == NULL) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }
    char nomeBusca[50];
    getchar();
    printf("\nDigite o nome para busca: ");
    fgets(nomeBusca, sizeof(nomeBusca), stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    Aluno *temp = head;
    int encontrado = 0;
    while (temp != NULL) {
        if (strstr(temp->nome, nomeBusca) != NULL) {
            float media = (temp->notaN1 + temp->notaN2) / 2.0f;
            if (!encontrado) printf("\n--- ALUNOS ENCONTRADOS ---\n");
            printf("Matricula: %d | Nome: %-20s | Media: %.2f\n",
                   temp->matricula, temp->nome, media);
            encontrado = 1;
        }
        temp = temp->prox;
    }
    if (!encontrado) {
        printf("Nenhum aluno encontrado contendo \"%s\".\n", nomeBusca);
    }
}

void exibirAprovados(Aluno *head) {
    if (head == NULL) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }
    Aluno *temp = head;
    int contador = 0;
    printf("\n--- ALUNOS APROVADOS (Media >= 6.0) ---\n");
    while (temp != NULL) {
        float media = (temp->notaN1 + temp->notaN2) / 2.0f;
        if (media >= 6.0f) {
            printf("Matricula: %d | Nome: %-20s | Media: %.2f\n",
                   temp->matricula, temp->nome, media);
            contador++;
        }
        temp = temp->prox;
    }
    if (contador == 0) {
        printf("Nenhum aluno aprovado.\n");
    }
}

void removerAluno(Aluno **head) {
    if (*head == NULL) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }
    int mat;
    printf("\nDigite a matricula do aluno a remover: ");
    if (scanf("%d", &mat) != 1) return;

    Aluno *atual = *head;
    Aluno *anterior = NULL;

    while (atual != NULL && atual->matricula != mat) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Aluno com matricula %d nao encontrado.\n", mat);
        return;
    }

    if (anterior == NULL) {
        *head = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Aluno removido com sucesso!\n");
}

int contarAlunos(Aluno *head) {
    int count = 0;
    Aluno *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->prox;
    }
    return count;
}

void liberarLista(Aluno **head) {
    Aluno *atual = *head;
    Aluno *proximo;
    while (atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
    *head = NULL;
}
