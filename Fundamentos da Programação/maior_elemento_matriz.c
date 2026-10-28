#include <stdio.h>

int main() {
    int c, l, maior, linhamaior = 0, colunamaior = 0;
    int matriz[4][4];
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("Maatriz[%d][%d] = ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
    maior = matriz[0][0];
    for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            printf("%d ", matriz[l][c]);
            if (matriz[l][c] > maior) {
                maior = matriz[l][c];
                linhamaior = l;
                colunamaior = c;
            }
        }
        printf("\n");
    }
    printf("\nMaior valor: %d", maior);
    printf("\nLocalizacao: Linha %d, Coluna %d\n", linhamaior, colunamaior);
    return 0;
}
