#include <stdio.h>

int main() {
    char O;
    float M[12][12];
    int i, j;
    float soma = 0.0;
    int contador = 0;
    scanf(" %c", &O);
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }
    for (i = 0; i < 12; i++) {
        for (j = i + 1; j < 12; j++) {
            soma += M[i][j];
            contador++;
        }
    }
    if (O == 'S') {
        printf("%.1f\n", soma);
    } else if (O == 'M') {
        printf("%.1f\n", soma / contador);
    }
    return 0;
}
