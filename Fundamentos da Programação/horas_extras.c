#include <stdio.h>

int main() {
    float horas_trabalhadas, salario_hora, salario_total, maior_horas = -1;
    float horas_regulares_mes = 40 * 4;
    int i, func_maior_horas;

    for (i = 1; i <= 10; i++) {
        printf("Funcionario %d - Horas trabalhadas no mes: ", i);
        scanf("%f", &horas_trabalhadas);
        printf("Funcionario %d - Salario por hora: ", i);
        scanf("%f", &salario_hora);

        if (horas_trabalhadas > horas_regulares_mes) {
            float horas_extras = horas_trabalhadas - horas_regulares_mes;
            float valor_hora_extra = salario_hora * 1.5;
            salario_total = (horas_regulares_mes * salario_hora) + (horas_extras * valor_hora_extra);
        } else {
            salario_total = horas_trabalhadas * salario_hora;
        }

        if (horas_trabalhadas > maior_horas) {
            maior_horas = horas_trabalhadas;
            func_maior_horas = i;
        }

        printf("Salario Total: R$ %.2f\n\n", salario_total);
    }

    printf("Maior numero de horas trabalhadas: %.2f (Funcionario %d)\n", maior_horas, func_maior_horas);

    return 0;
}
