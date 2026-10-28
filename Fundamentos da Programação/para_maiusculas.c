#include <stdio.h>

int main() {
    char v1[100];
    int i;
    fgets(v1, sizeof(v1), stdin);
    for (i = 0; v1[i] != '\0' && v1[i] != '\n'; i++) {
        if (v1[i] >= 97 && v1[i] <= 122) {
            printf("%c", v1[i] - 32);
        } else {
            printf("%c", v1[i]);
        }
    }
    printf("\n");
    return 0;
}
