#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mais_alta(char **nome, float *altura) {
    int i, pos = 0;
    for (i = 0; i < 10; i++) {
        if (altura[i] > altura[pos])
            pos = i;
    }
    printf("Mais alta: %s - %.2f, posicao %d\n", nome[pos], altura[pos], pos);
}

void mais_baixa(char **nome, float *altura) {
    int i, pos = 0;
    for (i = 0; i < 10; i++) {
        if (altura[i] < altura[pos])
            pos = i;
    }
    printf("Mais baixa: %s - %.2f, posicao %d\n", nome[pos], altura[pos], pos);
}

float media_altura(float *altura) {
    int i;
    float soma = 0;
    for (i = 0; i < 10; i++)
        soma += altura[i];
    return soma / 10;
}

void acima_media(char **nome, float *altura, float media) {
    int i, quantidade = 0;
    printf("Pessoas acima da media:\n");
    for (i = 0; i < 10; i++) {
        if (altura[i] > media) {
            printf("Nome: %s, Altura: %.2f\n", nome[i], altura[i]);
            quantidade++;
        }
    }
    printf("Quantidade de pessoas acima da media: %d\n", quantidade);
}

void abaixo_media(char **nome, float *altura, float media) {
    int i, quantidade = 0;
    printf("Pessoas abaixo da media:\n");
    for (i = 0; i < 10; i++) {
        if (altura[i] < media) {
            printf("Nome: %s, Altura: %.2f\n", nome[i], altura[i]);
            quantidade++;
        }
    }
    printf("Quantidade de pessoas abaixo da media: %d\n", quantidade);
}

int main() {
    int i;
    char **nome = (char **)malloc(10 * sizeof(char *));
    float *altura = (float *)malloc(10 * sizeof(float));
    for (i = 0; i < 10; i++) {
        nome[i] = (char *)malloc(50 * sizeof(char));
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(nome[i], 50, stdin);
        for (int j = 0; nome[i][j] != '\0'; j++) {
            if (nome[i][j] == '\n') {
                nome[i][j] = '\0';
                break;
            }
        }
        printf("Digite a altura de %s: ", nome[i]);
        if (scanf("%f", &altura[i]) != 1) return 0;
        getchar();
    }
    mais_alta(nome, altura);
    mais_baixa(nome, altura);
    float media = media_altura(altura);
    acima_media(nome, altura, media);
    abaixo_media(nome, altura, media);
    for (i = 0; i < 10; i++)
        free(nome[i]);
    free(nome);
    free(altura);
    return 0;
}
