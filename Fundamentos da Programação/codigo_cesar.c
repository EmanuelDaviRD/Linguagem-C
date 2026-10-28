#include <stdio.h>
#include <string.h>

int main() {
    char v1[100];
    int i, tamanho;
    fgets(v1, sizeof(v1), stdin);
    v1[strcspn(v1, "\n")] = '\0';
    tamanho = strlen(v1);
    for (i = 0; i < tamanho; i++) {
        if (v1[i] >= 'A' && v1[i] <= 'Z') {
            printf("%c", (v1[i] - 'A' + 3) % 26 + 'A');
        } else if (v1[i] >= 'a' && v1[i] <= 'z') {
            printf("%c", (v1[i] - 'a' + 3) % 26 + 'a');
        } else {
            printf("%c", v1[i]);
        }
    }
    printf("\n");
    return 0;
}
