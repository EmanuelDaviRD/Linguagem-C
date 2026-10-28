#include <stdio.h>

int main() {
    int v1[10], i;
    int maior, menor;
    float soma = 0.0, media;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v1[i]);

        if (i == 0) {
            maior = v1[i];
            menor = v1[i];
        } else {
            if (v1[i] > maior) {
                maior = v1[i];
            }
            if (v1[i] < menor) {
                menor = v1[i];
            }
        }
        soma += v1[i];
    }

    media = soma / 10;

    printf("\n--- Resultados ---");
    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    printf("\nMedia: %.1f\n", media);

    return 0;
}
