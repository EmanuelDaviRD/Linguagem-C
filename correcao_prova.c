#include <stdio.h>
#include <stdlib.h>

void corrigirProva(char *gabaritos, char *cartao) {
    int i, acertos = 0;
    for (i = 0; i < 10; i++) {
        if (gabaritos[i] == cartao[i])
            acertos++;
    }
    printf("\nQuantidade de acertos: %d\n", acertos);
}

int main() {
    int i;
    char *gabaritos = (char *)malloc(10 * sizeof(char));
    char *cartao = (char *)malloc(10 * sizeof(char));
    printf("Digite gabarito:\n");
    for (i = 0; i < 10; i++) {
        printf("Questao %d (A - E): ", i + 1);
        scanf(" %c", &gabaritos[i]);
    }
    printf("\nDigite o cartao resposta:\n");
    for (i = 0; i < 10; i++) {
        printf("Questao %d (A - E): ", i + 1);
        scanf(" %c", &cartao[i]);
    }
    corrigirProva(gabaritos, cartao);
    free(gabaritos);
    free(cartao);
    return 0;
}
