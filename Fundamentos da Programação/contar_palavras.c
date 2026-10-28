#include <stdio.h>
#include <string.h>

int main() {
    char v1[200];
    int i, palavras = 0, dentro = 0;
    fgets(v1, sizeof(v1), stdin);
    v1[strcspn(v1, "\n")] = '\0';
    for (i = 0; v1[i] != '\0'; i++) {
        if (v1[i] != ' ' && !dentro) {
            dentro = 1;
            palavras++;
        } else if (v1[i] == ' ') {
            dentro = 0;
        }
    }
    printf("A string contem %d palavras.\n", palavras);
    return 0;
}
