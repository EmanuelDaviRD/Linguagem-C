#include <stdio.h>

int main() {
    int par[5], impar[5];
    int n, i, j;
    int cont_par = 0, cont_impar = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            par[cont_par] = n;
            cont_par++;
            if (cont_par == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                cont_par = 0;
            }
        } else {
            impar[cont_impar] = n;
            cont_impar++;
            if (cont_impar == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                cont_impar = 0;
            }
        }
    }

    for (i = 0; i < cont_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (i = 0; i < cont_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
