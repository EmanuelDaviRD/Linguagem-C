#include <stdio.h>

int main() {
    float IDC;

    printf("Escreva o indice de poluicao: ");
    scanf("%f", &IDC);

    if (IDC >= 0.5) {
        printf("Todos os grupos devem suspender suas atividades");
    } else if (IDC >= 0.4) {
        printf("Os grupos 1 e 2 devem suspender suas atividades");
    } else if (IDC >= 0.3) {
        printf("O grupo 1 deve suspender suas atividades");
    } else if (IDC >= 0.05) {
        printf("Os indices estao dentro dos padroes");
    } else {
        printf("Os indices estao abaixo dos padroes");
    }

    return 0;
}