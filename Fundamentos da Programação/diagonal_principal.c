#include <stdio.h>

int main() {
    int l, c, matriz[5][5];
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            if (l == c) {
                matriz[l][c] = 1;
            } else {
                matriz[l][c] = 0;
            }
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    return 0;
}
