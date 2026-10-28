#include <stdio.h>
#include <string.h>

int main() {
    char *a, *b;
    a = "abacate";
    b = "uva";
    if (strcmp(a, b) < 0) {
        printf("%s vem antes de %s no dicionario\n", a, b);
    } else {
        printf("%s vem depois de %s no dicionario\n", a, b);
    }
    return 0;
}
