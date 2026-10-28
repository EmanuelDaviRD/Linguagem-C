#include <stdio.h>

int main() {
    char time1[50], time2[50];
    int gols1, gols2;

    printf("DIGITE O NOME DO TIME 1 E O TOTAL DE GOLS: ");
    scanf("%s%d", time1, &gols1);
    printf("DIGITE O NOME DO TIME 2 E O TOTAL DE GOLS: ");
    scanf("%s%d", time2, &gols2);

    printf("Resultado: ");
    if (gols1 > gols2) {
        printf("%s E VENCEDOR COM %d GOLS\n", time1, gols1);
    } else if (gols2 > gols1) {
        printf("%s E VENCEDOR COM %d GOLS\n", time2, gols2);
    } else {
        printf("EMPATE\n");
    }

    return 0;
}
