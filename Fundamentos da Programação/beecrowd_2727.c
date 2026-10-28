#include <stdio.h>

int main() {
    int n, i, j;
    char linha[100];
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf(" %[^\n]", linha);
            int p = 0;
            int s = 1;
            for (j = 0; linha[j] != ' ' && linha[j] != '\0'; j++) {
                p++;
            }
            for (j = 0; linha[j] != '\0'; j++) {
                if (linha[j] == ' ') {
                    s++;
                }
            }
            char letra_decifrada = 'a' + (s - 1) * 3 + p - 1;
            printf("%c\n", letra_decifrada);
        }
    }
    return 0;
}
