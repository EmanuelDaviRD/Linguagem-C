#include <stdio.h>

int main() {
    char nomes[5][30];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%s", nomes[i]);
    }
    printf("\nNomes que comecam com 'A':\n");
    for (i = 0; i < 5; i++) {
        if (nomes[i][0] == 'A' || nomes[i][0] == 'a') {
            printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
