#include <stdio.h>
#include "conversoes.h"

int main() {
    float c, f;
    printf("Digite uma temperatura em Celsius: ");
    if (scanf("%f", &c) != 1) return 0;
    printf("Digite uma temperatura em Fahrenheit: ");
    if (scanf("%f", &f) != 1) return 0;

    printf("%.2f Celsius = %.2f Fahrenheit\n", c, celsiusParaFahrenheit(c));
    printf("%.2f Fahrenheit = %.2f Celsius\n", f, fahrenheitParaCelsius(f));

    return 0;
}
