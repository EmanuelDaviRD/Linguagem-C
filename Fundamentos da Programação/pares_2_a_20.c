#include <stdio.h>

int main() {
    int i, par[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    for (i = 0; i < 10; i++) {
        printf("%d ", par[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
