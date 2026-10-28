#ifndef ALUNO_H
#define ALUNO_H

typedef struct Aluno {
    int matricula;
    char nome[50];
    float notaN1;
    float notaN2;
    struct Aluno *prox;
} Aluno;

Aluno* criarAluno();
void inserirInicio(Aluno **head);
void inserirFim(Aluno **head);
void exibirLista(Aluno *head);
void alterarAluno(Aluno *head);
void buscarPorMatricula(Aluno *head);
void buscarPorNome(Aluno *head);
void exibirAprovados(Aluno *head);
void removerAluno(Aluno **head);
int contarAlunos(Aluno *head);
void liberarLista(Aluno **head);

#endif
