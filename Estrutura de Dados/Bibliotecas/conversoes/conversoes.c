#include "conversoes.h"

float celsiusParaFahrenheit(float c) {
    return c * 1.8f + 32.0f;
}

float fahrenheitParaCelsius(float f) {
    return 5.0f * (f - 32.0f) / 9.0f;
}
