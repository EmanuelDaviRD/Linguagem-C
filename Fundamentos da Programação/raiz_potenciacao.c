#include <stdio.h>
#include <math.h>

int main() {
    int num, expo;
    double raiz, potencia;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Numero invalido para raiz real.\n");
        return 1;
    }

    raiz = sqrt(num);

    printf("Digite a potencia desejada: ");
    scanf("%d", &expo);

    potencia = pow(num, expo);

    printf("Raiz quadrada: %.4lf\n", raiz);
    printf("Potenciacao: %.4lf\n", potencia);

    return 0;
}