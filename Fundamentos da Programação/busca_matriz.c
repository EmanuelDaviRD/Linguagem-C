#include <stdio.h>
#define l 5
#define c 5

int main() {
    int matriz[l][c];
    int i, j, valor, econtrado = 0;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("Matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Qual valor deseja encontrar? ");
    scanf("%d", &valor);
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (matriz[i][j] == valor) {
                printf("Valor %d encontrado na linha %d e na coluna %d\n", valor, i, j);
                econtrado = 1;
            }
        }
    }
    if (econtrado != 1) {
        printf("Valor nao encontrado.\n");
    }
    return 0;
}
