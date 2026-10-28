#include <stdio.h>

int main() {
    float notas, media, soma = 0;
    int count = 0;

    printf("DIGITE AS NOTAS DOS ALUNOS:\n");
    printf("-1 PARA ENCERRAR O PROGRAMA\n");
    scanf("%f", &notas);

    while (notas != -1) {
        soma = soma + notas;
        count++;
        scanf("%f", &notas);
    }

    if (count > 0) {
        media = soma / count;
        printf("MEDIA: %.2f\n", media);
    } else {
        printf("NENHUMA NOTA FOI INFORMADA.\n");
    }

    return 0;
}
