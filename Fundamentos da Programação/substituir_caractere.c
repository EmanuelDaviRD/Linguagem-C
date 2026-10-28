#include <stdio.h>
#include <string.h>

int main() {
    char v1[100], de, por;
    int i;
    fgets(v1, sizeof(v1), stdin);
    v1[strcspn(v1, "\n")] = '\0';
    scanf(" %c", &de);
    scanf(" %c", &por);
    for (i = 0; v1[i] != '\0'; i++) {
        if (v1[i] == de) {
            v1[i] = por;
        }
    }
    printf("%s\n", v1);
    return 0;
}
