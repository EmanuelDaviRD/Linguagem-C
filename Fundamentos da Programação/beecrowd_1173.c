#include <stdio.h>

int main() {
    int N[10];
    int v, i;

    if (scanf("%d", &v) != 1) return 0;

    N[0] = v;
    for (i = 1; i < 10; i++) {
        N[i] = N[i - 1] * 2;
    }

    for (i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
