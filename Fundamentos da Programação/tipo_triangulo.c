#include <stdio.h>

int main() {
    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    if (A > 0 && B > 0 && C > 0 &&
        A < B + C && B < A + C && C < A + B) {

        if (A == B && B == C) {
            printf("Equilatero");
        } else if (A == B || A == C || B == C) {
            printf("Isosceles");
        } else {
            printf("Escaleno");
        }

    } else {
        printf("Nao e um triangulo");
    }

    return 0;
}