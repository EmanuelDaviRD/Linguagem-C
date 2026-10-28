#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char rua[50];
    int numero;
    char complemento[20];
    char bairro[30];
    char cep[15];
    char cidade[30];
    char estado[10];
    char pais[20];
} Endereco;

typedef struct {
    int ddd;
    int numero;
} Telefone;

typedef struct {
    int dia;
    int mes;
    int ano;
} DataNascimento;

typedef struct {
    char nome[80];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    DataNascimento aniversario;
    char observacao[100];
} Pessoa;

void exibirPessoaCompleta(Pessoa p) {
    printf("\nNome: %s\nEmail: %s\n", p.nome, p.email);
    printf("Telefone: (%d) %d\n", p.telefone.ddd, p.telefone.numero);
    printf("Aniversario: %02d/%02d/%d\n", p.aniversario.dia, p.aniversario.mes, p.aniversario.ano);
    printf("Endereco: %s, %d (%s) - %s, %s/%s | CEP: %s | Pais: %s\n",
           p.endereco.rua, p.endereco.numero,
           p.endereco.complemento,
           p.endereco.bairro, p.endereco.cidade, p.endereco.estado,
           p.endereco.cep, p.endereco.pais);
    printf("Observacao: %s\n", p.observacao);
}

void inserePessoa(Pessoa agenda[], int *qtd) {
    if (*qtd >= 1000) {
        printf("Agenda cheia.\n");
        return;
    }
    Pessoa nova;
    getchar();
    printf("Nome: "); fgets(nova.nome, 80, stdin); strtok(nova.nome, "\n");
    printf("Email: "); fgets(nova.email, 50, stdin); strtok(nova.email, "\n");
    printf("DDD: "); scanf("%d", &nova.telefone.ddd);
    printf("Telefone: "); scanf("%d", &nova.telefone.numero);
    printf("Dia nascimento: "); scanf("%d", &nova.aniversario.dia);
    printf("Mes nascimento: "); scanf("%d", &nova.aniversario.mes);
    printf("Ano nascimento: "); scanf("%d", &nova.aniversario.ano);
    getchar();
    printf("Rua: "); fgets(nova.endereco.rua, 50, stdin); strtok(nova.endereco.rua, "\n");
    printf("Numero: "); scanf("%d", &nova.endereco.numero);
    getchar();
    printf("Complemento: "); fgets(nova.endereco.complemento, 20, stdin); strtok(nova.endereco.complemento, "\n");
    printf("Bairro: "); fgets(nova.endereco.bairro, 30, stdin); strtok(nova.endereco.bairro, "\n");
    printf("CEP: "); fgets(nova.endereco.cep, 15, stdin); strtok(nova.endereco.cep, "\n");
    printf("Cidade: "); fgets(nova.endereco.cidade, 30, stdin); strtok(nova.endereco.cidade, "\n");
    printf("Estado: "); fgets(nova.endereco.estado, 10, stdin); strtok(nova.endereco.estado, "\n");
    printf("Pais: "); fgets(nova.endereco.pais, 20, stdin); strtok(nova.endereco.pais, "\n");
    printf("Observacao: "); fgets(nova.observacao, 100, stdin); strtok(nova.observacao, "\n");

    int i = *qtd - 1;
    while (i >= 0 && strcmp(agenda[i].nome, nova.nome) > 0) {
        agenda[i + 1] = agenda[i];
        i--;
    }
    agenda[i + 1] = nova;
    (*qtd)++;
}

void buscaPorPrimeiroNome(Pessoa agenda[], int qtd) {
    char busca[50];
    getchar();
    printf("Primeiro nome: ");
    fgets(busca, 50, stdin); strtok(busca, "\n ");
    for (int i = 0; i < qtd; i++) {
        char tempNome[80];
        strcpy(tempNome, agenda[i].nome);
        char *primeiroNome = strtok(tempNome, " ");
        if (primeiroNome && strcmp(primeiroNome, busca) == 0) {
            exibirPessoaCompleta(agenda[i]);
        }
    }
}

void buscaPorMesAniversario(Pessoa agenda[], int qtd) {
    int mes;
    printf("Mes de aniversario: ");
    scanf("%d", &mes);
    for (int i = 0; i < qtd; i++) {
        if (agenda[i].aniversario.mes == mes) {
            exibirPessoaCompleta(agenda[i]);
        }
    }
}

void buscaPorDiaEMesAniversario(Pessoa agenda[], int qtd) {
    int dia, mes;
    printf("Dia de aniversario: "); scanf("%d", &dia);
    printf("Mes de aniversario: "); scanf("%d", &mes);
    for (int i = 0; i < qtd; i++) {
        if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes) {
            exibirPessoaCompleta(agenda[i]);
        }
    }
}

void retiraPessoa(Pessoa agenda[], int *qtd) {
    char nome[80];
    getchar();
    printf("Nome para remover: ");
    fgets(nome, 80, stdin); strtok(nome, "\n");
    int pos = -1;
    for (int i = 0; i < *qtd; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Pessoa nao encontrada.\n");
        return;
    }
    for (int i = pos; i < *qtd - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    (*qtd)--;
    printf("Pessoa removida com sucesso.\n");
}

void imprimeAgenda(Pessoa agenda[], int qtd) {
    if (qtd == 0) {
        printf("Agenda vazia.\n");
        return;
    }
    int opcao;
    printf("1 - Resumido | 2 - Completo: ");
    scanf("%d", &opcao);
    for (int i = 0; i < qtd; i++) {
        if (opcao == 1) {
            printf("%s | (%d) %d | %s\n", agenda[i].nome, agenda[i].telefone.ddd, agenda[i].telefone.numero, agenda[i].email);
        } else {
            exibirPessoaCompleta(agenda[i]);
        }
    }
}

int main() {
    Pessoa agenda[1000];
    int qtd = 0, opcao;
    do {
        printf("\n1.Inserir 2.Busca Nome 3.Busca Mes 4.Busca Data 5.Remover 6.Imprimir 0.Sair\nOpcao: ");
        if (scanf("%d", &opcao) != 1) break;
        switch (opcao) {
            case 1: inserePessoa(agenda, &qtd); break;
            case 2: buscaPorPrimeiroNome(agenda, qtd); break;
            case 3: buscaPorMesAniversario(agenda, qtd); break;
            case 4: buscaPorDiaEMesAniversario(agenda, qtd); break;
            case 5: retiraPessoa(agenda, &qtd); break;
            case 6: imprimeAgenda(agenda, qtd); break;
        }
    } while (opcao != 0);
    return 0;
}
