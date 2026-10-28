#include <stdio.h>
#include <stdlib.h>

void inverter(char *nome) {
    int i = 0;
    while (nome[i] != '\0')
        i++;
    for (i = i - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    printf("\n");
}

int main() {
    char *nome = (char *)malloc(100 * sizeof(char));
    printf("Digite uma string:\n");
    fgets(nome, 100, stdin);
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
    }
    inverter(nome);
    free(nome);
    return 0;
}
