#include <stdio.h>
#define tam 10

int main() {
    char matriz[tam][tam];
    int i, j;
    int encontrado = 0;
    printf("Preencha a matriz (10x10) com letras:\n");
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            scanf(" %c", &matriz[i][j]);
        }
    }
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if (matriz[i][j] == 'C' || matriz[i][j] == 'c') {
                printf("\nPalavra 'C' encontrada. Posicao %dx%d.\n", i, j);
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 1) {
            break;
        }
    }
    if (encontrado == 0) {
        printf("\nPalavra 'C' nao encontrada.\n");
    }
    return 0;
}
