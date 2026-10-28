#include <stdio.h>

int main() {
    int N, i, j;
    int dist_topo, dist_esq, dist_baixo, dist_dir;
    int menor, valor;
    while (scanf("%d", &N) && N != 0) {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                dist_topo = i + 1;
                dist_esq = j + 1;
                dist_baixo = N - i;
                dist_dir = N - j;
                menor = dist_topo;
                if (dist_esq < menor) menor = dist_esq;
                if (dist_baixo < menor) menor = dist_baixo;
                if (dist_dir < menor) menor = dist_dir;
                valor = menor;
                if (j == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
