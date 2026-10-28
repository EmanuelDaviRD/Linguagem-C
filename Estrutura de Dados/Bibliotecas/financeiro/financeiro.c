#include <math.h>
#include "financeiro.h"

float calcularJurosSimples(float capital, float taxa, float tempo) {
    return capital * (taxa / 100.0f) * tempo;
}

float calcularJurosCompostos(float capital, float taxa, float tempo) {
    float montante = capital * powf(1.0f + (taxa / 100.0f), tempo);
    return montante - capital;
}
