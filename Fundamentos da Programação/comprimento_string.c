#include <stdio.h>

int main() {
    int i = 0, comprimento = 0;
    char v1[100];
    fgets(v1, sizeof(v1), stdin);
    while (v1[i] != '\0' && v1[i] != '\n') {
        comprimento++;
        i++;
    }
    printf("%d\n", comprimento);
    return 0;
}
