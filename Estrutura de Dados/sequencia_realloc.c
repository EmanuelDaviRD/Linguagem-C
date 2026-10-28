#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i = 0;
    int *v1 = (int *)malloc(sizeof(int));
    while (1) {
        printf("Digite um valor (-1 para sair): ");
        if (scanf("%d", &n) != 1) return 0;
        if (n == -1)
            break;
        v1[i] = n;
        i++;
        v1 = (int *)realloc(v1, (i + 1) * sizeof(int));
    }
    printf("\nValores digitados:\n");
    for (int j = 0; j < i; j++)
        printf("%d ", v1[j]);
    printf("\n");
    free(v1);
    return 0;
}
