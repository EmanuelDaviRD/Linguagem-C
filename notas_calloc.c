#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Digite quantas notas deseja digitar: ");
    if (scanf("%d", &n) != 1) return 0;
    float *v1 = (float *)calloc(n, sizeof(float));
    printf("Digite as notas:\n");
    for (i = 0; i < n; i++)
        if (scanf("%f", &v1[i]) != 1) return 0;
    printf("Notas maiores que 7:\n");
    for (i = 0; i < n; i++) {
        if (v1[i] > 7.0)
            printf("%.2f ", v1[i]);
    }
    printf("\n");
    free(v1);
    return 0;
}
