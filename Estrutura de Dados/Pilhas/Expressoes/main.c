#include <stdio.h>
#include <string.h>
#include "PILHA.H"

int main() {
    char expressao[100];

    printf("Digite a expressão matemática: ");
    fgets(expressao, sizeof(expressao), stdin);
    expressao[strcspn(expressao, "\n")] = '\0';

    if (verificar_parenteses(expressao)) {
        printf("Saída: Expressão válida!\n");
    } else {
        printf("Saída: Parênteses incorretos!\n");
    }

    return 0;
}