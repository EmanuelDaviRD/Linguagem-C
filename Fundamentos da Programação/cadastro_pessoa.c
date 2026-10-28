#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char endereco[100];
} Pessoa;

void imprimePessoa(Pessoa p) {
    printf("\nNome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s\n", p.endereco);
}

int main() {
    Pessoa p1;
    printf("Digite seu nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    p1.nome[strcspn(p1.nome, "\n")] = '\0';
    printf("Digite sua idade: ");
    if (scanf("%d", &p1.idade) != 1) return 0;
    getchar();
    printf("Digite seu endereco: ");
    fgets(p1.endereco, sizeof(p1.endereco), stdin);
    p1.endereco[strcspn(p1.endereco, "\n")] = '\0';
    imprimePessoa(p1);
    return 0;
}
