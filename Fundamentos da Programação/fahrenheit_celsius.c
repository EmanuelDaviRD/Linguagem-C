#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    scanf("%lf", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("%.0lf Fahrenheit em Celsius e igual a %.2lf",
           fahrenheit, celsius);

    return 0;
}