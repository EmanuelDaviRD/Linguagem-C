#include <stdio.h>

int main() {
    int placa, ultimo;

    scanf("%d", &placa);

    ultimo = placa % 10;

    switch (ultimo) {
        case 1:
            printf("Renovacao em Janeiro");
            break;
        case 2:
            printf("Renovacao em Fevereiro");
            break;
        case 3:
            printf("Renovacao em Marco");
            break;
        case 4:
            printf("Renovacao em Abril");
            break;
        case 5:
            printf("Renovacao em Maio");
            break;
        case 6:
            printf("Renovacao em Junho");
            break;
        case 7:
            printf("Renovacao em Julho");
            break;
        case 8:
            printf("Renovacao em Agosto");
            break;
        case 9:
            printf("Renovacao em Setembro");
            break;
        case 0:
            printf("Renovacao em Outubro");
            break;
    }

    return 0;
}