#include <stdio.h>
#include <string.h>
#include "agenda.h"

void lerTexto(char texto[], int tamanho) {
    fgets(texto, tamanho, stdin);
    texto[strcspn(texto, "\n")] = '\0';
}

int lerInteiro() {
    char texto[30];
    int numero = 0;
    fgets(texto, 30, stdin);
    sscanf(texto, "%d", &numero);
    return numero;
}

int escolherImpressao() {
    int opcao;
    printf("\n1 - Imprimir nome, telefone e e-mail\n");
    printf("2 - Imprimir todos os dados\n");
    printf("Escolha: ");
    opcao = lerInteiro();
    if (opcao != 1 && opcao != 2) {
        printf("Opcao invalida!\n");
        return 0;
    }
    return opcao;
}

void imprimirPessoa(Pessoa *pessoa, int opcao) {
    printf("\nNome: %s\n", pessoa->nome);
    printf("Telefone: (%d) %s\n", pessoa->telefone.ddd, pessoa->telefone.numero);
    printf("E-mail: %s\n", pessoa->email);

    if (opcao == 2) {
        printf("Rua: %s\n", pessoa->endereco.rua);
        printf("Numero: %d\n", pessoa->endereco.numero);
        printf("Complemento: %s\n", pessoa->endereco.complemento);
        printf("Bairro: %s\n", pessoa->endereco.bairro);
        printf("CEP: %s\n", pessoa->endereco.cep);
        printf("Cidade: %s\n", pessoa->endereco.cidade);
        printf("Estado: %s\n", pessoa->endereco.estado);
        printf("Pais: %s\n", pessoa->endereco.pais);
        printf("Aniversario: %02d/%02d/%04d\n", pessoa->aniversario.dia, pessoa->aniversario.mes, pessoa->aniversario.ano);
        printf("Observacao: %s\n", pessoa->observacao);
    }
}

void inserirPessoa(Pessoa agenda[], int *quantidade) {
    Pessoa nova;
    int i;

    if (*quantidade >= MAX) {
        printf("Agenda cheia!\n");
        return;
    }

    printf("Nome: "); lerTexto(nova.nome, 100);
    printf("E-mail: "); lerTexto(nova.email, 100);
    printf("Rua: "); lerTexto(nova.endereco.rua, 100);
    printf("Numero: "); nova.endereco.numero = lerInteiro();
    printf("Complemento: "); lerTexto(nova.endereco.complemento, 50);
    printf("Bairro: "); lerTexto(nova.endereco.bairro, 50);
    printf("CEP: "); lerTexto(nova.endereco.cep, 15);
    printf("Cidade: "); lerTexto(nova.endereco.cidade, 50);
    printf("Estado: "); lerTexto(nova.endereco.estado, 50);
    printf("Pais: "); lerTexto(nova.endereco.pais, 50);
    printf("DDD: "); nova.telefone.ddd = lerInteiro();
    printf("Numero do telefone: "); lerTexto(nova.telefone.numero, 20);
    printf("Dia do aniversario: "); nova.aniversario.dia = lerInteiro();
    printf("Mes do aniversario: "); nova.aniversario.mes = lerInteiro();
    printf("Ano do aniversario: "); nova.aniversario.ano = lerInteiro();
    printf("Observacao: "); lerTexto(nova.observacao, 200);

    i = *quantidade;
    while (i > 0 && strcmp(agenda[i - 1].nome, nova.nome) > 0) {
        agenda[i] = agenda[i - 1];
        i--;
    }

    agenda[i] = nova;
    (*quantidade)++;
    printf("Pessoa inserida com sucesso!\n");
}

void buscarNome(Pessoa agenda[], int quantidade) {
    char nome[100];
    char primeiroCadastrado[100];
    int i, encontrou = 0, opcao;

    if (quantidade == 0) {
        printf("A agenda esta vazia.\n");
        return;
    }

    printf("Digite o primeiro nome: ");
    lerTexto(nome, 100);

    for (i = 0; i < quantidade; i++) {
        sscanf(agenda[i].nome, "%99s", primeiroCadastrado);
        if (strcmp(primeiroCadastrado, nome) == 0) {
            encontrou++;
        }
    }

    if (encontrou == 0) {
        printf("Nenhuma pessoa encontrada.\n");
        return;
    }

    opcao = escolherImpressao();
    if (opcao == 0) return;

    for (i = 0; i < quantidade; i++) {
        sscanf(agenda[i].nome, "%99s", primeiroCadastrado);
        if (strcmp(primeiroCadastrado, nome) == 0) {
            imprimirPessoa(&agenda[i], opcao);
        }
    }
}

void buscarMes(Pessoa agenda[], int quantidade) {
    int mes, i, encontrou = 0, opcao;

    if (quantidade == 0) {
        printf("A agenda esta vazia.\n");
        return;
    }

    printf("Digite o mes do aniversario: ");
    mes = lerInteiro();

    for (i = 0; i < quantidade; i++) {
        if (agenda[i].aniversario.mes == mes) {
            encontrou++;
        }
    }

    if (encontrou == 0) {
        printf("Nenhuma pessoa encontrada nesse mes.\n");
        return;
    }

    opcao = escolherImpressao();
    if (opcao == 0) return;

    for (i = 0; i < quantidade; i++) {
        if (agenda[i].aniversario.mes == mes) {
            imprimirPessoa(&agenda[i], opcao);
        }
    }
}

void buscarDiaMes(Pessoa agenda[], int quantidade) {
    int dia, mes, i, encontrou = 0, opcao;

    if (quantidade == 0) {
        printf("A agenda esta vazia.\n");
        return;
    }

    printf("Digite o dia do aniversario: "); dia = lerInteiro();
    printf("Digite o mes do aniversario: "); mes = lerInteiro();

    for (i = 0; i < quantidade; i++) {
        if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes) {
            encontrou++;
        }
    }

    if (encontrou == 0) {
        printf("Nenhuma pessoa encontrada nessa data.\n");
        return;
    }

    opcao = escolherImpressao();
    if (opcao == 0) return;

    for (i = 0; i < quantidade; i++) {
        if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes) {
            imprimirPessoa(&agenda[i], opcao);
        }
    }
}

void retirarPessoa(Pessoa agenda[], int *quantidade) {
    char nome[100];
    int i, j, encontrou = 0;

    if (*quantidade == 0) {
        printf("A agenda esta vazia.\n");
        return;
    }

    printf("Digite o nome completo da pessoa: ");
    lerTexto(nome, 100);

    for (i = 0; i < *quantidade; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            for (j = i; j < *quantidade - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            (*quantidade)--;
            encontrou = 1;
            printf("Pessoa removida com sucesso!\n");
            break;
        }
    }

    if (encontrou == 0) {
        printf("Pessoa nao encontrada.\n");
    }
}

void imprimirAgenda(Pessoa agenda[], int quantidade) {
    int opcao, i;

    if (quantidade == 0) {
        printf("A agenda esta vazia.\n");
        return;
    }

    opcao = escolherImpressao();
    if (opcao == 0) return;

    for (i = 0; i < quantidade; i++) {
        imprimirPessoa(&agenda[i], opcao);
    }
}
