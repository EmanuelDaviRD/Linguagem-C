#include <stdio.h>

int main() {
    char v1[100];
    int i;
    fgets(v1, sizeof(v1), stdin);
    for (i = 0; v1[i] != '\0' && v1[i] != '\n'; i++) {
        if (v1[i] == '0') {
            v1[i] = '1';
        }
    }
    printf("%s", v1);
    return 0;
}
