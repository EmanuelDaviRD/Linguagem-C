#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    double resultado;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d %d %d\n", A, B, C);

    if (A > 0) {
        resultado = sqrt(A);
        printf("A raiz quadrada de %d e %.2lf\n",
               A, resultado);
    } else {
        resultado = pow(A, 2);
        printf("O quadrado de %d e %.2lf\n",
               A, resultado);
    }

    if (B > 10 && B < 100) {
        printf("Numero esta entre 10 e 100 - intervalo permitido\n");
    } else {
        printf("Intervalo nao permitido\n");
    }

    if (C < B) {
        resultado = B - C;
        printf("A diferenca entre %d e %d e %.0lf\n",
               B, C, resultado);
    } else {
        printf("%d + 1 = %d\n", C, C + 1);
    }

    return 0;
}