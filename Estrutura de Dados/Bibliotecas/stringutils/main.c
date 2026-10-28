#include <stdio.h>
#include "stringutils.h"

int main() {
    char texto[100];
    printf("Digite uma string: ");
    if (scanf(" %99[^\n]", texto) != 1) return 0;

    printf("Quantidade de vogais: %d\n", contarVogais(texto));
    inverterString(texto);
    printf("String invertida: %s\n", texto);

    return 0;
}
