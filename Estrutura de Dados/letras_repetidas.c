#include <stdio.h>
#include <stdlib.h>

void repetidas(char *string) {
    int i, j, repetiu, ja_mostrou;
    for (i = 0; string[i] != '\0'; i++) {
        repetiu = 0;
        ja_mostrou = 0;
        for (j = i + 1; string[j] != '\0'; j++) {
            if (string[i] == string[j]) {
                repetiu = 1;
                break;
            }
        }
        for (j = 0; j < i; j++) {
            if (string[i] == string[j]) {
                ja_mostrou = 1;
                break;
            }
        }
        if (repetiu && !ja_mostrou)
            printf("%c ", string[i]);
    }
    printf("\n");
}

int main() {
    char *string = (char *)malloc(100 * sizeof(char));
    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
    printf("Letras repetidas:\n");
    repetidas(string);
    free(string);
    return 0;
}
