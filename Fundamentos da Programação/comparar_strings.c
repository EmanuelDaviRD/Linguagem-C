#include <stdio.h>
#include <string.h>

int main() {
    char v1[100], v2[100];
    printf("String 1: ");
    fgets(v1, sizeof(v1), stdin);
    v1[strcspn(v1, "\n")] = '\0';
    printf("String 2: ");
    fgets(v2, sizeof(v2), stdin);
    v2[strcspn(v2, "\n")] = '\0';
    if (strcmp(v1, v2) == 0) {
        printf("Strings iguais\n");
    } else {
        printf("As strings sao diferentes\n");
    }
    return 0;
}
