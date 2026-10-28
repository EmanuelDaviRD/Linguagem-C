#include <stdio.h>

int main() {
    int i, N, num, povo = 0, patrao = 0, empregado = 0, pobre = 0, nulo = 0;

    printf("DIGITE A QUANTIDADE DE ELEITORES: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("DIGITE O CODIGO DO CANDIDATO:\n");
        scanf("%d", &num);
        switch (num) {
            case 10:
                povo++;
                break;
            case 20:
                patrao++;
                break;
            case 30:
                empregado++;
                break;
            case 5:
                pobre++;
                break;
            default:
                nulo++;
                break;
        }
    }

    printf("\nCANDIDATO DO POVO (10): %d VOTOS\n", povo);
    printf("CANDIDATO DO PATRAO (20): %d VOTOS\n", patrao);
    printf("CANDIDATO DO EMPREGADO (30): %d VOTOS\n", empregado);
    printf("CANDIDATO DO POBRE (05): %d VOTOS\n", pobre);
    printf("VOTOS NULOS: %d VOTOS\n", nulo);

    return 0;
}
