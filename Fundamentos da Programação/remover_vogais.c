#include <stdio.h>
#include <ctype.h>

int main() {
    char v1[100];
    int i;
    fgets(v1, sizeof(v1), stdin);
    for (i = 0; v1[i] != '\0' && v1[i] != '\n'; i++) {
        char c = tolower(v1[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", toupper(v1[i]));
        }
    }
    printf("\n");
    return 0;
}
