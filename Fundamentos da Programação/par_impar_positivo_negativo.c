#include <stdio.h>

int main() {
    int A;

    scanf("%d", &A);

    if (A % 2 == 0) {
        printf("%d e par ", A);
    } else {
        printf("%d e impar ", A);
    }

    if (A > 0) {
        printf("e positivo");
    } else if (A < 0) {
        printf("e negativo");
    } else {
        printf("e zero");
    }

    return 0;
}