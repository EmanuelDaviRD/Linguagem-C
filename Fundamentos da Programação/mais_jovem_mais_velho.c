#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], nomeJovem[100], nomeVelho[100];
    int idade, idadeJovem = 999, idadeVelho = -1;

    while (1) {
        scanf("%d", &idade);
        if (idade < 0) break;
        scanf("%s", nome);

        if (idade < idadeJovem) {
            idadeJovem = idade;
            strcpy(nomeJovem, nome);
        }
        if (idade > idadeVelho) {
            idadeVelho = idade;
            strcpy(nomeVelho, nome);
        }
    }

    printf("Pessoa mais jovem: %s (%d anos)\n", nomeJovem, idadeJovem);
    printf("Pessoa mais velha: %s (%d anos)\n", nomeVelho, idadeVelho);

    return 0;
}
