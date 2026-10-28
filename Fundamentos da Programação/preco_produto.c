#include <stdio.h>

int main() {
    int codigo, quantidade;
    double valorT;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo) {
        case 1001:
            valorT = quantidade * 5.32;
            break;
        case 1324:
            valorT = quantidade * 6.45;
            break;
        case 6548:
            valorT = quantidade * 2.37;
            break;
        case 987:
            valorT = quantidade * 5.32;
            break;
        case 7623:
            valorT = quantidade * 6.45;
            break;
        default:
            printf("Produto nao encontrado");
            return 0;
    }

    printf("O valor total e igual a R$ %.2lf", valorT);

    return 0;
}