#include <stdio.h>

int main() {
    char nome[40];
    int i;
    for (i = 1; i <= 10; i++) {
        scanf("%s", nome);
        if (i == 3 || i == 7 || i == 9) {
            printf("%s\n", nome);
        }
    }
    return 0;
}
