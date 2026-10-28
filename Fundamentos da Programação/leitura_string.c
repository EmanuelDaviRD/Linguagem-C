#include <stdio.h>

int main() {
    char v1[100];
    fgets(v1, sizeof(v1), stdin);
    printf("Voce digitou: %s", v1);
    return 0;
}
