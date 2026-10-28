#include <stdio.h>

int main() {
    double A, B, maior, menor, diferenca;

    scanf("%lf %lf", &A, &B);

    if (A > B) {
        maior = A;
        menor = B;
    } else {
        maior = B;
        menor = A;
    }

    diferenca = maior - menor;

    printf("A diferenca entre %.2lf e %.2lf e = %.2lf",
           maior, menor, diferenca);

    return 0;
}