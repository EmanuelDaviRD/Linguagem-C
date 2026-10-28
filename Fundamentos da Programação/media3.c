#include <stdio.h>

double media3(double n1, double n2, double n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {
    double num1, num2, num3;
    if (scanf("%lf%lf%lf", &num1, &num2, &num3) != 3) return 0;
    printf("a media dos numeros digitados e igual a %lf\n", media3(num1, num2, num3));
    return 0;
}
