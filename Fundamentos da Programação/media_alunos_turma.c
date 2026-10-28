#include <stdio.h>

int main() {
    float n1, n2, n3, media_aluno;
    float soma_media_turma = 0.0;
    float media_geral;
    int i;

    for (i = 1; i <= 50; i++) {
        printf("\nALUNO %d\n", i);
        printf("DIGITE AS 3 NOTAS: ");
        scanf("%f%f%f", &n1, &n2, &n3);

        media_aluno = (n1 + n2 + n3) / 3.0;
        soma_media_turma += media_aluno;

        printf("MEDIA FINAL: %.2f | SITUACAO: ", media_aluno);
        if (media_aluno >= 7.0) {
            printf("APROVADO\n");
        } else if (media_aluno >= 4.0) {
            printf("NAF\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    media_geral = soma_media_turma / 50.0;
    printf("\nMEDIA GERAL DA TURMA: %.2f\n", media_geral);

    return 0;
}
