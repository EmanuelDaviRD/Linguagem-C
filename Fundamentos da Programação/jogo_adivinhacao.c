#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite, tentativas = 10;

    srand(time(NULL));
    numero_secreto = rand() % 101;

    printf("Tente adivinhar o numero entre 0 e 100.\n");
    printf("Voce tem 10 tentativas!\n");

    while (tentativas > 0) {
        printf("\nTentativas restantes: %d\n", tentativas);
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite == numero_secreto) {
            printf("PARABENS! Voce acertou o numero %d!\n", numero_secreto);
            return 0;
        } else if (palpite < numero_secreto) {
            printf("O numero secreto e MAIOR que %d.\n", palpite);
        } else {
            printf("O numero secreto e MENOR que %d.\n", palpite);
        }
        tentativas--;
    }

    printf("\nGAME OVER! Suas tentativas acabaram.\n");
    printf("O numero secreto era: %d\n", numero_secreto);

    return 0;
}
