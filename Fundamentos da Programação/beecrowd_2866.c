#include <stdio.h>
#include <string.h>

int main() {
    int C, i, tam;
    char mensagem[1001];
    if (scanf("%d", &C) != 1) return 0;
    while (C--) {
        scanf("%s", mensagem);
        tam = strlen(mensagem);
        for (i = tam - 1; i >= 0; i--) {
            if (mensagem[i] >= 'a' && mensagem[i] <= 'z') {
                printf("%c", mensagem[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
