#include <stdio.h>

void inverteString(char vetor[]) {
    int inicio = 0, fim = 0;
    char aux;
    while (vetor[fim] != '\0' && vetor[fim] != '\n') {
        fim++;
    }
    fim--;
    while (inicio < fim) {
        aux = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = aux;
        inicio++;
        fim--;
    }
}

int main() {
    char vetor[100];
    fgets(vetor, sizeof(vetor), stdin);
    inverteString(vetor);
    printf("%s", vetor);
    return 0;
}
