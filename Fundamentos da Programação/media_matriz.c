#include <stdio.h>

int main() {
    int i, j, matriz[3][3];
    float media, soma = 0;
    printf("Digite os valores da matriz: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    media = soma / (3 * 3);
    printf("Matriz digitada: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma total: %.0f", soma);
    printf("\nMedia de todos os elementos: %.2f\n", media);
    return 0;
}
