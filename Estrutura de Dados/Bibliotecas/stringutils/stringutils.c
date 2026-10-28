#include "stringutils.h"

int contarVogais(char texto[]) {
    int contador = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'a' || texto[i] == 'A' ||
            texto[i] == 'e' || texto[i] == 'E' ||
            texto[i] == 'i' || texto[i] == 'I' ||
            texto[i] == 'o' || texto[i] == 'O' ||
            texto[i] == 'u' || texto[i] == 'U') {
            contador++;
        }
    }
    return contador;
}

void inverterString(char texto[]) {
    int tamanho = 0;
    char temp;
    while (texto[tamanho] != '\0') {
        tamanho++;
    }
    for (int i = 0; i < tamanho / 2; i++) {
        temp = texto[i];
        texto[i] = texto[tamanho - 1 - i];
        texto[tamanho - 1 - i] = temp;
    }
}
