#include <stdio.h>

double maior(double n1, double n2) {
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int main() {
    double num1, num2;
    if (scanf("%lf%lf", &num1, &num2) != 2) return 0;
    printf("o maior numero e %.2lf\n", maior(num1, num2));
    return 0;
}
