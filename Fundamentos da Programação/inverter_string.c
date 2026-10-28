#include <stdio.h>
#include <string.h>

int main() {
    char v1[100];
    int i, tamanho;
    fgets(v1, sizeof(v1), stdin);
    v1[strcspn(v1, "\n")] = '\0';
    tamanho = strlen(v1);
    printf("Invertido: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", v1[i]);
    }
    printf("\n");
    return 0;
}
