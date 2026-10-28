#include <stdio.h>

int main() {
    int i, valor, v1[5], encontrado = -1;

    printf("Digite 5 numeros: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite um numero para pesquisar: ");
    scanf("%d", &valor);

    for (i = 0; i < 5; i++) {
        if (v1[i] == valor) {
            encontrado = i + 1;
            break;
        }
    }

    if (encontrado > 0) {
        printf("Numero %d encontrado na posicao %d\n", valor, encontrado);
    } else {
        printf("O numero %d nao existe no vetor\n", valor);
    }

    return 0;
}
