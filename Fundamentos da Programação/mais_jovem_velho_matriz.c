#include <stdio.h>
#define l 10
#define c 50

int main() {
    char nomes[l][c];
    int idade[10];
    int i, maior, menor, imaior, imenor;
    for (i = 0; i < 10; i++) {
        printf("Digite o nome da %d pessoa: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a idade de %s: ", nomes[i]);
        scanf("%d", &idade[i]);
        if (idade[i] < 0)
            break;
        if (i == 0) {
            maior = idade[i];
            menor = idade[i];
            imaior = i;
            imenor = i;
        }
        if (idade[i] > maior) {
            maior = idade[i];
            imaior = i;
        } else if (idade[i] < menor) {
            menor = idade[i];
            imenor = i;
        }
    }
    printf("--- Pessoa mais jovem ---\n");
    printf("Nome: %s | Idade: %d\n", nomes[imenor], menor);
    printf("--- Pessoa mais velha ---\n");
    printf("Nome: %s | Idade: %d\n", nomes[imaior], maior);
    return 0;
}
