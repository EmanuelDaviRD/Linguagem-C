#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char v1[100];
    int i, caracteres = 0, vogais = 0, consoantes = 0;
    char c;
    fgets(v1, sizeof(v1), stdin);
    v1[strcspn(v1, "\n")] = '\0';
    for (i = 0; v1[i] != '\0'; i++) {
        caracteres++;
        c = tolower(v1[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        } else if (c >= 'a' && c <= 'z') {
            consoantes++;
        }
    }
    printf("Numero de caracteres: %d\n", caracteres);
    printf("Numero de vogais: %d\n", vogais);
    printf("Numero de consoantes: %d\n", consoantes);
    return 0;
}
