#include <stdio.h>

int tamanho_string(char palavra[]) {
    int i = 0;
    while (palavra[i] != '\0')
        i++;
    if (i > 0 && palavra[i - 1] == '\n')
        i--;
    return i;
}

int main() {
    char palavra[50];
    int tamanho, i;
    fgets(palavra, sizeof(palavra), stdin);
    tamanho = tamanho_string(palavra);
    printf("String Invertida: ");

    for (i = tamanho - 1; i >= 0; i--)
        printf("%c", palavra[i]);
    printf("\n");
    return 0;
}
