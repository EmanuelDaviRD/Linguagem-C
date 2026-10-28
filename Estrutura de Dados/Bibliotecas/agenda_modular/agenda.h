#ifndef AGENDA_H
#define AGENDA_H

#define MAX 1000

typedef struct {
    char rua[100];
    int numero;
    char complemento[50];
    char bairro[50];
    char cep[15];
    char cidade[50];
    char estado[50];
    char pais[50];
} Endereco;

typedef struct {
    int ddd;
    char numero[20];
} Telefone;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    char email[100];
    Endereco endereco;
    Telefone telefone;
    Data aniversario;
    char observacao[200];
} Pessoa;

void inserirPessoa(Pessoa agenda[], int *quantidade);
void buscarNome(Pessoa agenda[], int quantidade);
void buscarMes(Pessoa agenda[], int quantidade);
void buscarDiaMes(Pessoa agenda[], int quantidade);
void retirarPessoa(Pessoa agenda[], int *quantidade);
void imprimirAgenda(Pessoa agenda[], int quantidade);
int lerInteiro(void);

#endif
