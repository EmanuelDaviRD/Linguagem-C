#include "matematica.h"

int soma(int a, int b) {
    return a + b;
}

int subtrai(int a, int b) {
    return a - b;
}

int multiplica(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) return 0.0f;
    return (float)a / b;
}
