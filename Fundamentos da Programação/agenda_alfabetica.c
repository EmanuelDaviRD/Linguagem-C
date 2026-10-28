#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char endereco[50];
    int telefone;
} Pessoa;

int main() {
    Pessoa informacoes[5];
    int i, auxTelefone;
    char auxNome[50], auxEndereco[50];
    for (i = 0; i < 5; i++) {
        fgets(informacoes[i].nome, sizeof(informacoes[i].nome), stdin);
        informacoes[i].nome[strcspn(informacoes[i].nome, "\n")] = '\0';
        setbuf(stdin, NULL);

        fgets(informacoes[i].endereco, sizeof(informacoes[i].endereco), stdin);
        informacoes[i].endereco[strcspn(informacoes[i].endereco, "\n")] = '\0';
        setbuf(stdin, NULL);
        if (scanf("%d", &informacoes[i].telefone) != 1) return 0;
        getchar();
    }
    for (i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(informacoes[i].nome, informacoes[j].nome) > 0) {
                strcpy(auxNome, informacoes[i].nome);
                strcpy(informacoes[i].nome, informacoes[j].nome);
                strcpy(informacoes[j].nome, auxNome);

                strcpy(auxEndereco, informacoes[i].endereco);
                strcpy(informacoes[i].endereco, informacoes[j].endereco);
                strcpy(informacoes[j].endereco, auxEndereco);

                auxTelefone = informacoes[i].telefone;
                informacoes[i].telefone = informacoes[j].telefone;
                informacoes[j].telefone = auxTelefone;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%s ; %s ; %d\n", informacoes[i].nome, informacoes[i].endereco, informacoes[i].telefone);
    }
    return 0;
}
