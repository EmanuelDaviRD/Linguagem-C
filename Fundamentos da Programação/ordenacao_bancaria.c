#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    int idade;
    float saldo;
} Pessoa;

int main() {
    Pessoa pessoas[5];
    int i, j;

    int auxId;
    char auxNome[50];
    int auxIdade;
    float auxSaldo;

    for (i = 0; i < 5; i++) {
        if (scanf("%d", &pessoas[i].id) != 1) return 0;
        getchar();

        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        if (scanf("%d", &pessoas[i].idade) != 1) return 0;

        if (scanf("%f", &pessoas[i].saldo) != 1) return 0;
        getchar();
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            int deveTrocar = 0;

            if (pessoas[i].idade > pessoas[j].idade) {
                deveTrocar = 1;
            } else if (pessoas[i].idade == pessoas[j].idade) {
                if (pessoas[i].saldo > pessoas[j].saldo) {
                    deveTrocar = 1;
                }
            }

            if (deveTrocar) {
                auxId = pessoas[i].id;
                pessoas[i].id = pessoas[j].id;
                pessoas[j].id = auxId;

                strcpy(auxNome, pessoas[i].nome);
                strcpy(pessoas[i].nome, pessoas[j].nome);
                strcpy(pessoas[j].nome, auxNome);

                auxIdade = pessoas[i].idade;
                pessoas[i].idade = pessoas[j].idade;
                pessoas[j].idade = auxIdade;

                auxSaldo = pessoas[i].saldo;
                pessoas[i].saldo = pessoas[j].saldo;
                pessoas[j].saldo = auxSaldo;
            }
        }
    }

    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("%d ; %s ; %d ; %.2f\n", pessoas[i].id, pessoas[i].nome, pessoas[i].idade, pessoas[i].saldo);
    }

    return 0;
}
