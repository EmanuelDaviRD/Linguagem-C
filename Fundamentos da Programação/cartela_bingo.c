#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define l 5
#define c 5

int main() {
    int matriz[l][c];
    int i, j;
    srand(time(NULL));
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            matriz[i][j] = rand() % 100;
        }
    }
    printf("Cartela de Bingo:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
