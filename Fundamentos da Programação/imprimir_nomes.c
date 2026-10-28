#include <stdio.h>

int main() {
    char nomes[5][20];
    int i;
    for (i = 0; i < 5; i++) {
        fgets(nomes[i], sizeof(nomes[i]), stdin);
    }
    for (i = 0; i < 5; i++) {
        printf("%s", nomes[i]);
    }
    return 0;
}
