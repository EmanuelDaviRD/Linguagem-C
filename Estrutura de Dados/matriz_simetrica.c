#include <stdio.h>

int main() {
    int i, j, simetrico = 1;
    int v1[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (scanf("%d", &v1[i][j]) != 1) return 0;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (v1[i][j] != v1[j][i]) {
                simetrico = 0;
            }
        }
    }

    if (simetrico)
        printf("Matriz Simetrica\n");
    else
        printf("Matriz nao Simetrica\n");
    return 0;
}
