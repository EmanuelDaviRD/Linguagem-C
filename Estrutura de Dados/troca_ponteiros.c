#include <stdio.h>

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float a, b;
    if (scanf("%f%f", &a, &b) != 2) return 0;
    troca(&a, &b);
    printf("Valores depois da troca: %.2f %.2f\n", a, b);
    return 0;
}
