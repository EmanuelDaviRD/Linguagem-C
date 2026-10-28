#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, valor, v1[10], encontrado = -1;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        v1[i] = rand() % 20 + 1;
    }

    printf("Digite um numero para pesquisar: ");
    scanf("%d", &valor);

    for (i = 0; i < 10; i++) {
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
