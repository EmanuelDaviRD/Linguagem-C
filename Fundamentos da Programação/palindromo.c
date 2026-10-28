#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char v1[100], limpo[100];
    int i, j = 0, tamanho, palindromo = 1;
    fgets(v1, sizeof(v1), stdin);
    v1[strcspn(v1, "\n")] = '\0';
    for (i = 0; v1[i] != '\0'; i++) {
        if (v1[i] != ' ') {
            limpo[j++] = tolower(v1[i]);
        }
    }
    limpo[j] = '\0';
    tamanho = strlen(limpo);
    for (i = 0; i < tamanho / 2; i++) {
        if (limpo[i] != limpo[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo) {
        printf("E um palindromo\n");
    } else {
        printf("Nao e um palindromo\n");
    }
    return 0;
}
