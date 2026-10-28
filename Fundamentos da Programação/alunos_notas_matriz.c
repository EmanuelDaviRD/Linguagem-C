#include <stdio.h>
#define l 5
#define c 4

int main() {
    int matriz[l][c];
    int i, j, maiornota = -1, somatotalnotas = 0, matriculamaior = 0;
    float mediaturma = 0.0;

    for (i = 0; i < l; i++) {
        printf("Aluno %d - ", i + 1);
        for (j = 0; j < c; j++) {
            if (j == 0) {
                printf("Matricula: ");
                scanf("%d", &matriz[i][j]);
            } else if (j == 1) {
                printf(" | Provas: ");
                scanf("%d", &matriz[i][j]);
            } else if (j == 2) {
                printf(" | Trabalhos: ");
                scanf("%d", &matriz[i][j]);
            } else if (j == 3) {
                matriz[i][j] = (matriz[i][1] + matriz[i][2]);
                somatotalnotas += matriz[i][j];

                if (matriz[i][j] > maiornota) {
                    maiornota = matriz[i][j];
                    matriculamaior = matriz[i][0];
                }
            }
        }
    }

    mediaturma = ((float)somatotalnotas / (l * 2.0));

    printf("Aluno com maior nota final: %d\n", matriculamaior);
    printf("Media das notas finais: %.2f\n", mediaturma);

    return 0;
}
