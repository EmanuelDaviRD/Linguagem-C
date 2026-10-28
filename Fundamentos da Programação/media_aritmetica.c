#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, n3;
    int inteiroProximo;
    double media;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;
    inteiroProximo = (int)round(media);

    printf("Media: %.2f\n", media);
    printf("Inteiro mais proximo: %d\n", inteiroProximo);

    return 0;
}