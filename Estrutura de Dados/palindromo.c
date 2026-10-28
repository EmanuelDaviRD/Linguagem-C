#include <stdio.h>
#include <stdlib.h>

void palindromo(char *string) {
    int i, tamanho = 0;
    while (string[tamanho] != '\0' && string[tamanho] != '\n')
        tamanho++;
    for (i = 0; i < tamanho / 2; i++) {
        if (string[i] != string[tamanho - 1 - i]) {
            printf("Nao e um palindromo.\n");
            return;
        }
    }
    printf("E um palindromo\n");
}

int main() {
    char *string1 = (char *)malloc(100 * sizeof(char));
    char *string2 = (char *)malloc(100 * sizeof(char));
    printf("Digite a primeira string: ");
    fgets(string1, 100, stdin);
    printf("\nDigite a segunda string: ");
    fgets(string2, 100, stdin);
    printf("\nPrimeira string: ");
    palindromo(string1);
    printf("\nSegunda string: ");
    palindromo(string2);
    free(string1);
    free(string2);
    return 0;
}
