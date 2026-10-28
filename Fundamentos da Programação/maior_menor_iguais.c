#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    if (A > B) {
        printf("A e maior que B");
    } else if (A < B) {
        printf("B e maior que A");
    } else {
        printf("A=B");
    }

    return 0;
}