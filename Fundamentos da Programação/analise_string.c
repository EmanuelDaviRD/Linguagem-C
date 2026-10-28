#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "C0nCur$0_De_Progr@maÇÃo!";
    int i, letras = 0, digitos = 0, especiais = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            letras++;
        } else if (isdigit((unsigned char)str[i])) {
            digitos++;
        } else {
            especiais++;
        }
    }

    printf("Letras: %d\n", letras);
    printf("Digitos: %d\n", digitos);
    printf("Especiais: %d\n", especiais);

    return 0;
}
