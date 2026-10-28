#include <stdio.h>

int main() {
    char letras[5][5];
    int i, j, magico = 1;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf(" %c", &letras[i][j]);
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (letras[i][j] != letras[j][i]) {
                magico = 0;
                break;
            }
        }
        if (magico == 0) {
            break;
        }
    }
    if (magico == 1) {
        printf("E um quadrado magico de letras\n");
    } else {
        printf("Nao e um quadrado magico de letras\n");
    }
    return 0;
}
